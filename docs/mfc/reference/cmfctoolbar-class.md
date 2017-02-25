---
title: "CMFCToolBar Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCToolBar"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCToolBar class"
ms.assetid: e7679c01-fb94-44c0-98c6-3af955292fb5
caps.latest.revision: 48
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 50
---
# CMFCToolBar Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CMFCToolBar` simile a [CToolBar Class](../../mfc/reference/ctoolbar-class.md), ma fornisce supporto aggiuntivo per le funzionalità dell'interfaccia utente.  Questi includono barre degli strumenti piane, barre degli strumenti con le calde immagini, icone grandi, i pulsanti del componente di spostamento, barre degli strumenti bloccate, i controlli Rebar, il testo nelle immagini, le immagini di sfondo e barre degli strumenti a schede.  La classe `CMFCToolBar` contiene inoltre il supporto incorporato per la personalizzazione dell'utente delle barre degli strumenti e dei menu, il trascinamento della selezione tra le barre degli strumenti e menu, pulsanti della casella combinata, i pulsanti della casella di modifica, selezionare i colori e i pulsanti di rollup.  
  
## Sintassi  
  
```  
class CMFCToolBar : public CMFCBaseToolBar  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCToolBar::CMFCToolBar`|Costruttore predefinito.|  
|`CMFCToolBar::~CMFCToolBar`|Distruttore|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCToolBar::AddBasicCommand](../Topic/CMFCToolBar::AddBasicCommand.md)|Aggiunge un comando di menu all'elenco dei controlli che visualizzano sempre quando un utente apre un menu.|  
|[CMFCToolBar::AddCommandUsage](../Topic/CMFCToolBar::AddCommandUsage.md)|Incrementa di uno il contatore associato al comando specificato.|  
|[CMFCToolBar::AddToolBarForImageCollection](../Topic/CMFCToolBar::AddToolBarForImageCollection.md)|Aggiungere le immagini alle risorse di interfaccia utente alla raccolta di immagini nell'applicazione.|  
|[CMFCToolBar::AdjustLayout](../Topic/CMFCToolBar::AdjustLayout.md)|Ricalcola la dimensione e la posizione di una barra degli strumenti.  \(Esegue l'override di [CBasePane::AdjustLayout](../Topic/CBasePane::AdjustLayout.md)\).|  
|[CMFCToolBar::AdjustSize](../Topic/CMFCToolBar::AdjustSize.md)|Ricalcola la dimensione della barra degli strumenti.|  
|[CMFCToolBar::AllowChangeTextLabels](../Topic/CMFCToolBar::AllowChangeTextLabels.md)|Specifica se le etichette di testo possono essere visualizzate sotto le immagini sui pulsanti della barra degli strumenti.|  
|[CMFCToolBar::AreTextLabels](../Topic/CMFCToolBar::AreTextLabels.md)|Specifica se le etichette di testo nelle immagini attualmente visualizzati i pulsanti della barra degli strumenti.|  
|[CMFCToolBar::AutoGrayInactiveImages](../Topic/CMFCToolBar::AutoGrayInactiveImages.md)|Abilitare o disabilitare la generazione automatica di immagini del pulsante inattive.|  
|[CMFCToolBar::ButtonToIndex](../Topic/CMFCToolBar::ButtonToIndex.md)|Restituisce l'indice di un determinato oggetto [CMFCToolBarButton Class](../../mfc/reference/cmfctoolbarbutton-class.md) in questa barra degli strumenti.|  
|[CMFCToolBar::CalcFixedLayout](../Topic/CMFCToolBar::CalcFixedLayout.md)|Calcola la dimensione orizzontale della barra degli strumenti.  \(Override [CBasePane::CalcFixedLayout](../Topic/CBasePane::CalcFixedLayout.md)\).|  
|[CMFCToolBar::CalcSize](../Topic/CMFCToolBar::CalcSize.md)|Chiamato dal framework durante il processo di calcolo del layout.  \(Override [CPane::CalcSize](../Topic/CPane::CalcSize.md)\).|  
|[CMFCToolBar::CanHandleSiblings](../Topic/CMFCToolBar::CanHandleSiblings.md)|Determina se la barra degli strumenti e il relativo elemento di pari livello vengono inseriti nello stesso riquadro.|  
|[CMFCToolBar::CleanUpImages](../Topic/CMFCToolBar::CleanUpImages.md)|Libera le risorse di sistema allocate per le immagini della barra degli strumenti.|  
|[CMFCToolBar::CleanUpLockedImages](../Topic/CMFCToolBar::CleanUpLockedImages.md)|Libera le risorse di sistema allocate per le immagini bloccate della barra degli strumenti.|  
|[CMFCToolBar::CanBeClosed](../Topic/CMFCToolBar::CanBeClosed.md)|Specifica se un utente può chiudere la barra degli strumenti.  \(Override [CBasePane::CanBeClosed](../Topic/CBasePane::CanBeClosed.md)\).|  
|[CMFCToolBar::CanBeRestored](../Topic/CMFCToolBar::CanBeRestored.md)|Determina se il sistema è in grado di ripristinare una barra degli strumenti allo stato originale dopo la personalizzazione.|  
|[CMFCToolBar::CanFocus](../Topic/CMFCToolBar::CanFocus.md)|Specifica se il riquadro può ricevere lo stato attivo.  \(Override [CBasePane::CanFocus](../Topic/CBasePane::CanFocus.md)\).|  
|[CMFCToolBar::CanHandleSiblings](../Topic/CMFCToolBar::CanHandleSiblings.md)|Determina se la barra degli strumenti e il relativo elemento di pari livello vengono inseriti nello stesso riquadro.|  
|[CMFCToolBar::CommandToIndex](../Topic/CMFCToolBar::CommandToIndex.md)|Restituisce l'indice del pulsante nella barra degli strumenti con un ID di comando|  
|[CMFCToolBar::Create](../Topic/CMFCToolBar::Create.md)|Crea un oggetto `CMFCToolBar`.|  
|[CMFCToolBar::CreateEx](../Topic/CMFCToolBar::CreateEx.md)|Crea un oggetto `CMFCToolBar` utilizzando le opzioni di stile aggiuntive, come icone grandi.|  
|[CMFCToolBar::Deactivate](../Topic/CMFCToolBar::Deactivate.md)|Disattiva la barra degli strumenti.|  
|[CMFCToolBar::EnableCustomizeButton](../Topic/CMFCToolBar::EnableCustomizeButton.md)|Abilita o disabilita il pulsante **Aggiungi o rimuovi pulsanti** visualizzato alle estremità della barra degli strumenti.|  
|[CMFCToolBar::EnableDocking](../Topic/CMFCToolBar::EnableDocking.md)|Consente l'ancoraggio del riquadro della cornice principale.  \(Override [CBasePane::EnableDocking](../Topic/CBasePane::EnableDocking.md)\).|  
|[CMFCToolBar::EnableLargeIcons](../Topic/CMFCToolBar::EnableLargeIcons.md)|Abilita o disabilita icone grandi sui pulsanti della barra degli strumenti.|  
|[CMFCToolBar::EnableQuickCustomization](../Topic/CMFCToolBar::EnableQuickCustomization.md)|Abilita o disabilita la personalizzazione delle barre degli strumenti per consentire il tasto **ALT** e trascinare l'utente un pulsante in una nuova posizione.|  
|[CMFCToolBar::EnableReflections](../Topic/CMFCToolBar::EnableReflections.md)|Abilita o disabilita la reflection di comando.|  
|[CMFCToolBar::EnableTextLabels](../Topic/CMFCToolBar::EnableTextLabels.md)|Abilita o disabilita le etichette di testo sotto le icone dei pulsanti della barra degli strumenti.|  
|[CMFCToolBar::FromHandlePermanent](../Topic/CMFCToolBar::FromHandlePermanent.md)|Recupera un puntatore all'oggetto `CMFCToolBar` che contiene l'handle della finestra specificato.|  
|[CMFCToolBar::GetAllButtons](../Topic/CMFCToolBar::GetAllButtons.md)|Restituisce un elenco di sola lettura dei pulsanti di una barra degli strumenti.|  
|[CMFCToolBar::GetAllToolbars](../Topic/CMFCToolBar::GetAllToolbars.md)|Restituisce un elenco di sola lettura di tutte le barre degli strumenti nell'applicazione.|  
|[CMFCToolBar::GetBasicCommands](../Topic/CMFCToolBar::GetBasicCommands.md)|Restituisce un elenco di sola lettura dei comandi di base definiti nell'applicazione.|  
|[CMFCToolBar::GetButton](../Topic/CMFCToolBar::GetButton.md)|Restituisce un puntatore a un oggetto `CMFCToolBarButton` con indice specificato del pulsante della barra degli strumenti.|  
|[CMFCToolBar::GetButtonInfo](../Topic/CMFCToolBar::GetButtonInfo.md)|Restituisce l'id di comando, lo stile e l'indice di un'immagine del pulsante a un indice specificato.|  
|[CMFCToolBar::GetButtonSize](../Topic/CMFCToolBar::GetButtonSize.md)|Restituisce le dimensioni di ciascun pulsante sulla barra degli strumenti.|  
|[CMFCToolBar::GetButtonStyle](../Topic/CMFCToolBar::GetButtonStyle.md)|Restituisce lo stile corrente del pulsante della barra degli strumenti che si trova all'indice specificato.|  
|[CMFCToolBar::GetButtonText](../Topic/CMFCToolBar::GetButtonText.md)|Restituisce l'etichetta di testo di un pulsante con indice specificato.|  
|[CMFCToolBar::GetColdImages](../Topic/CMFCToolBar::GetColdImages.md)|Restituisce un puntatore alla raccolta di immagini fredde del pulsante della barra degli strumenti nell'applicazione.|  
|[CMFCToolBar::GetColumnWidth](../Topic/CMFCToolBar::GetColumnWidth.md)|Restituisce la larghezza dei pulsanti della barra degli strumenti.|  
|[CMFCToolBar::GetCommandButtons](../Topic/CMFCToolBar::GetCommandButtons.md)|Restituisce un elenco dei pulsanti con un ID di comando specificato da tutte le barre degli strumenti nell'applicazione.|  
|[CMFCToolBar::GetCount](../Topic/CMFCToolBar::GetCount.md)|Restituisce il numero di pulsanti e dei separatori nella barra degli strumenti.|  
|[CMFCToolBar::GetCustomizeButton](../Topic/CMFCToolBar::GetCustomizeButton.md)|Recupera un puntatore all'oggetto `CMFCCustomizeButton` associato alla barra degli strumenti.|  
|[CMFCToolBar::GetDefaultImage](../Topic/CMFCToolBar::GetDefaultImage.md)|Restituisce l'indice dell'immagine predefinita per un pulsante della barra degli strumenti con un ID di comando|  
|[CMFCToolBar::GetDisabledImages](../Topic/CMFCToolBar::GetDisabledImages.md)|Restituisce un puntatore alla raccolta di immagini utilizzate per i pulsanti della barra degli strumenti disabilitati nell'applicazione.|  
|[CMFCToolBar::GetDisabledMenuImages](../Topic/CMFCToolBar::GetDisabledMenuImages.md)|Restituisce un puntatore alla raccolta di immagini utilizzate per i pulsanti disabilitati del menu nell'applicazione.|  
|[CMFCToolBar::GetDroppedDownMenu](../Topic/CMFCToolBar::GetDroppedDownMenu.md)|Recupera un puntatore all'oggetto del pulsante del menu visualizzato correntemente il sottomenu.|  
|[CMFCToolBar::GetGrayDisabledButtons](../Topic/CMFCToolBar::GetGrayDisabledButtons.md)|Specifica se le immagini dei pulsanti disabilitati vengono visualizzate in grigio versioni delle icone dei pulsanti normali, o accettato dalla libreria di immagini del pulsante disabilitate.|  
|[CMFCToolBar::GetHighlightedButton](../Topic/CMFCToolBar::GetHighlightedButton.md)|Restituisce un puntatore al pulsante della barra degli strumenti attualmente è evidenziato.|  
|[CMFCToolBar::GetHotBorder](../Topic/CMFCToolBar::GetHotBorder.md)|Determina se i pulsanti della barra degli strumenti caldo\- vengono registrati.|  
|[CMFCToolBar::GetHotTextColor](../Topic/CMFCToolBar::GetHotTextColor.md)|Restituisce il colore del testo dei pulsanti della barra degli strumenti evidenziati.|  
|[CMFCToolBar::GetHwndLastFocus](../Topic/CMFCToolBar::GetHwndLastFocus.md)|Restituisce un handle di finestra che aveva lo stato attivo per l'input prima della barra degli strumenti è stata effettuata.|  
|[CMFCToolBar::GetIgnoreSetText](../Topic/CMFCToolBar::GetIgnoreSetText.md)|Specifica se le chiamate alle etichette impostare il pulsante vengono ignorate.|  
|[CMFCToolBar::GetImageSize](../Topic/CMFCToolBar::GetImageSize.md)|Restituisce le dimensioni correnti delle icone dei pulsanti della barra degli strumenti.|  
|[CMFCToolBar::GetImages](../Topic/CMFCToolBar::GetImages.md)|Restituisce un puntatore alla libreria di immagini del pulsante predefinito dell'applicazione.|  
|[CMFCToolBar::GetImagesOffset](../Topic/CMFCToolBar::GetImagesOffset.md)|Restituisce l'offset dell'indice utilizzato per trovare immagini del pulsante della barra degli strumenti per questa barra degli strumenti nell'elenco globale delle icone dei pulsanti della barra degli strumenti.|  
|[CMFCToolBar::GetInvalidateItemRect](../Topic/CMFCToolBar::GetInvalidateItemRect.md)|Recupera l'area dell'area client da ridisegnare per il pulsante all'indice specificato.|  
|[CMFCToolBar::GetItemID](../Topic/CMFCToolBar::GetItemID.md)|Restituisce l'id di comando del pulsante della barra degli strumenti a un indice specificato.|  
|[CMFCToolBar::GetItemRect](../Topic/CMFCToolBar::GetItemRect.md)|Restituisce il rettangolo di delimitazione del pulsante a un indice specificato.|  
|[CMFCToolBar::GetLargeColdImages](../Topic/CMFCToolBar::GetLargeColdImages.md)|Restituisce un puntatore alla libreria di immagini di grandi dimensioni fredde del pulsante della barra degli strumenti nell'applicazione.|  
|[CMFCToolBar::GetLargeDisabledImages](../Topic/CMFCToolBar::GetLargeDisabledImages.md)|Restituisce un puntatore alla libreria di immagini di grandi dimensioni disabilitate del pulsante della barra degli strumenti nell'applicazione.|  
|[CMFCToolBar::GetLargeImages](../Topic/CMFCToolBar::GetLargeImages.md)|Restituisce un puntatore alla libreria di immagini di grandi dimensioni del pulsante della barra degli strumenti nell'applicazione.|  
|[CMFCToolBar::GetLockedColdImages](../Topic/CMFCToolBar::GetLockedColdImages.md)|Restituisce un puntatore alla raccolta di immagini fredde bloccate la barra degli strumenti.|  
|[CMFCToolBar::GetLockedDisabledImages](../Topic/CMFCToolBar::GetLockedDisabledImages.md)|Restituisce un puntatore alla raccolta di immagini disabilitate bloccate la barra degli strumenti.|  
|[CMFCToolBar::GetLockedImages](../Topic/CMFCToolBar::GetLockedImages.md)|Restituisce un puntatore alla libreria di immagini del pulsante bloccate la barra degli strumenti.|  
|[CMFCToolBar::GetLockedImageSize](../Topic/CMFCToolBar::GetLockedImageSize.md)|Restituisce la dimensione predefinita di immagini bloccate della barra degli strumenti.|  
|[CMFCToolBar::GetLockedMenuImages](../Topic/CMFCToolBar::GetLockedMenuImages.md)|Restituisce un puntatore alla raccolta di immagini bloccate il menu della barra degli strumenti nella barra degli strumenti.|  
|[CMFCToolBar::GetMenuButtonSize](../Topic/CMFCToolBar::GetMenuButtonSize.md)|Restituisce le dimensioni dei pulsanti di menu nell'applicazione.|  
|[CMFCToolBar::GetMenuImageSize](../Topic/CMFCToolBar::GetMenuImageSize.md)|Restituisce le dimensioni delle immagini del pulsante del menu nell'applicazione.|  
|[CMFCToolBar::GetMenuImages](../Topic/CMFCToolBar::GetMenuImages.md)|Restituisce un puntatore alla libreria di immagini del pulsante del menu nell'applicazione.|  
|[CMFCToolBar::GetOrigButtons](../Topic/CMFCToolBar::GetOrigButtons.md)|Recupera la raccolta di pulsanti non personalizzati della barra degli strumenti.|  
|[CMFCToolBar::GetOrigResetButtons](../Topic/CMFCToolBar::GetOrigResetButtons.md)|Recupera la raccolta di pulsanti di reimpostazione automatica non personalizzati della barra degli strumenti.|  
|[CMFCToolBar::GetResourceID](../Topic/CMFCToolBar::GetResourceID.md)|Recupera gli ID di risorsa della barra degli strumenti.|  
|[CMFCToolBar::GetRouteCommandsViaFrame](../Topic/CMFCToolBar::GetRouteCommandsViaFrame.md)|Determina quale oggetto, il frame padre o il proprietario, invia i controlli della barra degli strumenti.|  
|[CMFCToolBar::GetRowHeight](../Topic/CMFCToolBar::GetRowHeight.md)|Restituisce l'altezza dei pulsanti della barra degli strumenti.|  
|[CMFCToolBar::GetShowTooltips](../Topic/CMFCToolBar::GetShowTooltips.md)|Specifica se le descrizioni comandi visualizzati per i pulsanti della barra degli strumenti.|  
|[CMFCToolBar::GetSiblingToolBar](../Topic/CMFCToolBar::GetSiblingToolBar.md)|Recupera l'elemento di pari livello della barra degli strumenti.|  
|[CMFCToolBar::GetUserImages](../Topic/CMFCToolBar::GetUserImages.md)|Restituisce un puntatore alla raccolta di immagini definite dall'utente del pulsante della barra degli strumenti nell'applicazione.|  
|[CMFCToolBar::HitTest](../Topic/CMFCToolBar::HitTest.md)|Restituisce l'indice del pulsante della barra degli strumenti che si trova nella posizione specificata.|  
|[CMFCToolBar::InsertButton](../Topic/CMFCToolBar::InsertButton.md)|Inserisce un pulsante nella barra degli strumenti.|  
|[CMFCToolBar::InsertSeparator](../Topic/CMFCToolBar::InsertSeparator.md)|Inserisce un separatore la barra degli strumenti.|  
|[CMFCToolBar::InvalidateButton](../Topic/CMFCToolBar::InvalidateButton.md)|Invalida l'area client del pulsante della barra degli strumenti che esiste all'indice specificato.|  
|[CMFCToolBar::IsAddRemoveQuickCustomize](../Topic/CMFCToolBar::IsAddRemoveQuickCustomize.md)|Determina se un utente può aggiungere o rimuovere pulsanti della barra degli strumenti mediante l'opzione di menu **Personalizza**.|  
|[CMFCToolBar::IsAltCustomizeMode](../Topic/CMFCToolBar::IsAltCustomizeMode.md)|Specifica se *la personalizzazione rapida* viene utilizzata per trascinare un pulsante.|  
|[CMFCToolBar::IsAutoGrayInactiveImages](../Topic/CMFCToolBar::IsAutoGrayInactiveImages.md)|Specifica se la generazione automatica di immagini del pulsante \(non evidenziate\) inattive è abilitata.|  
|[CMFCToolBar::IsBasicCommand](../Topic/CMFCToolBar::IsBasicCommand.md)|Determina se un comando consiste nell'elenco di comandi di base.|  
|[CMFCToolBar::IsButtonExtraSizeAvailable](../Topic/CMFCToolBar::IsButtonExtraSizeAvailable.md)|Determina se la barra degli strumenti può visualizzare i pulsanti che hanno esteso i bordi.|  
|[CMFCToolBar::IsButtonHighlighted](../Topic/CMFCToolBar::IsButtonHighlighted.md)|Determina se il pulsante nella barra degli strumenti è evidenziato.|  
|[CMFCToolBar::IsCommandPermitted](../Topic/CMFCToolBar::IsCommandPermitted.md)|Determina se il comando è consentito.|  
|[CMFCToolBar::IsCommandRarelyUsed](../Topic/CMFCToolBar::IsCommandRarelyUsed.md)|Determina se un comando viene utilizzata raramente \(vedere [CMFCToolBar::SetCommandUsageOptions](../Topic/CMFCToolBar::SetCommandUsageOptions.md)\).|  
|[CMFCToolBar::IsCustomizeMode](../Topic/CMFCToolBar::IsCustomizeMode.md)|Specifica se il framework della barra degli strumenti è in modalità di personalizzazione.|  
|[CMFCToolBar::IsDragButton](../Topic/CMFCToolBar::IsDragButton.md)|Determina se un pulsante della barra degli strumenti sta trascinando.|  
|[CMFCToolBar::IsExistCustomizeButton](../Topic/CMFCToolBar::IsExistCustomizeButton.md)|Determina se la barra degli strumenti contiene il pulsante **Personalizza**.|  
|[CMFCToolBar::IsFloating](../Topic/CMFCToolBar::IsFloating.md)|Determina se la barra degli strumenti è mobile.|  
|[CMFCToolBar::IsLargeIcons](../Topic/CMFCToolBar::IsLargeIcons.md)|Specifica se barre degli strumenti icone della visualizzazione dell'applicazione attualmente nelle dimensioni maggiori.|  
|[CMFCToolBar::IsLastCommandFromButton](../Topic/CMFCToolBar::IsLastCommandFromButton.md)|Determina se il comando recentemente effettuato è stato inviato dal pulsante della barra degli strumenti specificato.|  
|[CMFCToolBar::IsLocked](../Topic/CMFCToolBar::IsLocked.md)|Determina se la barra degli strumenti è bloccata.|  
|[CMFCToolBar::IsOneRowWithSibling](../Topic/CMFCToolBar::IsOneRowWithSibling.md)|Determina se la barra degli strumenti e la barra degli strumenti di pari livello vengono collocati sulla stessa riga.|  
|[CMFCToolBar::IsUserDefined](../Topic/CMFCToolBar::IsUserDefined.md)|Specifica se la barra degli strumenti è definita dall'utente.|  
|[CMFCToolBar::LoadBitmap](../Topic/CMFCToolBar::LoadBitmap.md)|Carica le immagini della barra degli strumenti dalle risorse dell'applicazione.|  
|[CMFCToolBar::LoadBitmapEx](../Topic/CMFCToolBar::LoadBitmapEx.md)|Carica le immagini della barra degli strumenti dalle risorse dell'applicazione.  Include le immagini di grandi dimensioni.|  
|[CMFCToolBar::LoadParameters](../Topic/CMFCToolBar::LoadParameters.md)|Carica le opzioni globali della barra degli strumenti di Windows Registro di sistema.|  
|[CMFCToolBar::LoadState](../Topic/CMFCToolBar::LoadState.md)|Carica le informazioni sullo stato della barra degli strumenti di Windows Registro di sistema.  \(Override [CPane::LoadState](../Topic/CPane::LoadState.md)\).|  
|[CMFCToolBar::LoadToolBar](../Topic/CMFCToolBar::LoadToolBar.md)|Caricamento della barra degli strumenti dalle risorse dell'applicazione.|  
|[CMFCToolBar::LoadToolBarEx](../Topic/CMFCToolBar::LoadToolBarEx.md)|Caricamento della barra degli strumenti dalle risorse dell'applicazione utilizzando la classe di supporto `CMFCToolBarInfo` per attivare l'applicazione per l'utilizzo di immagini di grandi dimensioni.|  
|[CMFCToolBar::OnChangeHot](../Topic/CMFCToolBar::OnChangeHot.md)|Chiamato dal framework quando un utente seleziona un pulsante nella barra degli strumenti.|  
|[CMFCToolBar::OnFillBackground](../Topic/CMFCToolBar::OnFillBackground.md)|Chiamato dal framework da [CBasePane::DoPaint](../Topic/CBasePane::DoPaint.md) per riempire lo sfondo della barra degli strumenti.|  
|[CMFCToolBar::OnReset](../Topic/CMFCToolBar::OnReset.md)|Ripristina la barra degli strumenti allo stato originale.|  
|[CMFCToolBar::OnSetAccData](../Topic/CMFCToolBar::OnSetAccData.md)|\(Override [CBasePane::OnSetAccData](../Topic/CBasePane::OnSetAccData.md)\).|  
|[CMFCToolBar::OnSetDefaultButtonText](../Topic/CMFCToolBar::OnSetDefaultButtonText.md)|Ripristina il testo di un pulsante della barra degli strumenti allo stato predefinito.|  
|`CMFCToolBar::OnUpdateCmdUI`|Per uso interno.|  
|[CMFCToolBar::RemoveAllButtons](../Topic/CMFCToolBar::RemoveAllButtons.md)|Rimuove tutti i pulsanti della barra.|  
|[CMFCToolBar::RemoveButton](../Topic/CMFCToolBar::RemoveButton.md)|Rimuove il pulsante all'indice specificato dalla barra degli strumenti.|  
|[CMFCToolBar::RemoveStateFromRegistry](../Topic/CMFCToolBar::RemoveStateFromRegistry.md)|Elimina le informazioni sullo stato della barra degli strumenti di Windows Registro di sistema.|  
|[CMFCToolBar::ReplaceButton](../Topic/CMFCToolBar::ReplaceButton.md)|Sostituisce un pulsante della barra degli strumenti con un altro pulsante della barra degli strumenti.|  
|[CMFCToolBar::ResetAll](../Topic/CMFCToolBar::ResetAll.md)|Ripristina tutte le barre degli strumenti agli stati originali.|  
|[CMFCToolBar::ResetAllImages](../Topic/CMFCToolBar::ResetAllImages.md)|Rimuove tutte le raccolte di immagine della barra degli strumenti nell'applicazione.|  
|[CMFCToolBar::RestoreOriginalState](../Topic/CMFCToolBar::RestoreOriginalState.md)|Ripristina lo stato originale di una barra degli strumenti.|  
|[CMFCToolBar::SaveState](../Topic/CMFCToolBar::SaveState.md)|Salva le informazioni sullo stato della barra degli strumenti in Windows Registro di sistema.  \(Override [CPane::SaveState](../Topic/CPane::SaveState.md)\).|  
|`CMFCToolBar::Serialize`|\(Override `CBasePane::Serialize`\).|  
|[CMFCToolBar::SetBasicCommands](../Topic/CMFCToolBar::SetBasicCommands.md)|Imposta l'elenco di controlli che visualizzano sempre quando un utente apre un menu.|  
|[CMFCToolBar::SetButtonInfo](../Topic/CMFCToolBar::SetButtonInfo.md)|Impostare l'id di comando, lo stile e l'immagine ID di un pulsante della barra degli strumenti.|  
|[CMFCToolBar::SetButtonStyle](../Topic/CMFCToolBar::SetButtonStyle.md)|Imposta lo stile del pulsante della barra degli strumenti all'indice specificato.|  
|[CMFCToolBar::SetButtonText](../Topic/CMFCToolBar::SetButtonText.md)|Impostare l'etichetta di testo di un pulsante della barra degli strumenti.|  
|[CMFCToolBar::SetButtons](../Topic/CMFCToolBar::SetButtons.md)|Imposta i pulsanti della barra degli strumenti.|  
|[CMFCToolBar::SetCommandUsageOptions](../Topic/CMFCToolBar::SetCommandUsageOptions.md)|Specifica quando i controlli raramente utilizzati non vengono visualizzati nel menu dell'applicazione.|  
|[CMFCToolBar::SetCustomizeMode](../Topic/CMFCToolBar::SetCustomizeMode.md)|Abilita o disabilita la modalità di personalizzazione delle barre degli strumenti nell'applicazione.|  
|[CMFCToolBar::SetGrayDisabledButtons](../Topic/CMFCToolBar::SetGrayDisabledButtons.md)|Specifica se i pulsanti disabilitati nella barra degli strumenti sono attenuati o se le immagini disabilitate vengono utilizzate per i pulsanti disabilitati.|  
|[CMFCToolBar::SetHeight](../Topic/CMFCToolBar::SetHeight.md)|L'altezza della barra degli strumenti.|  
|[CMFCToolBar::SetHotBorder](../Topic/CMFCToolBar::SetHotBorder.md)|Specifica se i pulsanti della barra degli strumenti caldo\- vengono registrati.|  
|[CMFCToolBar::SetHotTextColor](../Topic/CMFCToolBar::SetHotTextColor.md)|Imposta il colore del testo per i pulsanti della barra degli strumenti caldi.|  
|[CMFCToolBar::SetLargeIcons](../Topic/CMFCToolBar::SetLargeIcons.md)|Specifica se i pulsanti della barra degli strumenti visualizzare icone grandi.|  
|[CMFCToolBar::SetLockedSizes](../Topic/CMFCToolBar::SetLockedSizes.md)|Impostare le dimensioni dei pulsanti bloccati e immagini bloccate sulla barra degli strumenti.|  
|[CMFCToolBar::SetMenuSizes](../Topic/CMFCToolBar::SetMenuSizes.md)|Imposta la dimensione dei pulsanti di menu della barra degli strumenti e le immagini.|  
|[CMFCToolBar::SetNonPermittedCommands](../Topic/CMFCToolBar::SetNonPermittedCommands.md)|Imposta l'elenco di controlli che non possono essere eseguiti dall'utente.|  
|[CMFCToolBar::SetOneRowWithSibling](../Topic/CMFCToolBar::SetOneRowWithSibling.md)|Posiziona la barra degli strumenti e il relativo elemento di pari livello agli stessi righe.|  
|[CMFCToolBar::SetPermament](../Topic/CMFCToolBar::SetPermament.md)|Specifica se un utente può chiudere la barra degli strumenti.|  
|[CMFCToolBar::SetRouteCommandsViaFrame](../Topic/CMFCToolBar::SetRouteCommandsViaFrame.md)|Specifica se il frame padre o il proprietario invia i controlli della barra degli strumenti.|  
|[CMFCToolBar::SetShowTooltips](../Topic/CMFCToolBar::SetShowTooltips.md)|Specifica se il framework di visualizzare le descrizioni comandi.|  
|[CMFCToolBar::SetSiblingToolBar](../Topic/CMFCToolBar::SetSiblingToolBar.md)|Specifica l'elemento di pari livello della barra degli strumenti.|  
|[CMFCToolBar::SetSizes](../Topic/CMFCToolBar::SetSizes.md)|Specifica le dimensioni dei pulsanti e le immagini sulle barre degli strumenti.|  
|[CMFCToolBar::SetToolBarBtnText](../Topic/CMFCToolBar::SetToolBarBtnText.md)|Specifica le proprietà di un pulsante nella barra degli strumenti.|  
|[CMFCToolBar::SetTwoRowsWithSibling](../Topic/CMFCToolBar::SetTwoRowsWithSibling.md)|Posiziona la barra degli strumenti e il relativo elemento di pari livello su righe separate.|  
|[CMFCToolBar::SetUserImages](../Topic/CMFCToolBar::SetUserImages.md)|Imposta la raccolta di immagini definite dall'applicazione.|  
|[CMFCToolBar::StretchPane](../Topic/CMFCToolBar::StretchPane.md)|Corretta la barra degli strumenti verticale o orizzontale. \(Override [CBasePane::StretchPane](../Topic/CBasePane::StretchPane.md)\).|  
|[CMFCToolBar::TranslateChar](../Topic/CMFCToolBar::TranslateChar.md)|Esegue un comando pulsante se il codice tasto specificato corrisponde a una scelta rapida valida.|  
|[CMFCToolBar::UpdateButton](../Topic/CMFCToolBar::UpdateButton.md)|Aggiorna lo stato del pulsante specificato.|  
|[CMFCToolBar::WrapToolBar](../Topic/CMFCToolBar::WrapToolBar.md)|Riposizionamento dei pulsanti della barra degli strumenti nelle dimensioni specificate.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCToolBar::AllowShowOnList](../Topic/CMFCToolBar::AllowShowOnList.md)|Determina se la barra degli strumenti nell'elenco viene visualizzata nel riquadro **Barre degli strumenti** la finestra di dialogo **Personalizza**.|  
|[CMFCToolBar::CalcMaxButtonHeight](../Topic/CMFCToolBar::CalcMaxButtonHeight.md)|Calcola l'altezza massima di un pulsante nella barra degli strumenti.|  
|[CMFCToolBar::DoPaint](../Topic/CMFCToolBar::DoPaint.md)|Aggiorna una barra degli strumenti.|  
|[CMFCToolBar::DrawButton](../Topic/CMFCToolBar::DrawButton.md)|Aggiorna un pulsante della barra degli strumenti.|  
|[CMFCToolBar::DrawSeparator](../Topic/CMFCToolBar::DrawSeparator.md)|Aggiorna un separatore di una barra degli strumenti.|  
|[CMFCToolBar::OnUserToolTip](../Topic/CMFCToolBar::OnUserToolTip.md)|Chiamato dal framework quando la descrizione per un pulsante sta per visualizzare.|  
  
### Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCToolBar::m\_bDontScaleImages](../Topic/CMFCToolBar::m_bDontScaleImages.md)|Specifica se ridimensionare o non immagini della barra degli strumenti in modalità elevata di DPI.|  
|[CMFCToolBar::m\_dblLargeImageRatio](../Topic/CMFCToolBar::m_dblLargeImageRatio.md)|Specifica il rapporto tra la dimensione \(l'altezza o la larghezza di immagini di grandi dimensioni e la dimensione delle immagini normali.|  
  
## Note  
 Per includere un oggetto `CMFCToolBar` nell'applicazione, attenersi alla seguente procedura:  
  
1.  Aggiungere un oggetto `CMFCToolBar` la finestra cornice principale.  
  
2.  Quando si sviluppa il messaggio `WM_CREATE` per la finestra cornice principale, chiamare [CMFCToolBar::Create](../Topic/CMFCToolBar::Create.md) o [CMFCToolBar::CreateEx](../Topic/CMFCToolBar::CreateEx.md) per creare la barra degli strumenti e per specificare lo stile.  
  
3.  Chiamare [CBasePane::EnableDocking](../Topic/CBasePane::EnableDocking.md) per specificare lo stile di ancoraggio.  
  
 Per inserire un pulsante speciale, ad esempio una casella combinata o una barra degli strumenti dell'elenco a discesa, riserva un pulsante fittizi nella risorsa padre e sostituisce il pulsante fittizio di runtime utilizzando [CMFCToolBar::ReplaceButton](../Topic/CMFCToolBar::ReplaceButton.md).  Per ulteriori informazioni, vedere [Procedura dettagliata: inserimento di controlli nelle barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md).  
  
 `CMFCToolBar` è la classe base per le classi [CMFCMenuBar Class](../../mfc/reference/cmfcmenubar-class.md), [Classe CMFCPopupMenuBar](../../mfc/reference/cmfcpopupmenubar-class.md)e [CMFCDropDownToolBar Class](../../mfc/reference/cmfcdropdowntoolbar-class.md)della libreria MFC.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come utilizzare i vari metodi della classe `CMFCToolBar`.  L'esempio mostra come impostare il testo dell'etichetta di progettazione della barra degli strumenti, impostare bordi, impostare lo stile del riquadro e abilitare il pulsante **Aggiungi o rimuovi pulsanti** visualizzato alle estremità della barra degli strumenti.  Questo frammento di codice fa parte [Esempio demo di IE](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_IEDemo#6](../../mfc/reference/codesnippet/CPP/cmfctoolbar-class_1.h)]  
[!code-cpp[NVC_MFC_IEDemo#8](../../mfc/reference/codesnippet/CPP/cmfctoolbar-class_2.cpp)]  
  
## Requisiti  
 **intestazione:** afxtoolbar.h  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
 [CPane](../../mfc/reference/cpane-class.md)  
  
 [CMFCBaseToolBar](../../mfc/reference/cmfcbasetoolbar-class.md)  
  
 [CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCMenuBar Class](../../mfc/reference/cmfcmenubar-class.md)   
 [Classe CMFCPopupMenuBar](../../mfc/reference/cmfcpopupmenubar-class.md)   
 [CMFCDropDownToolBar Class](../../mfc/reference/cmfcdropdowntoolbar-class.md)   
 [Procedura dettagliata: inserimento di controlli nelle barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md)