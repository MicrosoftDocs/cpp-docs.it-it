BEGIN_MESSAGE_MAP(CMyView, CFormView)
   ON_WM_MOUSEACTIVATE()
   ON_COMMAND(ID_EDIT_CUT, &CMyView::OnEditCut)
   ON_UPDATE_COMMAND_UI(ID_EDIT_CUT, &CMyView::OnUpdateEditCut)
   ON_BN_CLICKED(IDC_MYBUTTON, &CMyView::OnBnClickedMybutton)
   ON_WM_CREATE()
END_MESSAGE_MAP()