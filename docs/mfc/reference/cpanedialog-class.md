---
title: Classe CPaneDialog | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
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
- CPaneDialog::OnLButtonDblClk method
- CPaneDialog::OnLButtonDown method
- CPaneDialog::CreateObject method
- CPaneDialog::OnUpdateCmdUI method
- CPaneDialog constructor
- CPaneDialog::OnEraseBkgnd method
- CPaneDialog class
- CPaneDialog::OnWindowPosChanging method
ms.assetid: 48a6bb91-4b92-40f5-8907-b3270b146cf6
caps.latest.revision: 27
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 85c7e338382758dd809fb770c5ab14860e362da8
ms.lasthandoff: 02/24/2017

---
# <a name="cpanedialog-class"></a>Classe CPaneDialog
La `CPaneDialog` classe supporta una finestra di dialogo non modale e ancorabile.  
  
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
|`CPaneDialog::GetThisClass`|Utilizzato dal framework per ottenere un puntatore al [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|  
|[CPaneDialog::HandleInitDialog](#handleinitdialog)|Gestisce il [WM_INITDIALOG](http://msdn.microsoft.com/library/windows/desktop/ms645428) messaggio. (Ridefinisce `CBasePane::HandleInitDialog`.)|  
|`CPaneDialog::OnEraseBkgnd`|Gestisce il [WM_ERASEBKGND](http://msdn.microsoft.com/library/windows/desktop/ms648055) messaggio. (Ridefinisce [CWnd::OnEraseBkgnd](../../mfc/reference/cwnd-class.md#onerasebkgnd).)|  
|`CPaneDialog::OnLButtonDblClk`|Gestisce il [WM_LBUTTONDBLCLK](http://msdn.microsoft.com/library/windows/desktop/ms645606) messaggio. (Ridefinisce [CWnd::OnLButtonDblClk](../../mfc/reference/cwnd-class.md#onlbuttondblclk).)|  
|`CPaneDialog::OnLButtonDown`|Gestisce il [WM_LBUTTONDOWN](http://msdn.microsoft.com/library/windows/desktop/ms645607) messaggio. (Ridefinisce [CWnd::OnLButtonDown](../../mfc/reference/cwnd-class.md#onlbuttondown).)|  
|`CPaneDialog::OnUpdateCmdUI`|Chiamato dal framework per aggiornare la finestra di dialogo. (Esegue l'override di [CDockablePane::OnUpdateCmdUI](http://msdn.microsoft.com/en-us/5dd61606-1c12-40d4-b024-f3839aa5e2e0).)|  
|`CPaneDialog::OnWindowPosChanging`|Gestisce il [WM_WINDOWPOSCHANGING](http://msdn.microsoft.com/library/windows/desktop/ms632653) messaggio. (Ridefinisce [CWnd::OnWindowPosChanging](../../mfc/reference/cwnd-class.md#onwindowposchanging).)|  
|[CPaneDialog::SetOccDialogInfo](#setoccdialoginfo)|Specifica il modello per una finestra di dialogo che è un contenitore di controlli OLE.|  
  
## <a name="remarks"></a>Note  
 Costruire un `CPaneDialog` oggetto in due passaggi. Innanzitutto, creare l'oggetto nel codice. In secondo luogo, chiamare [CPaneDialog::Create](#create). È necessario specificare un ID risorsa valido o il modello del modello e passare un puntatore alla finestra padre. In caso contrario, il processo di creazione ha esito negativo. Nella finestra di dialogo è necessario specificare lo stile WS_CHILD e WS_VISIBLE. È consigliabile specificare anche gli stili WS_CLIPCHILDREN e WS_CLIPSIBLINGS. Per ulteriori informazioni, vedere [stili finestra](window-styles.md).  
  
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
  
##  <a name="create"></a>CPaneDialog::Create  
 Crea una finestra di dialogo ancoraggio e lo collega a un `CPaneDialog` oggetto.  
  
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
 [in] `lpszWindowName`  
 Il nome della finestra di dialogo ancoraggio.  
  
 [in] `pParentWnd`  
 Punta alla finestra padre.  
  
 [in] `bHasGripper`  
 `TRUE`Per creare la finestra di dialogo ancoraggio con una didascalia (gripper); in caso contrario, `FALSE`.  
  
 [in] `lpszTemplateName`  
 Il nome del modello di finestra di dialogo di risorse.  
  
 [in] `nStyle`  
 Lo stile di Windows.  
  
 [in] `nID`  
 ID del controllo.  
  
 [in] `nIDTemplate`  
 L'ID di risorsa del modello di finestra di dialogo.  
  
 [in] `dwTabbedStyle`  
 Lo stile della finestra a schede che risulta quando l'utente trascina la didascalia del Pannello di controllo di un altro pannello di controllo. Il valore predefinito è `AFX_CBRS_REGULAR_TABS`. Per ulteriori informazioni, vedere la sezione Note del [CBasePane::CreateEx](../../mfc/reference/cbasepane-class.md#createex) metodo.  
  
 [in] `dwControlBarStyle`  
 Attributi di stile aggiuntive. Il valore predefinito è `AFX_DEFAULT_DOCKING_PANE_STYLE`. Per ulteriori informazioni, vedere la sezione Note del [CBasePane::CreateEx](../../mfc/reference/cbasepane-class.md#createex) metodo.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se questo metodo ha esito positivo; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare il `Create` metodo la `CPaneDialog` classe. Questo esempio fa parte il [esempio impostare dimensioni riquadro](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_SetPaneSize n.&2;](../../mfc/reference/codesnippet/cpp/cpanedialog-class_1.h)]  
[!code-cpp[NVC_MFC_SetPaneSize n.&3;](../../mfc/reference/codesnippet/cpp/cpanedialog-class_2.cpp)]  
  
##  <a name="handleinitdialog"></a>CPaneDialog::HandleInitDialog  
 Gestisce il [WM_INITDIALOG](http://msdn.microsoft.com/library/windows/desktop/ms645428) messaggio.  
  
```  
afx_msg LRESULT HandleInitDialog(
    WPARAM wParam,  
    LPARAM lParam);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `wParam`  
 Handle per il controllo che riceverà lo stato attivo predefinito.  
  
 [in] `lParam`  
 Specifica i dati di inizializzazione aggiuntive.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` se questo metodo dà esito positivo; in caso contrario, `FALSE`. Inoltre, `TRUE` imposta lo stato attivo sul controllo specificato per il `wParam` parametro. `FALSE` impedisce l'impostazione di stato attivo della tastiera predefinito.  
  
### <a name="remarks"></a>Note  
 Il framework utilizza questo metodo per inizializzare l'aspetto di una finestra di dialogo e controlli. Il framework chiama questo metodo prima di visualizzare la finestra di dialogo.  
  
##  <a name="setoccdialoginfo"></a>CPaneDialog::SetOccDialogInfo  
 Specifica il modello per una finestra di dialogo che è un contenitore di controlli OLE.  
  
```  
virtual BOOL SetOccDialogInfo(_AFX_OCC_DIALOG_INFO* pOccDialogInfo);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pOccDialogInfo`  
 Puntatore a un modello di finestra di dialogo che viene utilizzato per creare l'oggetto finestra di dialogo. Il valore di questo parametro viene passato successivamente il [COccManager::CreateDlgControls](../../mfc/reference/coccmanager-class.md#createdlgcontrols) metodo.  
  
### <a name="return-value"></a>Valore restituito  
 Sempre `TRUE`.  
  
### <a name="remarks"></a>Note  
 Questo metodo supporta il [COccManager](../../mfc/reference/coccmanager-class.md) classe, che gestisce i siti di controllo OLE e controlli ActiveX. La struttura _AFX_OCC_DIALOG_INFO è definita nel file di intestazione afxocc.h.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CDockablePane](../../mfc/reference/cdockablepane-class.md)   
 [Stili finestra](../../mfc/reference/window-styles.md)




