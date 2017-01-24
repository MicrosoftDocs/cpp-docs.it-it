---
title: "CToolBarCtrl Class | Microsoft Docs"
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
  - "CToolBarCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CToolBarCtrl class"
  - "descrizioni comandi [C++], notifications"
  - "controlli della barra degli strumenti [MFC], CToolBarCtrl class"
  - "Windows common controls [C++], CToolBarCtrl"
ms.assetid: 8f2f8ad2-05d7-4975-8715-3f2eed795248
caps.latest.revision: 22
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CToolBarCtrl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce la funzionalità del controllo comune della barra degli strumenti di Windows.  
  
## Sintassi  
  
```  
class CToolBarCtrl : public CWnd  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CToolBarCtrl::CToolBarCtrl](../Topic/CToolBarCtrl::CToolBarCtrl.md)|Costruisce un oggetto `CToolBarCtrl`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CToolBarCtrl::AddBitmap](../Topic/CToolBarCtrl::AddBitmap.md)|Aggiunge uno o più icone dei pulsanti bitmap all'elenco di icone dei pulsanti disponibili per un controllo toolbar.|  
|[CToolBarCtrl::AddButtons](../Topic/CToolBarCtrl::AddButtons.md)|Aggiunge uno o più pulsanti a un controllo toolbar.|  
|[CToolBarCtrl::AddString](../Topic/CToolBarCtrl::AddString.md)|Aggiunge una nuova stringa, passata come ID di risorsa, all'interno della barra degli strumenti di stringhe.|  
|[CToolBarCtrl::AddStrings](../Topic/CToolBarCtrl::AddStrings.md)|Aggiunge una nuova stringa o stringhe, passate come un puntatore a un buffer di stringhe null separate, all'interno della barra degli strumenti di stringhe.|  
|[CToolBarCtrl::AutoSize](../Topic/CToolBarCtrl::AutoSize.md)|Ridimensiona un controllo toolbar.|  
|[CToolBarCtrl::ChangeBitmap](../Topic/CToolBarCtrl::ChangeBitmap.md)|Modifica la bitmap per un pulsante nel controllo della barra degli strumenti corrente.|  
|[CToolBarCtrl::CheckButton](../Topic/CToolBarCtrl::CheckButton.md)|Controlli o definito un pulsante specificato in un controllo toolbar.|  
|[CToolBarCtrl::CommandToIndex](../Topic/CToolBarCtrl::CommandToIndex.md)|Recupera l'indice in base zero del pulsante associato all'identificatore di comando specificato.|  
|[CToolBarCtrl::Create](../Topic/CToolBarCtrl::Create.md)|Crea un controllo barra degli strumenti e lo collega a un oggetto `CToolBarCtrl`.|  
|[CToolBarCtrl::CreateEx](../Topic/CToolBarCtrl::CreateEx.md)|Crea un controllo toolbar con gli stili estesi Windows specificati e lo collega a un oggetto `CToolBarCtrl`.|  
|[CToolBarCtrl::Customize](../Topic/CToolBarCtrl::Customize.md)|Visualizzare la finestra di dialogo della barra degli strumenti di personalizzare.|  
|[CToolBarCtrl::DeleteButton](../Topic/CToolBarCtrl::DeleteButton.md)|Rimuove un pulsante dal controllo della barra degli strumenti.|  
|[CToolBarCtrl::EnableButton](../Topic/CToolBarCtrl::EnableButton.md)|Abilita o disabilita il pulsante specificato in un controllo toolbar.|  
|[CToolBarCtrl::GetAnchorHighlight](../Topic/CToolBarCtrl::GetAnchorHighlight.md)|Recupera l'impostazione di evidenziazione di ancoraggio di una barra degli strumenti.|  
|[CToolBarCtrl::GetBitmap](../Topic/CToolBarCtrl::GetBitmap.md)|Recupera l'indice della bitmap associata a un pulsante in una barra degli strumenti.|  
|[CToolBarCtrl::GetBitmapFlags](../Topic/CToolBarCtrl::GetBitmapFlags.md)|Ottiene i flag associati alla bitmap della barra degli strumenti.|  
|[CToolBarCtrl::GetButton](../Topic/CToolBarCtrl::GetButton.md)|Recupera le informazioni sul pulsante specificato in un controllo toolbar.|  
|[CToolBarCtrl::GetButtonCount](../Topic/CToolBarCtrl::GetButtonCount.md)|Recupera attualmente un conteggio dei pulsanti nel controllo della barra degli strumenti.|  
|[CToolBarCtrl::GetButtonInfo](../Topic/CToolBarCtrl::GetButtonInfo.md)|Recupera le informazioni per un pulsante in una barra degli strumenti.|  
|[CToolBarCtrl::GetButtonSize](../Topic/CToolBarCtrl::GetButtonSize.md)|Recupera la larghezza e l'altezza correnti dei pulsanti della barra degli strumenti, in pixel.|  
|[CToolBarCtrl::GetColorScheme](../Topic/CToolBarCtrl::GetColorScheme.md)|Recupera la combinazione di colori controllo toolbar corrente.|  
|[CToolBarCtrl::GetDisabledImageList](../Topic/CToolBarCtrl::GetDisabledImageList.md)|Recupera l'elenco di immagini che un controllo toolbar utilizza per visualizzare i pulsanti disabilitati.|  
|[CToolBarCtrl::GetDropTarget](../Topic/CToolBarCtrl::GetDropTarget.md)|Recupera l'interfaccia [IDropTarget](http://msdn.microsoft.com/library/windows/desktop/ms679679) per un controllo toolbar.|  
|[CToolBarCtrl::GetExtendedStyle](../Topic/CToolBarCtrl::GetExtendedStyle.md)|Recupera gli stili estesi per un controllo toolbar.|  
|[CToolBarCtrl::GetHotImageList](../Topic/CToolBarCtrl::GetHotImageList.md)|Recupera l'elenco di immagini che un controllo toolbar utilizza per visualizzare i pulsanti "caldi".  Un pulsante a caldo appare evidenziato quando il puntatore del mouse è sopra.|  
|[CToolBarCtrl::GetHotItem](../Topic/CToolBarCtrl::GetHotItem.md)|Recupera l'indice dell'elemento personalizzazione in una barra degli strumenti.|  
|[CToolBarCtrl::GetImageList](../Topic/CToolBarCtrl::GetImageList.md)|Recupera l'elenco di immagini che un controllo toolbar utilizza per visualizzare i pulsanti nello stato predefinito.|  
|[CToolBarCtrl::GetInsertMark](../Topic/CToolBarCtrl::GetInsertMark.md)|Recupera il segno di inserimento corrente della barra degli strumenti.|  
|[CToolBarCtrl::GetInsertMarkColor](../Topic/CToolBarCtrl::GetInsertMarkColor.md)|Recupera il colore utilizzato per disegnare il segno di inserimento per la barra degli strumenti.|  
|[CToolBarCtrl::GetItemRect](../Topic/CToolBarCtrl::GetItemRect.md)|Recupera il rettangolo di delimitazione di un pulsante in un controllo toolbar.|  
|[CToolBarCtrl::GetMaxSize](../Topic/CToolBarCtrl::GetMaxSize.md)|Recupera la dimensione totale di tutti i pulsanti e separatori visibili nella barra degli strumenti.|  
|[CToolBarCtrl::GetMaxTextRows](../Topic/CToolBarCtrl::GetMaxTextRows.md)|Recupera il numero massimo di righe di testo visualizzato su un pulsante della barra degli strumenti.|  
|[CToolBarCtrl::GetMetrics](../Topic/CToolBarCtrl::GetMetrics.md)|Recupera la metrica di un controllo toolbar.|  
|[CToolBarCtrl::GetPadding](../Topic/CToolBarCtrl::GetPadding.md)|Recupera la spaziatura orizzontale e verticale di controllo toolbar corrente.|  
|[CToolBarCtrl::GetPressedImageList](../Topic/CToolBarCtrl::GetPressedImageList.md)|Recupera l'elenco di immagini che il controllo toolbar corrente viene utilizzato per rappresentare i pulsanti premuto.|  
|[CToolBarCtrl::GetRect](../Topic/CToolBarCtrl::GetRect.md)|Recupera il rettangolo di delimitazione di un pulsante della barra degli strumenti specificato.|  
|[CToolBarCtrl::GetRows](../Topic/CToolBarCtrl::GetRows.md)|Recupera il numero di righe di pulsanti attualmente visualizzato nella barra degli strumenti.|  
|[CToolBarCtrl::GetState](../Topic/CToolBarCtrl::GetState.md)|Recupera le informazioni sullo stato del pulsante specificato in un controllo toolbar, ad esempio se è attivato, premuto, o selezionata.|  
|[CToolBarCtrl::GetString](../Topic/CToolBarCtrl::GetString.md)|Recupera una stringa della barra degli strumenti.|  
|[CToolBarCtrl::GetStyle](../Topic/CToolBarCtrl::GetStyle.md)|Recupera gli stili attualmente in uso per un controllo toolbar.|  
|[CToolBarCtrl::GetToolTips](../Topic/CToolBarCtrl::GetToolTips.md)|Recupera l'handle del controllo di descrizione comandi, se presente, associato al controllo della barra degli strumenti.|  
|[CToolBarCtrl::HideButton](../Topic/CToolBarCtrl::HideButton.md)|Nascondere o nel pulsante specificato in un controllo toolbar.|  
|[CToolBarCtrl::HitTest](../Topic/CToolBarCtrl::HitTest.md)|Determina se un punto si trova in un controllo toolbar.|  
|[CToolBarCtrl::Indeterminate](../Topic/CToolBarCtrl::Indeterminate.md)|Imposta o definito lo stato \(grigio\) indeterminato del pulsante specificato in un controllo toolbar.|  
|[CToolBarCtrl::InsertButton](../Topic/CToolBarCtrl::InsertButton.md)|Inserisce un pulsante in un controllo toolbar.|  
|[CToolBarCtrl::InsertMarkHitTest](../Topic/CToolBarCtrl::InsertMarkHitTest.md)|Recupera le informazioni del segno di inserimento per un punto in una barra degli strumenti.|  
|[CToolBarCtrl::IsButtonChecked](../Topic/CToolBarCtrl::IsButtonChecked.md)|Indica se il pulsante specificato in un controllo toolbar selezionata.|  
|[CToolBarCtrl::IsButtonEnabled](../Topic/CToolBarCtrl::IsButtonEnabled.md)|Indica se il pulsante specificato in un controllo toolbar è abilitato.|  
|[CToolBarCtrl::IsButtonHidden](../Topic/CToolBarCtrl::IsButtonHidden.md)|Indica se il pulsante specificato in un controllo toolbar è nascosto.|  
|[CToolBarCtrl::IsButtonHighlighted](../Topic/CToolBarCtrl::IsButtonHighlighted.md)|Controlla lo stato di evidenziazione del pulsante della barra degli strumenti.|  
|[CToolBarCtrl::IsButtonIndeterminate](../Topic/CToolBarCtrl::IsButtonIndeterminate.md)|Indica se lo stato del pulsante specificato in un controllo toolbar è indeterminato \(grigio\).|  
|[CToolBarCtrl::IsButtonPressed](../Topic/CToolBarCtrl::IsButtonPressed.md)|Indica se il pulsante specificato in un controllo toolbar premuto.|  
|[CToolBarCtrl::LoadImages](../Topic/CToolBarCtrl::LoadImages.md)|Bitmap carichi nell'elenco immagini di un controllo toolbar.|  
|[CToolBarCtrl::MapAccelerator](../Topic/CToolBarCtrl::MapAccelerator.md)|Esegue il mapping di un carattere tasto di scelta rapida a un pulsante della barra degli strumenti.|  
|[CToolBarCtrl::MarkButton](../Topic/CToolBarCtrl::MarkButton.md)|Imposta lo stato dell'evidenziazione di un pulsante specificato in un controllo toolbar.|  
|[CToolBarCtrl::MoveButton](../Topic/CToolBarCtrl::MoveButton.md)|Sposta un pulsante da un indice a un altro.|  
|[CToolBarCtrl::PressButton](../Topic/CToolBarCtrl::PressButton.md)|Stampa o versioni il pulsante specificato in un controllo toolbar.|  
|[CToolBarCtrl::ReplaceBitmap](../Topic/CToolBarCtrl::ReplaceBitmap.md)|Sostituisce la bitmap esistente nel controllo della barra degli strumenti corrente con una nuova bitmap.|  
|[CToolBarCtrl::RestoreState](../Topic/CToolBarCtrl::RestoreState.md)|Ripristina lo stato del controllo della barra degli strumenti.|  
|[CToolBarCtrl::SaveState](../Topic/CToolBarCtrl::SaveState.md)|Salvare lo stato del controllo della barra degli strumenti.|  
|[CToolBarCtrl::SetAnchorHighlight](../Topic/CToolBarCtrl::SetAnchorHighlight.md)|Imposta il valore di evidenziazione di ancoraggio di una barra degli strumenti.|  
|[CToolBarCtrl::SetBitmapSize](../Topic/CToolBarCtrl::SetBitmapSize.md)|Imposta la dimensione delle immagini destinate a bit da aggiungere a un controllo toolbar.|  
|[CToolBarCtrl::SetButtonInfo](../Topic/CToolBarCtrl::SetButtonInfo.md)|Imposta le informazioni per un pulsante esistente in una barra degli strumenti.|  
|[CToolBarCtrl::SetButtonSize](../Topic/CToolBarCtrl::SetButtonSize.md)|Imposta la dimensione dei pulsanti da aggiungere a un controllo toolbar.|  
|[CToolBarCtrl::SetButtonStructSize](../Topic/CToolBarCtrl::SetButtonStructSize.md)|Specifica la dimensione della struttura `TBBUTTON`.|  
|[CToolBarCtrl::SetButtonWidth](../Topic/CToolBarCtrl::SetButtonWidth.md)|Imposta il valore minimo e la larghezza massima del pulsante nel controllo della barra degli strumenti.|  
|[CToolBarCtrl::SetCmdID](../Topic/CToolBarCtrl::SetCmdID.md)|Imposta l'identificatore di comando da inviare alla finestra proprietaria quando il pulsante viene premuto specificato.|  
|[CToolBarCtrl::SetColorScheme](../Topic/CToolBarCtrl::SetColorScheme.md)|Imposta la combinazione di colori controllo toolbar corrente.|  
|[CToolBarCtrl::SetDisabledImageList](../Topic/CToolBarCtrl::SetDisabledImageList.md)|Imposta l'elenco di immagini che il controllo toolbar utilizzerà per visualizzare i pulsanti disabilitati.|  
|[CToolBarCtrl::SetDrawTextFlags](../Topic/CToolBarCtrl::SetDrawTextFlags.md)|Imposta flag nella funzione Win32 [DrawText](http://msdn.microsoft.com/library/windows/desktop/dd162498), utilizzata per disegnare testo nel rettangolo specificato, formattato come ad esempio i flag è impostato.|  
|[CToolBarCtrl::SetExtendedStyle](../Topic/CToolBarCtrl::SetExtendedStyle.md)|Imposta stili estesi per un controllo toolbar.|  
|[CToolBarCtrl::SetHotImageList](../Topic/CToolBarCtrl::SetHotImageList.md)|Imposta l'elenco di immagini che il controllo toolbar utilizzerà per visualizzare i pulsanti "caldi".|  
|[CToolBarCtrl::SetHotItem](../Topic/CToolBarCtrl::SetHotItem.md)|Imposta l'elemento personalizzazione in una barra degli strumenti.|  
|[CToolBarCtrl::SetImageList](../Topic/CToolBarCtrl::SetImageList.md)|Imposta l'elenco di immagini che la barra degli strumenti verrà utilizzato per visualizzare i pulsanti che si trovano nello stato predefinito.|  
|[CToolBarCtrl::SetIndent](../Topic/CToolBarCtrl::SetIndent.md)|Impostare il rientro per il primo pulsante in un controllo toolbar.|  
|[CToolBarCtrl::SetInsertMark](../Topic/CToolBarCtrl::SetInsertMark.md)|Impostare il segno di inserimento corrente della barra degli strumenti.|  
|[CToolBarCtrl::SetInsertMarkColor](../Topic/CToolBarCtrl::SetInsertMarkColor.md)|Imposta il colore utilizzato per disegnare il segno di inserimento per la barra degli strumenti.|  
|[CToolBarCtrl::SetMaxTextRows](../Topic/CToolBarCtrl::SetMaxTextRows.md)|Imposta il numero massimo di righe di testo visualizzato su un pulsante della barra degli strumenti.|  
|[CToolBarCtrl::SetMetrics](../Topic/CToolBarCtrl::SetMetrics.md)|Imposta la metrica di un controllo toolbar.|  
|[CToolBarCtrl::SetOwner](../Topic/CToolBarCtrl::SetOwner.md)|Imposta la finestra per ricevere i messaggi di notifica dal controllo della barra degli strumenti.|  
|[CToolBarCtrl::SetPadding](../Topic/CToolBarCtrl::SetPadding.md)|Impostare la spaziatura orizzontale e verticale di controllo toolbar corrente.|  
|[CToolBarCtrl::SetPressedImageList](../Topic/CToolBarCtrl::SetPressedImageList.md)|Imposta l'elenco di immagini che il controllo toolbar corrente viene utilizzato per rappresentare i pulsanti premuto.|  
|[CToolBarCtrl::SetRows](../Topic/CToolBarCtrl::SetRows.md)|Imposta il numero di righe di pulsanti visualizzare nella barra degli strumenti.|  
|[CToolBarCtrl::SetState](../Topic/CToolBarCtrl::SetState.md)|Imposta lo stato del pulsante specificato in un controllo toolbar.|  
|[CToolBarCtrl::SetStyle](../Topic/CToolBarCtrl::SetStyle.md)|Imposta stili per un controllo toolbar.|  
|[CToolBarCtrl::SetToolTips](../Topic/CToolBarCtrl::SetToolTips.md)|Associa un controllo tooltip al controllo della barra degli strumenti.|  
|[CToolBarCtrl::SetWindowTheme](../Topic/CToolBarCtrl::SetWindowTheme.md)|Consente di impostare lo stile di visualizzazione di un controllo toolbar.|  
  
## Note  
 Questo controllo e la classe `CToolBarCtrl` \) è disponibile solo per i programmi in esecuzione in versioni 3,51 di Windows NT e Windows 95\/98 e successive.  
  
 Un controllo comune della barra degli strumenti di Windows è una finestra figlio rettangolare che contiene uno o più pulsanti.  Questi pulsanti possono visualizzare un'immagine bitmap, una stringa, entrambi.  Quando l'utente sceglie un pulsante, invia un messaggio di comando nella finestra proprietaria della barra degli strumenti.  In genere, i pulsanti di una barra degli strumenti corrispondono agli elementi nel menu dell'applicazione; forniscono un modo più diretto all'utente di accedere ai controlli di un'applicazione.  
  
 Gli oggetti di`CToolBarCtrl` contengono diverse strutture dei dati interne importanti: un elenco di immagine bitmap del pulsante o un elenco immagini, un elenco di stringhe del pulsante e un elenco di strutture `TBBUTTON` che associano un'immagine e\/o la stringa con il percorso, stili, dichiara e di ID di comando pulsante.  Tutti gli elementi di queste strutture di dati viene fatto riferimento da un indice a base zero.  Prima di poter utilizzare un oggetto `CToolBarCtrl`, è necessario installare queste strutture dei dati.  L'elenco di stringhe può essere utilizzato solo per le etichette del pulsante, non è possibile recuperare le stringhe dalla barra degli strumenti.  
  
 Per utilizzare un oggetto `CToolBarCtrl`, in genere verranno effettuate le seguenti operazioni:  
  
1.  Creare l'oggetto `CToolBarCtrl`.  
  
2.  Chiamare [Crea](../Topic/CToolBarCtrl::Create.md) per creare il controllo comune della barra degli strumenti di Windows e per associarlo all'oggetto `CToolBarCtrl`.  Selezionare lo stile della barra degli strumenti utilizzando gli stili, come **TBSTYLE\_TRANSPARENT** di una barra degli strumenti trasparente o **TBSTYLE\_DROPDOWN** di una barra degli strumenti pulsanti a discesa di tale stile di supportare.  
  
3.  Identificare come si desidera utilizzare i pulsanti della barra degli strumenti visualizzazione:  
  
    -   Per utilizzare immagini bitmap per i pulsanti, aggiungere le bitmap del pulsante sulla barra degli strumenti chiamando [AddBitmap](../Topic/CToolBarCtrl::AddBitmap.md).  
  
    -   Per utilizzare immagini da un elenco immagini per i pulsanti, specificare l'elenco di immagini chiamando [SetImageList](../Topic/CToolBarCtrl::SetImageList.md), [SetHotImageList](../Topic/CToolBarCtrl::SetHotImageList.md), o [SetDisabledImageList](../Topic/CToolBarCtrl::SetDisabledImageList.md).  
  
    -   Per utilizzare le etichette della stringa per i pulsanti, aggiungere stringhe alla barra degli strumenti chiamando [AddString](../Topic/CToolBarCtrl::AddString.md) e\/o [AddStrings](../Topic/CToolBarCtrl::AddStrings.md).  
  
4.  Aggiungere le strutture del pulsante sulla barra degli strumenti chiamando [AddButtons](../Topic/CToolBarCtrl::AddButtons.md).  
  
5.  Se si desidera che le descrizioni comandi per un pulsante della barra degli strumenti in una finestra proprietaria che non è `CFrameWnd`, è necessario gestire i messaggi **TTN\_NEEDTEXT** nella finestra proprietaria della barra degli strumenti come descritto in [Notifiche di descrizione comandi di gestione](../../mfc/handling-tool-tip-notifications.md).  Se la finestra padre della barra degli strumenti è derivata da `CFrameWnd`, descrizioni comandi visualizzati senza alcuno sforzo aggiuntivo è perché `CFrameWnd` fornisce un gestore predefinito.  
  
6.  Se si desidera che un utente la possibilità di personalizzare la barra degli strumenti, gestire i messaggi di notifica di personalizzazione nella finestra proprietaria come descritto in [notifiche di personalizzazione di gestione](../../mfc/handling-customization-notifications.md).  
  
 È possibile utilizzare [SaveState](../Topic/CToolBarCtrl::SaveState.md) per salvare lo stato corrente di un controllo barra degli strumenti nel Registro di sistema e in [RestoreState](../Topic/CToolBarCtrl::RestoreState.md) per ripristinare lo stato basato sulle informazioni memorizzate in precedenza nel Registro di sistema.  Oltre a salvare lo stato tra gli utilizzi dell'applicazione, le applicazioni in genere archiviano lo stato prima che l'utente inizia personalizzazione della barra degli strumenti nell'utente successivamente desidera ripristinare la barra degli strumenti allo stato originale.  
  
## Supporto per le versioni di Internet Explorer 4,0 e successive  
 Per supportare la funzionalità introdotta in Internet Explorer, la versione 4,0 e successive, MFC fornisce il supporto dell'elenco immagini e stili trasparenti e piani ai controlli della barra degli strumenti.  
  
 Una barra degli strumenti trasparente consente al client sotto la barra degli strumenti per mostrare tramite.  Per creare una barra degli strumenti trasparente, utilizzare gli stili **TBSTYLE\_TRANSPARENTTBSTYLE\_FLAT**.  Le barre degli strumenti trasparenti presentano il hot track; ovvero quando il puntatore del mouse viene spostato su un pulsante personalizzazione della barra degli strumenti, le modifiche dell'aspetto del pulsante.  Le barre degli strumenti create con uno stile **TBSTYLE\_FLAT** conterranno i pulsanti che non sono transparent.  
  
 Il supporto dell'elenco immagini consente a un controllo maggiore flessibilità per il comportamento predefinito, immagini calde e immagini disabilitate.  Utilizzare [GetImageList](../Topic/CToolBarCtrl::GetImageList.md), [GetHotImageList](../Topic/CToolBarCtrl::GetHotImageList.md)e [GetDisabledImageList](../Topic/CToolBarCtrl::GetDisabledImageList.md) con la barra degli strumenti trasparente per modificare l'immagine in base allo stato:  
  
 Per ulteriori informazioni su l `CToolBarCtrl`, vedere [Controlli](../../mfc/controls-mfc.md) e [Utilizzando CToolBarCtrl](../../mfc/using-ctoolbarctrl.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CToolBarCtrl`  
  
## Requisiti  
 **Header:** afxcmn.h  
  
## Vedere anche  
 [MFC campione CMNCTRL1](../../top/visual-cpp-samples.md)   
 [Esempio MFCIE MFC](../../top/visual-cpp-samples.md)   
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CToolBar Class](../../mfc/reference/ctoolbar-class.md)