---
title: Classe CPaneDialog
ms.date: 11/04/2016
f1_keywords:
- CPaneDialog
- AFXPANEDIALOG/CPaneDialog
- AFXPANEDIALOG/CPaneDialog::Create
- AFXPANEDIALOG/CPaneDialog::HandleInitDialog
- AFXPANEDIALOG/CPaneDialog::SetOccDialogInfo
helpviewer_keywords:
- CPaneDialog [MFC], Create
- CPaneDialog [MFC], HandleInitDialog
- CPaneDialog [MFC], SetOccDialogInfo
ms.assetid: 48a6bb91-4b92-40f5-8907-b3270b146cf6
ms.openlocfilehash: ad1225034cc5eca8ca53b042ebe3b55db4a2cf09
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81364134"
---
# <a name="cpanedialog-class"></a>Classe CPaneDialog

La `CPaneDialog` classe supporta una finestra di dialogo non modale ancorabile.

## <a name="syntax"></a>Sintassi

```
class CPaneDialog : public CDockablePane
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|`CPaneDialog::CPaneDialog`|Costruttore predefinito.|
|`CPaneDialog::~CPaneDialog`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPaneDialog::Create](#create)|Crea una finestra di dialogo ancorabile `CPaneDialog` e la associa a un oggetto.|
|`CPaneDialog::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|
|`CPaneDialog::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|
|[CPaneDialog::HandleInitDialog](#handleinitdialog)|Gestisce il messaggio [WM_INITDIALOG.](/windows/win32/dlgbox/wm-initdialog) (Ridefinisce `CBasePane::HandleInitDialog`.)|
|`CPaneDialog::OnEraseBkgnd`|Gestisce il [messaggio di WM_ERASEBKGND.](/windows/win32/winmsg/wm-erasebkgnd) (Ridefinisce [CWnd::OnEraseBkgnd](../../mfc/reference/cwnd-class.md#onerasebkgnd).)|
|`CPaneDialog::OnLButtonDblClk`|Gestisce il messaggio [WM_LBUTTONDBLCLK.](/windows/win32/inputdev/wm-lbuttondblclk) (Ridefinisce [CWnd::OnLButtonDblClk](../../mfc/reference/cwnd-class.md#onlbuttondblclk).)|
|`CPaneDialog::OnLButtonDown`|Gestisce il messaggio [WM_LBUTTONDOWN.](/windows/win32/inputdev/wm-lbuttondown) (Ridefinisce [CWnd::OnLButtonDown](../../mfc/reference/cwnd-class.md#onlbuttondown).)|
|`CPaneDialog::OnUpdateCmdUI`|Chiamato dal framework per aggiornare la finestra di dialogo. (Esegue l'override di [CDockablePane::OnUpdateCmdUI.)](cdockablepane-class.md)|
|`CPaneDialog::OnWindowPosChanging`|Gestisce il messaggio [WM_WINDOWPOSCHANGING.](/windows/win32/winmsg/wm-windowposchanging) (Ridefinisce [CWnd::OnWindowPosChanging](../../mfc/reference/cwnd-class.md#onwindowposchanging).)|
|[Finestra di dialogo::SetOccDialogInfo](#setoccdialoginfo)|Specifica il modello per una finestra di dialogo che è un contenitore di controlli OLE.|

## <a name="remarks"></a>Osservazioni

Costruire `CPaneDialog` un oggetto in due passaggi. Innanzitutto, costruire l'oggetto nel codice. In secondo luogo, chiamare [CPaneDialog::Create](#create). È necessario specificare un nome di modello di risorsa o un ID modello valido e passare un puntatore alla finestra padre. In caso contrario, il processo di creazione non riesce. La finestra di dialogo deve specificare lo stile WS_CHILD e WS_VISIBLE. È consigliabile specificare anche gli stili WS_CLIPCHILDREN e WS_CLIPSIBLINGS. Per ulteriori informazioni, consultate [Stili finestra.](styles-used-by-mfc.md#window-styles)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CBasePane](../../mfc/reference/cbasepane-class.md)

[CPane](../../mfc/reference/cpane-class.md)

[CDockablePane](../../mfc/reference/cdockablepane-class.md)

[CPaneDialog](../../mfc/reference/cpanedialog-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxpanedialog.h

## <a name="cpanedialogcreate"></a><a name="create"></a>CPaneDialog::Create

Crea una finestra di dialogo ancorata e la associa a un `CPaneDialog` oggetto.

```
BOOL Create(
    LPCTSTR lpszWindowName,
    CWnd* pParentWnd,
    BOOL bHasGripper,
    LPCTSTR lpszTemplateName,
    UINT nStyle,
    UINT nID,
    DWORD dwTabbedStyle= AFX_CBRS_REGULAR_TABS,
    DWORD dwControlBarStyle=AFX_DEFAULT_DOCKING_PANE_STYLE);

BOOL Create(
    LPCTSTR lpszWindowName,
    CWnd* pParentWnd,
    BOOL bHasGripper,
    UINT nIDTemplate,
    UINT nStyle,
    UINT nID);

BOOL Create(
    CWnd* pParentWnd,
    LPCTSTR lpszTemplateName,
    UINT nStyle,
    UINT nID);

BOOL Create(
    CWnd* pParentWnd,
    UINT nIDTemplate,
    UINT nStyle,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*lpszNomefinestraNome*<br/>
[in] Nome della finestra di dialogo di ancoraggio.

*pParentWnd (informazioni in due)*<br/>
[in] Punta alla finestra padre.

*bHasGripper*<br/>
[in] TRUE per creare la finestra di dialogo di ancoraggio con una didascalia (gripper); in caso contrario, FALSE.

*lpszTemplateName (nome di metodo)*<br/>
[in] Nome del modello di finestra di dialogo della risorsa.

*nStyle*<br/>
[in] Stile di Windows.

*nID*<br/>
[in] ID del controllo.

*NIDTemplate (modello)*<br/>
[in] ID risorsa del modello di finestra di dialogo.

*dwTabbedStyle*<br/>
[in] Stile della finestra a schede che risulta quando l'utente trascina un altro riquadro di controllo nella didascalia di questo riquadro di controllo. Il valore predefinito è AFX_CBRS_REGULAR_TABS. Per ulteriori informazioni, vedere la sezione Osservazioni del [metodo CBasePane::CreateEx.](../../mfc/reference/cbasepane-class.md#createex)

*dwControlBarStyle (stile dwControlBarStyle)*<br/>
[in] Attributi di stile aggiuntivi. Il valore predefinito è AFX_DEFAULT_DOCKING_PANE_STYLE. Per ulteriori informazioni, vedere la sezione Osservazioni del [metodo CBasePane::CreateEx.](../../mfc/reference/cbasepane-class.md#createex)

### <a name="return-value"></a>Valore restituito

TRUESe questo metodo ha esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

### <a name="example"></a>Esempio

Nell'esempio `CPaneDialog` riportato di `Create` seguito viene illustrato come utilizzare il metodo nella classe . Questo esempio fa parte [dell'esempio Set Pane Size](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_SetPaneSize#2](../../mfc/reference/codesnippet/cpp/cpanedialog-class_1.h)]
[!code-cpp[NVC_MFC_SetPaneSize#3](../../mfc/reference/codesnippet/cpp/cpanedialog-class_2.cpp)]

## <a name="cpanedialoghandleinitdialog"></a><a name="handleinitdialog"></a>CPaneDialog::HandleInitDialog

Gestisce il messaggio [WM_INITDIALOG.](/windows/win32/dlgbox/wm-initdialog)

```
afx_msg LRESULT HandleInitDialog(
    WPARAM wParam,
    LPARAM lParam);
```

### <a name="parameters"></a>Parametri

*wParam*<br/>
[in] Gestire il controllo che deve ricevere lo stato attivo della tastiera predefinito.

*lParam*<br/>
[in] Specifica dati di inizializzazione aggiuntivi.

### <a name="return-value"></a>Valore restituito

TRUESe questo metodo ha esito positivo. in caso contrario, FALSE. Inoltre, TRUE imposta lo stato attivo della tastiera sul controllo specificato dal *wParam* parametro; FALSE impedisce di impostare lo stato attivo della tastiera predefinito.

### <a name="remarks"></a>Osservazioni

Il framework utilizza questo metodo per inizializzare i controlli e l'aspetto di una finestra di dialogo. Il framework chiama questo metodo prima di visualizzare la finestra di dialogo.

## <a name="cpanedialogsetoccdialoginfo"></a><a name="setoccdialoginfo"></a>Finestra di dialogo::SetOccDialogInfo

Specifica il modello per una finestra di dialogo che è un contenitore di controlli OLE.

```
virtual BOOL SetOccDialogInfo(_AFX_OCC_DIALOG_INFO* pOccDialogInfo);
```

### <a name="parameters"></a>Parametri

*pOccDialogInfo (informazioni in lingua inlingua in lingua inlingua del dialog*<br/>
[in] Puntatore a un modello di finestra di dialogo utilizzato per creare l'oggetto finestra di dialogo. Il valore di questo parametro viene successivamente passato nel [metodo COccManager::CreateDlgControls.](../../mfc/reference/coccmanager-class.md#createdlgcontrols)

### <a name="return-value"></a>Valore restituito

Sempre TRUE.

### <a name="remarks"></a>Osservazioni

Questo metodo supporta la classe [COccManager,](../../mfc/reference/coccmanager-class.md) che gestisce i siti di controllo OLE e i controlli ActiveX. La struttura _AFX_OCC_DIALOG_INFO è definita nel file di intestazione afxocc.h.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[CDockablePane Class](../../mfc/reference/cdockablepane-class.md)<br/>
[Stili di finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles)
