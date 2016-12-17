---
title: "Problemi di progettazione dell&#39;architettura OLE DB | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OLE DB, considerazioni sulla progettazione di applicazioni"
ms.assetid: 8caa7d99-d2bb-42c9-8884-74f228bb6ecc
caps.latest.revision: 12
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Problemi di progettazione dell&#39;architettura OLE DB
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Prima di iniziare la scrittura di un'applicazione OLE DB, è necessario considerare quanto segue.  
  
 **Tipo di implementazione di programmazione utilizzato per l'applicazione OLE DB**  
 Esistono varie librerie Microsoft per svolgere questa funzione: una libreria di modelli OLE DB, gli attributi OLE DB e le interfacce OLE DB non elaborate disponibili nell'SDK di OLE DB.  Sono inoltre disponibili alcune procedure guidate per agevolare la scrittura del programma.  Queste implementazioni sono descritte in [Modelli, attributi e altre implementazioni OLE DB](../../data/oledb/ole-db-templates-attributes-and-other-implementations.md).  
  
 **Necessità di scrivere un proprio provider**  
 Nella maggior parte dei casi questa operazione non è necessaria.  Microsoft offre infatti diversi provider.  Quando si crea una connessione ai dati, ad esempio quando si aggiunge un consumer al progetto utilizzando la Creazione guidata consumer OLE DB ATL, nella finestra di dialogo delle proprietà **Data Link** sono elencati tutti i provider disponibili registrati nel sistema.  Se uno di questi è adatto all'archivio dati e all'applicazione di accesso ai dati utilizzati, la soluzione più semplice consiste nell'utilizzare tale provider.  Tuttavia, se l'archivio dati non è adatto ad alcuna delle categorie presenti nella finestra di dialogo, sarà necessario creare un provider personalizzato.  Per informazioni sulla creazione di provider, vedere [Modelli di provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md).  
  
 **Livello di supporto necessario per il consumer**  
 Alcuni consumer sono molto semplici, mentre altri possono essere molto complessi.  Le funzionalità degli oggetti OLE DB sono specificate nelle relative proprietà.  Quando si utilizza la Creazione guidata consumer OLE DB ATL per creare un consumer o la Creazione guidata provider OLE DB ATL per creare un provider, le proprietà appropriate dell'oggetto vengono impostate automaticamente per offrire un insieme standard di funzionalità.  Tuttavia, se le classi del consumer o del provider creato tramite la procedura guidata non supportano tutte le funzionalità necessarie, sarà necessario utilizzare le interfacce per tali classi contenute nella [libreria dei modelli OLE DB](../../data/oledb/ole-db-templates.md).  Queste interfacce eseguono il wrapping delle interfacce OLE DB non elaborate e forniscono ulteriori implementazioni per semplificarne l'utilizzo.  
  
 Se, ad esempio, si desidera aggiornare i dati di un rowset, ma non si è specificata questa funzionalità durante la creazione del consumer tramite la procedura guidata, sarà possibile specificarla in un secondo momento impostando le proprietà **DBPROP\_IRowsetChange** e **DBPROP\_UPDATABILITY** sull'oggetto Command.  Pertanto, il rowset creato sarà caratterizzato dall'interfaccia `IRowsetChange`.  
  
 **Si dispone di codice obsoleto che utilizza una diversa tecnologia di accesso ai datii \(ADO, ODBC o DAO\)?**  
 Date le possibili combinazioni di tecnologie, ad esempio l'utilizzo di componenti ADO con componenti OLE DB e la migrazione di codice ODBC in OLE DB, la documentazione di Visual C\+\+ non è il contesto adatto per trattare questo argomento.  Tuttavia, è possibile trovare molti articoli sui diversi scenari visitando i siti Web Microsoft elencati di seguito.  
  
-   [Guida e supporto tecnico supporto](http://go.microsoft.com/fwlink/?LinkId=148218)  
  
-   [Panoramica degli articoli tecnici di accesso ai dati Microsoft](http://go.microsoft.com/fwlink/?LinkId=148217)  
  
-   [Centro della soluzione di Visual Studio](http://go.microsoft.com/fwlink/?LinkId=148215)  
  
-   [Microsoft.com trovato](http://search.microsoft.com/)  
  
 Quando si esegue una ricerca, specificare una combinazione di parole chiave che descrivano in modo preciso lo scenario desiderato. Se, ad esempio, si utilizzano oggetti ADO con il provider OLE DB, eseguire una ricerca booleana specificando **ADO AND "OLE DB"**.  Se si desidera eseguire la migrazione del codice precedente di DAO in ODBC, selezionare "tutte le parole" e specificare stringhe come **migrazione DAO**.  
  
## Vedere anche  
 [Programmazione con OLE DB](../../data/oledb/ole-db-programming.md)   
 [Cenni preliminari sulla programmazione con OLE DB](../../data/oledb/ole-db-programming-overview.md)