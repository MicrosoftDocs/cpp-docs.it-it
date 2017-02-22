---
title: "CMFCMenuBar Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCMenuBar"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCMenuBar class"
ms.assetid: 8a3ce4c7-b012-4dc0-b4f8-53c10b4b86b8
caps.latest.revision: 36
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 38
---
# CMFCMenuBar Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Una barra dei menu che implementa ancoraggio.  
  
## Sintassi  
  
```  
class CMFCMenuBar : public CMFCToolbar  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCMenuBar::AdjustLocations](../Topic/CMFCMenuBar::AdjustLocations.md)|\(Override `CMFCToolBar::AdjustLocations`\).|  
|[CMFCMenuBar::AllowChangeTextLabels](../Topic/CMFCMenuBar::AllowChangeTextLabels.md)|Specifica se le etichette di testo possono essere visualizzate sotto le immagini sui pulsanti della barra degli strumenti.  \(Override [CMFCToolBar::AllowChangeTextLabels](../Topic/CMFCToolBar::AllowChangeTextLabels.md)\).|  
|[CMFCMenuBar::AllowShowOnPaneMenu](../Topic/CMFCMenuBar::AllowShowOnPaneMenu.md)|\(Override `CPane::AllowShowOnPaneMenu`\).|  
|[CMFCMenuBar::CalcFixedLayout](../Topic/CMFCMenuBar::CalcFixedLayout.md)|Calcola la dimensione orizzontale della barra degli strumenti.  \(Override [CMFCToolBar::CalcFixedLayout](../Topic/CMFCToolBar::CalcFixedLayout.md)\).|  
|[CMFCMenuBar::CalcLayout](../Topic/CMFCMenuBar::CalcLayout.md)|\(Override `CMFCToolBar::CalcLayout`\).|  
|[CMFCMenuBar::CalcMaxButtonHeight](../Topic/CMFCMenuBar::CalcMaxButtonHeight.md)|Calcola l'altezza massima dei pulsanti della barra degli strumenti.  \(Override [CMFCToolBar::CalcMaxButtonHeight](../Topic/CMFCToolBar::CalcMaxButtonHeight.md)\).|  
|[CMFCMenuBar::CanBeClosed](../Topic/CMFCMenuBar::CanBeClosed.md)|Specifica se un utente può chiudere la barra degli strumenti.  \(Override [CMFCToolBar::CanBeClosed](../Topic/CMFCToolBar::CanBeClosed.md)\).|  
|[CMFCMenuBar::CanBeRestored](../Topic/CMFCMenuBar::CanBeRestored.md)|Determina se il sistema è in grado di ripristinare una barra degli strumenti allo stato originale dopo la personalizzazione.  \(Override [CMFCToolBar::CanBeRestored](../Topic/CMFCToolBar::CanBeRestored.md)\).|  
|[CMFCMenuBar::Create](../Topic/CMFCMenuBar::Create.md)|Crea un controllo menu e lo collega a un oggetto `CMFCMenuBar`.|  
|[CMFCMenuBar::CreateEx](../Topic/CMFCMenuBar::CreateEx.md)|Crea un oggetto `CMFCMenuBar` con le opzioni aggiuntive di stile.|  
|[CMFCMenuBar::CreateFromMenu](../Topic/CMFCMenuBar::CreateFromMenu.md)|Inizializza un oggetto `CMFCMenuBar`.  Accetta un parametro `HMENU` che funge da modello per `CMFCMenuBar`compilato.|  
|[CMFCMenuBar::EnableHelpCombobox](../Topic/CMFCMenuBar::EnableHelpCombobox.md)|Abilita una casella combinata **Guida** che si trova sul lato destro della barra dei menu.|  
|[CMFCMenuBar::EnableMenuShadows](../Topic/CMFCMenuBar::EnableMenuShadows.md)|Specifica se visualizzare le nasconde per i menu di scelta rapida.|  
|[CMFCMenuBar::GetAvailableExpandSize](../Topic/CMFCMenuBar::GetAvailableExpandSize.md)|\(Override [CPane::GetAvailableExpandSize](../Topic/CPane::GetAvailableExpandSize.md)\).|  
|[CMFCMenuBar::GetColumnWidth](../Topic/CMFCMenuBar::GetColumnWidth.md)|Restituisce la larghezza dei pulsanti della barra degli strumenti.  \(Override [CMFCToolBar::GetColumnWidth](../Topic/CMFCToolBar::GetColumnWidth.md)\).|  
|[CMFCMenuBar::GetDefaultMenu](../Topic/CMFCMenuBar::GetDefaultMenu.md)|Restituisce un handle al menu di origine nel file di risorse.|  
|[CMFCMenuBar::GetDefaultMenuResId](../Topic/CMFCMenuBar::GetDefaultMenuResId.md)|Restituisce l'identificatore della risorsa dal menu di origine nel file di risorse.|  
|[CMFCMenuBar::GetFloatPopupDirection](../Topic/CMFCMenuBar::GetFloatPopupDirection.md)||  
|[CMFCMenuBar::GetForceDownArrows](../Topic/CMFCMenuBar::GetForceDownArrows.md)||  
|[CMFCMenuBar::GetHelpCombobox](../Topic/CMFCMenuBar::GetHelpCombobox.md)|Restituisce un puntatore alla casella combinata **Guida**.|  
|[CMFCMenuBar::GetHMenu](../Topic/CMFCMenuBar::GetHMenu.md)|Restituisce un handle al menu associato all'oggetto `CMFCMenuBar`.|  
|[CMFCMenuBar::GetMenuFont](../Topic/CMFCMenuBar::GetMenuFont.md)|Restituisce il tipo globale corrente per gli oggetti del menu.|  
|[CMFCMenuBar::GetMenuItem](../Topic/CMFCMenuBar::GetMenuItem.md)|Restituisce il pulsante della barra degli strumenti associato all'indice specificato dell'elemento.|  
|[CMFCMenuBar::GetRowHeight](../Topic/CMFCMenuBar::GetRowHeight.md)|Restituisce l'altezza dei pulsanti della barra degli strumenti.  \(Override [CMFCToolBar::GetRowHeight](../Topic/CMFCToolBar::GetRowHeight.md)\).|  
|[CMFCMenuBar::GetSystemButton](../Topic/CMFCMenuBar::GetSystemButton.md)||  
|[CMFCMenuBar::GetSystemButtonsCount](../Topic/CMFCMenuBar::GetSystemButtonsCount.md)||  
|[CMFCMenuBar::GetSystemMenu](../Topic/CMFCMenuBar::GetSystemMenu.md)||  
|[CMFCMenuBar::HighlightDisabledItems](../Topic/CMFCMenuBar::HighlightDisabledItems.md)|Indica se le voci di menu disabilitate vengono evidenziate.|  
|[CMFCMenuBar::IsButtonExtraSizeAvailable](../Topic/CMFCMenuBar::IsButtonExtraSizeAvailable.md)|Determina se la barra degli strumenti può visualizzare i pulsanti che hanno esteso i bordi.  \(Override [CMFCToolBar::IsButtonExtraSizeAvailable](../Topic/CMFCToolBar::IsButtonExtraSizeAvailable.md)\).|  
|[CMFCMenuBar::IsHighlightDisabledItems](../Topic/CMFCMenuBar::IsHighlightDisabledItems.md)|Indica se gli elementi disabilitati sono evidenziati.|  
|[CMFCMenuBar::IsMenuShadows](../Topic/CMFCMenuBar::IsMenuShadows.md)|Indica se le nasconde lo stile per i menu di scelta rapida.|  
|[CMFCMenuBar::IsRecentlyUsedMenus](../Topic/CMFCMenuBar::IsRecentlyUsedMenus.md)|Indica se i comandi di menu utilizzati recentemente visualizzato nella barra dei menu.|  
|[CMFCMenuBar::IsShowAllCommands](../Topic/CMFCMenuBar::IsShowAllCommands.md)|Indica se i menu di scelta rapida visualizza tutti i controlli.|  
|[CMFCMenuBar::IsShowAllCommandsDelay](../Topic/CMFCMenuBar::IsShowAllCommandsDelay.md)|Indica se i menu visualizzati tutti i controlli dopo un breve intervallo.|  
|[CMFCMenuBar::LoadState](../Topic/CMFCMenuBar::LoadState.md)|Carica lo stato dell'oggetto `CMFCMenuBar` dal Registro di sistema.|  
|[CMFCMenuBar::OnChangeHot](../Topic/CMFCMenuBar::OnChangeHot.md)|Chiamato dal framework quando un utente seleziona un pulsante nella barra degli strumenti.  \(Override [CMFCToolBar::OnChangeHot](../Topic/CMFCToolBar::OnChangeHot.md)\).|  
|[CMFCMenuBar::OnDefaultMenuLoaded](../Topic/CMFCMenuBar::OnDefaultMenuLoaded.md)|Chiamato dal framework quando una finestra cornice carica il menu predefinito dal file di risorse.|  
|[CMFCMenuBar::OnSendCommand](../Topic/CMFCMenuBar::OnSendCommand.md)|\(Override `CMFCToolBar::OnSendCommand`\).|  
|[CMFCMenuBar::OnSetDefaultButtonText](../Topic/CMFCMenuBar::OnSetDefaultButtonText.md)|Chiamato dal framework quando un menu è in modalità di personalizzazione e l'utente modifica il testo di una voce di menu.|  
|[CMFCMenuBar::OnToolHitTest](../Topic/CMFCMenuBar::OnToolHitTest.md)|\(Override `CMFCToolBar::OnToolHitTest`\).|  
|[CMFCMenuBar::PreTranslateMessage](../Topic/CMFCMenuBar::PreTranslateMessage.md)|\(Override `CMFCToolBar::PreTranslateMessage`\).|  
|[CMFCMenuBar::RestoreOriginalstate](../Topic/CMFCMenuBar::RestoreOriginalstate.md)|Chiamato dal framework quando un menu è in modalità di personalizzazione e l'utente seleziona **Reimposta** per una barra dei menu.|  
|[CMFCMenuBar::SaveState](../Topic/CMFCMenuBar::SaveState.md)|Salvare lo stato dell'oggetto `CMFCMenuBar` al Registro di sistema.|  
|[CMFCMenuBar::SetDefaultMenuResId](../Topic/CMFCMenuBar::SetDefaultMenuResId.md)|Imposta il menu di origine nel file di risorse.|  
|[CMFCMenuBar::SetForceDownArrows](../Topic/CMFCMenuBar::SetForceDownArrows.md)||  
|[CMFCMenuBar::SetMaximizeMode](../Topic/CMFCMenuBar::SetMaximizeMode.md)|Chiamato dal framework quando una finestra figlio MDI modificare la modalità di visualizzazione.  Se la finestra figlio MDI appena viene ingrandita o non viene ingrandita, questo metodo aggiorna la barra dei menu.|  
|[CMFCMenuBar::SetMenuButtonRTC](../Topic/CMFCMenuBar::SetMenuButtonRTC.md)|Imposta le informazioni sulla classe di runtime generate quando l'utente crea dinamicamente i pulsanti di menu.|  
|[CMFCMenuBar::SetMenuFont](../Topic/CMFCMenuBar::SetMenuFont.md)|Imposta il tipo di carattere per tutti i menu dell'applicazione.|  
|[CMFCMenuBar::SetRecentlyUsedMenus](../Topic/CMFCMenuBar::SetRecentlyUsedMenus.md)|Specifica se una barra dei menu visualizza i comandi di menu utilizzati di recente.|  
|[CMFCMenuBar::SetShowAllCommands](../Topic/CMFCMenuBar::SetShowAllCommands.md)|Specifica se la barra dei menu mostra tutti i controlli.|  
  
## Note  
 La classe `CMFCMenuBar` è una barra di menu che implementa la funzionalità di ancoraggio.  È simile a una barra degli strumenti, sebbene non può essere chiusa e verrà sempre visualizzato.  
  
 `CMFCMenuBar` supporta l'opzione di visualizzazione di oggetti utilizzati di recente della voce di menu.  Se questa opzione è attivata, `CMFCMenuBar` visualizzare solo un sottoinsieme dei controlli disponibili nella prima visualizzazione.  Successivamente, i comandi utilizzati di recente vengono visualizzati insieme al sottoinsieme originale dei comandi.  Inoltre, l'utente può espandere sempre il menu per visualizzare tutti i comandi disponibili.  Quindi, ogni comando disponibile è configurato per visualizzare costantemente, o visualizzare solo se recentemente è stato selezionato.  
  
 Per utilizzare un oggetto `CMFCMenuBar`, includalo nell'oggetto frame della finestra principale.  Nell'elaborare il messaggio `WM_CREATE`, chiamare `CMFCMenuBar::Create` o `CMFCMenuBar::CreateEx`.  Indipendentemente da quale creare la funzione utilizzati in, passare un puntatore alla finestra cornice principale.  Quindi attivare l'ancoraggio chiamando [CFrameWndEx::EnableDocking](../Topic/CFrameWndEx::EnableDocking.md).  Ancorare il menu chiamando [CFrameWndEx::DockPane](../Topic/CFrameWndEx::DockPane.md).  
  
## Esempio  
 Nell'esempio seguente viene illustrato come utilizzare i vari metodi della classe `CMFCMenuBar`.  L'esempio mostra come impostare lo stile del riquadro, abilitare il pulsante di personalizzare, consentono un contenitore della guida, abilitare le nasconde per i menu di scelta rapida e aggiornano la barra dei menu.  Questo frammento di codice fa parte [Esempio demo di IE](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_IEDemo#1](../../mfc/reference/codesnippet/CPP/cmfcmenubar-class_1.h)]  
[!code-cpp[NVC_MFC_IEDemo#3](../../mfc/reference/codesnippet/CPP/cmfcmenubar-class_2.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
 [CPane](../../mfc/reference/cpane-class.md)  
  
 [CMFCBaseToolBar](../../mfc/reference/cmfcbasetoolbar-class.md)  
  
 [CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)  
  
 [CMFCMenuBar](../../mfc/reference/cmfcmenubar-class.md)  
  
## Requisiti  
 **intestazione:** afxmenubar.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCToolBar Class](../../mfc/reference/cmfctoolbar-class.md)