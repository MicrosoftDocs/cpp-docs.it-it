---
title: CMFCPopupMenuBar (classe)
ms.date: 11/04/2016
f1_keywords:
- CMFCPopupMenuBar
- AFXPOPUPMENUBAR/CMFCPopupMenuBar
- AFXPOPUPMENUBAR/CMFCPopupMenuBar::AdjustSizeImmediate
- AFXPOPUPMENUBAR/CMFCPopupMenuBar::BuildOrigItems
- AFXPOPUPMENUBAR/CMFCPopupMenuBar::CloseDelayedSubMenu
- AFXPOPUPMENUBAR/CMFCPopupMenuBar::ExportToMenu
- AFXPOPUPMENUBAR/CMFCPopupMenuBar::FindDestintationToolBar
- AFXPOPUPMENUBAR/CMFCPopupMenuBar::GetCurrentMenuImageSize
- AFXPOPUPMENUBAR/CMFCPopupMenuBar::GetDefaultMenuId
- AFXPOPUPMENUBAR/CMFCPopupMenuBar::GetLastCommandIndex
- AFXPOPUPMENUBAR/CMFCPopupMenuBar::GetOffset
- AFXPOPUPMENUBAR/CMFCPopupMenuBar::ImportFromMenu
- AFXPOPUPMENUBAR/CMFCPopupMenuBar::IsDropDownListMode
- AFXPOPUPMENUBAR/CMFCPopupMenuBar::IsPaletteMode
- AFXPOPUPMENUBAR/CMFCPopupMenuBar::IsRibbonPanel
- AFXPOPUPMENUBAR/CMFCPopupMenuBar::IsRibbonPanelInRegularMode
- AFXPOPUPMENUBAR/CMFCPopupMenuBar::LoadFromHash
- AFXPOPUPMENUBAR/CMFCPopupMenuBar::RestoreDelayedSubMenu
- AFXPOPUPMENUBAR/CMFCPopupMenuBar::SetButtonStyle
- AFXPOPUPMENUBAR/CMFCPopupMenuBar::SetOffset
- AFXPOPUPMENUBAR/CMFCPopupMenuBar::StartPopupMenuTimer
- AFXPOPUPMENUBAR/CMFCPopupMenuBar::m_bDisableSideBarInXPMode
helpviewer_keywords:
- CMFCPopupMenuBar [MFC], AdjustSizeImmediate
- CMFCPopupMenuBar [MFC], BuildOrigItems
- CMFCPopupMenuBar [MFC], CloseDelayedSubMenu
- CMFCPopupMenuBar [MFC], ExportToMenu
- CMFCPopupMenuBar [MFC], FindDestintationToolBar
- CMFCPopupMenuBar [MFC], GetCurrentMenuImageSize
- CMFCPopupMenuBar [MFC], GetDefaultMenuId
- CMFCPopupMenuBar [MFC], GetLastCommandIndex
- CMFCPopupMenuBar [MFC], GetOffset
- CMFCPopupMenuBar [MFC], ImportFromMenu
- CMFCPopupMenuBar [MFC], IsDropDownListMode
- CMFCPopupMenuBar [MFC], IsPaletteMode
- CMFCPopupMenuBar [MFC], IsRibbonPanel
- CMFCPopupMenuBar [MFC], IsRibbonPanelInRegularMode
- CMFCPopupMenuBar [MFC], LoadFromHash
- CMFCPopupMenuBar [MFC], RestoreDelayedSubMenu
- CMFCPopupMenuBar [MFC], SetButtonStyle
- CMFCPopupMenuBar [MFC], SetOffset
- CMFCPopupMenuBar [MFC], StartPopupMenuTimer
- CMFCPopupMenuBar [MFC], m_bDisableSideBarInXPMode
ms.assetid: 4c93c459-7f70-4240-8c63-280bb811e374
ms.openlocfilehash: acb1e2be7d40e5e0c569fffcc92c57c750be8f91
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "58776778"
---
# <a name="cmfcpopupmenubar-class"></a>CMFCPopupMenuBar (classe)

Barra dei menu incorporata in un menu di scelta rapida.

## <a name="syntax"></a>Sintassi

```
class CMFCPopupMenuBar : public CMFCToolBar
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCPopupMenuBar::AdjustSizeImmediate](#adjustsizeimmediate)|Immediatamente Ricalcola il layout di un riquadro. (Esegue l'override [CPane::AdjustSizeImmediate](../../mfc/reference/cpane-class.md#adjustsizeimmediate).)|
|[CMFCPopupMenuBar::BuildOrigItems](#buildorigitems)|Carica le voci di menu di scelta rapida da una risorsa di menu specificata.|
|[CMFCPopupMenuBar::CloseDelayedSubMenu](#closedelayedsubmenu)|Chiude un pulsante di menu popup ritardata.|
|[CMFCPopupMenuBar::ExportToMenu](#exporttomenu)|Compila un menu di scelta dai pulsanti di menu di scelta rapida.|
|[CMFCPopupMenuBar::FindDestintationToolBar](#finddestintationtoolbar)|Individua la barra degli strumenti in cui un punto specificato si trova.|
|[CMFCPopupMenuBar::GetCurrentMenuImageSize](#getcurrentmenuimagesize)|Indica le dimensioni delle immagini di pulsante di menu.|
|[CMFCPopupMenuBar::GetDefaultMenuId](#getdefaultmenuid)|Restituisce l'identificatore della voce di menu predefinita.|
|[CMFCPopupMenuBar::GetLastCommandIndex](#getlastcommandindex)|Ottiene l'indice del comando di menu richiamato più di recente.|
|[CMFCPopupMenuBar::GetOffset](#getoffset)|Ottiene l'offset di riga della barra dei menu popup.|
|[CMFCPopupMenuBar::ImportFromMenu](#importfrommenu)|Importa i pulsanti dei menu di scelta rapida da un menu di scelta specificato.|
|[CMFCPopupMenuBar::IsDropDownListMode](#isdropdownlistmode)|Indica se la barra dei menu di scelta rapida è in modalità elenco a discesa.|
|[CMFCPopupMenuBar::IsPaletteMode](#ispalettemode)|Indica se la barra dei menu di scelta rapida è in modalità della tavolozza.|
|[CMFCPopupMenuBar::IsRibbonPanel](#isribbonpanel)|Indica se si tratta di un pannello della barra multifunzione (FALSE per impostazione predefinita).|
|[CMFCPopupMenuBar::IsRibbonPanelInRegularMode](#isribbonpanelinregularmode)|Indica se si tratta di un pannello della barra multifunzione in modalità normale (FALSE per impostazione predefinita).|
|[CMFCPopupMenuBar::LoadFromHash](#loadfromhash)|Carica un menu archiviato.|
|[CMFCPopupMenuBar::RestoreDelayedSubMenu](#restoredelayedsubmenu)|Ripristina un pulsante di menu ritardata per la chiusura della barra dei menu di scelta rapida.|
|[CMFCPopupMenuBar::SetButtonStyle](#setbuttonstyle)|Imposta lo stile del pulsante della barra degli strumenti in corrispondenza dell'indice specificato. (Esegue l'override [CMFCToolBar::SetButtonStyle](../../mfc/reference/cmfctoolbar-class.md#setbuttonstyle).)|
|[CMFCPopupMenuBar::SetOffset](#setoffset)|Imposta l'offset di riga della barra dei menu popup.|
|[CMFCPopupMenuBar::StartPopupMenuTimer](#startpopupmenutimer)|Avvia il timer per un pulsante di menu popup ritardata specificato.|

### <a name="data-members"></a>Membri di dati

|Nome|Descrizione|
|----------|-----------------|
|[CMFCPopupMenuBar::m_bDisableSideBarInXPMode](#m_bdisablesidebarinxpmode)|Specifica se l'intestazione laterale grigia verrà visualizzata quando l'applicazione ha un aspetto di Windows XP.|

## <a name="remarks"></a>Note

Il `CMFCPopupMenuBar` viene creato nello stesso momento come un [classe CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md) e incorporato in essa contenuti. Il `CMFCPopupMenuBar` copre l'intera area client del `CMFCPopupMenu` oggetto. Supporta l'input del mouse e tastiera. Comunica inoltre che l'input di `CMFCPopupMenu` e alla finestra cornice di primo livello.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come inizializzare un `CMFCPopupMenuBar` dell'oggetto da un `CMFCPopupMenu` oggetto. Questo frammento di codice fa parte dell' [esempio Draw Client](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_DrawClient#7](../../mfc/reference/codesnippet/cpp/cmfcpopupmenubar-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CBasePane](../../mfc/reference/cbasepane-class.md)

[CPane](../../mfc/reference/cpane-class.md)

[CMFCBaseToolBar](../../mfc/reference/cmfcbasetoolbar-class.md)

[CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)

[CMFCPopupMenuBar](../../mfc/reference/cmfcpopupmenubar-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxpopupmenubar. h

##  <a name="adjustsizeimmediate"></a>  CMFCPopupMenuBar::AdjustSizeImmediate

Immediatamente Ricalcola il layout del riquadro barra del menu popup. (Esegue l'override [CPane::AdjustSizeImmediate](../../mfc/reference/cpane-class.md#adjustsizeimmediate).

```
virtual void AdjustSizeImmediate(BOOL bRecalcLayout);
```

### <a name="parameters"></a>Parametri

*bRecalcLayout*<br/>
[in] TRUE per automaticamente Ricalcola il layout del riquadro barra del menu popup; in caso contrario, FALSE.

### <a name="remarks"></a>Note

##  <a name="buildorigitems"></a>  CMFCPopupMenuBar::BuildOrigItems

Carica le voci di menu di scelta rapida da una risorsa di menu specificata.

```
BOOL BuildOrigItems(UINT uiMenuResID);
```

### <a name="parameters"></a>Parametri

*uiMenuResID*<br/>
[in] Specifica l'ID del menu della risorsa di menu da caricare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se ha esito positivo o FALSE in caso contrario.

### <a name="remarks"></a>Note

##  <a name="closedelayedsubmenu"></a>  CMFCPopupMenuBar::CloseDelayedSubMenu

Chiude un pulsante di menu di scelta rapida che è stato posticipato.

```
virtual void CloseDelayedSubMenu();
```

### <a name="remarks"></a>Note

##  <a name="exporttomenu"></a>  CMFCPopupMenuBar::ExportToMenu

Compila un menu di scelta dai pulsanti di menu popup.

```
virtual HMENU ExportToMenu() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce un handle per il nuovo menu.

### <a name="remarks"></a>Note

##  <a name="finddestintationtoolbar"></a>  CMFCPopupMenuBar::FindDestintationToolBar

Individua la barra degli strumenti in cui un punto specificato si trova.

```
CMFCToolBar* FindDestintationToolBar(CPoint point);
```

### <a name="parameters"></a>Parametri

*punto*<br/>
[in] Un punto dello schermo.

### <a name="return-value"></a>Valore restituito

Restituisce un handle barra degli strumenti in cui si trova il punto, se presente, oppure NULL se non.

### <a name="remarks"></a>Note

##  <a name="getcurrentmenuimagesize"></a>  CMFCPopupMenuBar::GetCurrentMenuImageSize

Indica le dimensioni delle immagini di pulsante di menu.

```
virtual CSize GetCurrentMenuImageSize() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce le dimensioni delle immagini di pulsante di menu sulla barra degli strumenti.

### <a name="remarks"></a>Note

##  <a name="getdefaultmenuid"></a>  CMFCPopupMenuBar::GetDefaultMenuId

Restituisce l'identificatore della voce di menu predefinita.

```
UINT GetDefaultMenuId() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce l'identificatore della voce di menu predefinito nella barra dei menu popup.

### <a name="remarks"></a>Note

##  <a name="getlastcommandindex"></a>  CMFCPopupMenuBar::GetLastCommandIndex

Ottiene l'indice del comando di menu richiamato più di recente.

```
static int __stdcall GetLastCommandIndex();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'indice dell'ultimo comando di menu che è stato richiamato.

### <a name="remarks"></a>Note

##  <a name="getoffset"></a>  CMFCPopupMenuBar::GetOffset

Ottiene l'offset di riga della barra dei menu popup.

```
int GetOffset() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce l'offset di riga della barra dei menu popup.

### <a name="remarks"></a>Note

Questo valore viene impostato usando [CMFCPopupMenuBar::SetOffset](#setoffset).

##  <a name="importfrommenu"></a>  CMFCPopupMenuBar::ImportFromMenu

Importa i pulsanti dei menu di scelta rapida da un menu di scelta specificato.

```
virtual BOOL ImportFromMenu(
    HMENU hMenu,
    BOOL bShowAllCommands = FALSE);
```

### <a name="parameters"></a>Parametri

*hMenu*<br/>
[in] Il menu da cui importare i pulsanti di menu popup.

*bShowAllCommands*<br/>
[in] TRUE se tutti i comandi del menu devono essere importati oppure FALSE se quelli usati raramente possono essere nascosti.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se i pulsanti di menu sono stati importati correttamente dal menu di scelta o FALSE se non.

### <a name="remarks"></a>Note

##  <a name="isdropdownlistmode"></a>  CMFCPopupMenuBar::IsDropDownListMode

Indica se la barra dei menu di scelta rapida è in modalità elenco a discesa.

```
BOOL IsDropDownListMode() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se la barra dei menu di scelta rapida non è in modalità elenco a discesa o FALSE se.

### <a name="remarks"></a>Note

##  <a name="ispalettemode"></a>  CMFCPopupMenuBar::IsPaletteMode

Indica se la barra dei menu di scelta rapida è in modalità della tavolozza.

```
BOOL IsPaletteMode() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se è abilitata la modalità di tavolozza o FALSE in caso contrario.

### <a name="remarks"></a>Note

Quando la barra dei menu è impostata su modalità tavolozza, voci di menu vengono visualizzate in più colonne e un numero limitato di righe.

##  <a name="isribbonpanel"></a>  CMFCPopupMenuBar::IsRibbonPanel

Indica se si tratta di un pannello della barra multifunzione (FALSE per impostazione predefinita).

```
virtual BOOL IsRibbonPanel() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce FALSE per impostazione predefinita, che indica che non si tratta di un pannello della barra multifunzione.

### <a name="remarks"></a>Note

##  <a name="isribbonpanelinregularmode"></a>  CMFCPopupMenuBar::IsRibbonPanelInRegularMode

Indica se si tratta di un pannello della barra multifunzione in modalità normale (FALSE per impostazione predefinita).

```
virtual BOOL IsRibbonPanelInRegularMode() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce FALSE per impostazione predefinita, che indica che questo non è un pannello della barra multifunzione in modalità normale.

### <a name="remarks"></a>Note

##  <a name="loadfromhash"></a>  CMFCPopupMenuBar::LoadFromHash

Carica un menu archiviato.

```
BOOL LoadFromHash(HMENU hMenu);
```

### <a name="parameters"></a>Parametri

*hMenu*<br/>
[in] Handle per il menu archiviato da caricare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il menu di scelta è caricato correttamente o FALSE in caso contrario.

### <a name="remarks"></a>Note

##  <a name="m_bdisablesidebarinxpmode"></a>  CMFCPopupMenuBar::m_bDisableSideBarInXPMode

Un parametro booleano che indica se l'applicazione dispone di una barra laterale grigia quando si ha un aspetto di Windows XP.

```
BOOL m_bDisableSideBarInXPMode;
```

### <a name="remarks"></a>Note

Se questa variabile membro è impostata su FALSE e l'applicazione ha un aspetto di Windows XP, il framework consente di disegnare una barra laterale grigia nell'applicazione.

Il valore predefinito è FALSE.

##  <a name="restoredelayedsubmenu"></a>  CMFCPopupMenuBar::RestoreDelayedSubMenu

Ripristina un pulsante di menu ritardata per la chiusura della barra dei menu di scelta rapida.

```
virtual void RestoreDelayedSubMenu();
```

### <a name="remarks"></a>Note

##  <a name="setbuttonstyle"></a>  CMFCPopupMenuBar::SetButtonStyle

Imposta lo stile del pulsante della barra degli strumenti in corrispondenza dell'indice specificato. (Esegue l'override [CMFCToolBar::SetButtonStyle](../../mfc/reference/cmfctoolbar-class.md#setbuttonstyle).)

```
virtual void SetButtonStyle(
    int nIndex,
    UINT nStyle);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
[in] Indice a base zero del pulsante della barra degli strumenti è necessario impostare il cui stile.

*nStyle*<br/>
[in] Lo stile del pulsante. Visualizzare [stili dei controlli ToolBar](../../mfc/reference/toolbar-control-styles.md) per l'elenco di stili dei pulsanti della barra degli strumenti disponibili.

### <a name="remarks"></a>Note

##  <a name="setoffset"></a>  CMFCPopupMenuBar::SetOffset

Imposta l'offset di riga della barra dei menu popup.

```
void SetOffset(int iOffset);
```

### <a name="parameters"></a>Parametri

*iOffset*<br/>
[in] Il numero di righe che deve essere con offset della barra dei menu di scelta rapida.

### <a name="remarks"></a>Note

##  <a name="startpopupmenutimer"></a>  CMFCPopupMenuBar::StartPopupMenuTimer

Avvia il timer per un pulsante di menu popup ritardata specificato.

```
void StartPopupMenuTimer(
    CMFCToolBarMenuButton* pMenuButton,
    int nDelayFactor = 1);
```

### <a name="parameters"></a>Parametri

*pMenuButton*<br/>
[in] Puntatore al pulsante di menu per cui impostare il timer di ritardo.

*nDelayFactor*<br/>
[in] Un fattore ritardo pari ad almeno uno, per cui moltiplicare il tempo di ritardo di menu standard (in genere tra un mezzo secondo e 5 secondi).

### <a name="remarks"></a>Note

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCColorBar](../../mfc/reference/cmfccolorbar-class.md)<br/>
[Classe CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md)
