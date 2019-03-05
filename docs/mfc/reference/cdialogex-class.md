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
ms.openlocfilehash: f92058d1aa0dabccf6623d20a248fed8eb99ab26
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57266315"
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

## <a name="remarks"></a>Note

Per usare la classe `CDialogEx`, derivare la classe della finestra di dialogo dalla classe `CDialogEx` e non dalla classe `CDialog`.

Le immagini della finestra di dialogo vengono archiviate in un file di risorse. Il framework elimina automaticamente tutte le immagini caricate dal file di risorse. Per eliminare a livello di codice l'immagine di sfondo corrente, chiamare il [CDialogEx::SetBackgroundImage](#setbackgroundimage) metodo o implementare un `OnDestroy` gestore dell'evento. Quando si chiama il [CDialogEx::SetBackgroundImage](#setbackgroundimage) metodo, passare un `HBITMAP` parametro come handle dell'immagine. L'oggetto `CDialogEx` diventa proprietario dell'immagine e la elimina se il flag `m_bAutoDestroyBmp` è `TRUE`.

Oggetto `CDialogEx` oggetto può essere un elemento padre di un [classe CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md) oggetto. Il [classe CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md) object chiama il `CDialogEx::SetActiveMenu` (metodo) quando il [classe CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md) apre dell'oggetto. In seguito, il `CDialogEx` oggetto gestisce qualsiasi evento di menu finché il [classe CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md) oggetto è chiuso.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CDialogEx](../../mfc/reference/cdialogex-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdialogex. h

##  <a name="cdialogex"></a>  CDialogEx::CDialogEx

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
[in] L'ID di risorsa di un modello di finestra di dialogo.

*lpszTemplateName*<br/>
[in] Nome della risorsa di un modello di finestra di dialogo.

*pParent*<br/>
[in] Puntatore alla finestra padre. Il valore predefinito è NULL.

*pParentWnd*<br/>
[in] Puntatore alla finestra padre. Il valore predefinito è NULL.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="setbackgroundcolor"></a>  CDialogEx::SetBackgroundColor

Imposta il colore di sfondo della finestra di dialogo.

```
void SetBackgroundColor(
    COLORREF color,
    BOOL bRepaint=TRUE);
```

### <a name="parameters"></a>Parametri

*color*<br/>
[in] Un valore di colore RGB.

*bRepaint*<br/>
[in] TRUE per aggiornare immediatamente la schermata; in caso contrario, FALSE. Il valore predefinito è TRUE.

### <a name="remarks"></a>Note

##  <a name="setbackgroundimage"></a>  CDialogEx::SetBackgroundImage

Imposta l'immagine di sfondo della finestra di dialogo.

```
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
[in] Handle per l'immagine di sfondo.

*uiBmpResId*<br/>
[in] L'ID risorsa dell'immagine di sfondo.

*location*<br/>
[in] Uno del `CDialogEx::BackgroundLocation` valori che specificano la posizione dell'immagine. I valori validi includono BACKGR_TILE BACKGR_TOPLEFT, BACKGR_TOPRIGHT, BACKGR_BOTTOMLEFT e BACKGR_BOTTOMRIGHT. Il valore predefinito è BACKGR_TILE.

*bAutoDestroy*<br/>
[in] TRUE per eliminare automaticamente l'immagine di sfondo; in caso contrario, FALSE.

*bRepaint*<br/>
[in] TRUE per immediatamente ridisegnare la finestra di dialogo; in caso contrario, FALSE.

### <a name="return-value"></a>Valore restituito

Il secondo metodo overload di informazioni sulla sintassi, TRUE se il metodo ha esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Note

L'immagine specificata non è esteso in base l'area client della finestra di dialogo.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md)<br/>
[Classe CContextMenuManager](../../mfc/reference/ccontextmenumanager-class.md)
