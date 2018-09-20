---
title: Classe CMFCDropDownToolBar | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- CMFCDropDownToolBar [MFC], AllowShowOnPaneMenu
- CMFCDropDownToolBar [MFC], LoadBitmap
- CMFCDropDownToolBar [MFC], LoadToolBar
- CMFCDropDownToolBar [MFC], OnLButtonUp
- CMFCDropDownToolBar [MFC], OnMouseMove
- CMFCDropDownToolBar [MFC], OnSendCommand
- CMFCDropDownToolBar [MFC], OnUpdateCmdUI
ms.assetid: 78818ec5-83ce-42fa-a0d4-2d9d5ecc8770
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 675a155c8f19ca9c0ab30d15da9be7f5b3b40e7a
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46392320"
---
# <a name="cmfcdropdowntoolbar-class"></a>Classe CMFCDropDownToolBar

Barra degli strumenti visualizzata quando l'utente tiene premuto un pulsante della barra degli strumenti di primo livello.

   Per altre informazioni, vedere il codice sorgente disponibile nel **VC\\atlmfc\\src\\mfc** cartella di installazione di Visual Studio.
## <a name="syntax"></a>Sintassi

```
class CMFCDropDownToolBar : public CMFCToolBar
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCDropDownToolBar::AllowShowOnPaneMenu](#allowshowonpanemenu)|Esegue l'override`CPane::AllowShowOnPaneMenu`.|
|[CMFCDropDownToolBar::LoadBitmap](#loadbitmap)|(Esegue l'override [CMFCToolBar::LoadBitmap](../../mfc/reference/cmfctoolbar-class.md#loadbitmap).)|
|[CMFCDropDownToolBar::LoadToolBar](#loadtoolbar)|(Esegue l'override [CMFCToolBar::LoadToolBar](../../mfc/reference/cmfctoolbar-class.md#loadtoolbar).)|
|[CMFCDropDownToolBar::OnLButtonUp](#onlbuttonup)||
|[CMFCDropDownToolBar::OnMouseMove](#onmousemove)||
|[CMFCDropDownToolBar::OnSendCommand](#onsendcommand)|Esegue l'override`CMFCToolBar::OnSendCommand`.|
|[CMFCDropDownToolBar::OnUpdateCmdUI](#onupdatecmdui)|(Esegue l'override [CMFCToolBar::OnUpdateCmdUI](cmfctoolbar-class.md).|

### <a name="remarks"></a>Note

Oggetto `CMFCDropDownToolBar` oggetto combina l'aspetto visivo di una barra degli strumenti con il comportamento di un menu popup. Quando un utente preme e contiene un pulsante a discesa della barra degli strumenti (vedere [classe CMFCDropDownToolbarButton](../../mfc/reference/cmfcdropdowntoolbarbutton-class.md)), viene visualizzata una barra degli strumenti elenco a discesa e l'utente può selezionare un pulsante nella barra degli strumenti elenco a discesa scorrendo ad esso e rilasciare il mouse pulsante. Dopo che l'utente seleziona un pulsante sulla barra degli strumenti elenco a discesa, tale pulsante viene visualizzato come pulsante sulla barra degli strumenti principale corrente.

Una barra degli strumenti elenco a discesa non può essere personalizzato o ancorato, e non presenta uno stato a comparsa.

La figura seguente mostra un `CMFCDropDownToolBar` oggetto:

![Esempio di CMFCDropDownToolbar](../../mfc/reference/media/cmfcdropdown.png "cmfcdropdown")

Si crea una `CMFCDropDownToolBar` allo stesso modo si crea una barra degli strumenti comune dell'oggetto (vedere [classe CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)).

Per inserire la barra degli strumenti elenco a discesa in una barra degli strumenti padre:

1. Riservare un ID di risorsa fittizio per il pulsante nella risorsa della barra degli strumenti padre.

2. Creare un `CMFCDropDownToolBarButton` oggetto che contiene la barra degli strumenti elenco a discesa (per altre informazioni, vedere [CMFCDropDownToolbarButton::CMFCDropDownToolbarButton](../../mfc/reference/cmfcdropdowntoolbarbutton-class.md#cmfcdropdowntoolbarbutton)).

3. Sostituire il pulsante fittizio con il `CMFCDropDownToolBarButton` oggetto usando [CMFCToolBar::ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#replacebutton).

Per altre informazioni sui pulsanti della barra degli strumenti, vedere [procedura dettagliata: inserimento di controlli in barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md). Per un esempio di una barra degli strumenti elenco a discesa, vedere il progetto di esempio VisualStudioDemo.

## <a name="example"></a>Esempio

L'esempio seguente illustra come usare il `Create` metodo nel `CMFCDropDownToolBar` classe. Questo frammento di codice fa parte di [esempio dimostrativo di Visual Studio](../../visual-cpp-samples.md).

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

##  <a name="allowshowonpanemenu"></a>  CMFCDropDownToolBar::AllowShowOnPaneMenu


```
virtual BOOL AllowShowOnPaneMenu() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="loadbitmap"></a>  CMFCDropDownToolBar::LoadBitmap

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
[in] L'ID risorsa della bitmap che fa riferimento alle immagini della barra degli strumenti a caldo.

*uiColdResID*<br/>
[in] L'ID risorsa della bitmap che fa riferimento alle immagini della barra degli strumenti a freddo.

*uiMenuResID*<br/>
[in] L'ID risorsa della bitmap che fa riferimento alle immagini regolari menu.

*Bloccato*<br/>
[in] TRUE per bloccare la barra degli strumenti; in caso contrario, FALSE.

*uiDisabledResID*<br/>
[in] L'ID risorsa della bitmap che fa riferimento alle immagini disabilitata sulla barra degli strumenti.

*uiMenuDisabledResID*<br/>
[in] L'ID risorsa della bitmap che fa riferimento a immagini disabilitate del menu.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il metodo ha esito positivo; in caso contrario, zero.

### <a name="remarks"></a>Note

Il [cmfctoolbar:: Loadtoolbarex](../../mfc/reference/cmfctoolbar-class.md#loadtoolbarex) chiama questo metodo per caricare le immagini che sono associate con la barra degli strumenti. Eseguire l'override di questo metodo per eseguire il caricamento personalizzato delle risorse immagine.

Chiamare il metodo `LoadBitmapEx` per caricare immagini aggiuntive dopo aver creato la barra degli strumenti.

##  <a name="loadtoolbar"></a>  CMFCDropDownToolBar::LoadToolBar


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

*uiResID*<br/>
[in] [in] *uiColdResID*
*uiMenuResID*<br/>
[in] [in] *BOOL*
*uiDisabledResID*<br/>
[in] [in] *uiMenuDisabledResID* [in] *uiHotResID*

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="onlbuttonup"></a>  CMFCDropDownToolBar::OnLButtonUp


```
afx_msg void OnLButtonUp(
    UINT nFlags,
    CPoint point);
```

### <a name="parameters"></a>Parametri

*nFlags*<br/>
[in] [in] *punto*

### <a name="remarks"></a>Note

##  <a name="onmousemove"></a>  CMFCDropDownToolBar::OnMouseMove


```
afx_msg void OnMouseMove(
    UINT nFlags,
    CPoint point);
```

### <a name="parameters"></a>Parametri

*nFlags*<br/>
[in] [in] *punto*

### <a name="remarks"></a>Note

##  <a name="onsendcommand"></a>  CMFCDropDownToolBar::OnSendCommand


```
virtual BOOL OnSendCommand(const CMFCToolBarButton* pButton);
```

### <a name="parameters"></a>Parametri

[in] *pButton*

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="onupdatecmdui"></a>  CMFCDropDownToolBar::OnUpdateCmdUI


```
virtual void OnUpdateCmdUI(
    CFrameWnd* pTarget,
    BOOL bDisableIfNoHndler);
```

### <a name="parameters"></a>Parametri

*pTarget*<br/>
[in] [in] *bDisableIfNoHndler*

### <a name="remarks"></a>Note

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)<br/>
[CMFCToolBar::Create](../../mfc/reference/cmfctoolbar-class.md#create)<br/>
[CMFCToolBar::ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#replacebutton)<br/>
[Classe CMFCDropDownToolbarButton](../../mfc/reference/cmfcdropdowntoolbarbutton-class.md)<br/>
[Procedura dettagliata: inserimento di controlli nelle barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md)



