#include <trilogysamp-sdk/sdk.hpp>

class TestPlugin : public IPlugin, public NetworkEventHandler {
 private:
  ICore* core;

 public:
  void OnLoad(ICore* c) override {
    core = c;

    auto& network = core->GetNetwork();
    auto& chat = core->GetChat();
    auto& dialog = core->GetDialog();
    auto& dispatcher = network.GetEventDispatcher();
    dispatcher.AddEventHandler(this);

    dialog.Show(0, DIALOG_TYPE_LIST, "Test", "Ok", "Cancel", "Test");

    // auto rakclient = network.GetRakClientInterface();
  }

  void OnUnload() override {
    auto dispatcher = core->GetNetwork().GetEventDispatcher();
    dispatcher.RemoveEventHandler(this);
  }

  PluginInfo& GetPluginInfo() override {
    static PluginInfo info;
    info.name = "TestPlugin";
    info.author = "Egor";
    info.version = "1.0.0";
    return info;
  }

  void OnTick() override {}

  void OnInitialize() override {}

  bool OnSendPacket(const std::string& packet) override { return true; }

  bool OnReceivePacket(const std::string& packet) override { return true; }

  bool OnSendRPC(const std::string& rpc) override { return true; }

  bool OnReceiveRPC(const std::string& rpc) override { return true; }
};

SET_PlUGIN_ENTRY_POINT(TestPlugin)