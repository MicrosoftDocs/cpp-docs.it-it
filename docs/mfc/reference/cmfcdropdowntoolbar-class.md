---
description: 'Altre informazioni su: classe CMFCDropDownToolBar'
title: Classe CMFCDropDownToolBar
ms.date: 11/19/2018
f1_keywords:
- CMFCDropDownToolBar
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolBar
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolBar::AllowShowOnPaneMenu
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolBar::LoadBitmap
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolBar::LoadToolBar
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolBar::OnLButtonUp
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolBar::OnMouseMove
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolBar::OnSendCommand
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolBar::OnUpdateCmdUI
helpviewer_keywords:
- CMFCDropDownToolBar [MFC], AllowShowOnPaneMenu
- CMFCDropDownToolBar [MFC], LoadBitmap
- CMFCDropDownToolBar [MFC], LoadToolBar
- CMFCDropDownToolBar [MFC], OnLButtonUp
- CMFCDropDownToolBar [MFC], OnMouseMove
- CMFCDropDownToolBar [MFC], OnSendCommand
- CMFCDropDownToolBar [MFC], OnUpdateCmdUI
ms.assetid: 78818ec5-83ce-42fa-a0d4-2d9d5ecc8770
ms.openlocfilehash: 158562829cb5bbebfb9a858d34751c56bdf46ed8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97293989"
---
# <a name="cmfcdropdowntoolbar-class"></a>Classe CMFCDropDownToolBar

Barra degli strumenti visualizzata quando l'utente tiene premuto un pulsante della barra degli strumenti di primo livello.

Per informazioni dettagliate, vedere il codice sorgente disponibile nella **cartella \\ \\ \\ MFC atlmfc src di VC** per l'installazione di Visual Studio.

## <a name="syntax"></a>Sintassi

```
class CMFCDropDownToolBar : public CMFCToolBar
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCDropDownToolBar:: AllowShowOnPaneMenu](#allowshowonpanemenu)|Esegue l'override di `CPane::AllowShowOnPaneMenu`.|
|[CMFCDropDownToolBar:: LoadBitmap](#loadbitmap)|Esegue l'override di [CMFCToolBar:: LoadBitmap](../../mfc/reference/cmfctoolbar-class.md#loadbitmap).|
|[CMFCDropDownToolBar:: LoadToolBar](#loadtoolbar)|Esegue l'override di [CMFCToolBar:: LoadToolBar](../../mfc/reference/cmfctoolbar-class.md#loadtoolbar).|
|[CMFCDropDownToolBar:: OnLButtonUp](#onlbuttonup)||
|[CMFCDropDownToolBar:: OnMouseMove](#onmousemove)||
|[CMFCDropDownToolBar:: OnSendCommand](#onsendcommand)|Esegue l'override di `CMFCToolBar::OnSendCommand`.|
|[CMFCDropDownToolBar:: OnUpdateCmdUI](#onupdatecmdui)|Esegue l'override di [CMFCToolBar:: OnUpdateCmdUI](cmfctoolbar-class.md).|

### <a name="remarks"></a>Commenti

Un `CMFCDropDownToolBar` oggetto combina l'aspetto visivo di una barra degli strumenti con il comportamento di un menu di scelta rapida. Quando un utente preme e tiene premuto un pulsante della barra degli strumenti a discesa (vedere la [classe CMFCDropDownToolbarButton](../../mfc/reference/cmfcdropdowntoolbarbutton-class.md)), viene visualizzata una barra degli strumenti a discesa e l'utente può selezionare un pulsante dalla barra degli strumenti a discesa scorrendo il pulsante del mouse. Dopo che l'utente ha selezionato un pulsante nella barra degli strumenti a discesa, questo pulsante viene visualizzato come pulsante corrente sulla barra degli strumenti di primo livello.

Una barra degli strumenti a discesa non può essere personalizzata o ancorata e non ha uno stato di strappo.

Nella figura seguente viene illustrato un `CMFCDropDownToolBar` oggetto:

![Esempio di CMFCDropDownToolbar](../../mfc/reference/media/cmfcdropdown.png "Esempio di CMFCDropDownToolbar")

Si crea un `CMFCDropDownToolBar` oggetto nello stesso modo in cui si crea una barra degli strumenti ordinata (vedere [Classe CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)).

Per inserire la barra degli strumenti a discesa in una barra degli strumenti padre:

1. Riservare un ID di risorsa fittizio per il pulsante nella risorsa della barra degli strumenti padre.

2. Creare un `CMFCDropDownToolBarButton` oggetto che contiene la barra degli strumenti a discesa (per ulteriori informazioni, [vedere CMFCDropDownToolbarButton:: CMFCDropDownToolbarButton](../../mfc/reference/cmfcdropdowntoolbarbutton-class.md#cmfcdropdowntoolbarbutton)).

3. Sostituire il pulsante fittizio con l' `CMFCDropDownToolBarButton` oggetto tramite [CMFCToolBar:: ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#replacebutton).

Per ulteriori informazioni sui pulsanti della barra degli strumenti, vedere [procedura dettagliata: inserimento di controlli nelle barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md). Per un esempio di una barra degli strumenti a discesa, vedere il progetto di esempio VisualStudioDemo.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare il `Create` metodo nella `CMFCDropDownToolBar` classe. Questo frammento di codice fa parte dell' [esempio demo di Visual Studio](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_VisualStudioDemo#29](../../mfc/codesnippet/cpp/cmfcdropdowntoolbar-class_1.h)]
[!code-cpp[NVC_MFC_VisualStudioDemo#30](../../mfc/codesnippet/cpp/cmfcdropdowntoolbar-class_2.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CBasePane](../../mfc/reference/cbasepane-class.md)

[CPane](../../mfc/reference/cpane-class.md)

[CMFCBaseToolBar](../../mfc/reference/cmfcbasetoolbar-class.md)

[CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)

[CMFCDropDownToolBar](../../mfc/reference/cmfcdropdowntoolbar-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdropdowntoolbar.h

## <a name="cmfcdropdowntoolbarallowshowonpanemenu"></a><a name="allowshowonpanemenu"></a> CMFCDropDownToolBar:: AllowShowOnPaneMenu

```
virtual BOOL AllowShowOnPaneMenu() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcdropdowntoolbarloadbitmap"></a><a name="loadbitmap"></a> CMFCDropDownToolBar:: LoadBitmap

Carica le immagini della barra degli strumenti dalle risorse dell'applicazione.

```
virtual BOOL LoadBitmap(
    UINT uiResID,
    UINT uiColdResID=0,
    UINT uiMenuResID=0,
    BOOL bLocked=FALSE,
    UINT uiDisabledResID=0,
    UINT uiMenuDisabledResID=0);
```

### <a name="parameters"></a>Parametri

*uiResID*<br/>
in ID risorsa della bitmap che fa riferimento alle immagini della barra degli strumenti a caldo.

*uiColdResID*<br/>
in ID risorsa della bitmap che fa riferimento alle immagini della barra degli strumenti a freddo.

*uiMenuResID*<br/>
in ID risorsa della bitmap che fa riferimento alle immagini dei menu normali.

*Bloccato*<br/>
in TRUE per bloccare la barra degli strumenti; in caso contrario, FALSE.

*uiDisabledResID*<br/>
in ID risorsa della bitmap che fa riferimento alle immagini della barra degli strumenti disabilitate.

*uiMenuDisabledResID*<br/>
in ID risorsa della bitmap che fa riferimento alle immagini di menu disabilitate.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il metodo ha esito positivo; in caso contrario, zero.

### <a name="remarks"></a>Commenti

Il metodo [CMFCToolBar::LoadToolBarEx](../../mfc/reference/cmfctoolbar-class.md#loadtoolbarex) chiama questo metodo per caricare le immagini associate alla barra degli strumenti. Eseguire l'override di questo metodo per eseguire il caricamento personalizzato delle risorse immagine.

Chiamare il metodo `LoadBitmapEx` per caricare immagini aggiuntive dopo aver creato la barra degli strumenti.

## <a name="cmfcdropdowntoolbarloadtoolbar"></a><a name="loadtoolbar"></a> CMFCDropDownToolBar:: LoadToolBar

```
virtual BOOL LoadToolBar(
    UINT uiResID,
    UINT uiColdResID = 0,
    UINT uiMenuResID = 0,
    BOOL = FALSE,
    UINT uiDisabledResID = 0,
    UINT uiMenuDisabledResID = 0,
    UINT uiHotResID = 0);
```

### <a name="parameters"></a>Parametri

in *uiResID*<br/>

in *uiColdResID*<br/>

in *uiMenuResID*<br/>

in *Bool*<br/>

in *uiDisabledResID*<br/>

in *uiMenuDisabledResID*<br/>

in *uiHotResID*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcdropdowntoolbaronlbuttonup"></a><a name="onlbuttonup"></a> CMFCDropDownToolBar:: OnLButtonUp

```
afx_msg void OnLButtonUp(
    UINT nFlags,
    CPoint point);
```

### <a name="parameters"></a>Parametri

in *nFlags*<br/>

in *punto* di<br/>

### <a name="remarks"></a>Commenti

## <a name="cmfcdropdowntoolbaronmousemove"></a><a name="onmousemove"></a> CMFCDropDownToolBar:: OnMouseMove

```
afx_msg void OnMouseMove(
    UINT nFlags,
    CPoint point);
```

### <a name="parameters"></a>Parametri

in *nFlags*<br/>

in *punto* di<br/>

### <a name="remarks"></a>Commenti

## <a name="cmfcdropdowntoolbaronsendcommand"></a><a name="onsendcommand"></a> CMFCDropDownToolBar:: OnSendCommand

```
virtual BOOL OnSendCommand(const CMFCToolBarButton* pButton);
```

### <a name="parameters"></a>Parametri

in *p*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcdropdowntoolbaronupdatecmdui"></a><a name="onupdatecmdui"></a> CMFCDropDownToolBar:: OnUpdateCmdUI

```
virtual void OnUpdateCmdUI(
    CFrameWnd* pTarget,
    BOOL bDisableIfNoHndler);
```

### <a name="parameters"></a>Parametri

in *PTarget*<br/>

in *bDisableIfNoHndler*<br/>

### <a name="remarks"></a>Commenti

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)<br/>
[Metodo CMFCToolBar:: create](../../mfc/reference/cmfctoolbar-class.md#create)<br/>
[Metodo CMFCToolBar:: ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#replacebutton)<br/>
[Classe CMFCDropDownToolbarButton](../../mfc/reference/cmfcdropdowntoolbarbutton-class.md)<br/>
[Procedura dettagliata: inserimento di controlli nelle barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md)
