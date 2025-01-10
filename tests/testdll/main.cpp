#include <iostream>
#include <trilogysamp-sdk/sdk.hpp>

class TestPlugin : public IPlugin,
                   public INetworkEventHandler,
                   ICoreEventHandler {
 private:
  ICore* core;

 public:
  void OnLoad(ICore* c) override {
    core = c;

    auto& network = core->GetNetwork();
    auto& chat = core->GetChat();
    auto& network_dispatcher = network.GetEventDispatcher();
    network_dispatcher.AddEventHandler(this);

    auto& core_dispatcher = core->GetEventDispatcher();
    core_dispatcher.AddEventHandler(this);

    // auto rakclient = network.GetRakClientInterface();
  }

  void OnUnload() override {
    auto network_dispatcher = core->GetNetwork().GetEventDispatcher();
    network_dispatcher.RemoveEventHandler(this);

    auto core_dispatcher = core->GetEventDispatcher();
    core_dispatcher.RemoveEventHandler(this);
  }

  PluginInfo& GetPluginInfo() override {
    static PluginInfo info;
    info.name = "TestPlugin";
    info.author = "Egor";
    info.version = "1.0.0";
    return info;
  }

  void OnTick() override {}

  void OnInitialize() override {
    auto& dialog = core->GetDialog();
    dialog.Show(0, DIALOG_TYPE_LIST, "Test", "Ok", "Cancel", "Test");

    static PlayerInfo player_info{};
    core->GetNetwork().GetPlayerPool().Create(player_info);

    for (auto& player : core->GetNetwork().GetPlayerPool().GetAll()) {
      std::cout << player.GetName() << std::endl;
    }
  }

  bool OnSendPacket(const std::string& packet) override { return true; }

  bool OnReceivePacket(const std::string& packet) override { return true; }

  bool OnSendRPC(const std::string& rpc) override { return true; }

  bool OnReceiveRPC(const std::string& rpc) override { return true; }
};

SET_PlUGIN_ENTRY_POINT(TestPlugin)