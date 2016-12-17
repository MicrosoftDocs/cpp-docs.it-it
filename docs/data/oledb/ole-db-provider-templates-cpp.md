---
title: "Modelli provider OLE DB (C++) | Microsoft Docs"
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
  - "database [C++], modelli OLE DB"
  - "modelli provider OLE DB [C++], informazioni sui modelli del provider OLE DB"
  - "provider OLE DB [C++], informazioni"
  - "modelli [C++], OLE DB"
ms.assetid: fccff85f-2af8-4500-82bd-6312d28a74b8
caps.latest.revision: 13
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Modelli provider OLE DB (C++)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

OLE DB rappresenta una componente importante della strategia Microsoft per l'accesso universale ai dati,  in quanto consente di accedere ai dati in modo estremamente efficiente da qualsiasi origine dati.  Tramite OLE DB è possibile visualizzare dati tabellari di qualunque tipo, anche non provenienti da un database,  garantendo così una flessibilità che offre potenzialità straordinarie.  
  
 Come illustrato in [Consumer e provider OLE DB](../../data/oledb/ole-db-consumers-and-providers.md), OLE DB si basa sul concetto di consumer e provider.  Il consumer effettua richieste di dati mentre il provider restituisce al consumer i dati in formato tabellare.  Dal punto di vista della programmazione, l'implicazione principale di questo modello è rappresentata dal fatto che il provider deve implementare tutte le chiamate effettuate dal consumer.  
  
## Definizione di provider  
 Per provider OLE DB si intende un gruppo di oggetti COM che risponde alle chiamate delle interfacce eseguite da un oggetto consumer, trasferendo dati in formato tabellare da un'origine durevole, detta archivio dati, al consumer.  
  
 I provider possono essere semplici o complessi.  Possono supportare una quantità minima di funzionalità oppure implementare più interfacce e presentare una gamma completa di funzionalità.  Un provider è in grado di restituire una tabella, consentendo al client di determinarne il formato, e di eseguire operazioni sui dati della tabella.  
  
 Ciascun provider implementa un gruppo standard di oggetti COM per la gestione delle richieste provenienti dal client. Gli oggetti sono definiti standard in quanto qualsiasi consumer OLE DB può accedere a dati da qualsiasi provider in modo indipendente dal linguaggio, quale C\+\+ e Basic.  
  
 Ciascun oggetto COM contiene diverse interfacce, alcune delle quali sono obbligatorie mentre altre sono facoltative.  Mediante l'implementazione delle interfacce obbligatorie, un provider garantisce un livello minimo di funzionalità, detto conformità, che potrà essere utilizzato da qualsiasi client.  Un provider può implementare interfacce facoltative per fornire funzionalità aggiuntive.  Per informazioni dettagliate su queste interfacce, vedere [Architettura dei modelli provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md).  È opportuno che il client chiami sempre `QueryInterface` per determinare se un provider supporta una determinata interfaccia.  
  
## Supporto del livello di specifica OLE DB  
 I modelli provider OLE DB supportano la specifica OLE DB versione 2.7.  Tramite questi modelli è possibile implementare un provider conforme con il livello 0.  Nell'esempio Provider, ad esempio, vengono utilizzati i modelli per implementare un server di comandi non SQL \(MS\-DOS\) che esegue il comando DIR di DOS per effettuare una query sul file system.  In tale esempio le informazioni sulla directory vengono restituite in un rowset, che rappresenta il meccanismo standard di OLE DB per la restituzione di dati tabellari.  
  
 Il tipo di provider più semplice supportato dai modelli OLE DB è un provider in sola lettura senza comandi.  Sono supportati anche provider con comandi, nonché l'utilizzo di bookmark e funzionalità di lettura\/scrittura.  È possibile implementare un provider di lettura\/scrittura scrivendo codice aggiuntivo.  Transazioni e rowset dinamici non sono supportati dalla versione corrente ma, se lo si desidera, è possibile aggiungerli.  
  
## Situazioni in cui è necessario creare un provider OLE DB  
 Non è sempre necessario creare un provider personalizzato, in quanto Microsoft fornisce diversi provider standard precostituiti nella finestra delle proprietà di Data Link di Visual C\+\+.  Si crea un provider OLE DB principalmente per potersi avvalere della strategia di accesso universale ai dati  e poter quindi fruire di diversi vantaggi, tra cui:  
  
-   Accesso ai dati mediante qualsiasi linguaggio, quale ad esempio C\+\+, Basic e Visual Basic, Scripting Edition.  Possibilità per diversi programmatori in una stessa organizzazione di accedere agli stessi dati nello stesso modo, indipendentemente dal linguaggio utilizzato.  
  
-   Esposizione dei dati ad altre origini dati, quali SQL Server, Excel e Access.  Questa possibilità risulta molto utile se si desidera trasferire dati tra formati diversi.  
  
-   Possibilità di eseguire operazioni tra origini dati diverse \(eterogenee\),  con un enorme vantaggio per il data warehousing.  Possibilità di mantenere i dati nel formato nativo e poter comunque accedere a essi con una semplice operazione.  
  
-   Aggiunta di capacità supplementari ai dati, quali l'elaborazione delle query.  
  
-   Miglioramento delle prestazioni di accesso ai dati grazie alla possibilità di controllarne la modifica.  
  
-   Maggiore affidabilità.  Una situazione in cui è presente un formato di dati proprietario a cui può accedere solo un programmatore è una situazione a rischio.  Grazie ai provider OLE DB è invece possibile rendere disponibile tale formato proprietario a tutti i programmatori.  
  
## Provider in sola lettura e aggiornabili  
 I provider possono presentare complessità e funzionalità molto diverse.  È utile suddividere i provider in due categorie: provider in sola lettura e provider aggiornabili.  
  
-   In Visual C\+\+ 6.0 erano supportati solo provider in sola lettura.  In [Creazione di un provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md) viene illustrato come creare un provider in sola lettura.  
  
-   In Visual C\+\+ .NET sono supportati i provider aggiornabili, ovvero in grado di aggiornare l'archivio dati scrivendovi dati.  Per informazioni sui provider aggiornabili, vedere [Creazione di un provider aggiornabile](../../data/oledb/creating-an-updatable-provider.md), mentre [UpdatePV](http://msdn.microsoft.com/it-it/c8bed873-223c-4a7d-af55-f90138c6f38f) è un esempio di provider aggiornabile.  
  
 Per ulteriori informazioni, vedere:  
  
-   [Architettura dei modelli provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)  
  
-   [Creazione di un provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md)  
  
-   [Programmazione con OLE DB](../../data/oledb/ole-db-programming.md)  
  
## Vedere anche  
 [Accesso ai dati](../Topic/Data%20Access%20in%20Visual%20C++.md)   
 [Documentazione su OLE DB SDK](https://msdn.microsoft.com/en-us/library/ms722784.aspx)   
 [OLE DB Programmer's Reference](https://msdn.microsoft.com/en-us/library/ms713643.aspx)