---
title: "Novit&#224; negli Strumenti di sviluppo di Office per Visual Studio 2013 (aggiornamento marzo 2014) | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: e701c650-2a2b-4b18-9f7b-04d4fc59a05d
caps.latest.revision: 2
caps.handback.revision: 2
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Novit&#224; negli Strumenti di sviluppo di Office per Visual Studio 2013 (aggiornamento marzo 2014)
In **Office Developer Tools per Visual Studio 2013 – Aggiornamento di marzo 2014** sono incluse numerose nuove funzionalità che migliorano gli strumenti inclusi in Visual Studio 2013 per Cloud Business App e per lo sviluppo di applicazioni per Office\/SharePoint.  Tale componente consente di compilare nuovi tipi di applicazioni per Office abilitate in Office 2013 SP1 e in Office 365.  
  
-   [Novità in Cloud Business App](#cba)  
  
-   [Novità nello sviluppo di un'applicazione per Office](#office)  
  
-   [Novità nello sviluppo di un'applicazione per SharePoint](#sharepoint)  
  
##  <a name="cba"></a> Novità in Cloud Business App  
 In Visual Studio 2013 è stato introdotto il modello di progetto Cloud Business App che consente di compilare rapidamente applicazioni aziendali moderne che si integrano con l'esperienza della piattaforma di Office 365 e la estendono.  In questa versione sono state aggiunte numerose nuove funzionalità per supportare meglio la connessione ai datai aziendali, l'integrazione delle raccolte documenti e lo sviluppo rapido di applicazioni.  
  
### Associazione a dati aziendali  
 **Nuova origine dati SAP**  
  
 I dati aziendali svolgono un ruolo chiave in molte applicazioni aziendali.  Sul mercato sono attualmente disponibili numerosi tipi di origini dati aziendali diverse.  Oltre alle origini dati database, SharePoint, servizio OData e servizio RIA WCF, gli strumenti disponibili nell'aggiornamento di marzo 2014 offrono il supporto avanzato per il gateway SAP Netweaver.  Quando si effettua una connessione a SAP, l'applicazione cloud aziendale rispetterà le annotazioni SAP per telefono, indirizzo Web e posta elettronica, semplificando la configurazione di entità utilizzate dal gateway SAP Netweaver.  
  
 **Miglioramenti apportati all'Associazione guidata origine dati**  
  
 In molte origini dati aziendali è archiviato un numero elevato di entità dati, anche se in genere un'applicazione cloud aziendale deve interagire solo con alcune entità.  Per semplificare la ricerca delle entità a cui si desidera connettersi, l'**Associazione guidata origine dati** consente ora di ricercare le entità in base al nome e di filtrarle in base a categorie diverse.  Vengono inoltre mostrate le relazioni delle entità nell'origine dati.  
  
 **Miglioramento delle prestazioni nell'associazione a set di dati di grandi dimensioni**  
  
 Se l'applicazione cloud aziendale deve essere associata a un set di dati di grandi dimensioni, si noterà un miglioramento delle prestazioni nell'**Associazione guidata origine dati**.  Il layout di Entity Designer è stato migliorato per set di dati di grandi dimensioni, in modo che sia possibile eseguire la ricerca delle relazioni tra le entità.  È possibile inoltre modificare l'ordine delle proprietà in un'entità.  
  
 **Miglioramenti apportati ai tipi aziendali**  
  
 Oltre a elevati numeri di entità, molte origini dati aziendali includono tipi aziendali avanzati, ad esempio tipi complessi.  Nell'aggiornamento di marzo 2014 è incluso il nuovo supporto per i tipi di dati complessi.  
  
 Se l'applicazione cloud aziendale deve essere associata a un elenco di SharePoint che include colonne di tipo **Persona**, le colonne automaticamente verranno evidenziate come contatti quando si esegue l'applicazione.  Se ad esempio nel computer è installato Lync installato e si effettua una connessione alla stessa istanza di Active Directory utilizzata dal sito di SharePoint, la colonna tipo persona mostra i valori come contatti di Lync e attiva automaticamente funzionalità Lync nell'applicazione cloud aziendale.  
  
### Integrazione di documenti  
 L'archiviazione e il recupero di documenti sono requisiti comuni per molte applicazioni aziendali.  Potrebbe essere necessario, ad esempio, consentire l'accesso a un elenco documenti correlati a un prodotto quando un utente visualizza i dettagli del prodotto.  Potrebbe essere necessario, inoltre, consentire agli utenti di gestire i documenti nell'applicazione.  Le applicazioni cloud aziendali consentono ora di effettuare un'associazione a un elenco della raccolta documenti di SharePoint e di impostare una relazione tra l'entità elenco e un'altra entità dati.  Con questa funzionalità è possibile compilare rapidamente un'applicazione che mostra i documenti relativi a un campo dati specifico.  
  
 Inoltre, quando si associa l'applicazione a una raccolta documenti di SharePoint ospitata sul Web, le schermate dell'applicazione vengono integrate con un set di nuovi controlli documento, che consentono agli utenti di creare nuovi documenti di Office \(documenti vuoti o da modelli di documento disponibili nella raccolta documenti associata\), di aprire documenti nell'applicazione di Office Web Apps o nel client di Office e di caricare documenti esistenti.  Tutte queste funzionalità sono fornite dagli strumenti senza che sia necessaria alcuna azione dell'utente.  
  
### Miglioramenti apportati al rapido sviluppo delle applicazioni  
 **Controllo di riepilogo avanzato**  
  
 Per utilizzare meglio tipi di dati diversi, il controllo di riepilogo è stato aggiornato per visualizzare il controllo predefinito per il tipo di semantica sottostante.  Con questo supporto, se il controllo di riepilogo è associato a un tipo **Persona**, il controllo **Visualizzatore persone** verrà utilizzato dal controllo di riepilogo che fornisce informazioni aggiuntive su una persona, ad esempio il nome, il titolo e l'immagine visualizzata della persona.  
  
> [!NOTE]
>  La proprietà `contentItem.value` per il controllo di riepilogo restituisce ora il valore delle proprietà di riepilogo anziché l'intera entità dati.  Se per un controllo di riepilogo è stato utilizzato l'elemento `contentItem.value` per recuperare l'entità per accedere a un'altra proprietà dell'entità, sarà necessario aggiornare il codice per utilizzare `contentItem.data`.  
  
 **Logica incorporata per filtrare set di dati di grandi dimensioni sullo schermo**  
  
 Nell'aggiornamento di marzo 2014 è incluso il supporto incorporato per il filtro dei dati.  Senza che sia necessaria alcuna azione da parte dell'utente, l'applicazione cloud aziendale genera schermate ottimizzate per dispositivi mobili, che consentono agli utenti di cercare tabelle dati e di ordinare una tabella tramite le intestazioni.  
  
 **Creare set di schermate**  
  
 Per consentire la compilazione rapida di schermate di utilizzo comune in cui gli utenti possono cercare, visualizzare e modificare i dati dell'applicazione, in questa versione stato introdotto un set di schermate comuni.  Anziché creare le schermate di navigazione, di visualizzazione e di aggiunta e modifica dati singolarmente, è ora possibile scegliere di creare un set di schermate comuni che genera tutti i tre tipi di schermate contemporaneamente.  Nel set di schermate comune vengono inoltre inserite automaticamente tabelle dati, relazioni e navigazione tra le schermate.  
  
 **Inserimento di segnalibri nell'applicazione**  
  
 Gli utenti desiderano spesso contrassegnare con un segnalibro una pagina dell'applicazione per tornare rapidamente alla pagina stessa.  In questa versione le applicazioni cloud aziendali supportano l'inserimento di un segnalibro senza che sia necessario scrivere codice.  Gli utenti possono contrassegnare con un segnalibro qualsiasi pagina dell'applicazione  e possono inoltre aggiungere una pagina nella schermata iniziale dei propri dispositivi mobili.  
  
##  <a name="office"></a> Novità nello sviluppo di un'applicazione per Office  
 **Nuovi tipi di applicazioni per Office**  
  
 Office 2013 SP1 e Office 365 supportano app contenuto per PowerPoint e per Access Web App e consentono all'applicazione di posta elettronica di essere attivata in form di composizione, ad esempio quando gli utenti scrivono un nuovo messaggio di posta elettronica o creano un nuovo appuntamento.  Nell'aggiornamento di marzo 2014 sono supportati tutti i nuovi tipi di applicazioni durante l'intero ciclo di sviluppo, dalla creazione del progetto, la modifica di manifesti, la programmazione e il debug fino alla pubblicazione.  Napa è stato inoltre aggiornato per supportare questi nuovi tipi di applicazione.  
  
 **Modelli di progetto aggiornati**  
  
 L'applicazione per la procedura guidata per la creazione di un progetto Office in Office Developer Tools è stata aggiornata per fornire opzioni più organizzate per la creazione di applicazioni.  In particolare, in questa versione sono stati introdotti due modelli di progetto per le app contenuto.  Un modello consente semplicemente di creare un'applicazione di base, contenente codice di esempio minimo, mentre l'altro contiene più codice di esempio per illustrare come implementare un'applicazione per Excel e per Access Web App per visualizzare i dati.  Per iniziare rapidamente a sviluppare l'applicazione, è possibile scegliere tra i due modelli di progetto nella procedura guidata per la creazione del progetto.  
  
 **Ulteriori opzioni per attivare l'applicazione**  
  
 Oltre ai nuovi tipi di applicazione, in Office 2013 SP1 e Office 365 è abilitata una nuova modalità per specificare il momento in cui attivare l'applicazione.  Oltre agli host dell'applicazione in cui l'applicazione può essere attivata \(Word, Excel, PowerPoint e così via\), è stato definito un elenco di set di API, ognuno dei quali rappresenta un set di API JSOM di Office con la stessa semantica \(selezione, associazione di tabelle e così via\). Per le API di Office chiamate nelle funzionalità principali dell'applicazione, è possibile aggiungere i set di API corrispondenti nel manifesto dell'applicazione, in modo che l'applicazione non verrà attivata negli host di Office che non supportano tali API.  In tal modo è possibile attivare l'applicazione nel maggior numero possibile di host tra le diverse versioni senza aggiungere logica di programmazione complessa.  
  
 Per supportare questo tipo di attivazione, nell'applicazione per gli strumenti di Office è stata introdotta una pagina di attivazione negli editor del manifesto dell'app contenuto e dell'applicazione del riquadro attività.  Tale pagina consente di aggiornare i set di API per l'applicazione e mostra inoltre il punto in cui l'applicazione verrà attivata in base ai set di API e agli host dell'applicazione selezionati.  
  
 **Migliore supporto IntelliSense**  
  
 Per migliorare le operazioni di programmazione per i nuovi tipi di applicazione e il nuovo modello di attivazione dell'applicazione, anche IntelliSense ha subito un'evoluzione  In IntelliSense vengono mostrate solo le API valide per gli host dell'applicazione di destinazione.  Se ad esempio si compila un'app contenuto solo per Access Web App, verranno visualizzate solo le API supportate in Access Web App.  Se si compila un'applicazione di posta elettronica solo per form di composizione, le API per applicazioni di posta elettronica per form di lettura verranno nascoste in IntelliSense in modo che non vengano utilizzate in modo improprio.  Nella pagina di attivazione nell'editor del manifesto dell'app contenuto e dell'applicazione del riquadro attività è inclusa inoltre un'opzione che è possibile selezionare per mostrare solo IntelliSense con le API che appartengono ai set di API specificate nel manifesto.  
  
 **Miglioramenti apportati al debug**  
  
 Nell'aggiornamento di marzo 2014 sono disponibili ulteriori opzioni di debug.  Per le applicazioni del riquadro attività e per le app contenuto di Excel, è possibile eseguire il debug nell'applicazione di Office Web Apps nonché nel client desktop.  È possibile scegliere Internet Explorer, Chrome e Firefox \(se sono installati nel computer\) nella finestra delle proprietà del progetto dell'applicazione per avviare l'applicazione di Office Web Apps per il debug.  
  
 Oltre al supporto per il debug di un'applicazione di Office Web Apps, i nuovi strumenti consentono inoltre di eseguire il debug di tipo "Just My Code" sia per applicazioni di Office che di SharePoint.  Se questa opzione è abilitata, le eccezioni JavaScript non rilevanti per il codice non rappresenteranno più un problema.  
  
##  <a name="sharepoint"></a> Novità nello sviluppo di un'applicazione per SharePoint  
 **Selezionare versioni diverse di SharePoint**  
  
 L'applicazione per gli strumenti di SharePoint consente ora di creare applicazioni per SharePoint Server 2013 \(compatibile con SharePoint Online\) o solo per SharePoint Online.  Mediante un semplice passaggio nell'applicazione per la pagina delle proprietà di progetto di SharePoint, gli strumenti aggiorneranno il numero di versione di SharePoint e i riferimenti ad assembly dei componenti client di SharePoint utilizzati nel progetto.  
  
 **Supporto MVC per le Web part client**  
  
 Per migliorare il supporto con le applicazioni Web MVC, in questa versione è stato aggiunto il supporto MVC per le pagine Web part client.  Se l'applicazione per il progetto SharePoint viene associata a un'applicazione MVC, quando si aggiunge una Web part client e si sceglie di creare una nuova pagina Web part nella procedura guidata per la creazione di Web part client, all'applicazione MVC verranno aggiunti un controller della Web part client e una visualizzazione predefinita da associare a tale controller anziché una pagina ASPX.  
  
 **Supporto delle istanze di elenco per i ricevitori di eventi remoti**  
  
 In Visual Studio 2013 la procedura guidata per la creazione di ricevitore di eventi remoti consente solo di selezionare un modello di elenco.  Attualmente invece la procedura guidata mostra anche tutte le istanze di elenco nel progetto in modo che sia possibile selezionare e creare un ricevitore di eventi remoto.  Il manifesto corretto verrà creato in base alla selezione.  
  
 **Generazione di modelli di elenco migliorata**  
  
 In questa versione è inclusa anche una correzione per l'elemento del modello di elenco di SharePoint.  Nell'aggiornamento di marzo 2014, quando si crea un modello di elenco di SharePoint, l'attributo Type nel manifesto del modello di elenco viene impostato sul tipo del modello padre \(anziché sul valore predefinito "10000" come accadeva in genere\).  Grazie a questa correzione, il nuovo modello di elenco erediterà tutte le proprietà dal modello padre.  Questa possibilità è particolarmente utile per i tipi avanzati di modello di elenco, ad esempio raccolte documenti, che contengono molte funzionalità personalizzate.