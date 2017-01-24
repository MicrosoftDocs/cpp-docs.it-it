---
title: "CMFCPopupMenu Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCPopupMenu"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCPopupMenu class"
ms.assetid: 9555dca1-8c9c-44c9-af72-0659ddad128e
caps.latest.revision: 40
caps.handback.revision: 29
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCPopupMenu Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La funzionalità del menu di scelta rapida di Windows di risorse e lo estende aggiungendo funzionalità quali i menu di tipo tear\-off e descrizioni comandi.  
  
## Sintassi  
  
```  
class CMFCPopupMenu : public CMiniFrameWnd  
```  
  
## Membri  
  
### Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCPopupMenu::CMFCPopupMenu](../Topic/CMFCPopupMenu::CMFCPopupMenu.md)|Costruisce un oggetto `CMFCPopupMenu`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCPopupMenu::ActivatePopupMenu](../Topic/CMFCPopupMenu::ActivatePopupMenu.md)||  
|[CMFCPopupMenu::AlwaysShowEmptyToolsEntry](../Topic/CMFCPopupMenu::AlwaysShowEmptyToolsEntry.md)|Imposta se un menu di scelta rapida è abilitato per visualizzare le voci necessarie per gli strumenti definiti dall'utente.|  
|[CMFCPopupMenu::AreAllCommandsShown](../Topic/CMFCPopupMenu::AreAllCommandsShown.md)||  
|[CMFCPopupMenu::CheckArea](../Topic/CMFCPopupMenu::CheckArea.md)|Determina la posizione di un punto nel menu di scelta rapida.|  
|[CMFCPopupMenu::CloseMenu](../Topic/CMFCPopupMenu::CloseMenu.md)||  
|[CMFCPopupMenu::Create](../Topic/CMFCPopupMenu::Create.md)|Crea un menu di scelta rapida e lo aggiunge all'oggetto `CMFCPopupMenu`.|  
|[CMFCPopupMenu::DefaultMouseClickOnClose](../Topic/CMFCPopupMenu::DefaultMouseClickOnClose.md)||  
|[CMFCPopupMenu::EnableMenuLogo](../Topic/CMFCPopupMenu::EnableMenuLogo.md)|Inizializza il logo per un menu di scelta rapida.|  
|[CMFCPopupMenu::EnableMenuSound](../Topic/CMFCPopupMenu::EnableMenuSound.md)|Abilita il suono il menu.|  
|[CMFCPopupMenu::EnableResize](../Topic/CMFCPopupMenu::EnableResize.md)||  
|[CMFCPopupMenu::EnableScrolling](../Topic/CMFCPopupMenu::EnableScrolling.md)||  
|[CMFCPopupMenu::EnableVertResize](../Topic/CMFCPopupMenu::EnableVertResize.md)||  
|[CMFCPopupMenu::FindSubItemByCommand](../Topic/CMFCPopupMenu::FindSubItemByCommand.md)||  
|[CMFCPopupMenu::GetActiveMenu](../Topic/CMFCPopupMenu::GetActiveMenu.md)|Restituisce l'oggetto attualmente a un menu attivo.|  
|[CMFCPopupMenu::GetAnimationSpeed](../Topic/CMFCPopupMenu::GetAnimationSpeed.md)|Restituisce la velocità di animazione dei menu di scelta rapida.|  
|[CMFCPopupMenu::GetAnimationType](../Topic/CMFCPopupMenu::GetAnimationType.md)|Restituisce il tipo corrente di animazione di menu di scelta rapida.|  
|[CMFCPopupMenu::GetDropDirection](../Topic/CMFCPopupMenu::GetDropDirection.md)||  
|[CMFCPopupMenu::GetForceMenuFocus](../Topic/CMFCPopupMenu::GetForceMenuFocus.md)|Indica se lo stato attivo viene restituito alla barra dei menu quando verrà visualizzato un menu di scelta rapida.|  
|[CMFCPopupMenu::GetForceShadow](../Topic/CMFCPopupMenu::GetForceShadow.md)||  
|[CMFCPopupMenu::GetHMenu](../Topic/CMFCPopupMenu::GetHMenu.md)|Restituisce un handle alla risorsa menu associata.|  
|[CMFCPopupMenu::GetMenuBar](../Topic/CMFCPopupMenu::GetMenuBar.md)|Restituisce [CMFCPopupMenuBar](../../mfc/reference/cmfcpopupmenubar-class.md) incorporato nel menu di scelta rapida.|  
|[CMFCPopupMenu::GetMenuItem](../Topic/CMFCPopupMenu::GetMenuItem.md)|Restituisce un puntatore alla voce di menu all'indice specificato.|  
|[CMFCPopupMenu::GetMenuItemCount](../Topic/CMFCPopupMenu::GetMenuItemCount.md)|Restituisce il numero di voci in un menu di scelta rapida.|  
|[CMFCPopupMenu::GetMessageWnd](../Topic/CMFCPopupMenu::GetMessageWnd.md)|Restituisce un puntatore alla finestra in cui il framework di destinazione dei messaggi del menu di scelta rapida.|  
|[CMFCPopupMenu::GetParentArea](../Topic/CMFCPopupMenu::GetParentArea.md)||  
|[CMFCPopupMenu::GetParentButton](../Topic/CMFCPopupMenu::GetParentButton.md)|Restituisce un puntatore al pulsante della barra degli strumenti padre.|  
|[CMFCPopupMenu::GetParentPopupMenu](../Topic/CMFCPopupMenu::GetParentPopupMenu.md)|Restituisce un puntatore al menu di scelta rapida padre.|  
|[CMFCPopupMenu::GetParentRibbonElement](../Topic/CMFCPopupMenu::GetParentRibbonElement.md)||  
|[CMFCPopupMenu::GetParentToolBar](../Topic/CMFCPopupMenu::GetParentToolBar.md)|Restituisce un puntatore alla barra degli strumenti padre.|  
|[CMFCPopupMenu::GetQuickCustomizeType](../Topic/CMFCPopupMenu::GetQuickCustomizeType.md)||  
|[CMFCPopupMenu::GetSelItem](../Topic/CMFCPopupMenu::GetSelItem.md)|Restituisce un puntatore al comando di menu selezionato.|  
|[CMFCPopupMenu::HasBeenResized](../Topic/CMFCPopupMenu::HasBeenResized.md)||  
|[CMFCPopupMenu::HideRarelyUsedCommands](../Topic/CMFCPopupMenu::HideRarelyUsedCommands.md)|Indica se il menu di scelta rapida può nascondere i controlli raramente utilizzati.|  
|[CMFCPopupMenu::InCommand](../Topic/CMFCPopupMenu::InCommand.md)||  
|[CMFCPopupMenu::InsertItem](../Topic/CMFCPopupMenu::InsertItem.md)|Inserisce un nuovo elemento nel menu di scelta rapida nella posizione specificata.|  
|[CMFCPopupMenu::InsertSeparator](../Topic/CMFCPopupMenu::InsertSeparator.md)|Inserisce un separatore nel menu di scelta rapida nella posizione specificata.|  
|[CMFCPopupMenu::IsAlwaysClose](../Topic/CMFCPopupMenu::IsAlwaysClose.md)||  
|[CMFCPopupMenu::IsAlwaysShowEmptyToolsEntry](../Topic/CMFCPopupMenu::IsAlwaysShowEmptyToolsEntry.md)||  
|[CMFCPopupMenu::IsCustomizePane](../Topic/CMFCPopupMenu::IsCustomizePane.md)|Indica se il menu di scelta rapida funziona come **QuickCustomizePane**.|  
|[CMFCPopupMenu::IsEscClose](../Topic/CMFCPopupMenu::IsEscClose.md)||  
|[CMFCPopupMenu::IsIdle](../Topic/CMFCPopupMenu::IsIdle.md)|Indica se un menu di scelta rapida è attualmente inattiva.|  
|[CMFCPopupMenu::IsMenuSound](../Topic/CMFCPopupMenu::IsMenuSound.md)||  
|[CMFCPopupMenu::IsQuickCustomize](../Topic/CMFCPopupMenu::IsQuickCustomize.md)|Determina se [CMFCToolBarMenuButton Class](../../mfc/reference/cmfctoolbarmenubutton-class.md) collegato è in modalità di QuickCustomize.|  
|[CMFCPopupMenu::IsResizeble](../Topic/CMFCPopupMenu::IsResizeble.md)||  
|[CMFCPopupMenu::IsRightAlign](../Topic/CMFCPopupMenu::IsRightAlign.md)|Indica se il menu è allineato a destra o a sinistra.|  
|[CMFCPopupMenu::IsScrollable](../Topic/CMFCPopupMenu::IsScrollable.md)||  
|[CMFCPopupMenu::IsSendMenuSelectMsg](../Topic/CMFCPopupMenu::IsSendMenuSelectMsg.md)|Indica se il framework notifica il frame padre quando l'utente seleziona un comando dal menu di scelta rapida.|  
|[CMFCPopupMenu::IsShown](../Topic/CMFCPopupMenu::IsShown.md)|Indica se il menu di scelta rapida è attualmente visibile.|  
|[CMFCPopupMenu::MoveTo](../Topic/CMFCPopupMenu::MoveTo.md)||  
|[CMFCPopupMenu::OnCmdMsg](../Topic/CMFCPopupMenu::OnCmdMsg.md)|\(Override `CFrameWnd::OnCmdMsg`\).|  
|[CMFCPopupMenu::PostCommand](../Topic/CMFCPopupMenu::PostCommand.md)||  
|[CMFCPopupMenu::PreTranslateMessage](../Topic/CMFCPopupMenu::PreTranslateMessage.md)|\(Override `CFrameWnd::PreTranslateMessage`\).|  
|[CMFCPopupMenu::RecalcLayout](../Topic/CMFCPopupMenu::RecalcLayout.md)|Chiamato dal framework quando le barre di controllo standard sono abilitate o disabilitate o della finestra cornice viene ridimensionata.  \(Override [CFrameWnd::RecalcLayout](../Topic/CFrameWnd::RecalcLayout.md)\).|  
|[CMFCPopupMenu::RemoveAllItems](../Topic/CMFCPopupMenu::RemoveAllItems.md)|Rimuove tutti gli elementi da un menu di scelta rapida.|  
|[CMFCPopupMenu::RemoveItem](../Topic/CMFCPopupMenu::RemoveItem.md)|Rimuove l'elemento specificato dal menu di scelta rapida.|  
|[CMFCPopupMenu::SaveState](../Topic/CMFCPopupMenu::SaveState.md)||  
|[CMFCPopupMenu::SetAnimationSpeed](../Topic/CMFCPopupMenu::SetAnimationSpeed.md)|Imposta la velocità di animazione dei menu di scelta rapida.|  
|[CMFCPopupMenu::SetAnimationType](../Topic/CMFCPopupMenu::SetAnimationType.md)|Imposta il tipo di animazione dal menu di scelta rapida.|  
|[CMFCPopupMenu::SetAutoDestroy](../Topic/CMFCPopupMenu::SetAutoDestroy.md)||  
|[CMFCPopupMenu::SetDefaultItem](../Topic/CMFCPopupMenu::SetDefaultItem.md)|Imposta il comando predefinito per il menu di scelta rapida.|  
|[CMFCPopupMenu::SetForceMenuFocus](../Topic/CMFCPopupMenu::SetForceMenuFocus.md)|Imposta lo stato attivo per l'input per tornare alla barra dei menu quando verrà visualizzato un menu di scelta rapida.|  
|[CMFCPopupMenu::SetForceShadow](../Topic/CMFCPopupMenu::SetForceShadow.md)|Forza il framework per il disegno di nasconde il menu quando i menu di scelta rapida vengono visualizzate all'esterno della cornice principale.|  
|[CMFCPopupMenu::SetMaxWidth](../Topic/CMFCPopupMenu::SetMaxWidth.md)|Impostare la larghezza massima del menu di scelta rapida.|  
|[CMFCPopupMenu::SetMessageWnd](../Topic/CMFCPopupMenu::SetMessageWnd.md)||  
|[CMFCPopupMenu::SetParentRibbonElement](../Topic/CMFCPopupMenu::SetParentRibbonElement.md)||  
|[CMFCPopupMenu::SetQuickCustomizeType](../Topic/CMFCPopupMenu::SetQuickCustomizeType.md)||  
|[CMFCPopupMenu::SetQuickMode](../Topic/CMFCPopupMenu::SetQuickMode.md)||  
|[CMFCPopupMenu::SetRightAlign](../Topic/CMFCPopupMenu::SetRightAlign.md)|Impostato l'allineamento del menu per i menu di scelta rapida.|  
|[CMFCPopupMenu::SetSendMenuSelectMsg](../Topic/CMFCPopupMenu::SetSendMenuSelectMsg.md)|Impostare un flag che controlla se il menu di scelta rapida contattare il relativo frame padre quando l'utente seleziona un comando.|  
|[CMFCPopupMenu::ShowAllCommands](../Topic/CMFCPopupMenu::ShowAllCommands.md)|Forza il menu di scelta rapida per visualizzare tutti i controlli.|  
|[CMFCPopupMenu::TriggerResize](../Topic/CMFCPopupMenu::TriggerResize.md)||  
|[CMFCPopupMenu::UpdateAllShadows](../Topic/CMFCPopupMenu::UpdateAllShadows.md)|Aggiorna le nasconde per tutti i menu di scelta rapida aperti.|  
|[CMFCPopupMenu::UpdateShadow](../Topic/CMFCPopupMenu::UpdateShadow.md)|Aggiorna ombreggiatura per il menu di scelta rapida.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCPopupMenu::CreateTearOffBar](../Topic/CMFCPopupMenu::CreateTearOffBar.md)||  
|[CMFCPopupMenu::OnChangeHot](../Topic/CMFCPopupMenu::OnChangeHot.md)||  
|[CMFCPopupMenu::OnChooseItem](../Topic/CMFCPopupMenu::OnChooseItem.md)||  
  
### Note  
 In genere, MFC crea i menu di scelta rapida automaticamente.  Se si desidera creare un oggetto `CMFCPopupMenu` manualmente, allocare uno nell'heap e quindi chiamare [CMFCPopupMenu::Create](../Topic/CMFCPopupMenu::Create.md).  
  
## Esempio  
 Nell'esempio seguente viene illustrato come configurare un oggetto di menu di scelta rapida.  L'esempio mostra come impostare il logo e il suono del menu di scelta rapida, impostare la velocità di animazione e il tipo, ne esegue il disegno del menu quando viene visualizzato il menu di scelta rapida all'esterno della cornice principale, impostare la larghezza massima e imposta il l'allineamento dei menu del menu di scelta rapida.  Questo frammento di codice fa parte [Esempio personalizzato delle pagine](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_CustomPages#2](../../mfc/reference/codesnippet/CPP/cmfcpopupmenu-class_1.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CFrameWnd](../../mfc/reference/cframewnd-class.md)  
  
 [CMiniFrameWnd](../../mfc/reference/cminiframewnd-class.md)  
  
 [CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md)  
  
## Requisiti  
 **intestazione:** afxpopupmenu.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCPopupMenuBar](../../mfc/reference/cmfcpopupmenubar-class.md)