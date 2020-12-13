---
description: 'Altre informazioni su: classe CMFCVisualManagerWindows7'
title: Classe CMFCVisualManagerWindows7
ms.date: 03/27/2019
f1_keywords:
- CMFCVisualManagerWindows7
- AFXVISUALMANAGERWINDOWS7/CMFCVisualManagerWindows7
- AFXVISUALMANAGERWINDOWS7/CMFCVisualManagerWindows7::CMFCVisualManagerWindows7
- AFXVISUALMANAGERWINDOWS7/CMFCVisualManagerWindows7::GetRibbonEditBackgroundColor
- AFXVISUALMANAGERWINDOWS7/CMFCVisualManagerWindows7::OnFillMenuImageRect
helpviewer_keywords:
- CMFCVisualManagerWindows7 Class [MFC]
ms.assetid: e8d87df1-0c09-4b58-8ade-4e911f796e42
ms.openlocfilehash: 108d4144bbcfbfcb82d91678611435f14365302e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97331633"
---
# <a name="cmfcvisualmanagerwindows7-class"></a>Classe CMFCVisualManagerWindows7

`CMFCVisualManagerWindows7`Fornisce a un'applicazione l'aspetto di un'applicazione di Windows 7.

## <a name="syntax"></a>Sintassi

```
class CMFCVisualManagerWindows7 : public CMFCVisualManagerWindows;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCVisualManagerWindows7:: CMFCVisualManagerWindows7](#cmfcvisualmanagerwindows7)|Costruttore predefinito.|
|[CMFCVisualManagerWindows7:: ~ CMFCVisualManagerWindows7](#_dtorcmfcvisualmanagerwindows7)|Distruttore predefinito.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|`CMFCVisualManagerWindows7::CleanStyle`|Cancella lo stile di visualizzazione corrente e Reimposta lo stile di visualizzazione predefinito.|
|`CMFCVisualManagerWindows7::CleanUp`|Cancella tutti gli oggetti nell'interfaccia utente e Reimposta i menu.|
|`CMFCVisualManagerWindows7::DrawNcBtn`|Disegna un pulsante nell'area non client del frame. Il Framework utilizza questo metodo per creare i pulsanti Riduci a icona, Ingrandisci e Ripristina nell'angolo superiore destro della cornice della finestra. Questo metodo viene chiamato solo quando il programma utilizza un `Aero` tema.|
|`CMFCVisualManagerWindows7::DrawNcText`|Disegna il testo nell'area non client del frame. Il Framework usa questo metodo per creare il titolo dell'applicazione nella barra del titolo nella parte superiore della finestra cornice.|
|`CMFCVisualManagerWindows7::DrawSeparator`|Disegna un separatore sulla [Classe CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md).|
|`CMFCVisualManagerWindows7::GetRibbonBar`|Recupera la [classe CMFCRibbonBar](../../mfc/reference/cmfcribbonbar-class.md) associata all'interfaccia utente.|
|[CMFCVisualManagerWindows7:: GetRibbonEditBackgroundColor](#getribboneditbackgroundcolor)|Ottiene il colore di sfondo della casella di modifica della barra multifunzione.|
|`CMFCVisualManagerWindows7::GetRibbonPopupBorderSize`|Esegue l'override di [CMFCVisualManager:: GetRibbonPopupBorderSize](../../mfc/reference/cmfcvisualmanager-class.md#getribbonpopupbordersize)|
|`CMFCVisualManagerWindows7::GetRibbonQuickAccessToolBarChevronOffset`|Esegue l'override di [CMFCVisualManager:: GetRibbonQuickAccessToolBarChevronOffset](../../mfc/reference/cmfcvisualmanager-class.md#getribbonquickaccesstoolbarchevronoffset)|
|`CMFCVisualManagerWindows7::GetRibbonQuickAccessToolBarRightMargin`|Esegue l'override di [CMFCVisualManager:: GetRibbonQuickAccessToolBarRightMargin](../../mfc/reference/cmfcvisualmanager-class.md#getribbonquickaccesstoolbarrightmargin)|
|`CMFCVisualManagerWindows7::IsHighlightWholeMenuItem`|Esegue l'override di [CMFCVisualManagerWindows:: IsHighlightWholeMenuItem](../../mfc/reference/cmfcvisualmanagerwindows-class.md#ishighlightwholemenuitem)|
|`CMFCVisualManagerWindows7::IsOwnerDrawMenuCheck`|Esegue l'override di [CMFCVisualManager:: IsOwnerDrawMenuCheck](../../mfc/reference/cmfcvisualmanager-class.md#isownerdrawmenucheck)|
|`CMFCVisualManagerWindows7::IsRibbonPresent`|Determina se un oggetto `CMFCRibbonBar` è presente e visibile.|
|`CMFCVisualManagerWindows7::OnDrawButtonBorder`|Esegue l'override di [CMFCVisualManagerWindows:: OnDrawButtonBorder](../../mfc/reference/cmfcvisualmanagerwindows-class.md#ondrawbuttonborder)|
|`CMFCVisualManagerWindows7::OnDrawCheckBoxEx`|Esegue l'override di [CMFCVisualManagerWindows:: OnDrawCheckBoxEx](../../mfc/reference/cmfcvisualmanagerwindows-class.md#ondrawcheckboxex)|
|`CMFCVisualManagerWindows7::OnDrawComboDropButton`|Esegue l'override di [CMFCVisualManagerWindows:: OnDrawComboDropButton](../../mfc/reference/cmfcvisualmanagerwindows-class.md#ondrawcombodropbutton)|
|`CMFCVisualManagerWindows7::OnDrawDefaultRibbonImage`|Esegue l'override di [CMFCVisualManager:: OnDrawDefaultRibbonImage](../../mfc/reference/cmfcvisualmanager-class.md#ondrawdefaultribbonimage)|
|`CMFCVisualManagerWindows7::OnDrawMenuBorder`|Esegue l'override di [CMFCVisualManagerWindows:: OnDrawMenuBorder](../../mfc/reference/cmfcvisualmanagerwindows-class.md#ondrawmenuborder)|
|`CMFCVisualManagerWindows7::OnDrawMenuCheck`|Esegue l'override di [CMFCVisualManager:: OnDrawMenuCheck](../../mfc/reference/cmfcvisualmanager-class.md#ondrawmenucheck)|
|`CMFCVisualManagerWindows7::OnDrawMenuLabel`|Esegue l'override di [CMFCVisualManager:: OnDrawMenuLabel](../../mfc/reference/cmfcvisualmanager-class.md#ondrawmenulabel)|
|`CMFCVisualManagerWindows7::OnDrawRadioButton`|Esegue l'override della proprietà `CMFCVisualManager::OnDrawRadioButton`|
|`CMFCVisualManagerWindows7::OnDrawRibbonApplicationButton`|Esegue l'override di [CMFCVisualManager:: OnDrawRibbonApplicationButton](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribbonapplicationbutton)|
|`CMFCVisualManagerWindows7::OnDrawRibbonButtonBorder`|Esegue l'override di [CMFCVisualManager:: OnDrawRibbonButtonBorder](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribbonbuttonborder)|
|`CMFCVisualManagerWindows7::OnDrawRibbonCaption`|Esegue l'override di [CMFCVisualManager:: OnDrawRibbonCaption](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribboncaption)|
|`CMFCVisualManagerWindows7::OnDrawRibbonCaptionButton`|Esegue l'override di [CMFCVisualManager:: OnDrawRibbonCaptionButton](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribboncaptionbutton)|
|`CMFCVisualManagerWindows7::OnDrawRibbonCategory`|Esegue l'override di [CMFCVisualManager:: OnDrawRibbonCategory](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribboncategory)|
|`CMFCVisualManagerWindows7::OnDrawRibbonCategoryTab`|Esegue l'override di [CMFCVisualManager:: OnDrawRibbonCategoryTab](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribboncategorytab)|
|`CMFCVisualManagerWindows7::OnDrawRibbonDefaultPaneButton`|Esegue l'override di [CMFCVisualManager:: OnDrawRibbonDefaultPaneButton](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribbondefaultpanebutton)|
|`CMFCVisualManagerWindows7::OnDrawRibbonGalleryButton`|Esegue l'override di [CMFCVisualManager:: OnDrawRibbonGalleryButton](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribbongallerybutton)|
|`CMFCVisualManagerWindows7::OnDrawRibbonLaunchButton`|Esegue l'override della proprietà `CMFCVisualManager::OnDrawRibbonLaunchButton`|
|`CMFCVisualManagerWindows7::OnDrawRibbonMenuCheckFrame`|Esegue l'override di [CMFCVisualManager:: OnDrawRibbonMenuCheckFrame](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribbonmenucheckframe)|
|`CMFCVisualManagerWindows7::OnDrawRibbonPanel`|Esegue l'override di [CMFCVisualManager:: OnDrawRibbonPanel](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribbonpanel)|
|`CMFCVisualManagerWindows7::OnDrawRibbonPanelCaption`|Esegue l'override di [CMFCVisualManager:: OnDrawRibbonPanelCaption](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribbonpanelcaption)|
|`CMFCVisualManagerWindows7::OnDrawRibbonProgressBar`|Esegue l'override di [CMFCVisualManager:: OnDrawRibbonProgressBar](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribbonprogressbar)|
|`CMFCVisualManagerWindows7::OnDrawRibbonRecentFilesFrame`|Esegue l'override di [CMFCVisualManager:: OnDrawRibbonRecentFilesFrame](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribbonrecentfilesframe)|
|`CMFCVisualManagerWindows7::OnDrawRibbonSliderChannel`|Esegue l'override di [CMFCVisualManager:: OnDrawRibbonSliderChannel](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribbonsliderchannel)|
|`CMFCVisualManagerWindows7::OnDrawRibbonSliderThumb`|Esegue l'override di [CMFCVisualManager:: OnDrawRibbonSliderThumb](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribbonsliderthumb)|
|`CMFCVisualManagerWindows7::OnDrawRibbonSliderZoomButton`|Esegue l'override di [CMFCVisualManager:: OnDrawRibbonSliderZoomButton](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribbonsliderzoombutton)|
|`CMFCVisualManagerWindows7::OnDrawRibbonStatusBarPane`|Esegue l'override di [CMFCVisualManager:: OnDrawRibbonStatusBarPane](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribbonstatusbarpane)|
|`CMFCVisualManagerWindows7::OnDrawRibbonTabsFrame`|Esegue l'override di [CMFCVisualManager:: OnDrawRibbonTabsFrame](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribbontabsframe)|
|`CMFCVisualManagerWindows7::OnDrawStatusBarSizeBox`|Esegue l'override di [CMFCVisualManagerWindows:: OnDrawStatusBarSizeBox](../../mfc/reference/cmfcvisualmanagerwindows-class.md#ondrawstatusbarsizebox)|
|`CMFCVisualManagerWindows7::OnFillBarBackground`|Esegue l'override di [CMFCVisualManagerWindows:: OnFillBarBackground](../../mfc/reference/cmfcvisualmanagerwindows-class.md#onfillbarbackground)|
|`CMFCVisualManagerWindows7::OnFillButtonInterior`|Esegue l'override di [CMFCVisualManagerWindows:: OnFillButtonInterior](../../mfc/reference/cmfcvisualmanagerwindows-class.md#onfillbuttoninterior)|
|[CMFCVisualManagerWindows7:: OnFillMenuImageRect](#onfillmenuimagerect)|Il Framework chiama questo metodo quando riempie l'area intorno alle immagini delle voci di menu.|
|`CMFCVisualManagerWindows7::OnFillRibbonButton`|Esegue l'override di [CMFCVisualManager:: OnFillRibbonButton](../../mfc/reference/cmfcvisualmanager-class.md#onfillribbonbutton)|
|`CMFCVisualManagerWindows7::OnFillRibbonQuickAccessToolBarPopup`|Esegue l'override di [CMFCVisualManager:: OnFillRibbonQuickAccessToolBarPopup](../../mfc/reference/cmfcvisualmanager-class.md#onfillribbonquickaccesstoolbarpopup)|
|`CMFCVisualManagerWindows7::OnHighlightMenuItem`|Esegue l'override di [CMFCVisualManagerWindows:: OnHighlightMenuItem](../../mfc/reference/cmfcvisualmanagerwindows-class.md#onhighlightmenuitem)|
|`CMFCVisualManagerWindows7::OnNcActivate`|Esegue l'override di [CMFCVisualManager:: OnNcActivate](../../mfc/reference/cmfcvisualmanager-class.md#onncactivate)|
|`CMFCVisualManagerWindows7::OnNcPaint`|Esegue l'override di [CMFCVisualManager:: OnNcPaint](../../mfc/reference/cmfcvisualmanager-class.md#onncpaint)|
|`CMFCVisualManagerWindows7::OnUpdateSystemColors`|Esegue l'override di [CMFCVisualManagerWindows:: OnUpdateSystemColors](../../mfc/reference/cmfcvisualmanagerwindows-class.md#onupdatesystemcolors)|
|`CMFCVisualManagerWindows7::SetResourceHandle`|Imposta l'handle di risorsa che descrive gli attributi del gestore di visualizzazione.|
|`CMFCVisualManagerWindows7::SetStyle`|Imposta la combinazione di colori dell' `CMFCVisualManagerWindows7` interfaccia utente grafica.|

## <a name="remarks"></a>Commenti

Utilizzare la `CMFCVisualManagerWindows7` classe per modificare l'aspetto dell'applicazione in modo da simulare un'applicazione Windows 7 predefinita. Questa classe potrebbe non essere valida se l'applicazione è in esecuzione in una versione di Windows precedente a Windows 7. In questo scenario, l'applicazione usa la gestione visiva predefinita definita in [CMFCVisualManager](../../mfc/reference/cmfcvisualmanager-class.md).

CMFCVisualManagerWindows7 eredita più metodi sia dalla [classe CMFCVisualManagerWindows](../../mfc/reference/cmfcvisualmanagerwindows-class.md) che dalla `CMFCVisualManager` classe. I metodi elencati nella sezione precedente sono metodi nuovi per la `CMFCVisualManagerWindows7` classe.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCBaseVisualManager](../../mfc/reference/cmfcbasevisualmanager-class.md)

[CMFCVisualManager](../../mfc/reference/cmfcvisualmanager-class.md)

[CMFCVisualManagerOfficeXP](../../mfc/reference/cmfcvisualmanagerofficexp-class.md)

[CMFCVisualManagerWindows](../../mfc/reference/cmfcvisualmanagerwindows-class.md)

`CMFCVisualManagerWindows7`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxvisualmanagerwindows7. h

## <a name="cmfcvisualmanagerwindows7cmfcvisualmanagerwindows7"></a><a name="_dtorcmfcvisualmanagerwindows7"></a> CMFCVisualManagerWindows7:: ~ CMFCVisualManagerWindows7

Distruttore predefinito.

```
virtual ~CMFCVisualManagerWindows7();
```

## <a name="cmfcvisualmanagerwindows7cmfcvisualmanagerwindows7"></a><a name="cmfcvisualmanagerwindows7"></a> CMFCVisualManagerWindows7:: CMFCVisualManagerWindows7

Costruttore predefinito.

```
CMFCVisualManagerWindows7();
```

## <a name="cmfcvisualmanagerwindows7getribboneditbackgroundcolor"></a><a name="getribboneditbackgroundcolor"></a> CMFCVisualManagerWindows7:: GetRibbonEditBackgroundColor

Ottiene il colore di sfondo di una casella di modifica della barra multifunzione.

```
virtual COLORREF GetRibbonEditBackgroundColor (
    CMFCRibbonRichEditCtrl* pEdit,
    BOOL bIsHighlighted,
    BOOL bIsPaneHighlighted,
    BOOL bIsDisabled);
```

### <a name="parameters"></a>Parametri

*EDITPL*<br/>
in Puntatore al controllo di modifica. Questo valore non può essere NULL.

*bIsHighlighted*<br/>
out Restituisce un valore che indica se la casella Ribbon è evidenziata.

*bIsPaneHighlighted*<br/>
out Restituisce TRUE se il pannello della barra multifunzione che contiene *Pedit* è evidenziato.

*bIsDisabled*<br/>
out Restituisce un valore che indica se *Pedit* è disabilitato.

### <a name="return-value"></a>Valore restituito

Colore di sfondo della casella di modifica *Pedit*.

### <a name="remarks"></a>Commenti

## <a name="cmfcvisualmanagerwindows7onfillmenuimagerect"></a><a name="onfillmenuimagerect"></a> CMFCVisualManagerWindows7:: OnFillMenuImageRect

Il Framework chiama questo metodo quando riempie l'area intorno a un'immagine della voce di menu.

```
virtual void OnFillMenuImageRect(
    CDC* pDC,
    CMFCToolBarButton* pButton,
    CRect rectangle,
    CMFCVisualManager::AFX_BUTTON_STATE state);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Puntatore al contesto di dispositivo di un pulsante di menu.

*p*<br/>
in Puntatore a un oggetto `CMFCToolBarButton` . Il Framework riempie lo sfondo per questo pulsante.

*rettangolo*<br/>
in Rettangolo che specifica i limiti dell'area dell'immagine del pulsante di menu.

*state*<br/>
in Stato del pulsante.

### <a name="remarks"></a>Commenti

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCVisualManager](../../mfc/reference/cmfcvisualmanager-class.md)<br/>
[Classe CMFCVisualManagerWindows](../../mfc/reference/cmfcvisualmanagerwindows-class.md)
