---
title: Classe CMFCImagePaintArea
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
ms.openlocfilehash: af1d485d6d6281e909e33176ee1ae2b736c76600
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50641389"
---
# <a name="cmfcimagepaintarea-class"></a>Classe CMFCImagePaintArea

Fornisce l'area dell'immagine che consente di modificare un'immagine in una finestra di dialogo dell'editor di immagini.

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
|[CMFCImagePaintArea::SetColor](#setcolor)|Imposta il colore di disegno.|
|[CMFCImagePaintArea::SetMode](#setmode)|Imposta la modalità di disegno corrente.|

### <a name="remarks"></a>Note

Questa classe non deve essere usato direttamente dal codice.

Il framework utilizza questa classe per visualizzare l'area dell'immagine in una finestra di dialogo dell'editor di immagini. Per altre informazioni nella finestra di dialogo dell'editor di immagini, vedere [classe CMFCImageEditorDialog](../../mfc/reference/cmfcimageeditordialog-class.md).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come costruire un oggetto del `CMFCImagePaintArea` classe, impostare colori di disegno, impostare la modalità di disegno corrente e impostare l'immagine bitmap per l'area dell'immagine corrente.

[!code-cpp[NVC_MFC_RibbonApp#37](../../mfc/reference/codesnippet/cpp/cmfcimagepaintarea-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CButton](../../mfc/reference/cbutton-class.md)

[CMFCImagePaintArea](../../mfc/reference/cmfcimagepaintarea-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afximagepaintarea.h

##  <a name="cmfcimagepaintarea"></a>  CMFCImagePaintArea::CMFCImagePaintArea

Costruisce un oggetto `CMFCImagePaintArea`.

```
CMFCImagePaintArea(CMFCImageEditorDialog* pParentDlg);
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*pParentDlg*|[in] Puntatore alla finestra di dialogo che è l'elemento padre dell'editor di immagini.|

##  <a name="getmode"></a>  CMFCImagePaintArea::GetMode

Recupera la modalità di disegno corrente.

```
IMAGE_EDIT_MODE GetMode() const;
```

### <a name="return-value"></a>Valore restituito

Un' [IMAGE_EDIT_MODE](cmfcimagepaintarea-image-edit-mode-enumeration.md) valore che specifica la modalità di disegno corrente.

##  <a name="setbitmap"></a>  CMFCImagePaintArea::SetBitmap

Imposta l'immagine bitmap per l'area dell'immagine.

```
void SetBitmap(CBitmap* pBitmap);
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*pBitmap*|[in] La nuova immagine bitmap da visualizzare.|

### <a name="remarks"></a>Note

Se *pBitmap* è NULL, questo metodo imposta le dimensioni dell'area di disegno modificabile a zero. In caso contrario, imposta le dimensioni dell'area di disegno modificabili per le dimensioni dell'immagine bitmap specificata.

##  <a name="setcolor"></a>  CMFCImagePaintArea::SetColor

Imposta il colore di disegno.

```
void SetColor(COLORREF color);
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*Colore*|[in] Il nuovo colore di disegno.|

### <a name="remarks"></a>Note

Quando si seleziona un colore dalla barra tavolozza editor di immagini o selezione colori, il framework chiama questo metodo per aggiornare il colore di disegno. Il colore di colore iniziale è nero (COLORREF valore 0).

Il colore di disegno viene utilizzato nella finestra di dialogo dell'editor di immagini per tutte le modalità di disegnare, ad eccezione IMAGE_EDIT_MODE_COLOR. Per altre informazioni sulle modalità di disegno, vedere [enumerazione cmfcimagepaintarea:: Image_edit_mode](cmfcimagepaintarea-image-edit-mode-enumeration.md).

##  <a name="setmode"></a>  CMFCImagePaintArea::SetMode

Imposta la modalità di disegno corrente.

```
void SetMode(IMAGE_EDIT_MODE mode);
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*mode*|[in] Un' [IMAGE_EDIT_MODE](cmfcimagepaintarea-image-edit-mode-enumeration.md) valore che specifica la modalità di disegno corrente.|

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCImageEditorDialog](../../mfc/reference/cmfcimageeditordialog-class.md)
