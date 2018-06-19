---
title: Classe CMFCPopupMenuBar | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1ef3d04291c874bf91ac6ae25fb15929a5c7317f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33374474"
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
|[CMFCPopupMenuBar::BuildOrigItems](#buildorigitems)|Carica le voci di menu di scelta rapida da una risorsa di menu specificato.|  
|[CMFCPopupMenuBar::CloseDelayedSubMenu](#closedelayedsubmenu)|Chiude un pulsante di menu popup ritardata.|  
|[CMFCPopupMenuBar::ExportToMenu](#exporttomenu)|Compila un menu i pulsanti di menu di scelta rapida.|  
|[CMFCPopupMenuBar::FindDestintationToolBar](#finddestintationtoolbar)|Individua la barra degli strumenti in cui si trova un punto specificato.|  
|[CMFCPopupMenuBar::GetCurrentMenuImageSize](#getcurrentmenuimagesize)|Indica le dimensioni delle immagini di pulsante di menu.|  
|[CMFCPopupMenuBar::GetDefaultMenuId](#getdefaultmenuid)|Restituisce l'identificatore della voce di menu predefinita.|  
|[CMFCPopupMenuBar::GetLastCommandIndex](#getlastcommandindex)|Ottiene l'indice del comando di menu richiamato più di recente.|  
|[CMFCPopupMenuBar::GetOffset](#getoffset)|Ottiene l'offset di riga della barra dei menu di scelta rapida.|  
|[CMFCPopupMenuBar::ImportFromMenu](#importfrommenu)|Importa i pulsanti dei menu di scelta rapida da un menu specificato.|  
|[CMFCPopupMenuBar::IsDropDownListMode](#isdropdownlistmode)|Indica se la barra dei menu di scelta rapida è in modalità elenco a discesa.|  
|[CMFCPopupMenuBar::IsPaletteMode](#ispalettemode)|Indica se la barra dei menu di scelta rapida è in modalità della tavolozza.|  
|[CMFCPopupMenuBar::IsRibbonPanel](#isribbonpanel)|Indica se si tratta di un pannello della barra multifunzione ( `FALSE` per impostazione predefinita).|  
|[CMFCPopupMenuBar::IsRibbonPanelInRegularMode](#isribbonpanelinregularmode)|Indica se questo è un pannello della barra multifunzione in modalità normale ( `FALSE` per impostazione predefinita).|  
|[CMFCPopupMenuBar::LoadFromHash](#loadfromhash)|Carica un menu archiviato.|  
|[CMFCPopupMenuBar::RestoreDelayedSubMenu](#restoredelayedsubmenu)|Ripristina un pulsante di menu ritardata per la chiusura della barra dei menu di scelta rapida.|  
|[CMFCPopupMenuBar::SetButtonStyle](#setbuttonstyle)|Imposta lo stile del pulsante della barra degli strumenti in corrispondenza dell'indice specificato. (Esegue l'override [CMFCToolBar::SetButtonStyle](../../mfc/reference/cmfctoolbar-class.md#setbuttonstyle).)|  
|[CMFCPopupMenuBar::SetOffset](#setoffset)|Imposta l'offset di riga della barra dei menu di scelta rapida.|  
|[CMFCPopupMenuBar::StartPopupMenuTimer](#startpopupmenutimer)|Avvia il timer per un pulsante di menu popup ritardata specificato.|  
  
### <a name="data-members"></a>Membri di dati  
  
|nome|Descrizione|  
|----------|-----------------|  
|[CMFCPopupMenuBar::m_bDisableSideBarInXPMode](#m_bdisablesidebarinxpmode)|Specifica se verrà visualizzata sulla barra laterale grigia quando l'applicazione ha un aspetto di Windows XP.|  
  
## <a name="remarks"></a>Note  
 Il `CMFCPopupMenuBar` viene creato nello stesso momento come un [CMFCPopupMenu classe](../../mfc/reference/cmfcpopupmenu-class.md) e incorporati all'interno. Il `CMFCPopupMenuBar` copre l'intera area client del `CMFCPopupMenu` oggetto. Supporta una tastiera e mouse di input. Comunica che l'input di `CMFCPopupMenu` e alla finestra cornice di primo livello.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come inizializzare un `CMFCPopupMenuBar` dell'oggetto da un `CMFCPopupMenu` oggetto. Questo frammento di codice fa parte dell' [esempio Draw Client](../../visual-cpp-samples.md).  
  
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
 Immediatamente Ricalcola il layout del riquadro barra dei menu popup. (Esegue l'override [CPane::AdjustSizeImmediate](../../mfc/reference/cpane-class.md#adjustsizeimmediate).  
  
```  
virtual void AdjustSizeImmediate(BOOL bRecalcLayout);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bRecalcLayout`  
 `TRUE` Per ricalcolare automaticamente il layout del riquadro barra menu popup; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="buildorigitems"></a>  CMFCPopupMenuBar::BuildOrigItems  
 Carica le voci di menu di scelta rapida da una risorsa di menu specificato.  
  
```  
BOOL BuildOrigItems(UINT uiMenuResID);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiMenuResID`  
 Specifica l'ID di menu della risorsa di menu da caricare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `TRUE` se ha esito positivo o `FALSE` in caso contrario.  
  
### <a name="remarks"></a>Note  
  
##  <a name="closedelayedsubmenu"></a>  CMFCPopupMenuBar::CloseDelayedSubMenu  
 Chiude un pulsante di menu di scelta rapida che è stato posticipato.  
  
```  
virtual void CloseDelayedSubMenu();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="exporttomenu"></a>  CMFCPopupMenuBar::ExportToMenu  
 Compila un menu di pulsanti di menu di scelta rapida.  
  
```  
virtual HMENU ExportToMenu() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un handle al nuovo menu.  
  
### <a name="remarks"></a>Note  
  
##  <a name="finddestintationtoolbar"></a>  CMFCPopupMenuBar::FindDestintationToolBar  
 Individua la barra degli strumenti in cui si trova un punto specificato.  
  
```  
CMFCToolBar* FindDestintationToolBar(CPoint point);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `point`  
 Un punto dello schermo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un handle alla barra degli strumenti in cui si trova il punto, eventualmente therei, o `NULL` in caso contrario.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getcurrentmenuimagesize"></a>  CMFCPopupMenuBar::GetCurrentMenuImageSize  
 Indica le dimensioni delle immagini di pulsante di menu.  
  
```  
virtual CSize GetCurrentMenuImageSize() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce le dimensioni delle immagini di pulsante di menu nella barra degli strumenti.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getdefaultmenuid"></a>  CMFCPopupMenuBar::GetDefaultMenuId  
 Restituisce l'identificatore della voce di menu predefinita.  
  
```  
UINT GetDefaultMenuId() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'identificatore della voce di menu predefinito nella barra dei menu di scelta rapida.  
  
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
 Ottiene l'offset di riga della barra dei menu di scelta rapida.  
  
```  
int GetOffset() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'offset di riga della barra dei menu di scelta rapida.  
  
### <a name="remarks"></a>Note  
 Questo valore viene impostato utilizzando [CMFCPopupMenuBar::SetOffset](#setoffset).  
  
##  <a name="importfrommenu"></a>  CMFCPopupMenuBar::ImportFromMenu  
 Importa i pulsanti dei menu di scelta rapida da un menu specificato.  
  
```  
virtual BOOL ImportFromMenu(
    HMENU hMenu,  
    BOOL bShowAllCommands = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `hMenu`  
 Il menu da cui importare i pulsanti dei menu di scelta rapida.  
  
 [in] `bShowAllCommands`  
 `TRUE` Se tutti i comandi del menu devono essere importati, o `FALSE` se quelli utilizzati raramente possono essere nascosti.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `TRUE` se i pulsanti dei menu sono stati importati dal menu o `FALSE` in caso contrario.  
  
### <a name="remarks"></a>Note  
  
##  <a name="isdropdownlistmode"></a>  CMFCPopupMenuBar::IsDropDownListMode  
 Indica se la barra dei menu di scelta rapida è in modalità elenco a discesa.  
  
```  
BOOL IsDropDownListMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `TRUE` se la barra dei menu di scelta rapida è in modalità elenco a discesa o `FALSE` in caso contrario.  
  
### <a name="remarks"></a>Note  
  
##  <a name="ispalettemode"></a>  CMFCPopupMenuBar::IsPaletteMode  
 Indica se la barra dei menu di scelta rapida è in modalità della tavolozza.  
  
```  
BOOL IsPaletteMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `TRUE` se è abilitata la modalità di tavolozza, o `FALSE` in caso contrario.  
  
### <a name="remarks"></a>Note  
 Quando la barra dei menu viene impostato sulla modalità di tavolozza, voci di menu disponibili in più colonne e un numero limitato di righe.  
  
##  <a name="isribbonpanel"></a>  CMFCPopupMenuBar::IsRibbonPanel  
 Indica se si tratta di un pannello della barra multifunzione ( `FALSE` per impostazione predefinita).  
  
```  
virtual BOOL IsRibbonPanel() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `FALSE` per impostazione predefinita, che indica che non si tratta di un pannello della barra multifunzione.  
  
### <a name="remarks"></a>Note  
  
##  <a name="isribbonpanelinregularmode"></a>  CMFCPopupMenuBar::IsRibbonPanelInRegularMode  
 Indica se questo è un pannello della barra multifunzione in modalità normale ( `FALSE` per impostazione predefinita).  
  
```  
virtual BOOL IsRibbonPanelInRegularMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `FALSE` per impostazione predefinita, che indica che questo non è un pannello della barra multifunzione in modalità normale.  
  
### <a name="remarks"></a>Note  
  
##  <a name="loadfromhash"></a>  CMFCPopupMenuBar::LoadFromHash  
 Carica un menu archiviato.  
  
```  
BOOL LoadFromHash(HMENU hMenu);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `hMenu`  
 Un handle per il menu archiviato da caricare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `TRUE` se è stato caricato correttamente, il menu o `FALSE` in caso contrario.  
  
### <a name="remarks"></a>Note  
  
##  <a name="m_bdisablesidebarinxpmode"></a>  CMFCPopupMenuBar::m_bDisableSideBarInXPMode  
 Un parametro booleano che indica se l'applicazione dispone di una barra laterale grigia quando ha un aspetto di Windows XP.  
  
```  
BOOL m_bDisableSideBarInXPMode;  
```  
  
### <a name="remarks"></a>Note  
 Se questa variabile è impostata su `FALSE` e l'applicazione ha un aspetto di Windows XP, il framework crea una barra laterale grigia nell'applicazione.  
  
 Il valore predefinito è `FALSE`.  
  
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
 [in] `nIndex`  
 Indice in base zero del pulsante della barra degli strumenti quali lo stile è necessario impostare.  
  
 [in] `nStyle`  
 Lo stile del pulsante. Vedere [stili del controllo barra degli strumenti](../../mfc/reference/toolbar-control-styles.md) per un elenco di stili dei pulsanti della barra degli strumenti disponibili.  
  
### <a name="remarks"></a>Note  
  
##  <a name="setoffset"></a>  CMFCPopupMenuBar::SetOffset  
 Imposta l'offset di riga della barra dei menu di scelta rapida.  
  
```  
void SetOffset(int iOffset);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iOffset`  
 Il numero di righe che deve essere con offset la barra dei menu di scelta rapida.  
  
### <a name="remarks"></a>Note  
  
##  <a name="startpopupmenutimer"></a>  CMFCPopupMenuBar::StartPopupMenuTimer  
 Avvia il timer per un pulsante di menu popup ritardata specificato.  
  
```  
void StartPopupMenuTimer(
    CMFCToolBarMenuButton* pMenuButton,  
    int nDelayFactor = 1);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pMenuButton`  
 Puntatore al pulsante di menu per cui impostare il timer di ritardo.  
  
 [in] `nDelayFactor`  
 Un fattore ritardo pari ad almeno uno, moltiplicare il tempo di ritardo di menu standard (in genere tra un mezzo secondo e di 5 secondi).  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCColorBar](../../mfc/reference/cmfccolorbar-class.md)   
 [Classe CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md)
