---
title: Classe CTabView
ms.date: 11/04/2016
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
ms.openlocfilehash: 5ac62d04c38dbddda90d2f33a9c14c9c131fcd9c
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57326595"
---
# <a name="ctabview-class"></a>Classe CTabView

Il `CTabView` classe semplifica l'uso della classe del controllo scheda ( [CMFCTabCtrl](../../mfc/reference/ctabview-class.md)) nelle applicazioni che usano l'architettura documento/visualizzazione di MFC.

## <a name="syntax"></a>Sintassi

```
class CTabbedView : public CView
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CTabView::AddView](#addview)|Aggiunge una nuova visualizzazione per il controllo struttura a schede.|
|[CTabView::FindTab](#findtab)|Restituisce l'indice della vista specificata nel controllo struttura a schede.|
|[CTabView::GetActiveView](#getactiveview)|Restituisce un puntatore per la visualizzazione attualmente attiva|
|[CTabView::GetTabControl](#gettabcontrol)|Restituisce un riferimento al controllo struttura a schede associato alla vista.|
|[CTabView::RemoveView](#removeview)|Rimuove la visualizzazione del controllo tab.|
|[CTabView::SetActiveView](#setactiveview)|Attiva una vista.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CTabView::IsScrollBar](#isscrollbar)|Chiamato dal framework quando si crea una visualizzazione della scheda per determinare se la visualizzazione della scheda ha una barra di scorrimento orizzontale condiviso.|
|[CTabView::OnActivateView](#onactivateview)|Chiamato dal framework quando viene effettuata la visualizzazione della scheda attiva o inattiva.|

## <a name="remarks"></a>Note

Questa classe rende facile inserire una visualizzazione a schede in un'applicazione di documento/visualizzazione. `CTabView` è un `CView`-classe derivata che contiene un embedded `CMFCTabCtrl` oggetto. `CTabView` gestisce tutti i messaggi necessari per supportare il `CMFCTabCtrl` oggetto. È sufficiente derivare una classe dalla classe `CTabView` e inserirlo nell'applicazione, quindi aggiungere `CView`-le classi derivate tramite la `AddView` (metodo). Il controllo struttura a schede visualizzerà le visualizzazioni come schede.

Ad esempio, si può avere un documento che può essere rappresentato in modi diversi: come un foglio di calcolo, un grafico, un modulo modificabile e così via. È possibile creare singole visualizzazioni dei dati di disegno in base alle esigenze, inserirli nel `CTabView`-oggetto derivato e chiedere a schede senza scrivere codice aggiuntivo.

[Esempio di TabbedView: Applicazione di visualizzazione a schede MFC](../../visual-cpp-samples.md) illustra l'uso del `CTabView`.

## <a name="example"></a>Esempio

L'esempio seguente mostra come `CTabView` viene usato nell'esempio di TabbedView.

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

*pViewClass*<br/>
[in] Puntatore a una classe di runtime della visualizzazione inserita.

*strViewLabel*<br/>
[in] Specifica il testo della scheda.

*iIndex*<br/>
[in] Specifica la posizione in base zero in corrispondenza del quale inserire la vista. Se la posizione è -1 la nuova scheda viene inserita alla fine.

*pContext*<br/>
[in] Un puntatore al `CCreateContext` della visualizzazione.

### <a name="return-value"></a>Valore restituito

Un indice della vista se questo metodo ha esito positivo. In caso contrario, -1.

### <a name="remarks"></a>Note

Chiamare questa funzione per aggiungere una visualizzazione per il controllo struttura a schede che è incorporato in un frame.

##  <a name="findtab"></a>  CTabView::FindTab

Restituisce l'indice della vista specificata nel controllo struttura a schede.

```
int FindTab(HWND hWndView) const;
```

### <a name="parameters"></a>Parametri

*hWndView*<br/>
[in] Il punto di vista.

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

Un puntatore valido per la visualizzazione attiva o NULL se non esiste alcuna visualizzazione attiva.

### <a name="remarks"></a>Note

##  <a name="gettabcontrol"></a>  CTabView::GetTabControl

Restituisce un riferimento al controllo struttura a schede associato alla vista.

```
DECLARE_DYNCREATE CMFCTabCtrl& GetTabControl();
```

### <a name="return-value"></a>Valore restituito

Riferimento per il controllo struttura a schede associato alla vista.

##  <a name="isscrollbar"></a>  CTabView::IsScrollBar

Chiamato dal framework quando si crea una visualizzazione della scheda per determinare se la visualizzazione della scheda ha una barra di scorrimento orizzontale condiviso.

```
virtual BOOL IsScrollBar() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se la visualizzazione della scheda deve essere creata con una barra di scorrimento condiviso. In caso contrario, FALSE.

### <a name="remarks"></a>Note

Il framework chiama questo metodo quando un *CTabView* oggetto viene creato.

Eseguire l'override di *IsScrollBar* metodo in un *CTabView*-classe derivata e restituisce TRUE se si desidera creare una vista che include una barra di scorrimento orizzontale condiviso.

##  <a name="onactivateview"></a>  CTabView::OnActivateView

Chiamato dal framework quando viene effettuata la visualizzazione della scheda attiva o inattiva.

```
virtual void OnActivateView(CView* view);
```

### <a name="parameters"></a>Parametri

*view*<br/>
[in] Puntatore alla visualizzazione.

### <a name="remarks"></a>Note

L'implementazione predefinita non esegue alcuna operazione. L'override del metodo in un `CTabView`-derivata per elaborare la notifica.

##  <a name="removeview"></a>  CTabView::RemoveView

Rimuove la visualizzazione del controllo tab.

```
BOOL RemoveView(int iTabNum);
```

### <a name="parameters"></a>Parametri

*iTabNum*<br/>
[in] L'indice della vista da rimuovere.

### <a name="return-value"></a>Valore restituito

L'indice di visualizzazione rimossa, se questo metodo ha esito positivo. In caso contrario,-1.

### <a name="remarks"></a>Note

##  <a name="setactiveview"></a>  CTabView::SetActiveView

Attiva una vista.

```
BOOL SetActiveView(int iTabNum);
```

### <a name="parameters"></a>Parametri

*iTabNum*<br/>
[in] Indice a base zero della visualizzazione della scheda.

### <a name="return-value"></a>Valore restituito

TRUE se la visualizzazione specificata è stata attivata, FALSE se l'indice della vista non è valido.

### <a name="remarks"></a>Note

Per altre informazioni, vedere [CMFCTabCtrl::SetActiveTab](../../mfc/reference/cmfctabctrl-class.md#setactivetab).

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[CMFCTabCtrl](../../mfc/reference/ctabview-class.md)<br/>
[Classe CView](../../mfc/reference/cview-class.md)
