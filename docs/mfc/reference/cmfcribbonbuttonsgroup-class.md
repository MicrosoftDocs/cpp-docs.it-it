---
description: 'Altre informazioni su: classe CMFCRibbonButtonsGroup'
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
ms.openlocfilehash: 0b86ce6ff21bd36daaac9d68ce511ae395141170
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97293829"
---
# <a name="cmfcribbonbuttonsgroup-class"></a>CMFCRibbonButtonsGroup (classe)

La `CMFCRibbonButtonsGroup` classe consente di organizzare un set di pulsanti della barra multifunzione in un gruppo. Tutti i pulsanti nel gruppo sono direttamente adiacenti l'uno rispetto all'altro in senso orizzontale e racchiusi da un bordo.

## <a name="syntax"></a>Sintassi

```
class CMFCRibbonButtonsGroup : public CMFCRibbonBaseElement
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCRibbonButtonsGroup::CMFCRibbonButtonsGroup](#cmfcribbonbuttonsgroup)|Costruisce un oggetto `CMFCRibbonButtonsGroup`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCRibbonButtonsGroup:: AddButton](#addbutton)|Aggiunge un pulsante a un gruppo.|
|[CMFCRibbonButtonsGroup:: AddButtons](#addbuttons)|Aggiunge un elenco di pulsanti a un gruppo.|
|[CMFCRibbonButtonsGroup:: GetButton](#getbutton)|Restituisce un puntatore al pulsante che si trova in corrispondenza di un indice specificato.|
|[CMFCRibbonButtonsGroup:: GetCount](#getcount)|Restituisce il numero di pulsanti nel gruppo.|
|[CMFCRibbonButtonsGroup::GetImageSize](#getimagesize)|Restituisce le dimensioni dell'immagine delle immagini normali nel gruppo della barra multifunzione (esegue l'override di [CMFCRibbonBaseElement:: getimagesize](../../mfc/reference/cmfcribbonbaseelement-class.md#getimagesize).)|
|[CMFCRibbonButtonsGroup::GetRegularSize](#getregularsize)|Restituisce la dimensione normale dell'elemento Ribbon (esegue l'override di [CMFCRibbonBaseElement:: GetRegularSize](../../mfc/reference/cmfcribbonbaseelement-class.md#getregularsize).)|
|[CMFCRibbonButtonsGroup::HasImages](#hasimages)|Indica se l' `CMFCRibbonButtonsGroup` oggetto contiene immagini della barra degli strumenti.|
|[CMFCRibbonButtonsGroup::OnDrawImage](#ondrawimage)|Disegna l'immagine appropriata per un pulsante specificato, a seconda che il pulsante sia normale, evidenziato o disabilitato.|
|[CMFCRibbonButtonsGroup::RemoveAll](#removeall)|Rimuove tutti i pulsanti dall' `CMFCRibbonButtonsGroup` oggetto.|
|[CMFCRibbonButtonsGroup:: toimages](#setimages)|Assegna le immagini al gruppo.|
|[CMFCRibbonButtonsGroup::SetParentCategory](#setparentcategory)|Imposta l'elemento padre `CMFCRibbonCategory` dell' `CMFCRibbonButtonsGroup` oggetto e tutti i pulsanti al suo interno (esegue l'override di [CMFCRibbonBaseElement:: SetParentCategory](../../mfc/reference/cmfcribbonbaseelement-class.md#setparentcategory).)|

## <a name="remarks"></a>Commenti

Il gruppo deriva da [CMFCBaseRibbonElement](../../mfc/reference/cmfcribbonbaseelement-class.md) e può essere modificato come una singola entità. È possibile posizionare il gruppo in qualsiasi pannello o menu di scelta rapida.

## <a name="example"></a>Esempio

L'esempio seguente illustra come usare i vari metodi nella classe `CMFCRibbonButtonsGroup` . Nell'esempio viene illustrato come costruire un `CMFCRibbonButtonsGroup` oggetto, assegnare immagini al gruppo di pulsanti della barra multifunzione e aggiungere un pulsante al gruppo di pulsanti della barra multifunzione. Questo frammento di codice fa parte dell' [esempio Draw Client](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_DrawClient#2](../../mfc/reference/codesnippet/cpp/cmfcribbonbuttonsgroup-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)

[CMFCRibbonButtonsGroup](../../mfc/reference/cmfcribbonbuttonsgroup-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxribbonbuttonsgroup. h

## <a name="cmfcribbonbuttonsgroupaddbutton"></a><a name="addbutton"></a> CMFCRibbonButtonsGroup:: AddButton

Aggiunge un pulsante a un gruppo.

```cpp
void AddButton(CMFCRibbonBaseElement* pButton);
```

### <a name="parameters"></a>Parametri

*p*<br/>
in Puntatore a un pulsante da aggiungere.

## <a name="cmfcribbonbuttonsgroupaddbuttons"></a><a name="addbuttons"></a> CMFCRibbonButtonsGroup:: AddButtons

Aggiunge un elenco di pulsanti a un gruppo.

```cpp
void AddButtons(
    const CList<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>& lstButtons);
```

### <a name="parameters"></a>Parametri

*lstButtons*<br/>
in Elenco di puntatori ai pulsanti che si desidera aggiungere.

## <a name="cmfcribbonbuttonsgroupcmfcribbonbuttonsgroup"></a><a name="cmfcribbonbuttonsgroup"></a> CMFCRibbonButtonsGroup:: CMFCRibbonButtonsGroup

Costruisce un oggetto `CMFCRibbonButtonsGroup`.

```
CMFCRibbonButtonsGroup();
CMFCRibbonButtonsGroup(CMFCRibbonBaseElement* pButton);
```

### <a name="parameters"></a>Parametri

*p*<br/>
in Specifica un pulsante da aggiungere all'oggetto appena creato `CMFCRibbonButtonsGroup` .

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcribbonbuttonsgroupgetbutton"></a><a name="getbutton"></a> CMFCRibbonButtonsGroup:: GetButton

Restituisce un puntatore al pulsante che si trova in corrispondenza di un indice specificato.

```
CMFCRibbonBaseElement* GetButton(int i) const;
```

### <a name="parameters"></a>Parametri

*i*<br/>
in Indice in base zero di un pulsante da restituire.

### <a name="return-value"></a>Valore restituito

Puntatore al pulsante che si trova in corrispondenza dell'indice specificato. NULL se l'indice specificato non è compreso nell'intervallo.

### <a name="remarks"></a>Commenti

## <a name="cmfcribbonbuttonsgroupgetcount"></a><a name="getcount"></a> CMFCRibbonButtonsGroup:: GetCount

Restituisce il numero di pulsanti nel gruppo.

```
int GetCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di pulsanti nel gruppo.

## <a name="cmfcribbonbuttonsgroupgetimagesize"></a><a name="getimagesize"></a> CMFCRibbonButtonsGroup:: GetImageSize

Recupera le dimensioni dell'immagine di origine del `CMFCToolBarImages` membro protetto `m_Images` .

```
const CSize GetImageSize() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce le dimensioni dell'immagine di origine delle immagini della barra degli strumenti, se presenti, oppure `CSize` di zero in caso contrario.

### <a name="remarks"></a>Commenti

## <a name="cmfcribbonbuttonsgroupgetregularsize"></a><a name="getregularsize"></a> CMFCRibbonButtonsGroup:: GetRegularSize

Recupera la dimensione massima possibile dell'elemento del gruppo della barra multifunzione.

```
virtual CSize GetRegularSize(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Puntatore al contesto di dispositivo del gruppo della barra multifunzione.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcribbonbuttonsgrouphasimages"></a><a name="hasimages"></a> CMFCRibbonButtonsGroup:: HasImages

Indica se l' `CMFCRibbonButtonsGroup` oggetto contiene immagini della barra degli strumenti.

```
BOOL HasImages() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il `CMFCToolBarImages` membro protetto `m_Images` contiene immagini o false in caso contrario.

### <a name="remarks"></a>Commenti

## <a name="cmfcribbonbuttonsgroupondrawimage"></a><a name="ondrawimage"></a> CMFCRibbonButtonsGroup:: OnDrawImage

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
in Puntatore al contesto di dispositivo dell' `CMFCRibbonButtonsGroup` oggetto.

*rectImage*<br/>
in Rettangolo all'interno del quale creare l'immagine.

*p*<br/>
in Pulsante per il quale creare l'immagine.

*nImageIndex*<br/>
in Indice dell'immagine da estrarre sul pulsante (in una delle tre matrici di immagini per i pulsanti normale, evidenziato o disabilitato).

### <a name="remarks"></a>Commenti

## <a name="cmfcribbonbuttonsgroupremoveall"></a><a name="removeall"></a> CMFCRibbonButtonsGroup:: RemoveAll

Rimuove tutti i pulsanti dall' `CMFCRibbonButtonsGroup` oggetto.

```cpp
void RemoveAll();
```

### <a name="remarks"></a>Commenti

## <a name="cmfcribbonbuttonsgroupsetimages"></a><a name="setimages"></a> CMFCRibbonButtonsGroup:: toimages

Assegna immagini al gruppo di pulsanti della barra multifunzione.

```cpp
void SetImages(
    CMFCToolBarImages* pImages,
    CMFCToolBarImages* pHotImages,
    CMFCToolBarImages* pDisabledImages);
```

### <a name="parameters"></a>Parametri

*pImages*<br/>
in Immagini regolari.

*pHotImages*<br/>
in Immagini sensibili.

*pDisabledImages*<br/>
in Immagini disabilitate.

### <a name="remarks"></a>Commenti

Chiamare `SetImages` prima di aggiungere pulsanti a un gruppo. Il numero di immagini deve essere maggiore o uguale al numero di pulsanti da aggiungere al gruppo.

> [!NOTE]
> Le immagini sensibili sono immagini visualizzate quando l'utente passa il puntatore del mouse sul pulsante. Le immagini disabilitate sono immagini che vengono visualizzate quando il pulsante è disabilitato.

## <a name="cmfcribbonbuttonsgroupsetparentcategory"></a><a name="setparentcategory"></a> CMFCRibbonButtonsGroup:: SetParentCategory

Imposta l'elemento padre `CMFCRibbonCategory` dell' `CMFCRibbonButtonsGroup` oggetto e tutti i pulsanti al suo interno.

```
virtual void SetParentCategory(CMFCRibbonCategory* pCategory);
```

### <a name="parameters"></a>Parametri

*pCategory*<br/>
in Puntatore alla categoria padre da impostare (i gruppi a schede nei controlli della barra multifunzione sono denominati categorie).

### <a name="remarks"></a>Commenti

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)
