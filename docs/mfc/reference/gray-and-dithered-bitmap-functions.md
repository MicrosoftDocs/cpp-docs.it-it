---
title: funzioni di bitmap grige e retinate
ms.date: 11/19/2018
f1_keywords:
- AFXWIN/AfxDrawGrayBitmap
- AFXWIN/AfxGetGrayBitmap
- AFXWIN/AfxDrawDitheredBitmap
- AFXWIN/AfxGetDitheredBitmap
helpviewer_keywords:
- gray and dithered bitmap functions [MFC]
ms.assetid: cb139a77-b85e-4504-9d93-24156ad77a41
ms.openlocfilehash: 57f163fd36c0f25508d94a84495fcaf1956e277d
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88837203"
---
# <a name="gray-and-dithered-bitmap-functions"></a>funzioni di bitmap grige e retinate

**Funzioni della bitmap grigia**

MFC fornisce due funzioni visualizzare una bitmap con l'aspetto di un controllo disabilitato.

![Confronto delle versioni di icone grigie e originali](../../mfc/reference/media/vcgraybitmap.gif "Confronto delle versioni di icone grigie e originali")

|Nome|Descrizione|
|-|-|
|[AfxDrawGrayBitmap](#afxdrawgraybitmap)|Disegna una versione in grigio di una bitmap.|
|[AfxGetGrayBitmap](#afxgetgraybitmap)|Copia una versione in grigio di una bitmap.|

**Funzioni della bitmap con dithering**

MFC fornisce anche due funzioni per la sostituzione dello sfondo di una bitmap con un modello con dithering.

![Confronto delle versioni di icone con dithering e originali](../../mfc/reference/media/vcditheredbitmap.gif "Confronto delle versioni di icone con dithering e originali")

|Nome|Descrizione|
|-|-|
|[AfxDrawDitheredBitmap](#afxdrawditheredbitmap)|Disegna una bitmap con uno sfondo con dithering.|
|[AfxGetDitheredBitmap](#afxgetditheredbitmap)|Copia una bitmap con uno sfondo con dithering.|

## <a name="afxdrawgraybitmap"></a><a name="afxdrawgraybitmap"></a> AfxDrawGrayBitmap

Disegna una versione in grigio di una bitmap.

```cpp
void AFXAPI AfxDrawGrayBitmap(
    CDC* pDC,
    int x,
    int y,
    const CBitmap& rSrc,
    COLORREF crBackground);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Punta al controller di dominio di destinazione.

*x*<br/>
Coordinata X di destinazione.

*y*<br/>
Coordinata Y di destinazione.

*rSrc*<br/>
Bitmap di origine.

*crBackground*<br/>
Nuovo colore di sfondo (in genere grigio, ad esempio COLOR_MENU).

### <a name="remarks"></a>Osservazioni

La bitmap disegnata con `AfxDrawGrayBitmap` avrà l'aspetto di un controllo disabilitato.

![Confronto delle versioni di icone grigie e originali](../../mfc/reference/media/vcgraybitmap.gif "Confronto delle versioni di icone grigie e originali")

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#191](../../mfc/codesnippet/cpp/gray-and-dithered-bitmap-functions_1.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="afxgetgraybitmap"></a><a name="afxgetgraybitmap"></a> AfxGetGrayBitmap

Copia una versione in grigio di una bitmap.

```cpp
void AFXAPI AfxGetGrayBitmap(
    const CBitmap& rSrc,
    CBitmap* pDest,
    COLORREF crBackground);
```

### <a name="parameters"></a>Parametri

*rSrc*<br/>
Bitmap di origine.

*pDest*<br/>
Bitmap di destinazione.

*crBackground*<br/>
Nuovo colore di sfondo (in genere grigio, ad esempio COLOR_MENU).

### <a name="remarks"></a>Osservazioni

La bitmap copiata con `AfxGetGrayBitmap` avrà l'aspetto di un controllo disabilitato.

![Confronto delle versioni di icone grigie e originali](../../mfc/reference/media/vcgraybitmap.gif "Confronto delle versioni di icone grigie e originali")

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#193](../../mfc/codesnippet/cpp/gray-and-dithered-bitmap-functions_2.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="afxdrawditheredbitmap"></a><a name="afxdrawditheredbitmap"></a> AfxDrawDitheredBitmap

Disegna una bitmap, sostituendo lo sfondo con un modello di controllo.

```cpp
void AFXAPI AfxDrawDitheredBitmap(
    CDC* pDC,
    int x,
    int y,
    const CBitmap& rSrc,
    COLORREF cr1  ,
    COLORREF cr2);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Punta al controller di dominio di destinazione.

*x*<br/>
Coordinata X di destinazione.

*y*<br/>
Coordinata Y di destinazione.

*rSrc*<br/>
Bitmap di origine.

*CR1*<br/>
Uno dei due colori di dithering, in genere bianco.

*CR2*<br/>
Altro colore di dithering, in genere grigio chiaro (COLOR_MENU).

### <a name="remarks"></a>Osservazioni

La bitmap di origine viene disegnata sul controller di dominio di destinazione con un modello con controllo a due colori (*CR1* e *CR2*) che sostituisce lo sfondo della bitmap. Lo sfondo della bitmap di origine viene definito come pixel bianchi e tutti i pixel che corrispondono al colore del pixel nell'angolo superiore sinistro della bitmap.

![Confronto delle versioni di icone con dithering e originali](../../mfc/reference/media/vcditheredbitmap.gif "Confronto delle versioni di icone con dithering e originali")

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#190](../../mfc/codesnippet/cpp/gray-and-dithered-bitmap-functions_3.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="afxgetditheredbitmap"></a><a name="afxgetditheredbitmap"></a> AfxGetDitheredBitmap

Copia una bitmap, sostituendo lo sfondo con un modello di controllo.

```cpp
void AFXAPI AfxGetDitheredBitmap(
    const CBitmap& rSrc,
    CBitmap* pDest,
    COLORREF cr1  ,
    COLORREF cr2);
```

### <a name="parameters"></a>Parametri

*rSrc*<br/>
Bitmap di origine.

*pDest*<br/>
Bitmap di destinazione.

*CR1*<br/>
Uno dei due colori di dithering, in genere bianco.

*CR2*<br/>
Altro colore di dithering, in genere grigio chiaro (COLOR_MENU).

### <a name="remarks"></a>Osservazioni

La bitmap di origine viene copiata nella bitmap di destinazione con un modello con controllo a due colori (*CR1* e *CR2*) che sostituisce lo sfondo della bitmap di origine. Lo sfondo della bitmap di origine viene definito come pixel bianchi e tutti i pixel che corrispondono al colore del pixel nell'angolo superiore sinistro della bitmap.

![Confronto delle versioni di icone con dithering e originali](../../mfc/reference/media/vcditheredbitmap.gif "vcditheredbitmap")

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#192](../../mfc/codesnippet/cpp/gray-and-dithered-bitmap-functions_4.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
