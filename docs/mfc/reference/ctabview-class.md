---
description: 'Altre informazioni su: classe CTabView'
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
ms.openlocfilehash: 59d4169bae108575fcf4844ec7c5c6e1e6681e28
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97345056"
---
# <a name="ctabview-class"></a>Classe CTabView

La `CTabView` classe semplifica l'utilizzo della classe del controllo scheda ( [CMFCTabCtrl](../../mfc/reference/ctabview-class.md)) in applicazioni che utilizzano l'architettura documento/visualizzazione di MFC.

## <a name="syntax"></a>Sintassi

```
class CTabbedView : public CView
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CTabView:: AddView](#addview)|Aggiunge una nuova visualizzazione al controllo struttura a schede.|
|[CTabView:: FindTab](#findtab)|Restituisce l'indice della visualizzazione specificata nel controllo struttura a schede.|
|[CTabView:: GetActiveView](#getactiveview)|Restituisce un puntatore alla visualizzazione attualmente attiva|
|[CTabView:: GetTabControl](#gettabcontrol)|Restituisce un riferimento al controllo struttura a schede associato alla visualizzazione.|
|[CTabView:: RemoveView](#removeview)|Rimuove la visualizzazione dal controllo struttura a schede.|
|[CTabView:: SetActiveView](#setactiveview)|Rende attiva una visualizzazione.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Description|
|----------|-----------------|
|[CTabView:: ScrollBar](#isscrollbar)|Chiamata eseguita dal Framework durante la creazione di una visualizzazione a schede per determinare se la visualizzazione a schede dispone di una barra di scorrimento orizzontale condivisa.|
|[CTabView:: OnActivateView](#onactivateview)|Chiamata eseguita dal framework quando la visualizzazione scheda è attiva o inattiva.|

## <a name="remarks"></a>Commenti

Questa classe rende più semplice inserire una visualizzazione a schede in un'applicazione documento/visualizzazione. `CTabView` è una `CView` classe derivata da che contiene un `CMFCTabCtrl` oggetto incorporato. `CTabView` gestisce tutti i messaggi necessari per il supporto dell' `CMFCTabCtrl` oggetto. È sufficiente derivare una classe da `CTabView` e collegarla all'applicazione, quindi aggiungere `CView` classi derivate da tramite il `AddView` metodo. Il controllo struttura a schede visualizzerà tali viste come tabulazioni.

Ad esempio, si potrebbe disporre di un documento che può essere rappresentato in modi diversi: come un foglio di calcolo, un grafico, un modulo modificabile e così via. È possibile creare visualizzazioni singole disegnando i dati in base alle esigenze, inserendoli nell'oggetto derivato da e inserendoli a `CTabView` schede senza alcuna codifica aggiuntiva.

[Esempio TabbedView: l'applicazione di visualizzazione a schede MFC](../../overview/visual-cpp-samples.md) illustra l'utilizzo di `CTabView` .

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come `CTabView` usare nell'esempio TabbedView.

[!code-cpp[NVC_MFC_TabbedView#1](../../mfc/reference/codesnippet/cpp/ctabview-class_1.h)]

## <a name="requirements"></a>Requisiti

**Intestazione:** afxTabView. h

## <a name="ctabviewaddview"></a><a name="addview"></a> CTabView:: AddView

Aggiunge una visualizzazione al controllo struttura a schede.

```
int AddView(
    CRuntimeClass* pViewClass,
    const CString& strViewLabel,
    int iIndex=-1,
    CCreateContext* pContext=NULL);
```

### <a name="parameters"></a>Parametri

*pViewClass*<br/>
in Puntatore a una classe di runtime della visualizzazione inserita.

*strViewLabel*<br/>
in Specifica il testo della scheda.

*iIndex*<br/>
in Specifica la posizione in base zero in corrispondenza della quale inserire la visualizzazione. Se la posizione è-1, la nuova scheda viene inserita alla fine.

*pContext*<br/>
in Puntatore alla `CCreateContext` della visualizzazione.

### <a name="return-value"></a>Valore restituito

Indice della vista se questo metodo ha esito positivo. In caso contrario, -1.

### <a name="remarks"></a>Commenti

Chiamare questa funzione per aggiungere una visualizzazione al controllo struttura a schede incorporato in un frame.

## <a name="ctabviewfindtab"></a><a name="findtab"></a> CTabView:: FindTab

Restituisce l'indice della visualizzazione specificata nel controllo struttura a schede.

```
int FindTab(HWND hWndView) const;
```

### <a name="parameters"></a>Parametri

*hWndView*<br/>
in Handle della visualizzazione.

### <a name="return-value"></a>Valore restituito

Indice della vista se viene trovato; in caso contrario,-1.

### <a name="remarks"></a>Commenti

Chiamare questa funzione per recuperare l'indice di una vista con un handle specificato.

## <a name="ctabviewgetactiveview"></a><a name="getactiveview"></a> CTabView:: GetActiveView

Restituisce un puntatore alla visualizzazione attualmente attiva.

```
CView* GetActiveView() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore valido alla visualizzazione attiva o NULL se non è presente alcuna visualizzazione attiva.

### <a name="remarks"></a>Commenti

## <a name="ctabviewgettabcontrol"></a><a name="gettabcontrol"></a> CTabView:: GetTabControl

Restituisce un riferimento al controllo struttura a schede associato alla visualizzazione.

```
DECLARE_DYNCREATE CMFCTabCtrl& GetTabControl();
```

### <a name="return-value"></a>Valore restituito

Riferimento al controllo struttura a schede associato alla visualizzazione.

## <a name="ctabviewisscrollbar"></a><a name="isscrollbar"></a> CTabView:: ScrollBar

Chiamata eseguita dal Framework durante la creazione di una visualizzazione a schede per determinare se la visualizzazione a schede dispone di una barra di scorrimento orizzontale condivisa.

```
virtual BOOL IsScrollBar() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se la visualizzazione scheda deve essere creata insieme a una barra di scorrimento condivisa. In caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Il Framework chiama questo metodo quando viene creato un oggetto *CTabView* .

Eseguire l' *override del metodo* IsTrue in una classe derivata da *CTabView* e restituire true se si vuole creare una visualizzazione con una barra di scorrimento orizzontale condivisa.

## <a name="ctabviewonactivateview"></a><a name="onactivateview"></a> CTabView:: OnActivateView

Chiamata eseguita dal framework quando la visualizzazione scheda è attiva o inattiva.

```
virtual void OnActivateView(CView* view);
```

### <a name="parameters"></a>Parametri

*view*<br/>
in Puntatore alla visualizzazione.

### <a name="remarks"></a>Commenti

L'implementazione predefinita non esegue alcuna operazione. Eseguire l'override di questo metodo in una `CTabView` classe derivata da per elaborare la notifica.

## <a name="ctabviewremoveview"></a><a name="removeview"></a> CTabView:: RemoveView

Rimuove la visualizzazione dal controllo struttura a schede.

```
BOOL RemoveView(int iTabNum);
```

### <a name="parameters"></a>Parametri

*iTabNum*<br/>
in Indice della visualizzazione da rimuovere.

### <a name="return-value"></a>Valore restituito

Indice della vista rimossa se questo metodo ha esito positivo. In caso contrario,-1.

### <a name="remarks"></a>Commenti

## <a name="ctabviewsetactiveview"></a><a name="setactiveview"></a> CTabView:: SetActiveView

Rende attiva una visualizzazione.

```
BOOL SetActiveView(int iTabNum);
```

### <a name="parameters"></a>Parametri

*iTabNum*<br/>
in Indice in base zero della visualizzazione della scheda.

### <a name="return-value"></a>Valore restituito

TRUE se la visualizzazione specificata è stata resa attiva, FALSE se l'indice della vista non è valido.

### <a name="remarks"></a>Commenti

Per ulteriori informazioni, vedere [CMFCTabCtrl:: SetActiveTab](../../mfc/reference/cmfctabctrl-class.md#setactivetab).

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[CMFCTabCtrl](../../mfc/reference/ctabview-class.md)<br/>
[CView (classe)](../../mfc/reference/cview-class.md)
