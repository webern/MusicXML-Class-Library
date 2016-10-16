// MusicXML Class Library v0.3.0
// Copyright (c) 2015 - 2016 by Matthew James Briggs

#pragma once

#include "mx/api/PageTextData.h"

namespace mx
{
    namespace core
    {
        class ScoreHeaderGroup;
    }

    namespace impl
    {
        void createPageTextItems( const std::vector<api::PageTextData>& inPageTextItems, core::ScoreHeaderGroup& outHeader );
        void createPageTextItems( const core::ScoreHeaderGroup& inHeader, std::vector<api::PageTextData>& outPageTextItems );
    }
}