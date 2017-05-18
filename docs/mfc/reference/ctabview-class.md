---
title: Classe CTabView | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CTabView
- AFXTABVIEW/CTabView
- AFXTABVIEW/CTabView::AddView
- AFXTABVIEW/CTabView::FindTab
- AFXTABVIEW/CTabView::GetActiveView
- AFXTABVIEW/CTabView::GetTabControl
- AFXTABVIEW/CTabView::RemoveView
- AFXTABVIEW/CTabView::SetActiveView
- AFXTABVIEW/CTabView::IsScrollBar
- AFXTABVIEW/CTabView::OnActivateView
dev_langs:
- C++
helpviewer_keywords:
- CTabView class
ms.assetid: 8e6ecd9d-d28d-432b-8ec8-0446f0204d52
caps.latest.revision: 32
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 20f5745c3784e771d6ec95f7d4dc363142c687f8
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="ctabview-class"></a>Classe CTabView
Il `CTabView` classe semplifica l'uso della classe del controllo scheda ( [CMFCTabCtrl](../../mfc/reference/ctabview-class.md)) nelle applicazioni che utilizzano l'architettura documento/visualizzazione MFC.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CTabbedView : public CView  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTabView::AddView](#addview)|Aggiunge una nuova visualizzazione per il controllo scheda.|  
|[CTabView::FindTab](#findtab)|Restituisce l'indice della vista specificata del controllo.|  
|[CTabView::GetActiveView](#getactiveview)|Restituisce un puntatore per la visualizzazione attualmente attiva|  
|[CTabView::GetTabControl](#gettabcontrol)|Restituisce un riferimento al controllo scheda associato alla visualizzazione.|  
|[CTabView::RemoveView](#removeview)|Rimuove la visualizzazione del controllo tab.|  
|[CTabView::SetActiveView](#setactiveview)|Attiva una visualizzazione.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTabView::IsScrollBar](#isscrollbar)|Chiamato dal framework quando si crea una visualizzazione a schede per determinare se la visualizzazione della scheda ha una barra di scorrimento orizzontale condiviso.|  
|[CTabView::OnActivateView](#onactivateview)|Chiamato dal framework quando viene effettuata la visualizzazione a schede attivo o inattivo.|  
  
## <a name="remarks"></a>Note  
 Questa classe consente di inserire una visualizzazione a schede in un'applicazione di documento/visualizzazione. `CTabView`è un `CView`-classe derivata che contiene un incorporato `CMFCTabCtrl` oggetto. `CTabView`gestisce tutti i messaggi necessari per supportare il `CMFCTabCtrl` oggetto. È sufficiente derivare una classe dalla classe `CTabView` e collegarlo all'applicazione, quindi aggiungere `CView`-classi derivate tramite la `AddView` metodo. Il controllo scheda Visualizza le visualizzazioni come schede.  
  
 Ad esempio, potrebbe essere un documento che può essere rappresentato in diversi modi: come un foglio di calcolo, un grafico, un modulo modificabile e così via. È possibile creare singole viste disegno i dati in base alle esigenze, inseriti il `CTabView`-oggetto derivato e aggiungerle a schede senza scrivere codice aggiuntivo.  
  
 [Esempio TabbedView: Applicazione di visualizzazione a schede MFC](../../visual-cpp-samples.md) viene illustrato come utilizzare `CTabView`.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente viene illustrato come `CTabView` viene utilizzato nell'esempio TabbedView.  
  
 [!code-cpp[NVC_MFC_TabbedView n.&1;](../../mfc/reference/codesnippet/cpp/ctabview-class_1.h)]  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxTabView.h  
  
##  <a name="addview"></a>CTabView::AddView  
 Aggiunge una visualizzazione per il controllo scheda.  
  
```  
int AddView(
    CRuntimeClass* pViewClass,  
    const CString& strViewLabel,  
    int iIndex=-1,  
    CCreateContext* pContext=NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pViewClass`  
 Un puntatore a una classe di runtime della vista inserita.  
  
 [in] `strViewLabel`  
 Specifica il testo.  
  
 [in] `iIndex`  
 Specifica la posizione in base zero in corrispondenza del quale inserire la vista. Se la posizione è -1 viene inserita la nuova scheda alla fine.  
  
 [in] `pContext`  
 Un puntatore per il `CCreateContext` della visualizzazione.  
  
### <a name="return-value"></a>Valore restituito  
 Un indice della vista se questo metodo ha esito positivo. In caso contrario, -1.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per aggiungere una visualizzazione per il controllo struttura a schede che è incorporato in un frame.  
  
##  <a name="findtab"></a>CTabView::FindTab  
 Restituisce l'indice della vista specificata del controllo.  
  
```  
int FindTab(HWND hWndView) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `hWndView`  
 L'handle della vista.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice di visualizzazione, se trovato; in caso contrario, -1.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per recuperare l'indice di una vista che include un handle specificato.  
  
##  <a name="getactiveview"></a>CTabView::GetActiveView  
 Restituisce un puntatore per la visualizzazione attualmente attiva.  
  
```  
CView* GetActiveView() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore valido per la visualizzazione attiva, o `NULL` se non esiste alcuna visualizzazione attiva.  
  
### <a name="remarks"></a>Note  
  
##  <a name="gettabcontrol"></a>CTabView::GetTabControl  
 Restituisce un riferimento al controllo scheda associato alla visualizzazione.  
  
```  
DECLARE_DYNCREATE CMFCTabCtrl& GetTabControl();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento al controllo scheda associato alla visualizzazione.  
  
##  <a name="isscrollbar"></a>CTabView::IsScrollBar  
 Chiamato dal framework quando si crea una visualizzazione a schede per determinare se la visualizzazione della scheda ha una barra di scorrimento orizzontale condiviso.  
  
```  
virtual BOOL IsScrollBar() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la visualizzazione della scheda deve essere creata con una barra di scorrimento condiviso. In caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Il framework chiama questo metodo quando un `CTabView` viene creato l'oggetto.  
  
 Eseguire l'override di `IsScrollBar` metodo in un `CTabView`-classe derivata e restituire `TRUE` se si desidera creare una vista che include una barra di scorrimento orizzontale condiviso.  
  
##  <a name="onactivateview"></a>CTabView::OnActivateView  
 Chiamato dal framework quando viene effettuata la visualizzazione a schede attivo o inattivo.  
  
```  
virtual void OnActivateView(CView* view);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `view`  
 Puntatore alla visualizzazione.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita non esegue alcuna operazione. Eseguire l'override di questo metodo in un `CTabView`-derivata per elaborare la notifica.  
  
##  <a name="removeview"></a>CTabView::RemoveView  
 Rimuove la visualizzazione del controllo tab.  
  
```  
BOOL RemoveView(int iTabNum);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iTabNum`  
 L'indice della vista da rimuovere.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice di visualizzazione rimossa, se questo metodo ha esito positivo. In caso contrario-1.  
  
### <a name="remarks"></a>Note  
  
##  <a name="setactiveview"></a>CTabView::SetActiveView  
 Attiva una visualizzazione.  
  
```  
BOOL SetActiveView(int iTabNum);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iTabNum`  
 Indice in base zero della visualizzazione della scheda.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la visualizzazione specificata è stata attivata, `FALSE` se l'indice della vista non è valido.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni vedere [CMFCTabCtrl::SetActiveTab](../../mfc/reference/cmfctabctrl-class.md#setactivetab).  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCTabCtrl](../../mfc/reference/ctabview-class.md)   
 [CView (classe)](../../mfc/reference/cview-class.md)

