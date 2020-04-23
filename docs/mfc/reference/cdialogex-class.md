---
title: Classe CDialogEx
ms.date: 11/04/2016
f1_keywords:
- CDialogEx
- AFXDIALOGEX/CDialogEx
- AFXDIALOGEX/CDialogEx::CDialogEx
- AFXDIALOGEX/CDialogEx::SetBackgroundColor
- AFXDIALOGEX/CDialogEx::SetBackgroundImage
helpviewer_keywords:
- CDialogEx [MFC], CDialogEx
- CDialogEx [MFC], SetBackgroundColor
- CDialogEx [MFC], SetBackgroundImage
ms.assetid: a6ed3b1f-aef8-4b66-ac78-2160faf63c13
ms.openlocfilehash: 717e560035d42957c16168097577d0c8c589e3c7
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81753354"
---
# <a name="cdialogex-class"></a>Classe CDialogEx

La classe `CDialogEx` specifica il colore e l'immagine di sfondo di una finestra di dialogo.

## <a name="syntax"></a>Sintassi

```
class CDialogEx : public CDialog
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDialogEx::CDialogEx](#cdialogex)|Costruisce un oggetto `CDialogEx`.|
|`CDialogEx::~CDialogEx`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDialogEx::SetBackgroundColor](#setbackgroundcolor)|Imposta il colore di sfondo della finestra di dialogo.|
|[CDialogEx::SetBackgroundImage](#setbackgroundimage)|Imposta l'immagine di sfondo della finestra di dialogo.|

## <a name="remarks"></a>Osservazioni

Per usare la classe `CDialogEx`, derivare la classe della finestra di dialogo dalla classe `CDialogEx` e non dalla classe `CDialog`.

Le immagini della finestra di dialogo vengono archiviate in un file di risorse. Il framework elimina automaticamente tutte le immagini caricate dal file di risorse. Per eliminare a livello di codice l'immagine in background corrente, `OnDestroy` chiamare il [CDialogEx::SetBackgroundImage](#setbackgroundimage) metodo o implementare un gestore eventi. Quando si chiama il [metodo CDialogEx::SetBackgroundImage,](#setbackgroundimage) passare un parametro `HBITMAP` come handle dell'immagine. L'oggetto `CDialogEx` diventa proprietario dell'immagine e la elimina se il flag `m_bAutoDestroyBmp` è `TRUE`.

Un `CDialogEx` oggetto può essere un elemento padre di un [CMFCPopupMenu classe](../../mfc/reference/cmfcpopupmenu-class.md) oggetto. Il [CMFCPopupMenu classe](../../mfc/reference/cmfcpopupmenu-class.md) `CDialogEx::SetActiveMenu` oggetto chiama il metodo quando il [CMFCPopupMenu oggetto della classe](../../mfc/reference/cmfcpopupmenu-class.md) viene aperto. Successivamente, `CDialogEx` l'oggetto gestisce qualsiasi evento di menu fino a quando il [CMFCPopupMenu classe](../../mfc/reference/cmfcpopupmenu-class.md) oggetto viene chiuso.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CDialogEx](../../mfc/reference/cdialogex-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdialogex.h

## <a name="cdialogexcdialogex"></a><a name="cdialogex"></a>CDialogEx::CDialogEx

Costruisce un oggetto `CDialogEx`.

```
CDialogEx(
    UINT nIDTemplate,
    CWnd* pParent=NULL);

CDialogEx(
    LPCTSTR lpszTemplateName,
    CWnd* pParentWnd=NULL);
```

### <a name="parameters"></a>Parametri

*NIDTemplate (modello)*<br/>
[in] ID risorsa di un modello di finestra di dialogo.

*lpszTemplateName (nome di metodo)*<br/>
[in] Nome della risorsa di un modello di finestra di dialogo.

*pPadre*<br/>
[in] Puntatore alla finestra padre. Il valore predefinito è NULL.

*pParentWnd (informazioni in due)*<br/>
[in] Puntatore alla finestra padre. Il valore predefinito è NULL.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cdialogexsetbackgroundcolor"></a><a name="setbackgroundcolor"></a>CDialogEx::SetBackgroundColor

Imposta il colore di sfondo della finestra di dialogo.

```cpp
void SetBackgroundColor(
    COLORREF color,
    BOOL bRepaint=TRUE);
```

### <a name="parameters"></a>Parametri

*Colore*<br/>
[in] Valore di colore RGB.

*bRepaint*<br/>
[in] TRUE per aggiornare immediatamente lo schermo; in caso contrario, FALSE. Il valore predefinito è TRUE.

### <a name="remarks"></a>Osservazioni

## <a name="cdialogexsetbackgroundimage"></a><a name="setbackgroundimage"></a>CDialogEx::SetBackgroundImage

Imposta l'immagine di sfondo della finestra di dialogo.

```cpp
void SetBackgroundImage(
    HBITMAP hBitmap,
    BackgroundLocation location=BACKGR_TILE,
    BOOL bAutoDestroy=TRUE,
    BOOL bRepaint=TRUE);

BOOL SetBackgroundImage(
    UINT uiBmpResId,
    BackgroundLocation location=BACKGR_TILE,
    BOOL bRepaint=TRUE);
```

### <a name="parameters"></a>Parametri

*Hbitmap*<br/>
[in] Handle dell'immagine di sfondo.

*uiBmpResId (informazioni in questo stato in stato in stato in stato in stato in*<br/>
[in] ID risorsa dell'immagine di sfondo.

*location*<br/>
[in] Uno dei `CDialogEx::BackgroundLocation` valori che specificano la posizione dell'immagine. I valori validi includono BACKGR_TILE, BACKGR_TOPLEFT, BACKGR_TOPRIGHT, BACKGR_BOTTOMLEFT e BACKGR_BOTTOMRIGHT. Il valore predefinito è BACKGR_TILE.

*bAutoDistruggi*<br/>
[in] TRUE per eliminare automaticamente l'immagine di sfondo; in caso contrario, FALSE.

*bRepaint*<br/>
[in] TRUE per ridisegnare immediatamente la finestra di dialogo. in caso contrario, FALSE.

### <a name="return-value"></a>Valore restituito

Nella sintassi dell'overload del secondo metodo, TRUE se il metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

L'immagine specificata non viene allungata per adattarsi all'area client della finestra di dialogo.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md)<br/>
[Classe CContextMenuManager](../../mfc/reference/ccontextmenumanager-class.md)
