---
title: "Contenitori: funzionalit&#224; avanzate | Microsoft Docs"
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
  - "applicazioni contenitore/server [C++]"
  - "contenitori [C++], funzionalità avanzate"
  - "contenitori [C++], applicazioni contenitore"
  - "contenitori [C++], collegamenti a oggetti OLE incorporati"
  - "oggetti incorporati [C++]"
  - "collegamenti [C++], a oggetti OLE incorporati"
  - "contenitori OLE, funzionalità avanzate"
  - "OLE (controlli), contenitori"
  - "applicazioni contenitore/server"
ms.assetid: 221fd99c-b138-40fa-ad6a-974e3b3ad1f8
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Contenitori: funzionalit&#224; avanzate
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo vengono descritti i passaggi necessari per includere funzionalità avanzate facoltative nelle applicazioni di contenitore esistenti.  Tali funzionalità sono:  
  
-   [Un'applicazione che funge sia da contenitore che da server](#_core_creating_a_container.2f.server_application)  
  
-   [Un collegamento OLE a un oggetto incorporato](#_core_links_to_embedded_objects)  
  
##  <a name="_core_creating_a_container.2f.server_application"></a> Creare un'applicazione contenitore\/server  
 Un'applicazione contenitore\/server è un'applicazione che funge sia da contenitore che da server.  Microsoft Word per Windows è un esempio.  È possibile incorporare Word per documenti di Windows in altre applicazioni, nonché importare gli elementi in Word per documenti di Windows.  Il processo per modificare l'applicazione contenitore perché diventi sia un contenitore che un server completo \(non è possibile creare la combinazione di un'applicazione contenitore\/miniserver\) è analoga a quella per creare un server completo.  
  
 L'articolo [Server: Implementazione di un server](../mfc/servers-implementing-a-server.md) elenca una serie di attività necessarie per implementare un'applicazione server.  Se si esegue un'applicazione contenitore in un'applicazione contenitore\/server, è necessario eseguire molte delle stesse attività, aggiungendo codice al contenitore.  Di seguito vengono elencati i principali aspetti da considerare:  
  
-   Il codice del contenitore creato dalla creazione guidata applicazioni inizializza già il sottosistema OLE.  Non sarà necessario modificare o aggiungere nulla per tale supporto.  
  
-   Laddove la classe base di classe di documento sia `COleDocument`, modificare la classe di base in `COleServerDoc`.  
  
-   Eseguire l'override `COleClientItem::CanActivate` per evitare di modificare gli elementi sul posto quando il server stesso è utilizzato per la modifica sul posto.  
  
     Ad esempio, nell'esempio [OCLIENT](../top/visual-cpp-samples.md) OLE MFC ha incorporato un elemento creato dall'applicazione contenitore\/server.  Aprire l'applicazione OCLIENT e modificare sul posto l'elemento creato dall'applicazione contenitore\/server.  Mentre si modifica l'elemento dell'applicazione, si stabilisce che si desidera importare un elemento creato dall'esempio MFC OLE [HIERSVR](../top/visual-cpp-samples.md).  A tale scopo, non utilizzare l'attivazione sul posto.  È necessario aprire completamente HIERSVR per attivare questo elemento.  Poiché la libreria Microsoft Foundation Class Library non supporta questa funzionalità OLE, eseguire l'override di `COleClientItem::CanActivate` consente di verificare per questa situazione ed evitare un possibile errore di runtime nell'applicazione.  
  
 Se si crea una nuova applicazione e si desidera che funzioni come un'applicazione contenitore\/server, selezionare l'opzione nella finestra di dialogo Opzioni OLE nella creazione guidata applicazione e il tale supporto verrà creato automaticamente.  Per ulteriori informazioni, vedere l'articolo [Cenni preliminari: Creare un contenitore di controlli ActiveX](../mfc/reference/creating-an-mfc-activex-control-container.md).  Per informazioni su esempi di MFC, vedere Esempi MFC.  
  
 Si noti che non è possibile inserire un'applicazione MDI in se stessa.  Un'applicazione che rappresenta un contenitore\/server non può essere inserita in se stessa a meno che non sia un'applicazione SDI.  
  
##  <a name="_core_links_to_embedded_objects"></a> Collegamenti a oggetti incorporati  
 I collegamenti alla funzionalità incorporata degli oggetti consentono ad un utente di creare un documento con un collegamento OLE ad un oggetto incorporato nell'applicazione contenitore.  Ad esempio, creare un documento in un elaboratore di testo contenente un foglio di calcolo incorporato.  Se l'applicazione supporta collegamenti ad oggetti incorporati, è possibile inserire un collegamento al foglio di calcolo contenuto nel documento di elaboratore di testo.  Questa funzionalità consente all'applicazione di utilizzare le informazioni contenute nel foglio di lavoro senza che l'elaboratore di testi conosca da dove originariamente lo ha ottenuto.  
  
#### Per accedere agli oggetti incorporati nell'applicazione  
  
1.  Derivare la classe del documento da `COleLinkingDoc` anziché `COleDocument`.  
  
2.  Creare un ID della classe OLE \(**CLSID**\) per l'applicazione tramite il generatore di ID della classe incluso negli strumenti di sviluppo OLE.  
  
3.  Registrazione dell'applicazione tramite OLE.  
  
4.  Creare un oggetto `COleTemplateServer` come membro della classe dell'applicazione.  
  
5.  Nella funzione membro di `InitInstance` dell'applicazione, effettuare le operazioni seguenti:  
  
    -   Connettere l'oggetto `COleTemplateServer` ai modelli di documento chiamando la funzione membro `ConnectTemplate` dell'oggetto.  
  
    -   Chiamare la funzione membro **COleTemplateServer::RegisterAll** per registrare tutti gli oggetti della classe con il sistema OLE.  
  
    -   Chiamare il metodo `COleTemplateServer::UpdateRegistry`.  L'unico parametro per `UpdateRegistry` deve essere `OAT_CONTAINER` se l'applicazione non viene avviata con l'opzione "\/Embedded".  In questo modo viene registrata l'applicazione come contenitore che può supportare collegamenti agli oggetti incorporati.  
  
         Se l'applicazione viene avviata con l'opzione "\/Embedded", non dovrebbe visualizzare la finestra principale, simile a un'applicazione server.  
  
 L'esempio [OCLIENT](../top/visual-cpp-samples.md) OLE MFC implementa questa funzionalità.  Per un esempio di come eseguire questa operazione, vedere la funzione di `InitInstance` nel file di OCLIENT.CPP di questa applicazione di esempio.  
  
## Vedere anche  
 [Contenitori](../mfc/containers.md)   
 [Server](../mfc/servers.md)