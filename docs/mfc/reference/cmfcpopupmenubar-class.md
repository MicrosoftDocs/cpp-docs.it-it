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
ms.openlocfilehash: c0ba90246d19e8dd07c856eec6a518a8513ee665
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81751925"
---
# <a name="cmfcpopupmenubar-class"></a>CMFCPopupMenuBar (classe)

Barra dei menu incorporata in un menu di scelta rapida.

## <a name="syntax"></a>Sintassi

```
class CMFCPopupMenuBar : public CMFCToolBar
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCPopupMenuBar::AdjustSizeImmediate](#adjustsizeimmediate)|Ricalcola immediatamente il layout di un riquadro. Esegue l'override di [CPane:: AdjustSizeImmediate](../../mfc/reference/cpane-class.md#adjustsizeimmediate).|
|[CMFCPopupMenuBar::BuildOrigItems](#buildorigitems)|Carica voci di menu popup da una risorsa di menu specificata.|
|[CMFCPopupMenuBar::CloseDelayedSubMenu](#closedelayedsubmenu)|Chiude un pulsante del menu popup ritardato.|
|[CMFCPopupMenuBar::ExportToMenu](#exporttomenu)|Compila un menu dai pulsanti di menu di scelta rapida.|
|[CMFCPopupMenuBar::FindDestintationToolBar](#finddestintationtoolbar)|Individua la barra degli strumenti in cui si trova un punto specificato.|
|[CMFCPopupMenuBar::GetCurrentMenuImageSize](#getcurrentmenuimagesize)|Indica la dimensione delle immagini dei pulsanti di menu.|
|[CMFCPopupMenuBar::GetDefaultMenuId](#getdefaultmenuid)|Restituisce l'identificatore della voce di menu predefinita.|
|[CMFCPopupMenuBar::GetLastCommandIndex](#getlastcommandindex)|Ottiene l'indice del comando di menu richiamato più di recente.|
|[CMFCPopupMenuBar::GetOffset](#getoffset)|Ottiene l'offset di riga della barra del menu popup.|
|[CMFCPopupMenuBar::ImportFromMenu](#importfrommenu)|Importa i pulsanti del menu popup da un menu specificato.|
|[CMFCPopupMenuBar::IsDropDownListMode](#isdropdownlistmode)|Indica se la barra dei menu popup è in modalità elenco a discesa.|
|[CMFCPopupMenuBar::IsPaletteMode](#ispalettemode)|Indica se la barra dei menu popup è in modalità tavolozza.|
|[CMFCPopupMenuBar::IsRibbonPanel](#isribbonpanel)|Indica se questo è un pannello della barra multifunzione (FALSE per impostazione predefinita).|
|[CMFCPopupMenuBar::IsRibbonPanelInRegularMode](#isribbonpanelinregularmode)|Indica se questo è un pannello della barra multifunzione in modalità normale (FALSE per impostazione predefinita).|
|[CMFCPopupMenuBar::LoadFromHash](#loadfromhash)|Carica un menu archiviato.|
|[CMFCPopupMenuBar::RestoreDelayedSubMenu](#restoredelayedsubmenu)|Ripristina un pulsante di menu ritardato per chiudere la barra dei menu popup.|
|[CMFCPopupMenuBar::SetButtonStyle](#setbuttonstyle)|Imposta lo stile del pulsante della barra degli strumenti in corrispondenza dell'indice specificato. Esegue l'override di [CMFCToolBar:: SetButtonStyle](../../mfc/reference/cmfctoolbar-class.md#setbuttonstyle).|
|[CMFCPopupMenuBar::SetOffset](#setoffset)|Imposta l'offset di riga della barra dei menu popup.|
|[CMFCPopupMenuBar::StartPopupMenuTimer](#startpopupmenutimer)|Avvia il timer per un pulsante del menu popup ritardato specificato.|

### <a name="data-members"></a>Membri dei dati

|Nome|Description|
|----------|-----------------|
|[CMFCPopupMenuBar:: m_bDisableSideBarInXPMode](#m_bdisablesidebarinxpmode)|Specifica se la barra laterale grigia verrà visualizzata quando l'applicazione ha un aspetto di Windows XP.|

## <a name="remarks"></a>Osservazioni

La `CMFCPopupMenuBar` classe viene creata contemporaneamente a una [classe CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md) e incorporata al suo interno. Il `CMFCPopupMenuBar` copre l'intera area client dell' `CMFCPopupMenu` oggetto. Supporta l'input della tastiera e del mouse. Comunica anche tale input per `CMFCPopupMenu` e alla finestra cornice di primo livello.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come inizializzare `CMFCPopupMenuBar` un oggetto da `CMFCPopupMenu` un oggetto. Questo frammento di codice fa parte dell' [esempio Draw Client](../../overview/visual-cpp-samples.md).

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

## <a name="cmfcpopupmenubaradjustsizeimmediate"></a><a name="adjustsizeimmediate"></a>CMFCPopupMenuBar:: AdjustSizeImmediate

Ricalcola immediatamente il layout del riquadro della barra dei menu popup. Esegue l'override di [CPane:: AdjustSizeImmediate](../../mfc/reference/cpane-class.md#adjustsizeimmediate).

```
virtual void AdjustSizeImmediate(BOOL bRecalcLayout);
```

### <a name="parameters"></a>Parametri

*bRecalcLayout*<br/>
in TRUE per ricalcolare automaticamente il layout del riquadro della barra dei menu popup; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcpopupmenubarbuildorigitems"></a><a name="buildorigitems"></a>CMFCPopupMenuBar:: BuildOrigItems

Carica voci di menu popup da una risorsa di menu specificata.

```
BOOL BuildOrigItems(UINT uiMenuResID);
```

### <a name="parameters"></a>Parametri

*uiMenuResID*<br/>
in Specifica l'ID menu della risorsa di menu da caricare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione ha esito positivo o FALSE in caso contrario.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcpopupmenubarclosedelayedsubmenu"></a><a name="closedelayedsubmenu"></a>CMFCPopupMenuBar:: CloseDelayedSubMenu

Chiude un pulsante del menu popup che è stato posticipato.

```
virtual void CloseDelayedSubMenu();
```

### <a name="remarks"></a>Osservazioni

## <a name="cmfcpopupmenubarexporttomenu"></a><a name="exporttomenu"></a>CMFCPopupMenuBar:: ExportToMenu

Compila un menu dai pulsanti del menu popup.

```
virtual HMENU ExportToMenu() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce un handle per il nuovo menu.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcpopupmenubarfinddestintationtoolbar"></a><a name="finddestintationtoolbar"></a>CMFCPopupMenuBar:: FindDestintationToolBar

Individua la barra degli strumenti in cui si trova un punto specificato.

```
CMFCToolBar* FindDestintationToolBar(CPoint point);
```

### <a name="parameters"></a>Parametri

*punto*<br/>
in Punto sullo schermo.

### <a name="return-value"></a>Valore restituito

Restituisce un handle per la barra degli strumenti in cui si trova il punto, se ne esiste uno, oppure NULL in caso contrario.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcpopupmenubargetcurrentmenuimagesize"></a><a name="getcurrentmenuimagesize"></a>CMFCPopupMenuBar:: GetCurrentMenuImageSize

Indica la dimensione delle immagini dei pulsanti di menu.

```
virtual CSize GetCurrentMenuImageSize() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce la dimensione delle immagini dei pulsanti di menu sulla barra degli strumenti.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcpopupmenubargetdefaultmenuid"></a><a name="getdefaultmenuid"></a>CMFCPopupMenuBar:: GetDefaultMenuId

Restituisce l'identificatore della voce di menu predefinita.

```
UINT GetDefaultMenuId() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce l'identificatore della voce di menu predefinita sulla barra dei menu popup.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcpopupmenubargetlastcommandindex"></a><a name="getlastcommandindex"></a>CMFCPopupMenuBar:: GetLastCommandIndex

Ottiene l'indice del comando di menu richiamato più di recente.

```
static int __stdcall GetLastCommandIndex();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'indice dell'ultimo comando di menu richiamato.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcpopupmenubargetoffset"></a><a name="getoffset"></a>CMFCPopupMenuBar:: GetOffset

Ottiene l'offset di riga della barra del menu popup.

```
int GetOffset() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce l'offset di riga della barra del menu popup.

### <a name="remarks"></a>Osservazioni

Questo valore viene impostato usando [CMFCPopupMenuBar:: seoffset](#setoffset).

## <a name="cmfcpopupmenubarimportfrommenu"></a><a name="importfrommenu"></a>CMFCPopupMenuBar:: ImportFromMenu

Importa i pulsanti del menu popup da un menu specificato.

```
virtual BOOL ImportFromMenu(
    HMENU hMenu,
    BOOL bShowAllCommands = FALSE);
```

### <a name="parameters"></a>Parametri

*hMenu*<br/>
in Menu da cui importare i pulsanti del menu popup.

*bShowAllCommands*<br/>
in TRUE se tutti i comandi nel menu devono essere importati o FALSE se i tipi utilizzati raramente potrebbero essere nascosti.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se i pulsanti di menu sono stati importati correttamente dal menu o FALSE in caso contrario.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcpopupmenubarisdropdownlistmode"></a><a name="isdropdownlistmode"></a>CMFCPopupMenuBar:: IsDropDownListMode

Indica se la barra dei menu popup è in modalità elenco a discesa.

```
BOOL IsDropDownListMode() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se la barra dei menu popup è in modalità elenco a discesa o FALSE in caso contrario.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcpopupmenubarispalettemode"></a><a name="ispalettemode"></a>CMFCPopupMenuBar:: IsPaletteMode

Indica se la barra dei menu popup è in modalità tavolozza.

```
BOOL IsPaletteMode() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se la modalità tavolozza è abilitata o FALSE in caso contrario.

### <a name="remarks"></a>Osservazioni

Quando la barra dei menu è impostata sulla modalità tavolozza, le voci di menu vengono visualizzate in più colonne e un numero limitato di righe.

## <a name="cmfcpopupmenubarisribbonpanel"></a><a name="isribbonpanel"></a>CMFCPopupMenuBar:: IsRibbonPanel

Indica se questo è un pannello della barra multifunzione (FALSE per impostazione predefinita).

```
virtual BOOL IsRibbonPanel() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce FALSE per impostazione predefinita, a indicare che non si tratta di un pannello della barra multifunzione.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcpopupmenubarisribbonpanelinregularmode"></a><a name="isribbonpanelinregularmode"></a>CMFCPopupMenuBar:: IsRibbonPanelInRegularMode

Indica se questo è un pannello della barra multifunzione in modalità normale (FALSE per impostazione predefinita).

```
virtual BOOL IsRibbonPanelInRegularMode() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce FALSE per impostazione predefinita, a indicare che non si tratta di un pannello della barra multifunzione in modalità normale.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcpopupmenubarloadfromhash"></a><a name="loadfromhash"></a>CMFCPopupMenuBar:: LoadFromHash

Carica un menu archiviato.

```
BOOL LoadFromHash(HMENU hMenu);
```

### <a name="parameters"></a>Parametri

*hMenu*<br/>
in Handle per il menu archiviato da caricare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il menu viene caricato correttamente oppure FALSE in caso contrario.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcpopupmenubarm_bdisablesidebarinxpmode"></a><a name="m_bdisablesidebarinxpmode"></a>CMFCPopupMenuBar:: m_bDisableSideBarInXPMode

Parametro booleano che indica se l'applicazione dispone di una barra laterale grigia quando dispone di un aspetto di Windows XP.

```
BOOL m_bDisableSideBarInXPMode;
```

### <a name="remarks"></a>Osservazioni

Se questa variabile membro è impostata su FALSE e l'applicazione ha un aspetto di Windows XP, il framework disegna una barra laterale grigia nell'applicazione.

Il valore predefinito è FALSE.

## <a name="cmfcpopupmenubarrestoredelayedsubmenu"></a><a name="restoredelayedsubmenu"></a>CMFCPopupMenuBar:: RestoreDelayedSubMenu

Ripristina un pulsante di menu ritardato per chiudere la barra dei menu popup.

```
virtual void RestoreDelayedSubMenu();
```

### <a name="remarks"></a>Osservazioni

## <a name="cmfcpopupmenubarsetbuttonstyle"></a><a name="setbuttonstyle"></a>CMFCPopupMenuBar:: SetButtonStyle

Imposta lo stile del pulsante della barra degli strumenti in corrispondenza dell'indice specificato. Esegue l'override di [CMFCToolBar:: SetButtonStyle](../../mfc/reference/cmfctoolbar-class.md#setbuttonstyle).

```
virtual void SetButtonStyle(
    int nIndex,
    UINT nStyle);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
in Indice in base zero del pulsante della barra degli strumenti di cui deve essere impostato lo stile.

*nStyle*<br/>
in Stile del pulsante. Vedere [stili di controllo della barra degli strumenti](../../mfc/reference/toolbar-control-styles.md) per l'elenco degli stili dei pulsanti della barra degli strumenti disponibili.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcpopupmenubarsetoffset"></a><a name="setoffset"></a>CMFCPopupMenuBar:: seoffset

Imposta l'offset di riga della barra dei menu popup.

```cpp
void SetOffset(int iOffset);
```

### <a name="parameters"></a>Parametri

*iOffset*<br/>
in Numero di righe di cui deve essere offset la barra dei menu popup.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcpopupmenubarstartpopupmenutimer"></a><a name="startpopupmenutimer"></a>CMFCPopupMenuBar:: StartPopupMenuTimer

Avvia il timer per un pulsante del menu popup ritardato specificato.

```cpp
void StartPopupMenuTimer(
    CMFCToolBarMenuButton* pMenuButton,
    int nDelayFactor = 1);
```

### <a name="parameters"></a>Parametri

*pMenuButton*<br/>
in Puntatore al pulsante di menu per il quale impostare il timer di ritardo.

*nDelayFactor*<br/>
in Un fattore di ritardo, uguale almeno a uno, da moltiplicare per il tempo di ritardo del menu standard (in genere tra un mezzo e cinque secondi).

### <a name="remarks"></a>Osservazioni

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCColorBar](../../mfc/reference/cmfccolorbar-class.md)<br/>
[Classe CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md)
