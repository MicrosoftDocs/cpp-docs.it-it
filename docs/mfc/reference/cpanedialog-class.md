---
description: 'Altre informazioni su: classe CPaneDialog'
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
ms.openlocfilehash: 6efbbf710f09cf6507853b983a68578a24111a34
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97345173"
---
# <a name="cpanedialog-class"></a>Classe CPaneDialog

La `CPaneDialog` classe supporta una finestra di dialogo non modale e ancorabile.

## <a name="syntax"></a>Sintassi

```
class CPaneDialog : public CDockablePane
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|`CPaneDialog::CPaneDialog`|Costruttore predefinito.|
|`CPaneDialog::~CPaneDialog`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CPaneDialog:: create](#create)|Crea una finestra di dialogo ancorabile e la collega a un `CPaneDialog` oggetto.|
|`CPaneDialog::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|
|`CPaneDialog::GetThisClass`|Utilizzato dal Framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|
|[CPaneDialog::HandleInitDialog](#handleinitdialog)|Gestisce il messaggio di [WM_INITDIALOG](/windows/win32/dlgbox/wm-initdialog) . (Ridefine `CBasePane::HandleInitDialog` ).|
|`CPaneDialog::OnEraseBkgnd`|Gestisce il messaggio di [WM_ERASEBKGND](/windows/win32/winmsg/wm-erasebkgnd) . (Ridefinisce [CWnd:: OnEraseBkgnd](../../mfc/reference/cwnd-class.md#onerasebkgnd).)|
|`CPaneDialog::OnLButtonDblClk`|Gestisce il messaggio di [WM_LBUTTONDBLCLK](/windows/win32/inputdev/wm-lbuttondblclk) . (Ridefinisce [CWnd:: OnLButtonDblClk](../../mfc/reference/cwnd-class.md#onlbuttondblclk).)|
|`CPaneDialog::OnLButtonDown`|Gestisce il messaggio di [WM_LBUTTONDOWN](/windows/win32/inputdev/wm-lbuttondown) . (Ridefinisce [CWnd:: OnLButtonDown](../../mfc/reference/cwnd-class.md#onlbuttondown).)|
|`CPaneDialog::OnUpdateCmdUI`|Chiamata eseguita dal Framework per aggiornare la finestra di dialogo. Esegue l'override di [CDockablePane:: OnUpdateCmdUI](cdockablepane-class.md).|
|`CPaneDialog::OnWindowPosChanging`|Gestisce il messaggio di [WM_WINDOWPOSCHANGING](/windows/win32/winmsg/wm-windowposchanging) . (Ridefinisce [CWnd:: OnWindowPosChanging](../../mfc/reference/cwnd-class.md#onwindowposchanging).)|
|[CPaneDialog::SetOccDialogInfo](#setoccdialoginfo)|Specifica il modello per una finestra di dialogo che è un contenitore di controlli OLE.|

## <a name="remarks"></a>Commenti

Costruire un `CPaneDialog` oggetto in due passaggi. Prima di tutto, costruire l'oggetto nel codice. In secondo luogo, chiamare [CPaneDialog:: create](#create). È necessario specificare un nome di modello di risorsa o un ID modello valido e passare un puntatore alla finestra padre. In caso contrario, il processo di creazione non riesce. La finestra di dialogo deve specificare il WS_CHILD e lo stile WS_VISIBLE. Si consiglia inoltre di specificare gli stili WS_CLIPCHILDREN e WS_CLIPSIBLINGS. Per altre informazioni, vedere [stili di finestra](styles-used-by-mfc.md#window-styles).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CBasePane](../../mfc/reference/cbasepane-class.md)

[CPane](../../mfc/reference/cpane-class.md)

[CDockablePane](../../mfc/reference/cdockablepane-class.md)

[CPaneDialog](../../mfc/reference/cpanedialog-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxpanedialog. h

## <a name="cpanedialogcreate"></a><a name="create"></a> CPaneDialog:: create

Crea una finestra di dialogo di ancoraggio e la collega a un `CPaneDialog` oggetto.

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

*lpszWindowName*<br/>
in Nome della finestra di dialogo di ancoraggio.

*pParentWnd*<br/>
in Punta alla finestra padre.

*bHasGripper*<br/>
in TRUE per creare la finestra di dialogo di ancoraggio con una didascalia (pinza); in caso contrario, FALSE.

*lpszTemplateName*<br/>
in Nome del modello di finestra di dialogo della risorsa.

*nStyle*<br/>
in Stile di Windows.

*nID*<br/>
in ID del controllo.

*nIDTemplate*<br/>
in ID risorsa del modello di finestra di dialogo.

*dwTabbedStyle*<br/>
in Stile della finestra a schede risultante quando l'utente trascina un altro riquadro di controllo sulla didascalia del riquadro di controllo. Il valore predefinito è AFX_CBRS_REGULAR_TABS. Per ulteriori informazioni, vedere la sezione Osservazioni del metodo [CBasePane:: CreateEx](../../mfc/reference/cbasepane-class.md#createex) .

*dwControlBarStyle*<br/>
in Attributi di stile aggiuntivi. Il valore predefinito è AFX_DEFAULT_DOCKING_PANE_STYLE. Per ulteriori informazioni, vedere la sezione Osservazioni del metodo [CBasePane:: CreateEx](../../mfc/reference/cbasepane-class.md#createex) .

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare il `Create` metodo nella `CPaneDialog` classe. Questo esempio fa parte dell' [esempio di dimensioni del riquadro Set](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_SetPaneSize#2](../../mfc/reference/codesnippet/cpp/cpanedialog-class_1.h)]
[!code-cpp[NVC_MFC_SetPaneSize#3](../../mfc/reference/codesnippet/cpp/cpanedialog-class_2.cpp)]

## <a name="cpanedialoghandleinitdialog"></a><a name="handleinitdialog"></a> CPaneDialog::HandleInitDialog

Gestisce il messaggio di [WM_INITDIALOG](/windows/win32/dlgbox/wm-initdialog) .

```
afx_msg LRESULT HandleInitDialog(
    WPARAM wParam,
    LPARAM lParam);
```

### <a name="parameters"></a>Parametri

*wParam*<br/>
in Handle per il controllo che riceve lo stato attivo predefinito della tastiera.

*lParam*<br/>
in Specifica dati di inizializzazione aggiuntivi.

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE. Inoltre, TRUE imposta lo stato attivo della tastiera sul controllo specificato dal parametro *wParam* ; FALSE impedisce l'impostazione dello stato attivo della tastiera predefinito.

### <a name="remarks"></a>Commenti

Il Framework utilizza questo metodo per inizializzare i controlli e l'aspetto di una finestra di dialogo. Il Framework chiama questo metodo prima di visualizzare la finestra di dialogo.

## <a name="cpanedialogsetoccdialoginfo"></a><a name="setoccdialoginfo"></a> CPaneDialog::SetOccDialogInfo

Specifica il modello per una finestra di dialogo che è un contenitore di controlli OLE.

```
virtual BOOL SetOccDialogInfo(_AFX_OCC_DIALOG_INFO* pOccDialogInfo);
```

### <a name="parameters"></a>Parametri

*pOccDialogInfo*<br/>
in Puntatore a un modello di finestra di dialogo utilizzato per creare l'oggetto finestra di dialogo. Il valore di questo parametro viene successivamente passato al metodo [COccManager:: CreateDlgControls](../../mfc/reference/coccmanager-class.md#createdlgcontrols) .

### <a name="return-value"></a>Valore restituito

Sempre TRUE.

### <a name="remarks"></a>Osservazioni

Questo metodo supporta la classe [COccManager](../../mfc/reference/coccmanager-class.md) , che gestisce i siti di controllo OLE e i controlli ActiveX. La struttura _AFX_OCC_DIALOG_INFO viene definita nel file di intestazione afxocc. h.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CDockablePane](../../mfc/reference/cdockablepane-class.md)<br/>
[Stili finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles)
