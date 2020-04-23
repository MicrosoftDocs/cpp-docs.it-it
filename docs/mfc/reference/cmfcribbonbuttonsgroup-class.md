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
ms.openlocfilehash: d690e8bf306234e7b742a4c6a0917e5430d92d10
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81754111"
---
# <a name="cmfcribbonbuttonsgroup-class"></a>CMFCRibbonButtonsGroup (classe)

La `CMFCRibbonButtonsGroup` classe consente di organizzare un set di pulsanti della barra multifunzione in un gruppo. Tutti i pulsanti nel gruppo sono direttamente adiacenti l'uno rispetto all'altro in senso orizzontale e racchiusi da un bordo.

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
|[CMFCRibbonButtonsGroup::GetButton](#getbutton)|Restituisce un puntatore al pulsante che si trova in corrispondenza di un indice specificato.|
|[CMFCRibbonButtonsGroup::GetCount](#getcount)|Restituisce il numero di pulsanti nel gruppo.|
|[CMFCRibbonButtonsGroup::GetImageSize](#getimagesize)|Restituisce le dimensioni dell'immagine delle immagini normali nel gruppo della barra multifunzione (esegue l'override [di CMFCRibbonBaseElement::GetImageSize](../../mfc/reference/cmfcribbonbaseelement-class.md#getimagesize).)|
|[CMFCRibbonButtonsGroup::GetRegularSize](#getregularsize)|Restituisce le dimensioni normali dell'elemento della barra multifunzione (esegue l'override di [CMFCRibbonBaseElement::GetRegularSize](../../mfc/reference/cmfcribbonbaseelement-class.md#getregularsize).)|
|[CMFCRibbonButtonsGroup::HasImages](#hasimages)|Indica se `CMFCRibbonButtonsGroup` l'oggetto contiene immagini della barra degli strumenti.|
|[CMFCRibbonButtonsGroup::OnDrawImage](#ondrawimage)|Disegna l'immagine appropriata per un pulsante specificato, a seconda che il pulsante sia normale, evidenziato o disabilitato.|
|[CMFCRibbonButtonsGroup::RemoveAll](#removeall)|Rimuove tutti i `CMFCRibbonButtonsGroup` pulsanti dall'oggetto.|
|[CMFCRibbonButtonsGroup::SetImages](#setimages)|Assegna immagini al gruppo.|
|[CMFCRibbonButtonsGroup::SetParentCategory](#setparentcategory)|Imposta l'elemento padre `CMFCRibbonCategory` dell'oggetto `CMFCRibbonButtonsGroup` e tutti i pulsanti al suo interno (esegue l'override di [CMFCRibbonBaseElement::SetParentCategory](../../mfc/reference/cmfcribbonbaseelement-class.md#setparentcategory).)|

## <a name="remarks"></a>Osservazioni

Il gruppo è derivato da [CMFCBaseRibbonElement](../../mfc/reference/cmfcribbonbaseelement-class.md) e può essere modificato come una singola entità. È possibile posizionare il gruppo in qualsiasi pannello o menu a comparsa.

## <a name="example"></a>Esempio

L'esempio seguente illustra come usare i vari metodi nella classe `CMFCRibbonButtonsGroup` . Nell'esempio viene illustrato `CMFCRibbonButtonsGroup` come creare un oggetto, assegnare immagini al gruppo di pulsanti della barra multifunzione e aggiungere un pulsante al gruppo di pulsanti della barra multifunzione. Questo frammento di codice fa parte dell' [esempio Draw Client](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_DrawClient#2](../../mfc/reference/codesnippet/cpp/cmfcribbonbuttonsgroup-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)

[CMFCRibbonButtonsGroup](../../mfc/reference/cmfcribbonbuttonsgroup-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxribbonbuttonsgroup.h

## <a name="cmfcribbonbuttonsgroupaddbutton"></a><a name="addbutton"></a>CMFCRibbonButtonsGroup::AddButton

Aggiunge un pulsante a un gruppo.

```cpp
void AddButton(CMFCRibbonBaseElement* pButton);
```

### <a name="parameters"></a>Parametri

*pButton (Pulsante)*<br/>
[in] Puntatore a un pulsante da aggiungere.

## <a name="cmfcribbonbuttonsgroupaddbuttons"></a><a name="addbuttons"></a>CMFCRibbonButtonsGroup::AddButtons

Aggiunge un elenco di pulsanti a un gruppo.

```cpp
void AddButtons(
    const CList<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>& lstButtons);
```

### <a name="parameters"></a>Parametri

*lstButtons (pulsanti)*<br/>
[in] Elenco di puntatori ai pulsanti che si desidera aggiungere.

## <a name="cmfcribbonbuttonsgroupcmfcribbonbuttonsgroup"></a><a name="cmfcribbonbuttonsgroup"></a>CMFCRibbonButtonsGroup::CMFCRibbonButtonsGroup

Costruisce un oggetto `CMFCRibbonButtonsGroup`.

```
CMFCRibbonButtonsGroup();
CMFCRibbonButtonsGroup(CMFCRibbonBaseElement* pButton);
```

### <a name="parameters"></a>Parametri

*pButton (Pulsante)*<br/>
[in] Specifica un pulsante da aggiungere `CMFCRibbonButtonsGroup` all'oggetto appena creato.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribbonbuttonsgroupgetbutton"></a><a name="getbutton"></a>CMFCRibbonButtonsGroup::GetButton

Restituisce un puntatore al pulsante che si trova in corrispondenza di un indice specificato.

```
CMFCRibbonBaseElement* GetButton(int i) const;
```

### <a name="parameters"></a>Parametri

*Ho*<br/>
[in] Indice in base zero di un pulsante da restituire.

### <a name="return-value"></a>Valore restituito

Puntatore al pulsante che si trova in corrispondenza dell'indice specificato. NULL se l'indice specificato non è compreso nell'intervallo.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribbonbuttonsgroupgetcount"></a><a name="getcount"></a>CMFCRibbonButtonsGroup::GetCount

Restituisce il numero di pulsanti nel gruppo.

```
int GetCount() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di pulsanti nel gruppo.

## <a name="cmfcribbonbuttonsgroupgetimagesize"></a><a name="getimagesize"></a>CMFCRibbonButtonsGroup::GetImageSize

Recupera le dimensioni dell'immagine `CMFCToolBarImages` `m_Images`di origine del membro protetto.

```
const CSize GetImageSize() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce le dimensioni dell'immagine di origine delle `CSize` immagini della barra degli strumenti, se presenti, o a pari a zero in caso contrario.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribbonbuttonsgroupgetregularsize"></a><a name="getregularsize"></a>CMFCRibbonButtonsGroup::GetRegularSize

Recupera la dimensione massima possibile dell'elemento del gruppo della barra multifunzione.

```
virtual CSize GetRegularSize(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore al contesto di dispositivo del gruppo della barra multifunzione.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribbonbuttonsgrouphasimages"></a><a name="hasimages"></a>CMFCRibbonButtonsGroup::HasImages

Indica se `CMFCRibbonButtonsGroup` l'oggetto contiene immagini della barra degli strumenti.

```
BOOL HasImages() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE `CMFCToolBarImages` se `m_Images` il membro protetto contiene immagini o FALSE in caso contrario.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribbonbuttonsgroupondrawimage"></a><a name="ondrawimage"></a>CMFCRibbonButtonsGroup::OnDrawImage

Disegna l'immagine appropriata per un pulsante specificato, a seconda che il pulsante sia normale, evidenziato o disabilitato.

```
virtual void OnDrawImage(
    CDC* pDC,
    CRect rectImage,
    CMFCRibbonBaseElement* pButton,
    int nImageIndex);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore al contesto `CMFCRibbonButtonsGroup` di periferica dell'oggetto.

*rectImage (immagine rect)*<br/>
[in] Rettangolo all'interno del quale disegnare l'immagine.

*pButton (Pulsante)*<br/>
[in] Pulsante per il quale disegnare l'immagine.

*nImageIndex (indice nImage)*<br/>
[in] Indice dell'immagine da disegnare sul pulsante (in uno dei tre array di immagini per i pulsanti normali, evidenziati o disabilitati).

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribbonbuttonsgroupremoveall"></a><a name="removeall"></a>CMFCRibbonButtonsGroup::RemoveAll

Rimuove tutti i `CMFCRibbonButtonsGroup` pulsanti dall'oggetto.

```cpp
void RemoveAll();
```

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribbonbuttonsgroupsetimages"></a><a name="setimages"></a>CMFCRibbonButtonsGroup::SetImages

Assegna immagini al gruppo di pulsanti della barra multifunzione.

```cpp
void SetImages(
    CMFCToolBarImages* pImages,
    CMFCToolBarImages* pHotImages,
    CMFCToolBarImages* pDisabledImages);
```

### <a name="parameters"></a>Parametri

*pImmagini*<br/>
[in] Immagini regolari.

*pHotImages (immagini di pHot*<br/>
[in] Immagini calde.

*pDisabledImages*<br/>
[in] Immagini disabilitate.

### <a name="remarks"></a>Osservazioni

Chiamare `SetImages` prima di aggiungere pulsanti a un gruppo. Il numero di immagini deve essere maggiore o uguale al numero di pulsanti da aggiungere al gruppo.

> [!NOTE]
> Le immagini calde sono immagini visualizzate quando l'utente passa il mouse sopra il pulsante. Le immagini disabilitate sono immagini che vengono visualizzate quando il pulsante è disabilitato.

## <a name="cmfcribbonbuttonsgroupsetparentcategory"></a><a name="setparentcategory"></a>CMFCRibbonButtonsGroup::SetParentCategory

Imposta l'elemento padre `CMFCRibbonCategory` dell'oggetto `CMFCRibbonButtonsGroup` e tutti i pulsanti al suo interno.

```
virtual void SetParentCategory(CMFCRibbonCategory* pCategory);
```

### <a name="parameters"></a>Parametri

*pCategoria*<br/>
[in] Puntatore alla categoria padre da impostare (i gruppi a schede nei controlli della barra multifunzione sono denominati categorie).

### <a name="remarks"></a>Osservazioni

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)
