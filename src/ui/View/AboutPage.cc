#include <ui/View/AboutPage.h>

EVENTO_UI_START

AboutPage::AboutPage(slint::ComponentHandle<UiEntryName> uiEntry)
    : GlobalAgent(uiEntry) {}

void AboutPage::onCreate() {
    auto& self = *this;
}

EVENTO_UI_END