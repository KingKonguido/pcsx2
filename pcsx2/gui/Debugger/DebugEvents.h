#pragma once
#include <wx/wx.h>

DECLARE_LOCAL_EVENT_TYPE( debEVT_SETSTATUSBARTEXT, wxNewEventType() )
DECLARE_LOCAL_EVENT_TYPE( debEVT_UPDATELAYOUT, wxNewEventType() )
DECLARE_LOCAL_EVENT_TYPE( debEVT_GOTOINMEMORYVIEW, wxNewEventType() )
DECLARE_LOCAL_EVENT_TYPE( debEVT_GOTOINDISASM, wxNewEventType() )
DECLARE_LOCAL_EVENT_TYPE( debEVT_RUNTOPOS, wxNewEventType() )
DECLARE_LOCAL_EVENT_TYPE( debEVT_MAPLOADED, wxNewEventType() )