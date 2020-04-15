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
ms.openlocfilehash: ad30cbbf5de195708d2d357a76c38b661d095c2f
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81365928"
---
# <a name="ctabview-class"></a>Classe CTabView

La `CTabView` classe semplifica l'utilizzo della classe del controllo struttura a schede ( [CMFCTabCtrl](../../mfc/reference/ctabview-class.md)) nelle applicazioni che utilizzano l'architettura documento/visualizzazione di MFC.

## <a name="syntax"></a>Sintassi

```
class CTabbedView : public CView
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CTabView::AddView](#addview)|Aggiunge una nuova visualizzazione al controllo Struttura a schede.|
|[CTabView::FindTab](#findtab)|Restituisce l'indice della visualizzazione specificata nel controllo struttura a schede.|
|[CTabView::GetActiveView](#getactiveview)|Restituisce un puntatore alla visualizzazione attualmente attiva|
|[CTabView::GetTabControl](#gettabcontrol)|Restituisce un riferimento al controllo struttura a schede associato alla visualizzazione.|
|[CTabView::RemoveView](#removeview)|Rimuove la visualizzazione dal controllo Struttura a schede.|
|[CTabView::SetActiveView](#setactiveview)|Rende attiva una vista.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[Controllo Dati::IsScrollBar](#isscrollbar)|Chiamato dal framework durante la creazione di una visualizzazione a schede per determinare se la visualizzazione a schede dispone di una barra di scorrimento orizzontale condivisa.|
|[CTabView::OnActivateView](#onactivateview)|Chiamato dal framework quando la visualizzazione a schede viene resa attiva o inattiva.|

## <a name="remarks"></a>Osservazioni

Questa classe semplifica l'archiviazione di una visualizzazione a schede in un'applicazione documento/visualizzazione. `CTabView`è `CView`una classe derivata `CMFCTabCtrl` che contiene un oggetto incorporato. `CTabView`gestisce tutti i `CMFCTabCtrl` messaggi necessari per supportare l'oggetto. È sufficiente derivare una classe da `CTabView` e `CView`collegarla all'applicazione, quindi aggiungere classi derivate utilizzando il `AddView` metodo . Il controllo struttura a schede visualizzerà tali visualizzazioni come schede.

Ad esempio, si potrebbe avere un documento che può essere rappresentato in modi diversi: come foglio di calcolo, un grafico, un modulo modificabile e così via. È possibile creare singole viste che disegnano `CTabView`i dati in base alle esigenze, inserirle nell'oggetto derivato e farle a schede senza alcuna codifica aggiuntiva.

[Esempio TabbedView: applicazione](../../overview/visual-cpp-samples.md) di visualizzazione a `CTabView`schede MFC illustra l'utilizzo di .

## <a name="example"></a>Esempio

Nell'esempio seguente `CTabView` viene illustrato come viene utilizzato nell'esempio TabbedView.The following example shows how is used in the TabbedView sample.

[!code-cpp[NVC_MFC_TabbedView#1](../../mfc/reference/codesnippet/cpp/ctabview-class_1.h)]

## <a name="requirements"></a>Requisiti

**Intestazione:** afxTabView.h

## <a name="ctabviewaddview"></a><a name="addview"></a>CTabView::AddView

Aggiunge una visualizzazione al controllo Struttura a schede.

```
int AddView(
    CRuntimeClass* pViewClass,
    const CString& strViewLabel,
    int iIndex=-1,
    CCreateContext* pContext=NULL);
```

### <a name="parameters"></a>Parametri

*pViewClass (classe pViewClass)*<br/>
[in] Puntatore a una classe di runtime della visualizzazione inserita.

*strViewLabel (strViewLabel)*<br/>
[in] Specifica il testo della scheda.

*Iindex*<br/>
[in] Specifica la posizione in base zero in corrispondenza della quale inserire la vista. Se la posizione è -1, la nuova tabulazione viene inserita alla fine.

*pContext*<br/>
[in] Puntatore alla `CCreateContext` visualizzazione.

### <a name="return-value"></a>Valore restituito

Un indice di visualizzazione se questo metodo ha esito positivo. In caso contrario, -1.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per aggiungere una visualizzazione al controllo struttura a schede incorporato in un frame.

## <a name="ctabviewfindtab"></a><a name="findtab"></a>CTabView::FindTab

Restituisce l'indice della visualizzazione specificata nel controllo struttura a schede.

```
int FindTab(HWND hWndView) const;
```

### <a name="parameters"></a>Parametri

*hWndView (informazioni in questo windows)*<br/>
[in] Handle della visualizzazione.

### <a name="return-value"></a>Valore restituito

Indice della vista, se viene trovato; in caso contrario, -1.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per recuperare l'indice di una vista con un handle specificato.

## <a name="ctabviewgetactiveview"></a><a name="getactiveview"></a>CTabView::GetActiveView

Restituisce un puntatore alla visualizzazione attualmente attiva.

```
CView* GetActiveView() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore valido alla visualizzazione attiva oppure NULL se non è presente alcuna visualizzazione attiva.

### <a name="remarks"></a>Osservazioni

## <a name="ctabviewgettabcontrol"></a><a name="gettabcontrol"></a>CTabView::GetTabControl

Restituisce un riferimento al controllo struttura a schede associato alla visualizzazione.

```
DECLARE_DYNCREATE CMFCTabCtrl& GetTabControl();
```

### <a name="return-value"></a>Valore restituito

Riferimento al controllo Struttura a schede associato alla visualizzazione.

## <a name="ctabviewisscrollbar"></a><a name="isscrollbar"></a>Controllo Dati::IsScrollBar

Chiamato dal framework durante la creazione di una visualizzazione a schede per determinare se la visualizzazione a schede dispone di una barra di scorrimento orizzontale condivisa.

```
virtual BOOL IsScrollBar() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe la visualizzazione a schede deve essere creata con una barra di scorrimento condivisa. In caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Il framework chiama questo metodo quando viene creato un *oggetto CTabView.*

Eseguire l'override di *IsScrollBar* metodo in un *CTabView-classe*derivata e restituire TRUE se si desidera creare una visualizzazione che dispone di una barra di scorrimento orizzontale condivisa.

## <a name="ctabviewonactivateview"></a><a name="onactivateview"></a>CTabView::OnActivateView

Chiamato dal framework quando la visualizzazione a schede viene resa attiva o inattiva.

```
virtual void OnActivateView(CView* view);
```

### <a name="parameters"></a>Parametri

*Mostra*<br/>
[in] Puntatore alla visualizzazione.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita non esegue alcuna operazione. Eseguire l'override `CTabView`di questo metodo in una classe derivata per elaborare questa notifica.

## <a name="ctabviewremoveview"></a><a name="removeview"></a>CTabView::RemoveView

Rimuove la visualizzazione dal controllo Struttura a schede.

```
BOOL RemoveView(int iTabNum);
```

### <a name="parameters"></a>Parametri

*iTabNum*<br/>
[in] Indice della vista da rimuovere.

### <a name="return-value"></a>Valore restituito

Indice della vista rimossa se questo metodo ha esito positivo. In caso contrario -1.

### <a name="remarks"></a>Osservazioni

## <a name="ctabviewsetactiveview"></a><a name="setactiveview"></a>CTabView::SetActiveView

Rende attiva una vista.

```
BOOL SetActiveView(int iTabNum);
```

### <a name="parameters"></a>Parametri

*iTabNum*<br/>
[in] Indice in base zero della vista a schede.

### <a name="return-value"></a>Valore restituito

TRUESe la visualizzazione specificata è stata resa attiva, FALSE se l'indice della vista non è valido.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [CMFCTabCtrl::SetActiveTab](../../mfc/reference/cmfctabctrl-class.md#setactivetab).

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[CMFCTabCtrl](../../mfc/reference/ctabview-class.md)<br/>
[CView (classe)](../../mfc/reference/cview-class.md)
