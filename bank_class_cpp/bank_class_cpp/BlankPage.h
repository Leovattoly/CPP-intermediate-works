﻿#pragma once

#include "BlankPage.g.h"

namespace winrt::bankclasscpp::implementation
{
    struct BlankPage : BlankPageT<BlankPage>
    {
        BlankPage();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::bankclasscpp::factory_implementation
{
    struct BlankPage : BlankPageT<BlankPage, implementation::BlankPage>
    {
    };
}
