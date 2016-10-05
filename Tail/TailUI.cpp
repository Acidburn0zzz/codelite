//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: TailUI.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "TailUI.h"


// Declare the bitmap loading function
extern void wxCB60EInitBitmapResources();

static bool bBitmapLoaded = false;


TailPanelBase::TailPanelBase(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style)
    : wxPanel(parent, id, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCB60EInitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* boxSizer2 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer2);
    
    m_auibar6 = new wxAuiToolBar(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1,-1)), wxAUI_TB_PLAIN_BACKGROUND|wxAUI_TB_DEFAULT_STYLE);
    m_auibar6->SetToolBitmapSize(wxSize(16,16));
    
    boxSizer2->Add(m_auibar6, 0, wxEXPAND, WXC_FROM_DIP(5));
    
    m_auibar6->AddTool(ID_TAIL_OPEN, _("Open file"), wxXmlResource::Get()->LoadBitmap(wxT("16-folder")), wxNullBitmap, wxITEM_NORMAL, _("Open file"), wxT(""), NULL);
    
    m_auibar6->AddTool(ID_TAIL_PAUSE, _("Pause"), wxXmlResource::Get()->LoadBitmap(wxT("16-interrupt")), wxNullBitmap, wxITEM_NORMAL, _("Pause"), wxT(""), NULL);
    
    m_auibar6->AddTool(ID_TAIL_PLAY, _("Play"), wxXmlResource::Get()->LoadBitmap(wxT("16-debugger_start")), wxNullBitmap, wxITEM_NORMAL, _("Play"), wxT(""), NULL);
    m_auibar6->Realize();
    
    m_stc = new wxStyledTextCtrl(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1,-1)), 0);
    // Configure the fold margin
    m_stc->SetMarginType     (4, wxSTC_MARGIN_SYMBOL);
    m_stc->SetMarginMask     (4, wxSTC_MASK_FOLDERS);
    m_stc->SetMarginSensitive(4, true);
    m_stc->SetMarginWidth    (4, 0);
    
    // Configure the tracker margin
    m_stc->SetMarginWidth(1, 0);
    
    // Configure the symbol margin
    m_stc->SetMarginType (2, wxSTC_MARGIN_SYMBOL);
    m_stc->SetMarginMask (2, ~(wxSTC_MASK_FOLDERS));
    m_stc->SetMarginWidth(2, 0);
    m_stc->SetMarginSensitive(2, true);
    
    // Configure the line numbers margin
    int m_stc_PixelWidth = 4 + 5 *m_stc->TextWidth(wxSTC_STYLE_LINENUMBER, wxT("9"));
    m_stc->SetMarginType(0, wxSTC_MARGIN_NUMBER);
    m_stc->SetMarginWidth(0,m_stc_PixelWidth);
    
    // Configure the line symbol margin
    m_stc->SetMarginType(3, wxSTC_MARGIN_FORE);
    m_stc->SetMarginMask(3, 0);
    m_stc->SetMarginWidth(3,0);
    // Select the lexer
    m_stc->SetLexer(wxSTC_LEX_NULL);
    // Set default font / styles
    m_stc->StyleClearAll();
    m_stc->SetWrapMode(0);
    m_stc->SetIndentationGuides(0);
    m_stc->SetKeyWords(0, wxT(""));
    m_stc->SetKeyWords(1, wxT(""));
    m_stc->SetKeyWords(2, wxT(""));
    m_stc->SetKeyWords(3, wxT(""));
    m_stc->SetKeyWords(4, wxT(""));
    
    boxSizer2->Add(m_stc, 1, wxEXPAND, WXC_FROM_DIP(5));
    
    SetName(wxT("TailPanelBase"));
    SetSize(500,300);
    if (GetSizer()) {
         GetSizer()->Fit(this);
    }
    // Connect events
    this->Connect(ID_TAIL_OPEN, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(TailPanelBase::OnOpenFile), NULL, this);
    this->Connect(ID_TAIL_PAUSE, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(TailPanelBase::OnPause), NULL, this);
    this->Connect(ID_TAIL_PAUSE, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(TailPanelBase::OnPauseUI), NULL, this);
    this->Connect(ID_TAIL_PLAY, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(TailPanelBase::OnPlay), NULL, this);
    this->Connect(ID_TAIL_PLAY, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(TailPanelBase::OnPlayUI), NULL, this);
    
}

TailPanelBase::~TailPanelBase()
{
    this->Disconnect(ID_TAIL_OPEN, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(TailPanelBase::OnOpenFile), NULL, this);
    this->Disconnect(ID_TAIL_PAUSE, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(TailPanelBase::OnPause), NULL, this);
    this->Disconnect(ID_TAIL_PAUSE, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(TailPanelBase::OnPauseUI), NULL, this);
    this->Disconnect(ID_TAIL_PLAY, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(TailPanelBase::OnPlay), NULL, this);
    this->Disconnect(ID_TAIL_PLAY, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(TailPanelBase::OnPlayUI), NULL, this);
    
}