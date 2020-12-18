/***************************************************************
 * Name:      Motel_managementApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Santiago Castelblanco (santiagoestebancastelblanco@gmai.com)
 * Created:   2020-12-18
 * Copyright: Santiago Castelblanco ()
 * License:
 **************************************************************/

#include "Motel_managementApp.h"

//(*AppHeaders
#include "Motel_managementMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(Motel_managementApp);

bool Motel_managementApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	Motel_managementFrame* Frame = new Motel_managementFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
