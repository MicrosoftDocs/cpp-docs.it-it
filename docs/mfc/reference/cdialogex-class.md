---
description: 'Altre informazioni su: classe CDialogEx'
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
ms.openlocfilehash: 27ec0011935871d472734cae6f0d62b402382727
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97185245"
---
# <a name="cdialogex-class"></a>Classe CDialogEx

La classe `CDialogEx` specifica il colore e l'immagine di sfondo di una finestra di dialogo.

## <a name="syntax"></a>Sintassi

```
class CDialogEx : public CDialog
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CDialogEx::CDialogEx](#cdialogex)|Costruisce un oggetto `CDialogEx`.|
|`CDialogEx::~CDialogEx`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CDialogEx::SetBackgroundColor](#setbackgroundcolor)|Imposta il colore di sfondo della finestra di dialogo.|
|[CDialogEx::SetBackgroundImage](#setbackgroundimage)|Imposta l'immagine di sfondo della finestra di dialogo.|

## <a name="remarks"></a>Commenti

Per usare la classe `CDialogEx`, derivare la classe della finestra di dialogo dalla classe `CDialogEx` e non dalla classe `CDialog`.

Le immagini della finestra di dialogo vengono archiviate in un file di risorse. Il framework elimina automaticamente tutte le immagini caricate dal file di risorse. Per eliminare a livello di codice l'immagine di sfondo corrente, chiamare il metodo [CDialogEx:: SetBackgroundImage](#setbackgroundimage) o implementare un `OnDestroy` gestore eventi. Quando si chiama il metodo [CDialogEx:: SetBackgroundImage](#setbackgroundimage) , passare un `HBITMAP` parametro come handle di immagine. L'oggetto `CDialogEx` diventa proprietario dell'immagine e la elimina se il flag `m_bAutoDestroyBmp` è `TRUE`.

Un `CDialogEx` oggetto può essere un elemento padre di un oggetto della [classe CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md) . L'oggetto della [classe CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md) chiama il `CDialogEx::SetActiveMenu` metodo quando viene aperto l'oggetto della [classe CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md) . Successivamente, l' `CDialogEx` oggetto gestisce qualsiasi evento di menu finché l'oggetto della [classe CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md) non viene chiuso.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CDialogEx](../../mfc/reference/cdialogex-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdialogex. h

## <a name="cdialogexcdialogex"></a><a name="cdialogex"></a> CDialogEx:: CDialogEx

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

*nIDTemplate*<br/>
in ID risorsa di un modello di finestra di dialogo.

*lpszTemplateName*<br/>
in Nome della risorsa di un modello di finestra di dialogo.

*pParent*<br/>
in Puntatore alla finestra padre. Il valore predefinito è NULL.

*pParentWnd*<br/>
in Puntatore alla finestra padre. Il valore predefinito è NULL.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cdialogexsetbackgroundcolor"></a><a name="setbackgroundcolor"></a> CDialogEx:: SetBackgroundColor

Imposta il colore di sfondo della finestra di dialogo.

```cpp
void SetBackgroundColor(
    COLORREF color,
    BOOL bRepaint=TRUE);
```

### <a name="parameters"></a>Parametri

*color*<br/>
in Valore di colore RGB.

*bRepaint*<br/>
in TRUE per aggiornare immediatamente lo schermo; in caso contrario, FALSE. Il valore predefinito è TRUE.

### <a name="remarks"></a>Commenti

## <a name="cdialogexsetbackgroundimage"></a><a name="setbackgroundimage"></a> CDialogEx:: SetBackgroundImage

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

*hBitmap*<br/>
in Handle per l'immagine di sfondo.

*uiBmpResId*<br/>
in ID risorsa dell'immagine di sfondo.

*location*<br/>
in Uno dei `CDialogEx::BackgroundLocation` valori di che specificano il percorso dell'immagine. I valori validi includono BACKGR_TILE, BACKGR_TOPLEFT, BACKGR_TOPRIGHT, BACKGR_BOTTOMLEFT e BACKGR_BOTTOMRIGHT. Il valore predefinito è BACKGR_TILE.

*bAutoDestroy*<br/>
in TRUE per eliminare automaticamente l'immagine di sfondo; in caso contrario, FALSE.

*bRepaint*<br/>
in TRUE per ricreare immediatamente la finestra di dialogo; in caso contrario, FALSE.

### <a name="return-value"></a>Valore restituito

Nella seconda sintassi di overload del metodo, TRUE se il metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

L'immagine specificata non viene adattata per adattarsi all'area client della finestra di dialogo.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md)<br/>
[Classe CContextMenuManager](../../mfc/reference/ccontextmenumanager-class.md)
