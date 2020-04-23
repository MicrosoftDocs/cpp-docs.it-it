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
ms.openlocfilehash: ac64a3feac5d124c2bfa67fc857dad5045c2dd28
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81754884"
---
# <a name="cmfcbasevisualmanager-class"></a>Classe CMFCBaseVisualManager

Un livello tra i gestori visivi derivati e l'API del tema di Windows.

`CMFCBaseVisualManager`carica UxTheme.dll, se disponibile, e gestisce l'accesso ai metodi dell'API del tema di Windows.

Questa classe è solo per uso interno.

## <a name="syntax"></a>Sintassi

```
class CMFCBaseVisualManager: public CObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|||
|-|-|
|Nome|Descrizione|
|[CMFCBaseVisualManager::CMFCBaseVisualManager](#cmfcbasevisualmanager)|Costruisce e inizializza un oggetto `CMFCBaseVisualManager`.|
|`CMFCBaseVisualManager::~CMFCBaseVisualManager`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|||
|-|-|
|Nome|Descrizione|
|[CMFCBaseVisualManager::DrawCheckBox](#drawcheckbox)|Disegna un controllo casella di controllo utilizzando il tema di Windows corrente.|
|[CMFCBaseVisualManager::DrawComboBorder](#drawcomboborder)|Disegna un bordo della casella combinata utilizzando il tema di Windows corrente.|
|[CMFCBaseVisualManager::DrawComboDropButton](#drawcombodropbutton)|Disegna un pulsante a discesa della casella combinata utilizzando il tema di Windows corrente.|
|[CMFCBaseVisualManager::DrawPushButton](#drawpushbutton)|Disegna un pulsante di comando utilizzando il tema di Windows corrente.|
|[CMFCBaseVisualManager::DrawRadioButton](#drawradiobutton)|Disegna un controllo pulsante di opzione utilizzando il tema di Windows corrente.|
|[CMFCBaseVisualManager::DrawStatusBarProgress](#drawstatusbarprogress)|Disegna un indicatore di stato su un controllo barra di stato ( [CMFCStatusBar class](../../mfc/reference/cmfcstatusbar-class.md)) utilizzando il tema di Windows corrente.|
|[CMFCBaseVisualManager::FillReBarPane](#fillrebarpane)|Riempie lo sfondo del controllo Rebar utilizzando il tema di Windows corrente.|
|[CMFCBaseVisualManager::GetStandardWindowsTheme](#getstandardwindowstheme)|Ottiene il tema di Windows corrente.|

### <a name="protected-methods"></a>Metodi protetti

|||
|-|-|
|Nome|Descrizione|
|[CMFCBaseVisualManager::CleanUpThemes](#cleanupthemes)|Chiamate `CloseThemeData` per tutti `UpdateSystemColors`gli handle ottenuti in .|
|[CMFCBaseVisualManager::UpdateSystemColors](#updatesystemcolors)|Chiamate `OpenThemeData` per ottenere handle per il disegno di vari controlli: finestre, barre degli strumenti, pulsanti e così via.|

## <a name="remarks"></a>Osservazioni

Non è necessario creare direttamente un'istanza di oggetti di questa classe.

Poiché è una classe base per tutti i gestori visivi, è sufficiente chiamare [CMFCVisualManager::GetInstance](../../mfc/reference/cmfcvisualmanager-class.md#getinstance), ottenere un puntatore a Visual Manager corrente e accedere ai metodi per `CMFCBaseVisualManager` l'utilizzo di tale puntatore. Tuttavia, se è necessario visualizzare un controllo utilizzando il tema di `CMFCVisualManagerWindows` Windows corrente, è preferibile utilizzare l'interfaccia.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCBaseVisualManager](../../mfc/reference/cmfcbasevisualmanager-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxvisualmanager.h

## <a name="cmfcbasevisualmanagercleanupthemes"></a><a name="cleanupthemes"></a>CMFCBaseVisualManager::CleanUpThemes

Chiamate `CloseThemeData` per tutti `UpdateSystemColors`gli handle ottenuti in .

```cpp
void CleanUpThemes();
```

### <a name="remarks"></a>Osservazioni

Solo per uso interno.

## <a name="cmfcbasevisualmanagercmfcbasevisualmanager"></a><a name="cmfcbasevisualmanager"></a>CMFCBaseVisualManager::CMFCBaseVisualManager

Costruisce e inizializza un oggetto `CMFCBaseVisualManager`.

```
CMFCBaseVisualManager();
```

## <a name="cmfcbasevisualmanagerdrawcheckbox"></a><a name="drawcheckbox"></a>CMFCBaseVisualManager::DrawCheckBox

Disegna un controllo casella di controllo utilizzando il tema di Windows corrente.

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
[in] Puntatore a un contesto di dispositivoA pointer to a device context

*Rect*<br/>
[in] Rettangolo di delimitazione della casella di controllo.

*bEvidenziato*<br/>
[in] Specifica se la casella di controllo è evidenziata.

*nStato*<br/>
[in] 0 per unchecked, 1 per la normale controllata,

2 per il normale misto.

*bAbilitato*<br/>
[in] Specifica se la casella di controllo è attivata.

*bPressione*<br/>
[in] Specifica se la casella di controllo è premuta.

### <a name="return-value"></a>Valore restituito

TRUESe l'API del tema è abilitata. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

I valori di *nState* corrispondono agli stili delle caselle di controllo seguenti.

|nStato|Stile casella di controllo|
|------------|---------------------|
|0|CBS_UNCHECKEDNORMAL|
|1|CBS_CHECKEDNORMAL|
|2|CBS_MIXEDNORMAL|

## <a name="cmfcbasevisualmanagerdrawcomboborder"></a><a name="drawcomboborder"></a>CMFCBaseVisualManager::DrawComboBorder

Disegna il bordo della casella combinata utilizzando il tema di Windows corrente.

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
[in] Puntatore a un contesto di dispositivo.

*Rect*<br/>
[in] Rettangolo di delimitazione del bordo della casella combinata.

*bDisabilitato*<br/>
[in] Specifica se il bordo della casella combinata è disabilitato.

*bIsAbbassato*<br/>
[in] Specifica se il bordo della casella combinata viene rilasciato verso il basso.

*bIsEvidenziato*<br/>
[in] Specifica se il bordo della casella combinata è evidenziato.

### <a name="return-value"></a>Valore restituito

TRUESe l'API del tema è abilitata. in caso contrario, FALSE.

## <a name="cmfcbasevisualmanagerdrawcombodropbutton"></a><a name="drawcombodropbutton"></a>CMFCBaseVisualManager::DrawComboDropButton

Disegna un pulsante a discesa della casella combinata utilizzando il tema di Windows corrente.

```
virtual BOOL DrawComboDropButton(
    CDC* pDC,
    CRect rect,
    BOOL bDisabled,
    BOOL bIsDropped,
    BOOL bIsHighlighted);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*pDC*|[in] Puntatore a un contesto di dispositivo.|
|*Rect*|[in] Rettangolo di delimitazione del pulsante a discesa della casella combinata.|
|*bDisabilitato*|[in] Specifica se il pulsante a discesa della casella combinata è disabilitato.|
|*bIsAbbassato*|[in] Specifica se il pulsante a discesa della casella combinata viene rilasciato.|
|*bIsEvidenziato*|[in] Specifica se il pulsante a discesa della casella combinata è evidenziato.|

### <a name="return-value"></a>Valore restituito

TRUESe l'API del tema è abilitata. in caso contrario, FALSE.

## <a name="cmfcbasevisualmanagerdrawpushbutton"></a><a name="drawpushbutton"></a>CMFCBaseVisualManager::DrawPushButton

Disegna un pulsante di comando utilizzando il tema di Windows corrente.

```
virtual BOOL DrawPushButton(
    CDC* pDC,
    CRect rect,
    CMFCButton* pButton,
    UINT uiState);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un contesto di dispositivo.

*Rect*<br/>
[in] Rettangolo di delimitazione del pulsante di comando.

*pButton (Pulsante)*<br/>
[in] Puntatore all'oggetto [classe CMFCButton](../../mfc/reference/cmfcbutton-class.md) da disegnare.

*uiState (informazioni in stato di stato*<br/>
[in] Ignorato. Lo stato è tratto da *pButton*.

### <a name="return-value"></a>Valore restituito

TRUESe l'API del tema è abilitata. in caso contrario, FALSE.

## <a name="cmfcbasevisualmanagerdrawradiobutton"></a><a name="drawradiobutton"></a>CMFCBaseVisualManager::DrawRadioButton

Disegna un controllo pulsante di opzione utilizzando il tema di Windows corrente.

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
[in] Puntatore a un contesto di dispositivo.

*Rect*<br/>
[in] Rettangolo di delimitazione del pulsante di opzione.

*bEvidenziato*<br/>
[in] Specifica se il pulsante di opzione è evidenziato.

*bControllato*<br/>
[in] Specifica se il pulsante di opzione è selezionato.

*bAbilitato*<br/>
[in] Specifica se il pulsante di opzione è abilitato.

*bPressione*<br/>
[in] Specifica se il pulsante di opzione è premuto.

### <a name="return-value"></a>Valore restituito

TRUESe l'API del tema è abilitata. in caso contrario, FALSE.

## <a name="cmfcbasevisualmanagerdrawstatusbarprogress"></a><a name="drawstatusbarprogress"></a>CMFCBaseVisualManager::DrawStatusBarProgress

Disegna l'indicatore di stato sul controllo barra di stato ( [CMFCStatusBar (classe](../../mfc/reference/cmfcstatusbar-class.md)) utilizzando il tema di Windows corrente.

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
[in] Puntatore a un contesto di dispositivo.

*pStatusBar (barra degli stati in stato)*<br/>
[in] Puntatore alla barra di stato. Questo valore viene ignorato.

*rectProgresso*<br/>
[in] Rettangolo di delimitazione dell'indicatore di stato in coordinate *pDC.*

*nProgressTotal*<br/>
[in] Valore di avanzamento totale.

*nProgressCurr*<br/>
[in] Valore di avanzamento corrente.

*clrBar*<br/>
[in] Colore iniziale. `CMFCBaseVisualManager`ignora questo. Le classi derivate possono utilizzarlo per le sfumature di colore.

*clrProgressBarDest*<br/>
[in] Colore finale. `CMFCBaseVisualManager`ignora questo. Le classi derivate possono utilizzarlo per le sfumature di colore.

*clrProgressText*<br/>
[in] Colore del testo di avanzamento. `CMFCBaseVisualManager`ignora questo. Il colore del `afxGlobalData.clrBtnText`testo è definito da .

*bProgressText*<br/>
[in] Specifica se visualizzare il testo di avanzamento.

### <a name="return-value"></a>Valore restituito

TRUESe l'API del tema è abilitata. in caso contrario, FALSE.

## <a name="cmfcbasevisualmanagerfillrebarpane"></a><a name="fillrebarpane"></a>CMFCBaseVisualManager::FillReBarPane

Riempie lo sfondo del controllo Rebar utilizzando il tema di Windows corrente.

```
virtual void FillReBarPane(
    CDC* pDC,
    CBasePane* pBar,
    CRect rectClient);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un contesto di dispositivo.

*pBar (Barra)*<br/>
[in] Puntatore a un riquadro il cui sfondo deve essere disegnato.

*RectClient (client)*<br/>
[in] Rettangolo di delimitazione dell'area da riempire.

### <a name="return-value"></a>Valore restituito

TRUESe l'API del tema è abilitata. in caso contrario, FALSE.

## <a name="cmfcbasevisualmanagergetstandardwindowstheme"></a><a name="getstandardwindowstheme"></a>CMFCBaseVisualManager::GetStandardWindowsTheme

Ottiene il tema di Windows corrente.

```
virtual WinXpTheme GetStandardWindowsTheme();
```

### <a name="return-value"></a>Valore restituito

Colore del tema di Windows attualmente selezionato. Può essere uno dei seguenti valori enumerati:

- `WinXpTheme_None`- non c'è nessun tema abilitato.

- `WinXpTheme_NonStandard`- viene selezionato un tema non standard (ovvero è selezionato un tema, ma nessuno dall'elenco sottostante).

- `WinXpTheme_Blue`- tema blu (Luna).

- `WinXpTheme_Olive`- Tema dell'oliva.

- `WinXpTheme_Silver`- Tema d'argento.

## <a name="cmfcbasevisualmanagerupdatesystemcolors"></a><a name="updatesystemcolors"></a>CMFCBaseVisualManager::UpdateSystemColors

Chiamate `OpenThemeData` per ottenere handle per il disegno di vari controlli: finestre, barre degli strumenti, pulsanti e così via.

```cpp
void UpdateSystemColors();
```

### <a name="remarks"></a>Osservazioni

Solo per uso interno.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)
