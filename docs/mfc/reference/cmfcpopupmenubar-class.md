---
title: Classe CMFCPopupMenuBar | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCPopupMenuBar
dev_langs:
- C++
helpviewer_keywords:
- CMFCPopupMenuBar class
ms.assetid: 4c93c459-7f70-4240-8c63-280bb811e374
caps.latest.revision: 32
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 46f86035fecc16c45e01a1c70cdde610093d377b
ms.lasthandoff: 02/24/2017

---
# <a name="cmfcpopupmenubar-class"></a>Classe CMFCPopupMenuBar
Barra dei menu incorporata in un menu di scelta rapida.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCPopupMenuBar : public CMFCToolBar  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCPopupMenuBar::AdjustSizeImmediate](#adjustsizeimmediate)|Immediatamente Ricalcola il layout di un riquadro. (Esegue l'override di [CPane::AdjustSizeImmediate](../../mfc/reference/cpane-class.md#adjustsizeimmediate).)|  
|[CMFCPopupMenuBar::BuildOrigItems](#buildorigitems)|Carica le voci di menu di scelta rapida da una risorsa di menu specificate.|  
|[CMFCPopupMenuBar::CloseDelayedSubMenu](#closedelayedsubmenu)|Chiude un pulsante di menu popup ritardata.|  
|[CMFCPopupMenuBar::ExportToMenu](#exporttomenu)|Genera un menu i pulsanti di menu di scelta rapida.|  
|[CMFCPopupMenuBar::FindDestintationToolBar](#finddestintationtoolbar)|Individua la barra degli strumenti in cui si trova un punto specificato.|  
|[CMFCPopupMenuBar::GetCurrentMenuImageSize](#getcurrentmenuimagesize)|Indica le dimensioni delle immagini di pulsante di menu.|  
|[CMFCPopupMenuBar::GetDefaultMenuId](#getdefaultmenuid)|Restituisce l'identificatore della voce di menu predefinita.|  
|[CMFCPopupMenuBar::GetLastCommandIndex](#getlastcommandindex)|Ottiene l'indice dell'ultima chiamato comando di menu.|  
|[CMFCPopupMenuBar::GetOffset](#getoffset)|Ottiene l'offset di riga della barra dei menu di scelta rapida.|  
|[CMFCPopupMenuBar::ImportFromMenu](#importfrommenu)|Importa i pulsanti di menu di scelta rapida da un menu specificato.|  
|[CMFCPopupMenuBar::IsDropDownListMode](#isdropdownlistmode)|Indica se la barra dei menu di scelta rapida è in modalità elenco a discesa.|  
|[CMFCPopupMenuBar::IsPaletteMode](#ispalettemode)|Indica se la barra dei menu di scelta rapida è in modalità della tavolozza.|  
|[CMFCPopupMenuBar::IsRibbonPanel](#isribbonpanel)|Indica se si tratta di un pannello della barra multifunzione ( `FALSE` per impostazione predefinita).|  
|[CMFCPopupMenuBar::IsRibbonPanelInRegularMode](#isribbonpanelinregularmode)|Indica se questo è un pannello della barra multifunzione in modalità normale ( `FALSE` per impostazione predefinita).|  
|[CMFCPopupMenuBar::LoadFromHash](#loadfromhash)|Carica un menu archiviato.|  
|[CMFCPopupMenuBar::RestoreDelayedSubMenu](#restoredelayedsubmenu)|Consente di ripristinare un pulsante di menu ritardata per la chiusura della barra dei menu di scelta rapida.|  
|[CMFCPopupMenuBar::SetButtonStyle](#setbuttonstyle)|Imposta lo stile del pulsante della barra degli strumenti in corrispondenza dell'indice specificato. (Esegue l'override di [CMFCToolBar::SetButtonStyle](../../mfc/reference/cmfctoolbar-class.md#setbuttonstyle).)|  
|[CMFCPopupMenuBar::SetOffset](#setoffset)|Imposta l'offset di riga della barra dei menu di scelta rapida.|  
|[CMFCPopupMenuBar::StartPopupMenuTimer](#startpopupmenutimer)|Avvia il timer per un pulsante di menu popup ritardata specificato.|  
  
### <a name="data-members"></a>Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCPopupMenuBar::m_bDisableSideBarInXPMode](#m_bdisablesidebarinxpmode)|Specifica se la barra laterale grigia verrà visualizzata quando l'applicazione ha un aspetto di Windows XP.|  
  
## <a name="remarks"></a>Note  
 Il `CMFCPopupMenuBar` viene creato nello stesso momento come un [CMFCPopupMenu classe](../../mfc/reference/cmfcpopupmenu-class.md) e incorporato all'interno. Il `CMFCPopupMenuBar` copre l'intera area client di `CMFCPopupMenu` oggetto. Supporta input del mouse e tastiera. Inoltre, comunica che l'input di `CMFCPopupMenu` e alla finestra cornice principale.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come inizializzare un `CMFCPopupMenuBar` dell'oggetto da un `CMFCPopupMenu` oggetto. Questo frammento di codice fa parte di [esempio disegnare Client](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_DrawClient&#7;](../../mfc/reference/codesnippet/cpp/cmfcpopupmenubar-class_1.cpp)]  
  
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
  
##  <a name="a-nameadjustsizeimmediatea--cmfcpopupmenubaradjustsizeimmediate"></a><a name="adjustsizeimmediate"></a>CMFCPopupMenuBar::AdjustSizeImmediate  
 Immediatamente Ricalcola il layout del riquadro della barra dei menu popup. (Esegue l'override di [CPane::AdjustSizeImmediate](../../mfc/reference/cpane-class.md#adjustsizeimmediate).  
  
```  
virtual void AdjustSizeImmediate(BOOL bRecalcLayout);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bRecalcLayout`  
 `TRUE`Per ricalcolare automaticamente il layout del riquadro barra menu popup. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namebuildorigitemsa--cmfcpopupmenubarbuildorigitems"></a><a name="buildorigitems"></a>CMFCPopupMenuBar::BuildOrigItems  
 Carica le voci di menu di scelta rapida da una risorsa di menu specificate.  
  
```  
BOOL BuildOrigItems(UINT uiMenuResID);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiMenuResID`  
 Specifica l'ID di menu della risorsa di menu da caricare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `TRUE` se ha esito positivo o `FALSE` in caso contrario.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameclosedelayedsubmenua--cmfcpopupmenubarclosedelayedsubmenu"></a><a name="closedelayedsubmenu"></a>CMFCPopupMenuBar::CloseDelayedSubMenu  
 Chiude un pulsante di menu di scelta rapida che è stato posticipato.  
  
```  
virtual void CloseDelayedSubMenu();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameexporttomenua--cmfcpopupmenubarexporttomenu"></a><a name="exporttomenu"></a>CMFCPopupMenuBar::ExportToMenu  
 Genera un menu i pulsanti di menu popup.  
  
```  
virtual HMENU ExportToMenu() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un handle per il nuovo menu.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namefinddestintationtoolbara--cmfcpopupmenubarfinddestintationtoolbar"></a><a name="finddestintationtoolbar"></a>CMFCPopupMenuBar::FindDestintationToolBar  
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
  
##  <a name="a-namegetcurrentmenuimagesizea--cmfcpopupmenubargetcurrentmenuimagesize"></a><a name="getcurrentmenuimagesize"></a>CMFCPopupMenuBar::GetCurrentMenuImageSize  
 Indica le dimensioni delle immagini di pulsante di menu.  
  
```  
virtual CSize GetCurrentMenuImageSize() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce le dimensioni delle immagini di pulsante di menu nella barra degli strumenti.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetdefaultmenuida--cmfcpopupmenubargetdefaultmenuid"></a><a name="getdefaultmenuid"></a>CMFCPopupMenuBar::GetDefaultMenuId  
 Restituisce l'identificatore della voce di menu predefinita.  
  
```  
UINT GetDefaultMenuId() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'identificatore della voce di menu predefinito nella barra dei menu di scelta rapida.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetlastcommandindexa--cmfcpopupmenubargetlastcommandindex"></a><a name="getlastcommandindex"></a>CMFCPopupMenuBar::GetLastCommandIndex  
 Ottiene l'indice dell'ultima chiamato comando di menu.  
  
```  
static int __stdcall GetLastCommandIndex();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'indice dell'ultimo comando di menu che è stato richiamato.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetoffseta--cmfcpopupmenubargetoffset"></a><a name="getoffset"></a>CMFCPopupMenuBar::GetOffset  
 Ottiene l'offset di riga della barra dei menu di scelta rapida.  
  
```  
int GetOffset() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'offset di riga della barra dei menu di scelta rapida.  
  
### <a name="remarks"></a>Note  
 Questo valore viene impostato utilizzando [CMFCPopupMenuBar::SetOffset](#setoffset).  
  
##  <a name="a-nameimportfrommenua--cmfcpopupmenubarimportfrommenu"></a><a name="importfrommenu"></a>CMFCPopupMenuBar::ImportFromMenu  
 Importa i pulsanti di menu di scelta rapida da un menu specificato.  
  
```  
virtual BOOL ImportFromMenu(
    HMENU hMenu,  
    BOOL bShowAllCommands = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `hMenu`  
 Il menu da cui importare i pulsanti di menu di scelta rapida.  
  
 [in] `bShowAllCommands`  
 `TRUE`Se tutti i comandi del menu devono essere importati, o `FALSE` se quelli utilizzati raramente possono essere nascosta.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `TRUE` se sono stati importati dal menu, pulsanti di menu o `FALSE` in caso contrario.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameisdropdownlistmodea--cmfcpopupmenubarisdropdownlistmode"></a><a name="isdropdownlistmode"></a>CMFCPopupMenuBar::IsDropDownListMode  
 Indica se la barra dei menu di scelta rapida è in modalità elenco a discesa.  
  
```  
BOOL IsDropDownListMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `TRUE` se la barra dei menu di scelta rapida è in modalità elenco a discesa, o `FALSE` in caso contrario.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameispalettemodea--cmfcpopupmenubarispalettemode"></a><a name="ispalettemode"></a>CMFCPopupMenuBar::IsPaletteMode  
 Indica se la barra dei menu di scelta rapida è in modalità della tavolozza.  
  
```  
BOOL IsPaletteMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `TRUE` se è abilitata la modalità tavolozza, o `FALSE` in caso contrario.  
  
### <a name="remarks"></a>Note  
 Quando la barra dei menu è impostata su modalità della tavolozza, voci di menu disponibili in più colonne e un numero limitato di righe.  
  
##  <a name="a-nameisribbonpanela--cmfcpopupmenubarisribbonpanel"></a><a name="isribbonpanel"></a>CMFCPopupMenuBar::IsRibbonPanel  
 Indica se si tratta di un pannello della barra multifunzione ( `FALSE` per impostazione predefinita).  
  
```  
virtual BOOL IsRibbonPanel() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `FALSE` per impostazione predefinita, che indica che non si tratta di un pannello della barra multifunzione.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameisribbonpanelinregularmodea--cmfcpopupmenubarisribbonpanelinregularmode"></a><a name="isribbonpanelinregularmode"></a>CMFCPopupMenuBar::IsRibbonPanelInRegularMode  
 Indica se questo è un pannello della barra multifunzione in modalità normale ( `FALSE` per impostazione predefinita).  
  
```  
virtual BOOL IsRibbonPanelInRegularMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `FALSE` per impostazione predefinita, che indica che questo non è un pannello della barra multifunzione in modalità normale.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameloadfromhasha--cmfcpopupmenubarloadfromhash"></a><a name="loadfromhash"></a>CMFCPopupMenuBar::LoadFromHash  
 Carica un menu archiviato.  
  
```  
BOOL LoadFromHash(HMENU hMenu);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `hMenu`  
 Handle per il menu archiviato da caricare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `TRUE` se è stato caricato correttamente, il menu o `FALSE` in caso contrario.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namembdisablesidebarinxpmodea--cmfcpopupmenubarmbdisablesidebarinxpmode"></a><a name="m_bdisablesidebarinxpmode"></a>CMFCPopupMenuBar::m_bDisableSideBarInXPMode  
 Un parametro booleano che indica se l'applicazione dispone di una barra laterale grigia quando ha un aspetto di Windows XP.  
  
```  
BOOL m_bDisableSideBarInXPMode;  
```  
  
### <a name="remarks"></a>Note  
 Se questa variabile membro è impostata su `FALSE` e l'applicazione ha un aspetto di Windows XP, il framework crea una barra laterale grigia nell'applicazione.  
  
 Il valore predefinito è `FALSE`.  
  
##  <a name="a-namerestoredelayedsubmenua--cmfcpopupmenubarrestoredelayedsubmenu"></a><a name="restoredelayedsubmenu"></a>CMFCPopupMenuBar::RestoreDelayedSubMenu  
 Consente di ripristinare un pulsante di menu ritardata per la chiusura della barra dei menu di scelta rapida.  
  
```  
virtual void RestoreDelayedSubMenu();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namesetbuttonstylea--cmfcpopupmenubarsetbuttonstyle"></a><a name="setbuttonstyle"></a>CMFCPopupMenuBar::SetButtonStyle  
 Imposta lo stile del pulsante della barra degli strumenti in corrispondenza dell'indice specificato. (Esegue l'override di [CMFCToolBar::SetButtonStyle](../../mfc/reference/cmfctoolbar-class.md#setbuttonstyle).)  
  
```  
virtual void SetButtonStyle(
    int nIndex,  
    UINT nStyle);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nIndex`  
 Indice in base zero del pulsante della barra degli strumenti è necessario impostare il cui stile.  
  
 [in] `nStyle`  
 Lo stile del pulsante. Vedere [degli stili del controllo barra degli strumenti](../../mfc/reference/toolbar-control-styles.md) per l'elenco di stili dei pulsanti della barra degli strumenti disponibili.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namesetoffseta--cmfcpopupmenubarsetoffset"></a><a name="setoffset"></a>CMFCPopupMenuBar::SetOffset  
 Imposta l'offset di riga della barra dei menu di scelta rapida.  
  
```  
void SetOffset(int iOffset);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iOffset`  
 Il numero di righe che deve essere con offset la barra dei menu di scelta rapida.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namestartpopupmenutimera--cmfcpopupmenubarstartpopupmenutimer"></a><a name="startpopupmenutimer"></a>CMFCPopupMenuBar::StartPopupMenuTimer  
 Avvia il timer per un pulsante di menu popup ritardata specificato.  
  
```  
void StartPopupMenuTimer(
    CMFCToolBarMenuButton* pMenuButton,  
    int nDelayFactor = 1);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pMenuButton`  
 Puntatore al pulsante di menu per il quale impostare il timer di ritardo.  
  
 [in] `nDelayFactor`  
 Un fattore ritardo pari ad almeno uno, moltiplicare il tempo di ritardo di menu standard (in genere tra un mezzo secondo e di&5; secondi).  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCColorBar](../../mfc/reference/cmfccolorbar-class.md)   
 [Classe CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md)

