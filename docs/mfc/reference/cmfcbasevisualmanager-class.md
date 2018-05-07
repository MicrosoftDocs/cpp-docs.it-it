---
title: Classe CMFCBaseVisualManager | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 496c6905276e789a72c55db1835187b0d4ab342a
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="cmfcbasevisualmanager-class"></a>Classe CMFCBaseVisualManager
Un livello tra i gestori visualizzazione derivate e l'API di tema di Windows.  
  
 `CMFCBaseVisualManager` carica uxtheme, se disponibile e gestisce l'accesso ai metodi dell'API di tema di Windows.  
  
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
|[CMFCBaseVisualManager::DrawCheckBox](#drawcheckbox)|Disegna una casella di controllo utilizzando il tema di Windows corrente.|  
|[CMFCBaseVisualManager::DrawComboBorder](#drawcomboborder)|Disegna un bordo della casella combinata utilizzando il tema di Windows corrente.|  
|[CMFCBaseVisualManager::DrawComboDropButton](#drawcombodropbutton)|Disegna un pulsante di menu a discesa della casella combinata utilizzando il tema di Windows corrente.|  
|[CMFCBaseVisualManager::DrawPushButton](#drawpushbutton)|Disegna un pulsante di comando utilizzando il tema di Windows corrente.|  
|[CMFCBaseVisualManager::DrawRadioButton](#drawradiobutton)|Disegna un controllo pulsante di opzione utilizzando il tema di Windows corrente.|  
|[CMFCBaseVisualManager::DrawStatusBarProgress](#drawstatusbarprogress)|Disegna un indicatore di stato in un controllo barra di stato ( [CMFCStatusBar classe](../../mfc/reference/cmfcstatusbar-class.md)) utilizzando il tema di Windows corrente.|  
|[CMFCBaseVisualManager::FillReBarPane](#fillrebarpane)|Riempie lo sfondo del controllo rebar mediante il tema di Windows corrente.|  
|[CMFCBaseVisualManager::GetStandardWindowsTheme](#getstandardwindowstheme)|Ottiene il tema di Windows corrente.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|||  
|-|-|  
|Nome|Descrizione|  
|[CMFCBaseVisualManager::CleanUpThemes](#cleanupthemes)|Chiamate `CloseThemeData` per tutti gli handle ottenuto `UpdateSystemColors`.|  
|[CMFCBaseVisualManager::UpdateSystemColors](#updatesystemcolors)|Chiamate `OpenThemeData` per ottenere l'handle per la creazione di vari controlli: windows, le barre degli strumenti, pulsanti e così via.|  
  
## <a name="remarks"></a>Note  
 Non è necessario creare istanze degli oggetti di questa classe direttamente.  
  
 Poiché è una classe base per tutti i gestori di visualizzazione, è sufficiente chiamare [CMFCVisualManager::GetInstance](../../mfc/reference/cmfcvisualmanager-class.md#getinstance), ottenere un puntatore a Manager Visual corrente e accedere ai metodi per `CMFCBaseVisualManager` mediante tale puntatore. Tuttavia, se è necessario visualizzare un controllo utilizzando il tema di Windows corrente, è preferibile utilizzare il `CMFCVisualManagerWindows` interfaccia.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCBaseVisualManager](../../mfc/reference/cmfcbasevisualmanager-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxvisualmanager.h  
  
##  <a name="cleanupthemes"></a>  CMFCBaseVisualManager::CleanUpThemes  
 Chiamate `CloseThemeData` per tutti gli handle ottenuto `UpdateSystemColors`.  
  
```  
void CleanUpThemes();
```  
  
### <a name="remarks"></a>Note  
 Solo per uso interno.  
  
##  <a name="cmfcbasevisualmanager"></a>  CMFCBaseVisualManager::CMFCBaseVisualManager  
 Costruisce e inizializza un oggetto `CMFCBaseVisualManager`.  
  
```  
CMFCBaseVisualManager();
```  
  
##  <a name="drawcheckbox"></a>  CMFCBaseVisualManager::DrawCheckBox  
 Disegna una casella di controllo utilizzando il tema di Windows corrente.  
  
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
 [in] `pDC`  
 Un puntatore a un contesto di dispositivo  
  
 [in] `rect`  
 Il rettangolo di delimitazione della casella di controllo.  
  
 [in] `bHighlighted`  
 Specifica se la casella di controllo viene evidenziata.  
  
 [in] `nState`  
 0 per non è selezionata, 1 per checked normale,  
  
 2 per normale misto.  
  
 [in] `bEnabled`  
 Specifica se la casella di controllo è abilitata.  
  
 [in] `bPressed`  
 Specifica se la casella di controllo è stata premuta.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` Se è abilitata l'API di tema. in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 I valori di `nState` corrispondono ai seguenti stili casella di controllo.  
  
|nState|Stile di casella di controllo|  
|------------|---------------------|  
|0|CBS_UNCHECKEDNORMAL|  
|1|CBS_CHECKEDNORMAL|  
|2|CBS_MIXEDNORMAL|  
  
##  <a name="drawcomboborder"></a>  CMFCBaseVisualManager::DrawComboBorder  
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
 [in] `pDC`  
 Puntatore a un contesto di dispositivo.  
  
 [in] `rect`  
 Rettangolo di delimitazione del bordo della casella combinata.  
  
 [in] `bDisabled`  
 Specifica se il bordo della casella combinata è disabilitato.  
  
 [in] `bIsDropped`  
 Specifica se il bordo della casella combinata viene eliminato verso il basso.  
  
 [in] `bIsHighlighted`  
 Specifica se il bordo della casella combinata è evidenziato.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` Se è abilitata l'API di tema. in caso contrario `FALSE`.  
  
##  <a name="drawcombodropbutton"></a>  CMFCBaseVisualManager::DrawComboDropButton  
 Disegna un pulsante di menu a discesa della casella combinata utilizzando il tema di Windows corrente.  
  
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
|[in] `pDC`|Puntatore a un contesto di dispositivo.|  
|[in] `rect`|Il rettangolo di delimitazione del pulsante di menu a discesa della casella combinata.|  
|[in] `bDisabled`|Specifica se il pulsante a discesa della casella combinata è disabilitato.|  
|[in] `bIsDropped`|Specifica se il pulsante a discesa della casella combinata viene eliminato verso il basso.|  
|[in] `bIsHighlighted`|Specifica se il pulsante a discesa della casella combinata è evidenziato.|  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` Se è abilitata l'API di tema. in caso contrario `FALSE`.  
  
##  <a name="drawpushbutton"></a>  CMFCBaseVisualManager::DrawPushButton  
 Disegna un pulsante di comando utilizzando il tema di Windows corrente.  
  
```  
virtual BOOL DrawPushButton(
    CDC* pDC,   
    CRect rect,   
    CMFCButton* pButton,   
    UINT uiState);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore a un contesto di dispositivo.  
  
 [in] `rect`  
 Il rettangolo di delimitazione del pulsante di comando.  
  
 [in] `pButton`  
 Un puntatore al [CMFCButton classe](../../mfc/reference/cmfcbutton-class.md) oggetto da disegnare.  
  
 [in] `uiState`  
 Ignorato. Lo stato è dato da `pButton`.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` Se è abilitata l'API di tema. in caso contrario `FALSE`.  
  
##  <a name="drawradiobutton"></a>  CMFCBaseVisualManager::DrawRadioButton  
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
 [in] `pDC`  
 Puntatore a un contesto di dispositivo.  
  
 [in] `rect`  
 Il rettangolo di delimitazione del pulsante di opzione.  
  
 [in] `bHighlighted`  
 Specifica se il pulsante di opzione è evidenziato.  
  
 [in] `bChecked`  
 Specifica se il pulsante di opzione è selezionato.  
  
 [in] `bEnabled`  
 Specifica se il pulsante di opzione è abilitato.  
  
 [in] `bPressed`  
 Specifica se viene premuto il pulsante di opzione.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` Se è abilitata l'API di tema. in caso contrario `FALSE`.  
  
##  <a name="drawstatusbarprogress"></a>  CMFCBaseVisualManager::DrawStatusBarProgress  
 Disegna l'indicatore di stato nel controllo della barra di stato ( [CMFCStatusBar classe](../../mfc/reference/cmfcstatusbar-class.md)) utilizzando il tema di Windows corrente.  
  
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
 [in] `pDC`  
 Puntatore a un contesto di dispositivo.  
  
 [in] `pStatusBar`  
 Puntatore a barra di stato. Questo valore viene ignorato.  
  
 [in] `rectProgress`  
 Il rettangolo di delimitazione dell'indicatore di stato in `pDC` coordinate.  
  
 [in] `nProgressTotal`  
 Il valore dello stato complessivo.  
  
 [in] `nProgressCurr`  
 Il valore di stato di avanzamento corrente.  
  
 [in] `clrBar`  
 Il colore iniziale. `CMFCBaseVisualManager` Ignora questo. Le classi derivate è possono utilizzarlo per sfumature di colore.  
  
 [in] `clrProgressBarDest`  
 Colore finale. `CMFCBaseVisualManager` Ignora questo. Le classi derivate è possono utilizzarlo per sfumature di colore.  
  
 [in] `clrProgressText`  
 Colore del testo di stato di avanzamento. `CMFCBaseVisualManager` Ignora questo. Il colore del testo è definito da `afxGlobalData.clrBtnText`.  
  
 [in] `bProgressText`  
 Specifica se visualizzare il testo di stato di avanzamento.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` Se è abilitata l'API di tema. in caso contrario `FALSE`.  
  
##  <a name="fillrebarpane"></a>  CMFCBaseVisualManager::FillReBarPane  
 Riempie lo sfondo del controllo rebar mediante il tema di Windows corrente.  
  
```  
virtual void FillReBarPane(
    CDC* pDC,   
    CBasePane* pBar,   
    CRect rectClient);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore a un contesto di dispositivo.  
  
 [in] `pBar`  
 Un puntatore a un riquadro con sfondo deve essere disegnato.  
  
 [in] `rectClient`  
 Il rettangolo di delimitazione dell'area da riempire.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` Se è abilitata l'API di tema. in caso contrario `FALSE`.  
  
##  <a name="getstandardwindowstheme"></a>  CMFCBaseVisualManager::GetStandardWindowsTheme  
 Ottiene il tema di Windows corrente.  
  
```  
virtual WinXpTheme GetStandardWindowsTheme();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il colore del tema di Windows attualmente selezionato. Può essere uno dei seguenti valori enumerati:  
  
- `WinXpTheme_None` -non vi è alcun tema abilitato.  
  
- `WinXpTheme_NonStandard` -tema standard non è selezionata (vale a dire un tema è selezionato, ma nessuno dall'elenco seguente).  
  
- `WinXpTheme_Blue` -tema blu (Luna).  
  
- `WinXpTheme_Olive` -tema GIS.  
  
- `WinXpTheme_Silver` -tema grigio.  
  
##  <a name="updatesystemcolors"></a>  CMFCBaseVisualManager::UpdateSystemColors  
 Chiamate `OpenThemeData` per ottenere l'handle per la creazione di vari controlli: windows, le barre degli strumenti, pulsanti e così via.  
  
```  
void UpdateSystemColors();
```  
  
### <a name="remarks"></a>Note  
 Solo per uso interno.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)
