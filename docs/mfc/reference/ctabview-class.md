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
ms.openlocfilehash: 8d64d503c4bad0d452be174064e2932ed100d7de
ms.sourcegitcommit: 208d445fd7ea202de1d372d3f468e784e77bd666
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/29/2018
ms.locfileid: "37121757"
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
|[CTabView::AddView](#addview)|Aggiunge una nuova visualizzazione al controllo scheda.|  
|[CTabView::FindTab](#findtab)|Restituisce l'indice della vista specificata nel controllo struttura a schede.|  
|[CTabView::GetActiveView](#getactiveview)|Restituisce un puntatore per la visualizzazione attualmente attiva|  
|[CTabView::GetTabControl](#gettabcontrol)|Restituisce un riferimento al controllo struttura a schede associato alla vista.|  
|[CTabView::RemoveView](#removeview)|Rimuove la vista dal controllo struttura a schede.|  
|[CTabView::SetActiveView](#setactiveview)|Attiva una vista.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTabView::IsScrollBar](#isscrollbar)|Chiamato dal framework quando si crea una visualizzazione scheda per determinare se la vista scheda ha una barra di scorrimento orizzontale condivisa.|  
|[CTabView::OnActivateView](#onactivateview)|Chiamato dal framework quando viene effettuata la visualizzazione della scheda attiva o inattiva.|  
  
## <a name="remarks"></a>Note  
 Questa classe rende facile inserire una visualizzazione a schede in un'applicazione di documento/visualizzazione. `CTabView` è un `CView`-classe derivata che contiene un incorporato `CMFCTabCtrl` oggetto. `CTabView` gestisce tutti i messaggi necessari per supportare il `CMFCTabCtrl` oggetto. Semplicemente derivare una classe da `CTabView` inserirlo nell'applicazione, quindi aggiungere `CView`-classi derivate tramite la `AddView` metodo. Il controllo scheda visualizzerà queste viste come schede.  
  
 Ad esempio, potrebbe essere necessario un documento che può essere rappresentato in diversi modi: come un foglio di calcolo, un grafico, un modulo modificabile e così via. È possibile creare singoli viste caricando i dati in base alle esigenze, inserirli nel `CTabView`-oggetto derivato e fare in modo che a schede senza alcuna codifica aggiuntiva.  
  
 [Esempio TabbedView: Applicazione MFC schede View](../../visual-cpp-samples.md) viene illustrato come utilizzare `CTabView`.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente mostra come `CTabView` utilizzate nell'esempio TabbedView.  
  
 [!code-cpp[NVC_MFC_TabbedView#1](../../mfc/reference/codesnippet/cpp/ctabview-class_1.h)]  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxTabView.h  
  
##  <a name="addview"></a>  CTabView::AddView  
 Aggiunge una visualizzazione al controllo scheda.  
  
```  
int AddView(
    CRuntimeClass* pViewClass,  
    const CString& strViewLabel,  
    int iIndex=-1,  
    CCreateContext* pContext=NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pViewClass*  
 Puntatore a una classe di runtime della vista inserita.  
  
 [in] *strViewLabel*  
 Specifica il testo della scheda.  
  
 [in] *iIndex*  
 Specifica la posizione in base zero in corrispondenza del quale inserire la vista. Se la posizione è -1 viene inserita la nuova scheda alla fine.  
  
 [in] *pContext*  
 Un puntatore al `CCreateContext` della vista.  
  
### <a name="return-value"></a>Valore restituito  
 Un indice della vista se questo metodo ha esito positivo. In caso contrario, -1.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per aggiungere una visualizzazione al controllo struttura a schede che è incorporato in un frame.  
  
##  <a name="findtab"></a>  CTabView::FindTab  
 Restituisce l'indice della vista specificata nel controllo struttura a schede.  
  
```  
int FindTab(HWND hWndView) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] *hWndView*  
 L'handle della vista.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice della vista se viene trovato; in caso contrario, -1.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per recuperare l'indice di una vista che include un handle specificato.  
  
##  <a name="getactiveview"></a>  CTabView::GetActiveView  
 Restituisce un puntatore per la visualizzazione attualmente attiva.  
  
```  
CView* GetActiveView() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore valido per la visualizzazione attiva oppure NULL se non esiste alcuna visualizzazione attiva.  
  
### <a name="remarks"></a>Note  
  
##  <a name="gettabcontrol"></a>  CTabView::GetTabControl  
 Restituisce un riferimento al controllo struttura a schede associato alla vista.  
  
```  
DECLARE_DYNCREATE CMFCTabCtrl& GetTabControl();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento al controllo struttura a schede associato alla vista.  
  
##  <a name="isscrollbar"></a>  CTabView::IsScrollBar  
 Chiamato dal framework quando si crea una visualizzazione scheda per determinare se la vista scheda ha una barra di scorrimento orizzontale condivisa.  
  
```  
virtual BOOL IsScrollBar() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se la visualizzazione di scheda deve essere creata con una barra di scorrimento condiviso. In caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Il framework chiama questo metodo quando un *CTabView* viene creato l'oggetto.  
  
 Eseguire l'override di *IsScrollBar* metodo in un *CTabView*-classe derivata e restituisce TRUE se si desidera creare una vista che include una barra di scorrimento orizzontale condivisa.  
  
##  <a name="onactivateview"></a>  CTabView::OnActivateView  
 Chiamato dal framework quando viene effettuata la visualizzazione della scheda attiva o inattiva.  
  
```  
virtual void OnActivateView(CView* view);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *visualizzazione*  
 Puntatore alla visualizzazione.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita non esegue alcuna operazione. Eseguire l'override di questo metodo in un `CTabView`-derivata per l'elaborazione di questa notifica.  
  
##  <a name="removeview"></a>  CTabView::RemoveView  
 Rimuove la vista dal controllo struttura a schede.  
  
```  
BOOL RemoveView(int iTabNum);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *iTabNum*  
 L'indice della vista da rimuovere.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice di visualizzazione rimossa, se questo metodo ha esito positivo. In caso contrario,-1.  
  
### <a name="remarks"></a>Note  
  
##  <a name="setactiveview"></a>  CTabView::SetActiveView  
 Attiva una vista.  
  
```  
BOOL SetActiveView(int iTabNum);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *iTabNum*  
 Indice in base zero della visualizzazione della scheda.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se la visualizzazione specificata è stato reso attiva, FALSE se l'indice della vista non è valido.  
  
### <a name="remarks"></a>Note  
 Per altre informazioni, vedere [CMFCTabCtrl::SetActiveTab](../../mfc/reference/cmfctabctrl-class.md#setactivetab).  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCTabCtrl](../../mfc/reference/ctabview-class.md)   
 [Classe CView](../../mfc/reference/cview-class.md)
