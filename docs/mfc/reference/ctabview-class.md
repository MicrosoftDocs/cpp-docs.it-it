---
title: Classe CTabView | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
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
- CTabView [MFC], AddView
- CTabView [MFC], FindTab
- CTabView [MFC], GetActiveView
- CTabView [MFC], GetTabControl
- CTabView [MFC], RemoveView
- CTabView [MFC], SetActiveView
- CTabView [MFC], IsScrollBar
- CTabView [MFC], OnActivateView
ms.assetid: 8e6ecd9d-d28d-432b-8ec8-0446f0204d52
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 08c0cff2f6586ab5e385808fb806ed435b00bfc9
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33375223"
---
# <a name="ctabview-class"></a>Classe CTabView
Il `CTabView` classe semplifica l'utilizzo della classe del controllo scheda ( [CMFCTabCtrl](../../mfc/reference/ctabview-class.md)) nelle applicazioni che utilizzano l'architettura documento/visualizzazione MFC.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CTabbedView : public CView  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTabView::AddView](#addview)|Aggiunge una nuova visualizzazione controllo struttura a schede.|  
|[CTabView::FindTab](#findtab)|Restituisce l'indice della vista specificata del controllo.|  
|[CTabView::GetActiveView](#getactiveview)|Restituisce un puntatore per la visualizzazione attualmente attiva|  
|[CTabView::GetTabControl](#gettabcontrol)|Restituisce un riferimento al controllo scheda associato alla visualizzazione.|  
|[CTabView::RemoveView](#removeview)|Rimuove la visualizzazione del controllo scheda.|  
|[CTabView::SetActiveView](#setactiveview)|Attiva una vista.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTabView::IsScrollBar](#isscrollbar)|Chiamato dal framework quando si crea una visualizzazione scheda per determinare se la vista scheda ha una barra di scorrimento orizzontale condiviso.|  
|[CTabView::OnActivateView](#onactivateview)|Chiamato dal framework quando viene effettuata la visualizzazione della scheda attiva o inattiva.|  
  
## <a name="remarks"></a>Note  
 Questa classe rende facile inserire un'applicazione di documento/visualizzazione di una visualizzazione a schede. `CTabView` è un `CView`-classe derivata che contiene un incorporato `CMFCTabCtrl` oggetto. `CTabView` gestisce tutti i messaggi necessari per supportare il `CMFCTabCtrl` oggetto. È sufficiente derivare una classe da `CTabView` e inserirlo in un'applicazione, quindi aggiungere `CView`-classi derivate tramite il `AddView` (metodo). Il controllo scheda visualizzerà le visualizzazioni come schede.  
  
 Ad esempio, potrebbe essere un documento che può essere rappresentato in diversi modi: come un foglio di calcolo, un grafico, un modulo modificabile e così via. È possibile creare viste singole disegno i dati in base alle esigenze, inserirli nel `CTabView`-oggetto derivato e farli schede senza scrivere codice aggiuntivo.  
  
 [Esempio TabbedView: Applicazione MFC schede View](../../visual-cpp-samples.md) viene illustrato come utilizzare `CTabView`.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente mostra come `CTabView` viene utilizzato nell'esempio TabbedView.  
  
 [!code-cpp[NVC_MFC_TabbedView#1](../../mfc/reference/codesnippet/cpp/ctabview-class_1.h)]  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxTabView.h  
  
##  <a name="addview"></a>  CTabView::AddView  
 Aggiunge una visualizzazione per il controllo struttura a schede.  
  
```  
int AddView(
    CRuntimeClass* pViewClass,  
    const CString& strViewLabel,  
    int iIndex=-1,  
    CCreateContext* pContext=NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pViewClass`  
 Puntatore a una classe di runtime della vista inserita.  
  
 [in] `strViewLabel`  
 Specifica il testo della scheda.  
  
 [in] `iIndex`  
 Specifica la posizione in base zero in corrispondenza del quale inserire la visualizzazione. Se la posizione è -1 viene inserita la nuova scheda alla fine.  
  
 [in] `pContext`  
 Un puntatore al `CCreateContext` della visualizzazione.  
  
### <a name="return-value"></a>Valore restituito  
 Un indice della vista se questo metodo ha esito positivo. In caso contrario, -1.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per aggiungere una visualizzazione al controllo struttura a schede che è incorporato in un frame.  
  
##  <a name="findtab"></a>  CTabView::FindTab  
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
  
##  <a name="getactiveview"></a>  CTabView::GetActiveView  
 Restituisce un puntatore per la visualizzazione attualmente attiva.  
  
```  
CView* GetActiveView() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore valido per la visualizzazione attiva, o `NULL` se non vi è alcuna visualizzazione attiva.  
  
### <a name="remarks"></a>Note  
  
##  <a name="gettabcontrol"></a>  CTabView::GetTabControl  
 Restituisce un riferimento al controllo scheda associato alla visualizzazione.  
  
```  
DECLARE_DYNCREATE CMFCTabCtrl& GetTabControl();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento al controllo scheda associato alla visualizzazione.  
  
##  <a name="isscrollbar"></a>  CTabView::IsScrollBar  
 Chiamato dal framework quando si crea una visualizzazione scheda per determinare se la vista scheda ha una barra di scorrimento orizzontale condiviso.  
  
```  
virtual BOOL IsScrollBar() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` Se la visualizzazione di scheda deve essere creata con una barra di scorrimento condiviso. In caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Il framework chiama questo metodo quando un `CTabView` viene creato l'oggetto.  
  
 Eseguire l'override di `IsScrollBar` metodo in un `CTabView`-classe derivata e restituito `TRUE` se si desidera creare una vista che include una barra di scorrimento orizzontale condiviso.  
  
##  <a name="onactivateview"></a>  CTabView::OnActivateView  
 Chiamato dal framework quando viene effettuata la visualizzazione della scheda attiva o inattiva.  
  
```  
virtual void OnActivateView(CView* view);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `view`  
 Puntatore alla visualizzazione.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita non esegue alcuna operazione. Eseguire l'override di questo metodo in un `CTabView`-derivata per elaborare la notifica.  
  
##  <a name="removeview"></a>  CTabView::RemoveView  
 Rimuove la visualizzazione del controllo scheda.  
  
```  
BOOL RemoveView(int iTabNum);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iTabNum`  
 Indice della vista da rimuovere.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice di visualizzazione rimossa, se questo metodo ha esito positivo. In caso contrario-1.  
  
### <a name="remarks"></a>Note  
  
##  <a name="setactiveview"></a>  CTabView::SetActiveView  
 Attiva una vista.  
  
```  
BOOL SetActiveView(int iTabNum);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iTabNum`  
 Indice in base zero della visualizzazione della scheda.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` Se la visualizzazione specificata è stato reso attiva, `FALSE` se l'indice della vista non è valido.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni vedere [CMFCTabCtrl::SetActiveTab](../../mfc/reference/cmfctabctrl-class.md#setactivetab).  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCTabCtrl](../../mfc/reference/ctabview-class.md)   
 [Classe CView](../../mfc/reference/cview-class.md)
