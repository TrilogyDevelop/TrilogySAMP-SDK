#include <tsamp-sdk/sdk.hpp>

class TestPlugin : public IPlugin {
 private:
  ICore* core;

 public:
  void OnLoad(ICore* c) override {
    core = c;
    const auto& network = core->GetNetwork();
    const auto& chat = core->GetChat();
    const auto& dialog = core->GetDialog();
    // dialog.Show(0, 0, "Test", "Ok", "Cancel", "Test");
    // auto rakclient = network.GetRakClientInterface();
  }

  void OnUnload() override {}

  PluginInfo& GetPluginInfo() override {
    static PluginInfo info;
    info.name = "TestPlugin";
    info.author = "Egor";
    info.version = "1.0.0";
    return info;
  }
};

SET_PlUGIN_ENTRY_POINT(TestPlugin)