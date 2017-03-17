---
title: Classe CTabbedPane | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CTabbedPane
- AFXTABBEDPANE/CTabbedPane
- AFXTABBEDPANE/CTabbedPane::DetachPane
- AFXTABBEDPANE/CTabbedPane::EnableTabAutoColor
- AFXTABBEDPANE/CTabbedPane::FloatTab
- AFXTABBEDPANE/CTabbedPane::GetTabArea
- AFXTABBEDPANE/CTabbedPane::GetTabWnd
- AFXTABBEDPANE/CTabbedPane::HasAutoHideMode
- AFXTABBEDPANE/CTabbedPane::IsTabLocationBottom
- AFXTABBEDPANE/CTabbedPane::ResetTabs
- AFXTABBEDPANE/CTabbedPane::SetTabAutoColors
- AFXTABBEDPANE/CTabbedPane::m_bTabsAlwaysTop
- AFXTABBEDPANE/CTabbedPane::m_pTabWndRTC
dev_langs:
- C++
helpviewer_keywords:
- CTabbedPane class
ms.assetid: f4dc5215-b789-4f2d-8c62-477aceda3578
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
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 70377d6be8ef4ec957c7270e501022107d4b093c
ms.lasthandoff: 02/24/2017

---
# <a name="ctabbedpane-class"></a>Classe CTabbedPane
Implementa la funzionalità di un riquadro con schede staccabili.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CTabbedPane : public CBaseTabbedPane  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CTabbedPane::CTabbedPane`|Costruttore predefinito.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTabbedPane::DetachPane](#detachpane)|(Esegue l'override di [CBaseTabbedPane::DetachPane](../../mfc/reference/cbasetabbedpane-class.md#detachpane).)|  
|[CTabbedPane::EnableTabAutoColor](#enabletabautocolor)|Abilita o disabilita la colorazione automatica delle schede.|  
|[CTabbedPane::FloatTab](#floattab)|Separa un riquadro, ma solo se il riquadro si trova in una scheda rimovibile. (Esegue l'override di [CBaseTabbedPane::FloatTab](../../mfc/reference/cbasetabbedpane-class.md#floattab).)|  
|[CTabbedPane::GetTabArea](#gettabarea)|Restituisce le dimensioni e la posizione dell'area della scheda nella finestra a schede.|  
|[CTabbedPane::GetTabWnd](#gettabwnd)||  
|[CTabbedPane::HasAutoHideMode](#hasautohidemode)|Determina se il riquadro a schede può passare alla modalità Nascondi automaticamente. (Esegue l'override di [CBaseTabbedPane::HasAutoHideMode](../../mfc/reference/cbasetabbedpane-class.md#hasautohidemode).)|  
|[CTabbedPane::IsTabLocationBottom](#istablocationbottom)|Determina se le schede si trovano nella parte inferiore della finestra.|  
|[CTabbedPane::ResetTabs](#resettabs)|Reimposta lo stato predefinito di tutti i riquadri a schede.|  
|[CTabbedPane::SetTabAutoColors](#settabautocolors)|Imposta un elenco di colori personalizzati può essere usato quando è abilitata la funzionalità Colore automatico.|  
  
### <a name="data-members"></a>Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTabbedPane::m_bTabsAlwaysTop](#m_btabsalwaystop)|Posizione predefinita delle schede nell'applicazione.|  
|[CTabbedPane::m_pTabWndRTC](#m_ptabwndrtc)|Informazioni sulla classe di runtime per un oggetto personalizzato derivato da `CMFCTabCtrl`.|  
  
## <a name="remarks"></a>Note  
 Il framework crea automaticamente un'istanza di questa classe quando un utente collega un riquadro a un altro posizionando il puntatore del mouse sul titolo del secondo riquadro. Tutti i riquadri a schede create dal framework dispongono di un ID -1.  
  
 Per specificare schede anziché tramite schede nello stile di Outlook, passare il `AFX_CBRS_REGULAR_TABS` di stile per il [CDockablePane::CreateEx](../../mfc/reference/cdockablepane-class.md#createex) metodo.  
  
 Se si crea un riquadro a schede con schede rimovibili, il riquadro può essere eliminato definitivamente in modo automatico dal framework. Non è pertanto consigliabile archiviare il puntatore. Per passare un puntatore al riquadro a schede, chiamare il metodo `CBasePane::GetParentTabbedPane`.  
  
## <a name="example"></a>Esempio  
 In questo esempio viene creato un oggetto `CTabbedPane`. Successivamente, utilizziamo [CBaseTabbedPane::AddTab](../../mfc/reference/cbasetabbedpane-class.md#addtab) collegare schede aggiuntive.  
  
```  
CTabbedPane* pTabbededBar = new CTabbedPane (TRUE);

if (!pTabbededBar->Create (_T(""),
    this,
    CRect (0,
    0,
    200,
    200),  
    TRUE, 
 (UINT) -1,  
    WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS |  
    WS_CLIPCHILDREN | CBRS_LEFT |    
    CBRS_FLOAT_MULTI)) 
{  
    TRACE0("Failed to create Solution Explorer bar\n");

    return FALSE;      // fail to create  
}  
 
pTabbededBar->AddTab (&m_wndClassView);
pTabbededBar->AddTab (&m_wndResourceView);

pTabbededBar->AddTab (&m_wndFileView);
pTabbededBar->EnableDocking(CBRS_ALIGN_ANY);

DockPane(pTabbededBar);
```  
  
## <a name="example"></a>Esempio  
 Un altro modo per creare un oggetto barra di controllo a schede consiste nell'utilizzare [CDockablePane::AttachToTabWnd](../../mfc/reference/cdockablepane-class.md#attachtotabwnd). Il `AttachToTabWnd` metodo crea dinamicamente un oggetto riquadro a schede utilizzando le informazioni sulle classi di runtime impostate da [CDockablePane::SetTabbedPaneRTC](../../mfc/reference/cdockablepane-class.md#settabbedpanertc).  
  
 In questo esempio viene creato dinamicamente un riquadro a schede, vengono collegate due schede e la seconda scheda viene impostata come non rimovibile.  
  
```  
DockPane(&m_wndClassView);

CTabbedPane* pTabbedBar = NULL;  
m_wndResourceView.AttachToTabWnd (&m_wndClassView,
    DM_SHOW,
    TRUE,  
 (CDockablePane**) &pTabbedBar);

m_wndFileView.AttachToTabWnd (pTabbedBar,
    DM_SHOW,
    TRUE,  
 (CDockablePane**) &pTabbedBar);

pTabbedBar->GetUnderlyingWindow ()->EnableTabDetach (1,
    FALSE);
```  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
 [CPane](../../mfc/reference/cpane-class.md)  
  
 [CDockablePane](../../mfc/reference/cdockablepane-class.md)  
  
 [CBaseTabbedPane](../../mfc/reference/cbasetabbedpane-class.md)  
  
 [CTabbedPane](../../mfc/reference/ctabbedpane-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxTabbedPane.h  
  
##  <a name="detachpane"></a>CTabbedPane::DetachPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL DetachPane(
    CWnd* pBar,  
    BOOL bHide = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pBar`  
 [in] `bHide`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="enabletabautocolor"></a>CTabbedPane::EnableTabAutoColor  
 Abilita o disabilita la colorazione automatica delle schede.  
  
```  
static void EnableTabAutoColor(BOOL bEnable = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bEnable`  
 `TRUE`Per abilitare la colorazione automatica delle schede; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo statico per abilitare o disabilitare la colorazione automatica delle schede in tutti i pannelli a schede nell'applicazione. Quando questa funzionalità è abilitata, ogni scheda viene compilato il proprio colore. È possibile trovare l'elenco dei colori utilizzati per colorare le schede chiamando il [CMFCBaseTabCtrl::GetAutoColors](../../mfc/reference/cmfcbasetabctrl-class.md#getautocolors) metodo.  
  
 È possibile specificare l'elenco di colori che verrà utilizzato per le schede chiamando [CTabbedPane::SetTabAutoColors](#settabautocolors).  
  
 Per impostazione predefinita, questa opzione è disabilitata.  
  
##  <a name="floattab"></a>CTabbedPane::FloatTab  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL FloatTab(
    CWnd* pBar,  
    int nTabID,  
    AFX_DOCK_METHOD dockMethod,  
    BOOL bHide = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pBar`  
 [in] `nTabID`  
 [in] `dockMethod`  
 [in] `bHide`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="gettabarea"></a>CTabbedPane::GetTabArea  
 Restituisce le dimensioni e la posizione dell'area della scheda della finestra a schede.  
  
```  
virtual void GetTabArea(
    CRect& rectTabAreaTop,  
    CRect& rectTabAreaBottom) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [out] `rectTabAreaTop`  
 Contiene le dimensioni e posizione, nelle coordinate dello schermo, dell'area della scheda principale.  
  
 [out] `rectTabAreaBottom`  
 Contiene le dimensioni e posizione, nelle coordinate dello schermo, dell'area della scheda nella parte inferiore.  
  
### <a name="remarks"></a>Note  
 Il framework chiama questo metodo per determinare come ancorare un riquadro che un utente sta trascinando. Quando l'utente trascina un riquadro sull'area della scheda del Pannello di destinazione, il framework tenta di aggiungerlo come una nuova scheda del Pannello di destinazione. In caso contrario, tenta di ancoraggio del riquadro sul lato del riquadro di destinazione, che comporta la creazione di un nuovo contenitore riquadro con un divisore che separa i due riquadri.  
  
 Eseguire l'override di questo metodo in un `CTabbedPane`-derivata per modificare questo comportamento.  
  
##  <a name="gettabwnd"></a>CTabbedPane::GetTabWnd  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CMFCTabCtrl* GetTabWnd() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="hasautohidemode"></a>CTabbedPane::HasAutoHideMode  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL HasAutoHideMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="istablocationbottom"></a>CTabbedPane::IsTabLocationBottom  
 Determina se le schede si trovano nella parte inferiore della finestra.  
  
```  
virtual BOOL IsTabLocationBottom() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se l'area della scheda si trova nella parte inferiore della finestra a schede. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="m_btabsalwaystop"></a>CTabbedPane::m_bTabsAlwaysTop  
 Posizione predefinita delle schede nell'applicazione.  
  
```  
AFX_IMPORT_DATA static BOOL m_bTabsAlwaysTop;  
```  
  
### <a name="remarks"></a>Note  
 Impostare il membro statico `TRUE` per forzare tutte le schede dell'applicazione da visualizzare nella parte superiore del riquadro a schede.  
  
 È necessario impostare questo valore prima di un riquadro a schede che è stato creato.  
  
 Il valore predefinito è `FALSE`.  
  
##  <a name="m_ptabwndrtc"></a>CTabbedPane::m_pTabWndRTC  
 Informazioni sulla classe di runtime per un oggetto personalizzato derivato da `CMFCTabCtrl`.  
  
```  
AFX_IMPORT_DATA static CRuntimeClass* m_pTabWndRTC;  
```  
  
### <a name="remarks"></a>Note  
 Impostare questa variabile membro statico in un puntatore a informazioni sulla classe di runtime di un `CMFCTabCtrl`-oggetto derivato da se si utilizza una finestra a schede personalizzata all'interno di un riquadro a schede.  
  
##  <a name="resettabs"></a>CTabbedPane::ResetTabs  
 Reimposta lo stato predefinito di tutti i riquadri a schede.  
  
```  
static void ResetTabs();
```  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per ripristinare tutti i riquadri a schede per lo stato predefinito. Quando viene chiamato, questo metodo reimposta le dimensioni di bordo e lo stato di colore automatico di tutti i riquadri a schede.  
  
##  <a name="settabautocolors"></a>CTabbedPane::SetTabAutoColors  
 Imposta un elenco di colori personalizzati che vengono utilizzati quando è abilitata la funzionalità di colore automatico.  
  
```  
static void SetTabAutoColors(const CArray<COLORREF, COLORREF>& arColors);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `arColors`  
 Contiene la matrice di colori da impostare.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per personalizzare l'elenco dei colori utilizzati quando è abilitata la funzionalità di colore automatico. Questa è una funzione statica e influisce su tutte le schede dell'applicazione.  
  
 Utilizzare [CTabbedPane::EnableTabAutoColor](#enabletabautocolor) per abilitare o disabilitare la funzionalità di colore automatico.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CDockablePane](../../mfc/reference/cdockablepane-class.md)   
 [Classe CBaseTabbedPane](../../mfc/reference/cbasetabbedpane-class.md)   
 [Classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md)

