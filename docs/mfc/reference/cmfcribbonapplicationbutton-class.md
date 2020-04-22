---
title: Classe CMFCRibbonApplicationButton
ms.date: 11/04/2016
f1_keywords:
- CMFCRibbonApplicationButton
- AFXRIBBONBAR/CMFCRibbonApplicationButton
- AFXRIBBONBAR/CMFCRibbonApplicationButton::CMFCRibbonApplicationButton
- AFXRIBBONBAR/CMFCRibbonApplicationButton::SetImage
helpviewer_keywords:
- CMFCRibbonApplicationButton [MFC], CMFCRibbonApplicationButton
- CMFCRibbonApplicationButton [MFC], SetImage
ms.assetid: beb81757-fabd-4641-9130-876ba8505b78
ms.openlocfilehash: b28d075c5fcc4313e1a62ae731b3fad8ef4d8a12
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81749939"
---
# <a name="cmfcribbonapplicationbutton-class"></a>Classe CMFCRibbonApplicationButton

Implementa un pulsante speciale posizionato nell'angolo superiore sinistro della finestra dell'applicazione. Quando si fa clic sul pulsante, questo visualizza un menu che in genere contiene i comuni comandi di **File** come **Apri**, **Salva**ed **Esci**.

## <a name="syntax"></a>Sintassi

```
class CMFCRibbonApplicationButton : public CMFCRibbonButton
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCRibbonApplicationButton::CMFCRibbonApplicationButton](#cmfcribbonapplicationbutton)|Costruisce e inizializza un oggetto `CMFCRibbonApplicationButton`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|`CMFCRibbonApplicationButton::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|
|`CMFCRibbonApplicationButton::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|
|[CMFCRibbonApplicationButton::SetImage](#setimage)|Assegna un'immagine al pulsante dell'applicazione della barra multifunzione.|

## <a name="example"></a>Esempio

L'esempio seguente illustra come usare i vari metodi nella classe `CMFCRibbonApplicationButton` . Nell'esempio viene illustrato come assegnare un'immagine al pulsante dell'applicazione e come impostare la relativa descrizione comando. Questo frammento di codice fa parte dell' [esempio Draw Client](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_DrawClient#4](../../mfc/reference/codesnippet/cpp/cmfcribbonapplicationbutton-class_1.h)]
[!code-cpp[NVC_MFC_DrawClient#5](../../mfc/reference/codesnippet/cpp/cmfcribbonapplicationbutton-class_2.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)

[CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)

[CMFCRibbonApplicationButton](../../mfc/reference/cmfcribbonapplicationbutton-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxRibbonBar.h

## <a name="cmfcribbonapplicationbuttoncmfcribbonapplicationbutton"></a><a name="cmfcribbonapplicationbutton"></a>CMFCRibbonApplicationButton::CMFCRibbonApplicationButton

Costruisce e inizializza un [oggetto CMFCRibbonApplicationButton.](../../mfc/reference/cmfcribbonapplicationbutton-class.md)

```
CMFCRibbonApplicationButton();
CMFCRibbonApplicationButton(UINT uiBmpResID);
CMFCRibbonApplicationButton(HBITMAP hBmp);
```

### <a name="parameters"></a>Parametri

*uiBmpResID (informazioni in stato in stato in stato in stato di identificazione in*<br/>
ID risorsa dell'immagine da visualizzare sul pulsante dell'applicazione.

*hBmp*<br/>
Handle per una bitmap da visualizzare sul pulsante dell'applicazione.

### <a name="remarks"></a>Osservazioni

Il pulsante dell'applicazione della barra multifunzione è un pulsante speciale che si trova nell'angolo superiore sinistro della finestra dell'applicazione. Quando un utente fa clic su questo pulsante, l'applicazione apre un menu che in genere contiene comandi **File** comuni, ad esempio **Apri**, **Salva**ed **Esci**.

## <a name="cmfcribbonapplicationbuttonsetimage"></a><a name="setimage"></a>CMFCRibbonApplicationButton::SetImage

Assegna un'immagine al pulsante dell'applicazione.

```cpp
void SetImage(UINT uiBmpResID);
void SetImage(HBITMAP hBmp);
```

### <a name="parameters"></a>Parametri

*uiBmpResID (informazioni in stato in stato in stato in stato di identificazione in*<br/>
[in] ID risorsa dell'immagine da visualizzare sul pulsante dell'applicazione.

*hBmp*<br/>
[in] Handle per una bitmap da visualizzare sul pulsante dell'applicazione.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo per assegnare una nuova immagine al pulsante dell'applicazione della barra multifunzione dopo aver creato il pulsante. Il pulsante dell'applicazione si trova nell'angolo superiore sinistro della finestra dell'applicazione.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)
