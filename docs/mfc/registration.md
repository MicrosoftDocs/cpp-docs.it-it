---
title: "Registrazione | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "inizializzazione di server"
  - "installazione di server"
  - "applicazioni server OLE, registrazione di server"
  - "OLE, registrazione"
  - "database di registrazione"
  - "Registro di sistema, database di elementi OLE"
  - "server, inizializzazione"
  - "server, installazione"
ms.assetid: 991d5684-72c1-4f9e-a09a-9184ed12bbb9
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Registrazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando un utente desidera inserire un elemento OLE in un'applicazione, OLE contiene un elenco dei tipi di oggetto per cui scegliere.  OLE ottiene questo elenco dal database di registrazione del sistema, contenente le informazioni fornite da tutte le applicazioni server.  Quando un server esegue la registrazione, le voci che inserisce nel database di registrazione di sistema \(registry\) viene descritto ciascun tipo di oggetto, dovrà di estensioni di file e il percorso a se stessa, tra le altre informazioni.  
  
 Il framework e librerie a collegamento dinamico OLE di sistema \(DLL\) utilizzano questo Registro di sistema per determinare il tipo di elementi OLE sono disponibili nel sistema.  Le DLL di sistema OLE utilizzano inoltre questo Registro di sistema per determinare come avviare un'applicazione server quando un oggetto collegato o incorporato è attivato.  
  
 Questo articolo descrive ciò che ciascun applicazione server deve eseguire quando viene installata e ogni volta eseguita.  
  
 Per informazioni dettagliate sul database di registrazione del sistema e il formato dei file REG utilizzati per aggiornarla, fare *riferimento ai programmatori OLE*.  
  
##  <a name="_core_server_installation"></a> Installazione del server  
 Quando inizialmente si installa l'applicazione server, è necessario registrare tutti i tipi di elementi OLE supportate.  È inoltre necessario disporre dell'aggiornamento server il database di registrazione del sistema ogni volta che viene eseguito come applicazione autonoma.  In questo modo il database di registrazione aggiornato se il file eseguibile del server è spostato.  
  
> [!NOTE]
>  Le applicazioni MFC generate dalla creazione guidata applicazione vengono registrati automaticamente quando vengono eseguite come applicazioni autonome.  
  
 Se si desidera registrare l'applicazione durante l'installazione, utilizzando il programma di regedit.exe. In Windows 95, Windows 98 e Windows Me, RegEdit si trova nella directory di Windows.  In Windows NT e Windows 2000, RegEdit nella directory di windows System32.\) Se si include un programma di installazione con l'applicazione, è "RegEdit eseguire il programma di installazione \/S *appname.reg*". \(Il flag \/S indica l'operazione invisibile all'utente, ovvero, non viene visualizzata la finestra di dialogo che indica il completamento del comando.\) In caso contrario, occorrerà indicare all'utente di eseguire RegEdit manualmente.  
  
> [!NOTE]
>  Il file REG creato dalla procedura guidata non include il percorso completo dell'eseguibile.  Il programma di installazione deve modificare il file REG per includere il percorso completo dell'eseguibile o modificare la variabile di ambiente PATH per includere la directory di installazione.  
  
 RegEdit unisce il contenuto del file di testo con estensione reg nel database di registrazione.  Per eseguire il test del database oppure ripristinarlo, utilizzare l'editor del Registro di sistema.  Fare attenzione a evitare l'eliminazione delle voci OLE essenziali. In Windows 95, Windows 98 e Windows Me, l'editor del Registro di sistema è regedit.exe.  In Windows NT e Windows 2000, è RegEdit32.exe\).  
  
##  <a name="_core_server_initialization"></a> Inizializzazione server  
 Quando si crea un'applicazione server con la creazione guidata applicazione, completato la procedura guidata tutte le attività di inizializzazione automaticamente.  In questa sezione vengono descritte le operazioni che devono essere eseguite quando si scrive un'applicazione server manualmente.  
  
 Quando un'applicazione server viene attivata da un'applicazione contenitore, le DLL di sistema OLE aggiungere l'opzione "\/Embedding" alla riga di comando del server.  Il comportamento di un'applicazione server è diversa a seconda se è stato avviato da un contenitore, pertanto la prima operazione un'applicazione deve effettuare quando inizia l'esecuzione è controllo per "\/Embedding" o "\-" incorporare l'opzione della riga di comando.  Se questa opzione è presente, caricare un set diverso di risorse che illustrano il server come ancora attive sul posto o completamente aperte.  Per ulteriori informazioni, vedere [Menu e risorse: Aggiunta di server](../mfc/menus-and-resources-server-additions.md).  
  
 L'applicazione server deve inoltre chiamare la relativa funzione di `CWinApp::RunEmbedded` per analizzare la riga di comando.  Se restituisce un valore diverso da zero, l'applicazione non dovrebbe visualizzare la finestra perché è allontanata da un'applicazione contenitore, non come applicazione autonoma.  Questa funzione aggiorna la voce del server del database di registrazione del sistema e chiama la funzione membro di `RegisterAll` automaticamente, eseguendo la registrazione dell'istanza.  
  
 Quando l'applicazione server è iniziale, è necessario assicurarsi che possono eseguire la registrazione dell'istanza.  La registrazione dell'istanza segnala alle DLL di sistema OLE che il server è attivo e pronto per ricevere le richieste nei contenitori.  Non aggiunge una voce al database di registrazione.  Eseguire la registrazione dell'istanza del server chiamando la funzione membro di `ConnectTemplate` definita da `COleTemplateServer`.  Si connette l'oggetto di `CDocTemplate` all'oggetto di `COleTemplateServer`.  
  
 La funzione di `ConnectTemplate` accetta tre parametri: **CLSID**di server, un puntatore all'oggetto di `CDocTemplate` e un flag che indica se il server supporta più istanze.  Un miniserver deve essere in grado di supportare più istanze, ovvero, deve essere possibile che più istanze del server eseguiti contemporaneamente, uno per ciascun contenitore.  Pertanto, la sessione **TRUE** per questo flag quando viene avviato un miniserver.  
  
 Se si scrive un miniserver, per definizione sarà avviato sempre da un contenitore.  È comunque necessario analizzare la riga di comando per verificare se l'opzione "\/Embedding".  L'assenza di questa opzione sulla riga di comando significa che l'utente ha tentato di avviare il miniserver come applicazione autonoma.  In questo caso, registrare il server del database di registrazione del sistema e quindi visualizzata una finestra di messaggio che informa l'utente per avviare il miniserver da un'applicazione contenitore.  
  
## Vedere anche  
 [OLE](../mfc/ole-in-mfc.md)   
 [Server](../mfc/servers.md)   
 [CWinApp::RunAutomated](../Topic/CWinApp::RunAutomated.md)   
 [CWinApp::RunEmbedded](../Topic/CWinApp::RunEmbedded.md)   
 [COleTemplateServer Class](../mfc/reference/coletemplateserver-class.md)