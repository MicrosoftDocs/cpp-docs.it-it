---
title: CMFCImagePaintArea (classe)
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
ms.openlocfilehash: 4e73bd7bc1a28317dbfc452df1f45541dfcbfd21
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374440"
---
# <a name="cmfcimagepaintarea-class"></a>CMFCImagePaintArea (classe)

Fornisce l'area dell'immagine utilizzata per modificare un'immagine in una finestra di dialogo dell'editor di immagini.

## <a name="syntax"></a>Sintassi

```
class CMFCImagePaintArea : public CButton
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|||
|-|-|
|Nome|Descrizione|
|[CMFCImagePaintArea::CMFCImagePaintArea](#cmfcimagepaintarea)|Costruisce un oggetto `CMFCImagePaintArea`.|
|`CMFCImagePaintArea::~CMFCImagePaintArea`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|||
|-|-|
|Nome|Descrizione|
|[CMFCImagePaintArea::GetMode](#getmode)|Recupera la modalità di disegno corrente.|
|[CMFCImagePaintArea::SetBitmap](#setbitmap)|Imposta l'immagine bitmap per l'area dell'immagine.|
|[CMFCImagePaintArea::SetColor](#setcolor)|Imposta il colore di disegno corrente.|
|[CMFCImagePaintArea::SetMode](#setmode)|Imposta la modalità di disegno corrente.|

### <a name="remarks"></a>Osservazioni

Questa classe non è destinata a essere utilizzata direttamente dal codice.

Il framework utilizza questa classe per visualizzare l'area dell'immagine in una finestra di dialogo dell'editor di immagini. Per ulteriori informazioni sulla finestra di dialogo dell'editor di immagini, vedere [Classe CMFCImageEditorDialog](../../mfc/reference/cmfcimageeditordialog-class.md).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come `CMFCImagePaintArea` costruire un oggetto della classe, impostare il colore di disegno corrente, impostare la modalità di disegno corrente e impostare l'immagine bitmap per l'area dell'immagine.

[!code-cpp[NVC_MFC_RibbonApp#37](../../mfc/reference/codesnippet/cpp/cmfcimagepaintarea-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CButton](../../mfc/reference/cbutton-class.md)

[CMFCImagePaintArea](../../mfc/reference/cmfcimagepaintarea-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afximagepaintarea.h

## <a name="cmfcimagepaintareacmfcimagepaintarea"></a><a name="cmfcimagepaintarea"></a>CMFCImagePaintArea::CMFCImagePaintArea

Costruisce un oggetto `CMFCImagePaintArea`.

```
CMFCImagePaintArea(CMFCImageEditorDialog* pParentDlg);
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*pParentDlg*|[in] Puntatore alla finestra di dialogo padre dell'editor di immagini.|

## <a name="cmfcimagepaintareagetmode"></a><a name="getmode"></a>CMFCImagePaintArea::GetMode

Recupera la modalità di disegno corrente.

```
IMAGE_EDIT_MODE GetMode() const;
```

### <a name="return-value"></a>Valore restituito

Valore [IMAGE_EDIT_MODE](cmfcimagepaintarea-image-edit-mode-enumeration.md) che specifica la modalità di disegno corrente.

## <a name="cmfcimagepaintareasetbitmap"></a><a name="setbitmap"></a>CMFCImagePaintArea::SetBitmap

Imposta l'immagine bitmap per l'area dell'immagine.

```
void SetBitmap(CBitmap* pBitmap);
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*pBitmap*|[in] Nuova immagine bitmap da visualizzare.|

### <a name="remarks"></a>Osservazioni

Se *pBitmap* è NULL, questo metodo imposta la dimensione dell'area di disegno modificabile su zero. In caso contrario, imposta le dimensioni dell'area di disegno modificabile sulle dimensioni dell'immagine bitmap fornita.

## <a name="cmfcimagepaintareasetcolor"></a><a name="setcolor"></a>CMFCImagePaintArea::SetColor

Imposta il colore di disegno corrente.

```
void SetColor(COLORREF color);
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*Colore*|[in] Nuovo colore di disegno.|

### <a name="remarks"></a>Osservazioni

Quando si seleziona un colore dalla barra della tavolozza dell'editor di immagini o dal selettore colore, il framework chiama questo metodo per aggiornare il colore di disegno corrente. Il colore di disegno iniziale è nero (un valore COLORREF pari a 0).

Il colore di disegno viene utilizzato dalla finestra di dialogo dell'editor di immagini per tutte le modalità di disegno, ad eccezione di IMAGE_EDIT_MODE_COLOR. Per ulteriori informazioni sulle modalità di disegno, vedere [CMFCImagePaintArea::IMAGE_EDIT_MODE Enumeration](cmfcimagepaintarea-image-edit-mode-enumeration.md).

## <a name="cmfcimagepaintareasetmode"></a><a name="setmode"></a>CMFCImagePaintArea::SetMode

Imposta la modalità di disegno corrente.

```
void SetMode(IMAGE_EDIT_MODE mode);
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*Modalità*|[in] Valore [IMAGE_EDIT_MODE](cmfcimagepaintarea-image-edit-mode-enumeration.md) che specifica la modalità di disegno corrente.|

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[CMFCImageEditorDialog (classe)](../../mfc/reference/cmfcimageeditordialog-class.md)
