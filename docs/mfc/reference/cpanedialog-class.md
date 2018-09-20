---
title: Classe CPaneDialog | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CPaneDialog
- AFXPANEDIALOG/CPaneDialog
- AFXPANEDIALOG/CPaneDialog::Create
- AFXPANEDIALOG/CPaneDialog::HandleInitDialog
- AFXPANEDIALOG/CPaneDialog::SetOccDialogInfo
dev_langs:
- C++
helpviewer_keywords:
- CPaneDialog [MFC], Create
- CPaneDialog [MFC], HandleInitDialog
- CPaneDialog [MFC], SetOccDialogInfo
ms.assetid: 48a6bb91-4b92-40f5-8907-b3270b146cf6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9783eb0e4468f154591676dc46ed9342082d8512
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46396462"
---
# <a name="cpanedialog-class"></a>Classe CPaneDialog

Il `CPaneDialog` classe supporta una finestra di dialogo non modale e ancorabile.

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
|[CPaneDialog::Create](#create)|Crea una finestra di dialogo ancorabile e lo collega a un `CPaneDialog` oggetto.|
|`CPaneDialog::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|
|`CPaneDialog::GetThisClass`|Utilizzato dal framework per ottenere un puntatore per il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|
|[CPaneDialog::HandleInitDialog](#handleinitdialog)|Gestisce il [WM_INITDIALOG](/windows/desktop/dlgbox/wm-initdialog) messaggio. (Ridefinisce `CBasePane::HandleInitDialog`.)|
|`CPaneDialog::OnEraseBkgnd`|Gestisce il [WM_ERASEBKGND](/windows/desktop/winmsg/wm-erasebkgnd) messaggio. (Ridefinisce [CWnd::OnEraseBkgnd](../../mfc/reference/cwnd-class.md#onerasebkgnd).)|
|`CPaneDialog::OnLButtonDblClk`|Gestisce il [WM_LBUTTONDBLCLK](/windows/desktop/inputdev/wm-lbuttondblclk) messaggio. (Ridefinisce [CWnd::OnLButtonDblClk](../../mfc/reference/cwnd-class.md#onlbuttondblclk).)|
|`CPaneDialog::OnLButtonDown`|Gestisce il [WM_LBUTTONDOWN](/windows/desktop/inputdev/wm-lbuttondown) messaggio. (Ridefinisce [CWnd::OnLButtonDown](../../mfc/reference/cwnd-class.md#onlbuttondown).)|
|`CPaneDialog::OnUpdateCmdUI`|Chiamato dal framework per aggiornare la finestra di dialogo. (Esegue l'override [CDockablePane:: OnUpdateCmdUI](cdockablepane-class.md).)|
|`CPaneDialog::OnWindowPosChanging`|Gestisce il [WM_WINDOWPOSCHANGING](/windows/desktop/winmsg/wm-windowposchanging) messaggio. (Ridefinisce [CWnd::OnWindowPosChanging](../../mfc/reference/cwnd-class.md#onwindowposchanging).)|
|[CPaneDialog::SetOccDialogInfo](#setoccdialoginfo)|Specifica il modello per una finestra di dialogo che è un contenitore di controlli OLE.|

## <a name="remarks"></a>Note

Costruire un `CPaneDialog` oggetto in due passaggi. Prima di tutto, costruire l'oggetto nel codice. In secondo luogo, chiamare [CPaneDialog::Create](#create). È necessario specificare un ID risorsa valido o il modello del modello e passare un puntatore alla finestra padre. In caso contrario, il processo di creazione ha esito negativo. La finestra di dialogo è necessario specificare lo stile WS_CHILD e WS_VISIBLE. È consigliabile specificare anche gli stili WS_CLIPCHILDREN e WS_CLIPSIBLINGS. Per altre informazioni, vedere [stili di finestra](styles-used-by-mfc.md#window-styles).

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

##  <a name="create"></a>  CPaneDialog::Create

Crea una finestra di dialogo di ancoraggio e lo collega a un `CPaneDialog` oggetto.

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
[in] Il nome della finestra di dialogo di ancoraggio.

*pParentWnd*<br/>
[in] Punta alla finestra padre.

*bHasGripper*<br/>
[in] TRUE per creare la finestra di dialogo di ancoraggio con una didascalia (gripper); in caso contrario, FALSE.

*lpszTemplateName*<br/>
[in] Il nome del modello di finestra di dialogo di risorse.

*nStyle*<br/>
[in] Lo stile di Windows.

*nID*<br/>
[in] ID del controllo.

*nIDTemplate*<br/>
[in] L'ID risorsa del modello di finestra di dialogo.

*dwTabbedStyle*<br/>
[in] Lo stile della finestra a schede che risulta quando l'utente trascina un altro riquadro di controllo sulla didascalia del riquadro controllo. Il valore predefinito è AFX_CBRS_REGULAR_TABS. Per altre informazioni, vedere la sezione Osservazioni del [cbasepane:: CreateEx](../../mfc/reference/cbasepane-class.md#createex) (metodo).

*dwControlBarStyle*<br/>
[in] Attributi di stile aggiuntive. Il valore predefinito è AFX_DEFAULT_DOCKING_PANE_STYLE. Per altre informazioni, vedere la sezione Osservazioni del [cbasepane:: CreateEx](../../mfc/reference/cbasepane-class.md#createex) (metodo).

### <a name="return-value"></a>Valore restituito

TRUE se il metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

### <a name="example"></a>Esempio

L'esempio seguente illustra come usare il `Create` metodo nel `CPaneDialog` classe. In questo esempio fa parte di [esempio imposta dimensioni del riquadro](../../visual-cpp-samples.md).

[!code-cpp[NVC_MFC_SetPaneSize#2](../../mfc/reference/codesnippet/cpp/cpanedialog-class_1.h)]
[!code-cpp[NVC_MFC_SetPaneSize#3](../../mfc/reference/codesnippet/cpp/cpanedialog-class_2.cpp)]

##  <a name="handleinitdialog"></a>  CPaneDialog::HandleInitDialog

Gestisce il [WM_INITDIALOG](/windows/desktop/dlgbox/wm-initdialog) messaggio.

```
afx_msg LRESULT HandleInitDialog(
    WPARAM wParam,
    LPARAM lParam);
```

### <a name="parameters"></a>Parametri

*wParam*<br/>
[in] Handle per il controllo che deve ricevere lo stato attivo della tastiera predefinita.

*lParam*<br/>
[in] Specifica i dati di inizializzazione aggiuntiva.

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE. Inoltre, TRUE, imposta lo stato attivo sul controllo specificato per il *wParam* parametro. FALSE impedisce l'impostazione dello stato attivo della tastiera predefinita.

### <a name="remarks"></a>Note

Il framework utilizza questo metodo per inizializzare l'aspetto di una finestra di dialogo e controlli. Il framework chiama questo metodo prima di visualizzare la finestra di dialogo.

##  <a name="setoccdialoginfo"></a>  CPaneDialog::SetOccDialogInfo

Specifica il modello per una finestra di dialogo che è un contenitore di controlli OLE.

```
virtual BOOL SetOccDialogInfo(_AFX_OCC_DIALOG_INFO* pOccDialogInfo);
```

### <a name="parameters"></a>Parametri

*pOccDialogInfo*<br/>
[in] Puntatore a un modello di finestra di dialogo che viene usato per creare l'oggetto finestra di dialogo. Il valore di questo parametro viene passato successivamente nel [COccManager::CreateDlgControls](../../mfc/reference/coccmanager-class.md#createdlgcontrols) (metodo).

### <a name="return-value"></a>Valore restituito

Sempre TRUE.

### <a name="remarks"></a>Note

Questo metodo supporta il [COccManager](../../mfc/reference/coccmanager-class.md) classe che gestisce i siti di controllo OLE e controlli ActiveX. La struttura _AFX_OCC_DIALOG_INFO è definita nel file di intestazione afxocc.h.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CDockablePane](../../mfc/reference/cdockablepane-class.md)<br/>
[Stili di finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles)



