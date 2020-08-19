---
title: Classe Enumerazione CMFCImagePaintArea
ms.date: 11/04/2016
f1_keywords:
- CMFCImagePaintArea
- AFXIMAGEPAINTAREA/CMFCImagePaintArea
- AFXIMAGEPAINTAREA/CMFCImagePaintArea::CMFCImagePaintArea
- AFXIMAGEPAINTAREA/CMFCImagePaintArea::GetMode
- AFXIMAGEPAINTAREA/CMFCImagePaintArea::SetBitmap
- AFXIMAGEPAINTAREA/CMFCImagePaintArea::SetColor
- AFXIMAGEPAINTAREA/CMFCImagePaintArea::SetMode
helpviewer_keywords:
- CMFCImagePaintArea [MFC], CMFCImagePaintArea
- CMFCImagePaintArea [MFC], GetMode
- CMFCImagePaintArea [MFC], SetBitmap
- CMFCImagePaintArea [MFC], SetColor
- CMFCImagePaintArea [MFC], SetMode
ms.assetid: c59eec22-f15a-4e58-8c4d-4a18a41f4452
ms.openlocfilehash: 3d8bfc40c3c9e937ad5acd7228e49877af65204a
ms.sourcegitcommit: 1839405b97036891b6e4d37c99def044d6f37eff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/18/2020
ms.locfileid: "88562155"
---
# <a name="cmfcimagepaintarea-class"></a>Classe Enumerazione CMFCImagePaintArea

Fornisce l'area immagine utilizzata per modificare un'immagine in una finestra di dialogo dell'editor di immagini.

## <a name="syntax"></a>Sintassi

```
class CMFCImagePaintArea : public CButton
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|||
|-|-|
|Nome|Descrizione|
|[Enumerazione CMFCImagePaintArea:: Enumerazione CMFCImagePaintArea](#cmfcimagepaintarea)|Costruisce un oggetto `CMFCImagePaintArea`.|
|`CMFCImagePaintArea::~CMFCImagePaintArea`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|||
|-|-|
|Nome|Descrizione|
|[Enumerazione CMFCImagePaintArea:: GetMode](#getmode)|Recupera la modalità di disegno corrente.|
|[Enumerazione CMFCImagePaintArea:: sebitmap](#setbitmap)|Imposta l'immagine bitmap per l'area dell'immagine.|
|[Enumerazione CMFCImagePaintArea:: ToColor](#setcolor)|Imposta il colore del disegno corrente.|
|[Enumerazione CMFCImagePaintArea:: semode](#setmode)|Imposta la modalità di disegno corrente.|

### <a name="remarks"></a>Osservazioni

Questa classe non è destinata a essere utilizzata direttamente dal codice.

Il Framework usa questa classe per visualizzare l'area dell'immagine in una finestra di dialogo dell'editor di immagini. Per ulteriori informazioni sulla finestra di dialogo Editor di immagini, vedere [classe CMFCImageEditorDialog](../../mfc/reference/cmfcimageeditordialog-class.md).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come costruire un oggetto della `CMFCImagePaintArea` classe, impostare il colore di disegno corrente, impostare la modalità di disegno corrente e impostare l'immagine bitmap per l'area dell'immagine.

[!code-cpp[NVC_MFC_RibbonApp#37](../../mfc/reference/codesnippet/cpp/cmfcimagepaintarea-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CButton](../../mfc/reference/cbutton-class.md)

[Enumerazione CMFCImagePaintArea](../../mfc/reference/cmfcimagepaintarea-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afximagepaintarea. h

## <a name="cmfcimagepaintareacmfcimagepaintarea"></a><a name="cmfcimagepaintarea"></a> Enumerazione CMFCImagePaintArea:: Enumerazione CMFCImagePaintArea

Costruisce un oggetto `CMFCImagePaintArea`.

```
CMFCImagePaintArea(CMFCImageEditorDialog* pParentDlg);
```

### <a name="parameters"></a>Parametri

*pParentDlg*\
in Puntatore alla finestra di dialogo padre dell'editor di immagini.

## <a name="cmfcimagepaintareagetmode"></a><a name="getmode"></a> Enumerazione CMFCImagePaintArea:: GetMode

Recupera la modalità di disegno corrente.

```
IMAGE_EDIT_MODE GetMode() const;
```

### <a name="return-value"></a>Valore restituito

Valore [IMAGE_EDIT_MODE](cmfcimagepaintarea-image-edit-mode-enumeration.md) che specifica la modalità di disegno corrente.

## <a name="cmfcimagepaintareasetbitmap"></a><a name="setbitmap"></a> Enumerazione CMFCImagePaintArea:: sebitmap

Imposta l'immagine bitmap per l'area dell'immagine.

```cpp
void SetBitmap(CBitmap* pBitmap);
```

### <a name="parameters"></a>Parametri

*pBitmap*\
in Nuova immagine bitmap da visualizzare.

### <a name="remarks"></a>Osservazioni

Se *pBitmap* è null, questo metodo imposta la dimensione dell'area di disegno modificabile su zero. In caso contrario, imposta la dimensione dell'area di disegno modificabile sulla dimensione dell'immagine bitmap fornita.

## <a name="cmfcimagepaintareasetcolor"></a><a name="setcolor"></a> Enumerazione CMFCImagePaintArea:: ToColor

Imposta il colore del disegno corrente.

```cpp
void SetColor(COLORREF color);
```

### <a name="parameters"></a>Parametri

*Colore*\
in Nuovo colore del disegno.

### <a name="remarks"></a>Osservazioni

Quando si seleziona un colore dalla barra della tavolozza dell'editor di immagini o dalla selezione colori, il Framework chiama questo metodo per aggiornare il colore del disegno corrente. Il colore iniziale del disegno è nero (il valore COLORREF è 0).

Il colore di disegno viene utilizzato dalla finestra di dialogo Editor di immagini per tutte le modalità di disegno ad eccezione di IMAGE_EDIT_MODE_COLOR. Per ulteriori informazioni sulle modalità di disegno, vedere [Enumerazione CMFCImagePaintArea:: IMAGE_EDIT_MODE Enumeration](cmfcimagepaintarea-image-edit-mode-enumeration.md).

## <a name="cmfcimagepaintareasetmode"></a><a name="setmode"></a> Enumerazione CMFCImagePaintArea:: semode

Imposta la modalità di disegno corrente.

```cpp
void SetMode(IMAGE_EDIT_MODE mode);
```

### <a name="parameters"></a>Parametri

*modalità*\
in Valore [IMAGE_EDIT_MODE](cmfcimagepaintarea-image-edit-mode-enumeration.md) che specifica la modalità di disegno corrente.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCImageEditorDialog](../../mfc/reference/cmfcimageeditordialog-class.md)
