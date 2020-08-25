---
title: Classe CMFCBaseVisualManager
ms.date: 11/04/2016
f1_keywords:
- CMFCBaseVisualManager
- AFXVISUALMANAGER/CMFCBaseVisualManager
- AFXVISUALMANAGER/CMFCBaseVisualManager::CMFCBaseVisualManager
- AFXVISUALMANAGER/CMFCBaseVisualManager::DrawCheckBox
- AFXVISUALMANAGER/CMFCBaseVisualManager::DrawComboBorder
- AFXVISUALMANAGER/CMFCBaseVisualManager::DrawComboDropButton
- AFXVISUALMANAGER/CMFCBaseVisualManager::DrawPushButton
- AFXVISUALMANAGER/CMFCBaseVisualManager::DrawRadioButton
- AFXVISUALMANAGER/CMFCBaseVisualManager::DrawStatusBarProgress
- AFXVISUALMANAGER/CMFCBaseVisualManager::FillReBarPane
- AFXVISUALMANAGER/CMFCBaseVisualManager::GetStandardWindowsTheme
- AFXVISUALMANAGER/CMFCBaseVisualManager::CleanUpThemes
- AFXVISUALMANAGER/CMFCBaseVisualManager::UpdateSystemColors
helpviewer_keywords:
- CMFCBaseVisualManager [MFC], CMFCBaseVisualManager
- CMFCBaseVisualManager [MFC], DrawCheckBox
- CMFCBaseVisualManager [MFC], DrawComboBorder
- CMFCBaseVisualManager [MFC], DrawComboDropButton
- CMFCBaseVisualManager [MFC], DrawPushButton
- CMFCBaseVisualManager [MFC], DrawRadioButton
- CMFCBaseVisualManager [MFC], DrawStatusBarProgress
- CMFCBaseVisualManager [MFC], FillReBarPane
- CMFCBaseVisualManager [MFC], GetStandardWindowsTheme
- CMFCBaseVisualManager [MFC], CleanUpThemes
- CMFCBaseVisualManager [MFC], UpdateSystemColors
ms.assetid: d56f3afc-cdea-4de1-825a-a08999c571e0
ms.openlocfilehash: 79a3c0945fdd0df04e9ee52d7bad97dc0847fa91
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88834297"
---
# <a name="cmfcbasevisualmanager-class"></a>Classe CMFCBaseVisualManager

Livello tra i gestori degli oggetti visivi derivati e l'API del tema di Windows.

`CMFCBaseVisualManager` carica UxTheme.dll, se disponibile, e gestisce l'accesso ai metodi dell'API del tema di Windows.

Questa classe è solo per uso interno.

## <a name="syntax"></a>Sintassi

```
class CMFCBaseVisualManager: public CObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|-|-|
|[CMFCBaseVisualManager:: CMFCBaseVisualManager](#cmfcbasevisualmanager)|Costruisce e inizializza un oggetto `CMFCBaseVisualManager`.|
|`CMFCBaseVisualManager::~CMFCBaseVisualManager`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|-|-|
|[CMFCBaseVisualManager::D rawCheckBox](#drawcheckbox)|Disegna un controllo casella di controllo utilizzando il tema Windows corrente.|
|[CMFCBaseVisualManager::D rawComboBorder](#drawcomboborder)|Disegna un bordo della casella combinata usando il tema di Windows corrente.|
|[CMFCBaseVisualManager::D rawComboDropButton](#drawcombodropbutton)|Disegna un pulsante a discesa della casella combinata usando il tema Windows corrente.|
|[CMFCBaseVisualManager::D rawPushButton](#drawpushbutton)|Disegna un pulsante di push usando il tema Windows corrente.|
|[CMFCBaseVisualManager::D rawRadioButton](#drawradiobutton)|Disegna un controllo pulsante di opzione utilizzando il tema Windows corrente.|
|[CMFCBaseVisualManager::D rawStatusBarProgress](#drawstatusbarprogress)|Disegna un indicatore di stato in un controllo barra di stato ( [classe CMFCStatusBar](../../mfc/reference/cmfcstatusbar-class.md)) utilizzando il tema Windows corrente.|
|[CMFCBaseVisualManager:: FillReBarPane](#fillrebarpane)|Riempie lo sfondo del controllo rebar utilizzando il tema Windows corrente.|
|[CMFCBaseVisualManager:: GetStandardWindowsTheme](#getstandardwindowstheme)|Ottiene il tema corrente di Windows.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|-|-|
|[CMFCBaseVisualManager:: CleanUpThemes](#cleanupthemes)|Chiama `CloseThemeData` per tutti gli handle ottenuti in `UpdateSystemColors` .|
|[CMFCBaseVisualManager:: UpdateSystemColors](#updatesystemcolors)|Chiama `OpenThemeData` per ottenere gli handle per il disegno di diversi controlli: Windows, barre degli strumenti, pulsanti e così via.|

## <a name="remarks"></a>Osservazioni

Non è necessario creare direttamente un'istanza di oggetti di questa classe.

Poiché si tratta di una classe di base per tutti i gestori di oggetti visivi, è possibile chiamare solo [CMFCVisualManager:: GetInstance](../../mfc/reference/cmfcvisualmanager-class.md#getinstance), ottenere un puntatore al gestore di visualizzazione corrente e accedere ai metodi per l' `CMFCBaseVisualManager` uso di tale puntatore. Tuttavia, se è necessario visualizzare un controllo utilizzando il tema Windows corrente, è preferibile utilizzare l' `CMFCVisualManagerWindows` interfaccia.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCBaseVisualManager](../../mfc/reference/cmfcbasevisualmanager-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxvisualmanager. h

## <a name="cmfcbasevisualmanagercleanupthemes"></a><a name="cleanupthemes"></a> CMFCBaseVisualManager:: CleanUpThemes

Chiama `CloseThemeData` per tutti gli handle ottenuti in `UpdateSystemColors` .

```cpp
void CleanUpThemes();
```

### <a name="remarks"></a>Osservazioni

Solo per uso interno.

## <a name="cmfcbasevisualmanagercmfcbasevisualmanager"></a><a name="cmfcbasevisualmanager"></a> CMFCBaseVisualManager:: CMFCBaseVisualManager

Costruisce e inizializza un oggetto `CMFCBaseVisualManager`.

```
CMFCBaseVisualManager();
```

## <a name="cmfcbasevisualmanagerdrawcheckbox"></a><a name="drawcheckbox"></a> CMFCBaseVisualManager::D rawCheckBox

Disegna un controllo casella di controllo utilizzando il tema Windows corrente.

```
virtual BOOL DrawCheckBox(
    CDC* pDC,
    CRect rect,
    BOOL bHighlighted,
    int nState,
    BOOL bEnabled,
    BOOL bPressed);

);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Puntatore a un contesto di dispositivo

*Rect*<br/>
in Rettangolo di delimitazione della casella di controllo.

*bHighlighted*<br/>
in Specifica se la casella di controllo è evidenziata.

*nState*<br/>
[in] 0 per deselezionato, 1 per controllo normale

2 per il normale misto.

*bEnabled*<br/>
in Specifica se la casella di controllo è abilitata.

*bPressed*<br/>
in Specifica se la casella di controllo è premuta.

### <a name="return-value"></a>Valore restituito

TRUE se l'API del tema è abilitata; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

I valori di *nState* corrispondono agli stili della casella di controllo seguenti.

|nState|Stile casella di controllo|
|------------|---------------------|
|0|CBS_UNCHECKEDNORMAL|
|1|CBS_CHECKEDNORMAL|
|2|CBS_MIXEDNORMAL|

## <a name="cmfcbasevisualmanagerdrawcomboborder"></a><a name="drawcomboborder"></a> CMFCBaseVisualManager::D rawComboBorder

Disegna il bordo della casella combinata usando il tema di Windows corrente.

```
virtual BOOL DrawComboBorder(
    CDC* pDC,
    CRect rect,
    BOOL bDisabled,
    BOOL bIsDropped,
    BOOL bIsHighlighted);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Puntatore a un contesto di dispositivo.

*Rect*<br/>
in Rettangolo di delimitazione del bordo della casella combinata.

*bDisabled*<br/>
in Specifica se il bordo della casella combinata è disabilitato.

*bIsDropped*<br/>
in Specifica se il bordo della casella combinata è stato eliminato.

*bIsHighlighted*<br/>
in Specifica se il bordo della casella combinata è evidenziato.

### <a name="return-value"></a>Valore restituito

TRUE se l'API del tema è abilitata; in caso contrario, FALSE.

## <a name="cmfcbasevisualmanagerdrawcombodropbutton"></a><a name="drawcombodropbutton"></a> CMFCBaseVisualManager::D rawComboDropButton

Disegna un pulsante a discesa della casella combinata usando il tema Windows corrente.

```
virtual BOOL DrawComboDropButton(
    CDC* pDC,
    CRect rect,
    BOOL bDisabled,
    BOOL bIsDropped,
    BOOL bIsHighlighted);
```

### <a name="parameters"></a>Parametri

*pDC*\
in Puntatore a un contesto di dispositivo.

*Rect*\
in Rettangolo delimitatore del pulsante a discesa della casella combinata.

*bDisabled*\
in Specifica se il pulsante a discesa della casella combinata è disabilitato.

*bIsDropped*\
in Specifica se il pulsante a discesa della casella combinata è stato eliminato.

*bIsHighlighted*\
in Specifica se il pulsante a discesa della casella combinata è evidenziato.

### <a name="return-value"></a>Valore restituito

TRUE se l'API del tema è abilitata; in caso contrario, FALSE.

## <a name="cmfcbasevisualmanagerdrawpushbutton"></a><a name="drawpushbutton"></a> CMFCBaseVisualManager::D rawPushButton

Disegna un pulsante di push usando il tema Windows corrente.

```
virtual BOOL DrawPushButton(
    CDC* pDC,
    CRect rect,
    CMFCButton* pButton,
    UINT uiState);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Puntatore a un contesto di dispositivo.

*Rect*<br/>
in Rettangolo di delimitazione del pulsante di push.

*p*<br/>
in Puntatore all'oggetto della [classe CMFCButton](../../mfc/reference/cmfcbutton-class.md) da creare.

*uiState*<br/>
in Ignorato. Lo stato viene tratto da *p*.

### <a name="return-value"></a>Valore restituito

TRUE se l'API del tema è abilitata; in caso contrario, FALSE.

## <a name="cmfcbasevisualmanagerdrawradiobutton"></a><a name="drawradiobutton"></a> CMFCBaseVisualManager::D rawRadioButton

Disegna un controllo pulsante di opzione utilizzando il tema Windows corrente.

```
virtual BOOL DrawRadioButton(
    CDC* pDC,
    CRect rect,
    BOOL bHighlighted,
    BOOL bChecked,
    BOOL bEnabled,
    BOOL bPressed);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Puntatore a un contesto di dispositivo.

*Rect*<br/>
in Rettangolo delimitatore del pulsante di opzione.

*bHighlighted*<br/>
in Specifica se il pulsante di opzione è evidenziato.

*bChecked*<br/>
in Specifica se il pulsante di opzione è selezionato.

*bEnabled*<br/>
in Specifica se il pulsante di opzione è abilitato.

*bPressed*<br/>
in Specifica se il pulsante di opzione è premuto.

### <a name="return-value"></a>Valore restituito

TRUE se l'API del tema è abilitata; in caso contrario, FALSE.

## <a name="cmfcbasevisualmanagerdrawstatusbarprogress"></a><a name="drawstatusbarprogress"></a> CMFCBaseVisualManager::D rawStatusBarProgress

Disegna la barra di stato nel controllo barra di stato ( [classe CMFCStatusBar](../../mfc/reference/cmfcstatusbar-class.md)) usando il tema Windows corrente.

```
virtual BOOL DrawStatusBarProgress(
    CDC* pDC,
    CMFCStatusBar* pStatusBar,
    CRect rectProgress,
    int nProgressTotal,
    int nProgressCurr,
    COLORREF clrBar,
    COLORREF clrProgressBarDest,
    COLORREF clrProgressText,
    BOOL bProgressText);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Puntatore a un contesto di dispositivo.

*pStatusBar*<br/>
in Puntatore alla barra di stato. Questo valore viene ignorato.

*rectProgress*<br/>
in Rettangolo di delimitazione dell'indicatore di stato nelle coordinate *PDC* .

*nProgressTotal*<br/>
in Valore di avanzamento totale.

*nProgressCurr*<br/>
in Valore di avanzamento corrente.

*clrBar*<br/>
in Colore iniziale. `CMFCBaseVisualManager` Ignora questa. Le classi derivate possono utilizzarla per le sfumature di colore.

*clrProgressBarDest*<br/>
in Colore finale. `CMFCBaseVisualManager` Ignora questa. Le classi derivate possono utilizzarla per le sfumature di colore.

*clrProgressText*<br/>
in Colore del testo di avanzamento. `CMFCBaseVisualManager` Ignora questa. Il colore del testo è definito da `afxGlobalData.clrBtnText` .

*bProgressText*<br/>
in Specifica se visualizzare il testo dello stato di avanzamento.

### <a name="return-value"></a>Valore restituito

TRUE se l'API del tema è abilitata; in caso contrario, FALSE.

## <a name="cmfcbasevisualmanagerfillrebarpane"></a><a name="fillrebarpane"></a> CMFCBaseVisualManager:: FillReBarPane

Riempie lo sfondo del controllo rebar utilizzando il tema Windows corrente.

```
virtual void FillReBarPane(
    CDC* pDC,
    CBasePane* pBar,
    CRect rectClient);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Puntatore a un contesto di dispositivo.

*pBar*<br/>
in Puntatore a un riquadro il cui sfondo deve essere disegnato.

*rectClient*<br/>
in Rettangolo di delimitazione dell'area da riempire.

### <a name="return-value"></a>Valore restituito

TRUE se l'API del tema è abilitata; in caso contrario, FALSE.

## <a name="cmfcbasevisualmanagergetstandardwindowstheme"></a><a name="getstandardwindowstheme"></a> CMFCBaseVisualManager:: GetStandardWindowsTheme

Ottiene il tema corrente di Windows.

```
virtual WinXpTheme GetStandardWindowsTheme();
```

### <a name="return-value"></a>Valore restituito

Colore del tema Windows attualmente selezionato. Può essere uno dei seguenti valori enumerati:

- `WinXpTheme_None` -Nessun tema abilitato.

- `WinXpTheme_NonStandard` -il tema non standard è selezionato, ovvero un tema è selezionato, ma nessuno nell'elenco riportato di seguito.

- `WinXpTheme_Blue` -tema blu (Luna).

- `WinXpTheme_Olive` -tema oliva.

- `WinXpTheme_Silver` -tema Silver.

## <a name="cmfcbasevisualmanagerupdatesystemcolors"></a><a name="updatesystemcolors"></a> CMFCBaseVisualManager:: UpdateSystemColors

Chiama `OpenThemeData` per ottenere gli handle per il disegno di diversi controlli: Windows, barre degli strumenti, pulsanti e così via.

```cpp
void UpdateSystemColors();
```

### <a name="remarks"></a>Osservazioni

Solo per uso interno.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)
