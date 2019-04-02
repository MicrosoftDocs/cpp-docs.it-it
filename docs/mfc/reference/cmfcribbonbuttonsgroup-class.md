---
title: CMFCRibbonButtonsGroup (classe)
ms.date: 11/04/2016
f1_keywords:
- CMFCRibbonButtonsGroup
- AFXRIBBONBUTTONSGROUP/CMFCRibbonButtonsGroup
- AFXRIBBONBUTTONSGROUP/CMFCRibbonButtonsGroup::CMFCRibbonButtonsGroup
- AFXRIBBONBUTTONSGROUP/CMFCRibbonButtonsGroup::AddButton
- AFXRIBBONBUTTONSGROUP/CMFCRibbonButtonsGroup::AddButtons
- AFXRIBBONBUTTONSGROUP/CMFCRibbonButtonsGroup::GetButton
- AFXRIBBONBUTTONSGROUP/CMFCRibbonButtonsGroup::GetCount
- AFXRIBBONBUTTONSGROUP/CMFCRibbonButtonsGroup::GetImageSize
- AFXRIBBONBUTTONSGROUP/CMFCRibbonButtonsGroup::GetRegularSize
- AFXRIBBONBUTTONSGROUP/CMFCRibbonButtonsGroup::HasImages
- AFXRIBBONBUTTONSGROUP/CMFCRibbonButtonsGroup::OnDrawImage
- AFXRIBBONBUTTONSGROUP/CMFCRibbonButtonsGroup::RemoveAll
- AFXRIBBONBUTTONSGROUP/CMFCRibbonButtonsGroup::SetImages
- AFXRIBBONBUTTONSGROUP/CMFCRibbonButtonsGroup::SetParentCategory
helpviewer_keywords:
- CMFCRibbonButtonsGroup [MFC], CMFCRibbonButtonsGroup
- CMFCRibbonButtonsGroup [MFC], AddButton
- CMFCRibbonButtonsGroup [MFC], AddButtons
- CMFCRibbonButtonsGroup [MFC], GetButton
- CMFCRibbonButtonsGroup [MFC], GetCount
- CMFCRibbonButtonsGroup [MFC], GetImageSize
- CMFCRibbonButtonsGroup [MFC], GetRegularSize
- CMFCRibbonButtonsGroup [MFC], HasImages
- CMFCRibbonButtonsGroup [MFC], OnDrawImage
- CMFCRibbonButtonsGroup [MFC], RemoveAll
- CMFCRibbonButtonsGroup [MFC], SetImages
- CMFCRibbonButtonsGroup [MFC], SetParentCategory
ms.assetid: b993d93e-fc1a-472f-a87f-1d7b7b499845
ms.openlocfilehash: 39979d48eb7b0f7aba9dbe7bd42c2f91845af968
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58781991"
---
# <a name="cmfcribbonbuttonsgroup-class"></a>CMFCRibbonButtonsGroup (classe)

Il `CMFCRibbonButtonsGroup` classe consente di organizzare un set di pulsanti della barra multifunzione in un gruppo. Tutti i pulsanti nel gruppo sono direttamente adiacenti l'uno rispetto all'altro in senso orizzontale e racchiusi da un bordo.

## <a name="syntax"></a>Sintassi

```
class CMFCRibbonButtonsGroup : public CMFCRibbonBaseElement
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCRibbonButtonsGroup::CMFCRibbonButtonsGroup](#cmfcribbonbuttonsgroup)|Costruisce un oggetto `CMFCRibbonButtonsGroup`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCRibbonButtonsGroup::AddButton](#addbutton)|Aggiunge un pulsante a un gruppo.|
|[CMFCRibbonButtonsGroup::AddButtons](#addbuttons)|Aggiunge un elenco di pulsanti a un gruppo.|
|[CMFCRibbonButtonsGroup::GetButton](#getbutton)|Restituisce un puntatore al pulsante che si trova in corrispondenza dell'indice specificato.|
|[CMFCRibbonButtonsGroup::GetCount](#getcount)|Restituisce il numero di pulsanti nel gruppo.|
|[CMFCRibbonButtonsGroup::GetImageSize](#getimagesize)|Restituisce le dimensioni dell'immagine delle immagini normale del gruppo della barra multifunzione (esegue l'override [cmfcribbonbaseelement:: Getimagesize](../../mfc/reference/cmfcribbonbaseelement-class.md#getimagesize).)|
|[CMFCRibbonButtonsGroup::GetRegularSize](#getregularsize)|Restituisce la dimensione regolare dell'elemento della barra multifunzione (esegue l'override [cmfcribbonbaseelement:: Getregularsize](../../mfc/reference/cmfcribbonbaseelement-class.md#getregularsize).)|
|[CMFCRibbonButtonsGroup::HasImages](#hasimages)|I report se il `CMFCRibbonButtonsGroup` oggetto contiene le immagini della barra degli strumenti.|
|[CMFCRibbonButtonsGroup::OnDrawImage](#ondrawimage)|Disegna l'immagine appropriata per il pulsante specificato, a seconda se il pulsante è normale, evidenziato o disabilitata.|
|[CMFCRibbonButtonsGroup::RemoveAll](#removeall)|Rimuove tutti i pulsanti dal `CMFCRibbonButtonsGroup` oggetto.|
|[CMFCRibbonButtonsGroup::SetImages](#setimages)|Assegna le immagini al gruppo.|
|[CMFCRibbonButtonsGroup::SetParentCategory](#setparentcategory)|Imposta l'elemento padre `CMFCRibbonCategory` del `CMFCRibbonButtonsGroup` oggetto e tutti i pulsanti all'interno di esso (esegue l'override [cmfcribbonbaseelement:: Setparentcategory](../../mfc/reference/cmfcribbonbaseelement-class.md#setparentcategory).)|

## <a name="remarks"></a>Note

Il gruppo è derivato da [CMFCBaseRibbonElement](../../mfc/reference/cmfcribbonbaseelement-class.md) e possono essere modificati come una singola entità. È possibile posizionare il gruppo nei menu popup o pannello.

## <a name="example"></a>Esempio

L'esempio seguente illustra come usare i vari metodi nella classe `CMFCRibbonButtonsGroup` . Nell'esempio viene illustrato come costruire un `CMFCRibbonButtonsGroup` dell'oggetto, assegnare le immagini per il gruppo di pulsanti della barra multifunzione e aggiungere un pulsante per il gruppo di pulsanti della barra multifunzione. Questo frammento di codice fa parte dell' [esempio Draw Client](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_DrawClient#2](../../mfc/reference/codesnippet/cpp/cmfcribbonbuttonsgroup-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)

[CMFCRibbonButtonsGroup](../../mfc/reference/cmfcribbonbuttonsgroup-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxribbonbuttonsgroup. h

##  <a name="addbutton"></a>  CMFCRibbonButtonsGroup::AddButton

Aggiunge un pulsante a un gruppo.

```
void AddButton(CMFCRibbonBaseElement* pButton);
```

### <a name="parameters"></a>Parametri

*pButton*<br/>
[in] Puntatore a un pulsante per aggiungere.

##  <a name="addbuttons"></a>  CMFCRibbonButtonsGroup::AddButtons

Aggiunge un elenco di pulsanti a un gruppo.

```
void AddButtons(
    const CList<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>& lstButtons);
```

### <a name="parameters"></a>Parametri

*lstButtons*<br/>
[in] Un elenco di puntatori a pulsanti che si desidera aggiungere.

##  <a name="cmfcribbonbuttonsgroup"></a>  CMFCRibbonButtonsGroup::CMFCRibbonButtonsGroup

Costruisce un oggetto `CMFCRibbonButtonsGroup`.

```
CMFCRibbonButtonsGroup();
CMFCRibbonButtonsGroup(CMFCRibbonBaseElement* pButton);
```

### <a name="parameters"></a>Parametri

*pButton*<br/>
[in] Specifica un pulsante per aggiungere all'oggetto appena creato `CMFCRibbonButtonsGroup` oggetto.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="getbutton"></a>  CMFCRibbonButtonsGroup::GetButton

Restituisce un puntatore al pulsante che si trova in corrispondenza dell'indice specificato.

```
CMFCRibbonBaseElement* GetButton(int i) const;
```

### <a name="parameters"></a>Parametri

*i*<br/>
[in] Un indice in base zero di un pulsante da restituire.

### <a name="return-value"></a>Valore restituito

Puntatore al pulsante che si trova in corrispondenza dell'indice specificato. NULL se l'indice specificato è compreso nell'intervallo.

### <a name="remarks"></a>Note

##  <a name="getcount"></a>  CMFCRibbonButtonsGroup::GetCount

Restituisce il numero di pulsanti nel gruppo.

```
int GetCount() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di pulsanti del gruppo.

##  <a name="getimagesize"></a>  CMFCRibbonButtonsGroup::GetImageSize

Recupera la dimensione di immagine di origine dell'elemento protetto `CMFCToolBarImages` membro `m_Images`.

```
const CSize GetImageSize() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce le dimensioni dell'immagine origine delle immagini della barra degli strumenti, se presenti, o un `CSize` pari a zero se non.

### <a name="remarks"></a>Note

##  <a name="getregularsize"></a>  CMFCRibbonButtonsGroup::GetRegularSize

Recupera la dimensione massima possibile dell'elemento del gruppo della barra multifunzione.

```
virtual CSize GetRegularSize(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore al contesto di dispositivo del gruppo della barra multifunzione.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="hasimages"></a>  CMFCRibbonButtonsGroup::HasImages

I report se il `CMFCRibbonButtonsGroup` oggetto contiene le immagini della barra degli strumenti.

```
BOOL HasImages() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il metodo protetto `CMFCToolBarImages` membro `m_Images` contiene immagini, o FALSE se non.

### <a name="remarks"></a>Note

##  <a name="ondrawimage"></a>  CMFCRibbonButtonsGroup::OnDrawImage

Disegna l'immagine appropriata per il pulsante specificato, a seconda se il pulsante è normale, evidenziato o disabilitata.

```
virtual void OnDrawImage(
    CDC* pDC,
    CRect rectImage,
    CMFCRibbonBaseElement* pButton,
    int nImageIndex);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore al contesto di dispositivo del `CMFCRibbonButtonsGroup` oggetto.

*rectImage*<br/>
[in] Il rettangolo all'interno della quale disegnare l'immagine.

*pButton*<br/>
[in] Il pulsante per la quale disegnare l'immagine.

*nImageIndex*<br/>
[in] Indice dell'immagine da disegnare sul pulsante (in una delle matrici tre immagini per i pulsanti normali, evidenziati o disabilitati).

### <a name="remarks"></a>Note

##  <a name="removeall"></a>  CMFCRibbonButtonsGroup::RemoveAll

Rimuove tutti i pulsanti dal `CMFCRibbonButtonsGroup` oggetto.

```
void RemoveAll();
```

### <a name="remarks"></a>Note

##  <a name="setimages"></a>  CMFCRibbonButtonsGroup::SetImages

Assegna le immagini al gruppo di pulsanti della barra multifunzione.

```
void SetImages(
    CMFCToolBarImages* pImages,
    CMFCToolBarImages* pHotImages,
    CMFCToolBarImages* pDisabledImages);
```

### <a name="parameters"></a>Parametri

*pImages*<br/>
[in] Immagini regolari.

*pHotImages*<br/>
[in] Immagini a caldo.

*pDisabledImages*<br/>
[in] Immagini disabilitate.

### <a name="remarks"></a>Note

Chiamare `SetImages` prima di aggiungere pulsanti a un gruppo. Il numero di immagini deve essere maggiore o uguale al numero di pulsanti da aggiungere al gruppo.

> [!NOTE]
>  Hot immagini sono immagini che vengono visualizzate quando l'utente posiziona il mouse su esso. Disabilitato le immagini sono immagini che vengono visualizzate quando il pulsante è disabilitato.

##  <a name="setparentcategory"></a>  CMFCRibbonButtonsGroup::SetParentCategory

Imposta l'elemento padre `CMFCRibbonCategory` del `CMFCRibbonButtonsGroup` oggetto e tutti i pulsanti in esso contenuti.

```
virtual void SetParentCategory(CMFCRibbonCategory* pCategory);
```

### <a name="parameters"></a>Parametri

*pCategory*<br/>
[in] Puntatore alla categoria padre impostare (i gruppi a schede nella barra multifunzione vengono chiamati categorie).

### <a name="remarks"></a>Note

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)
