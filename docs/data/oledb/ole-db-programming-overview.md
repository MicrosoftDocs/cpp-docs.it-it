---
title: "Cenni preliminari sulla programmazione con OLE DB | Microsoft Docs"
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
  - "OLE DB, informazioni"
  - "accesso universale ai dati"
ms.assetid: a5a69730-2793-4277-a67d-6f3c8edab6df
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Cenni preliminari sulla programmazione con OLE DB
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo articolo verranno descritte le caratteristiche di OLE DB e gli elementi che distinguono questa tecnologia dalle altre tecnologie per database.  OLE DB è una tecnologia per database ad alte prestazioni, basata su COM e prodotta da Microsoft.  OLE DB si distingue dalle altre tecnologie per database Microsoft per il modo in cui utilizza l'architettura UDA \(Universal Data Access\).  
  
## UDA \(Universal Data Access\)  
 L'architettura UDA offre un metodo comune per accedere ai dati indipendentemente dal formato in cui sono stati memorizzati.  In una tipica situazione aziendale, una quantità elevata di informazioni viene memorizzata al di fuori dei database aziendali.  Tali informazioni sono reperibili in file system quali FAT o NTFS, in file indicizzati in modo sequenziale, in database personali \(ad esempio di Access\), in fogli di calcolo \(ad esempio di Excel\), in applicazioni per la pianificazione di progetti quali Project e in programmi di posta elettronica quali Outlook.  
  
 L'accesso a questi dati tramite le varie applicazioni associate rappresenta uno dei principali colli di bottiglia nel flusso di lavoro o, nel migliore dei casi, provoca un rallentamento delle operazioni.  La maggior parte delle aziende si trova ad affrontare questa situazione e a risolvere il problema consolidando le informazioni in un sistema di gestione di database \(DBMS, Database Management System\).  Tuttavia, si tratta di una soluzione costosa in termini di denaro e tempo e, in molti casi, poco pratica.  
  
 L'alternativa consiste nello sviluppare una soluzione UDA \(Accesso universale ai dati, Universal Data Access\).  OLE DB e ADO includono funzionalità UDA.  Tra i due sistemi, OLE DB offre migliori prestazioni ed è consigliabile per le applicazioni Visual C\+\+.  
  
 L'architettura UDA offre due funzionalità: la possibilità di eseguire query distribuite o di accedere uniformemente a più origini dati distribuite e la possibilità di rendere le origini dati non DBMS accessibili da parte delle applicazioni di database.  
  
-   Query distribuite  
  
     Offrono la possibilità di accedere in modo uniforme ai dati presenti in più origini dati distribuite.  Le origini dati possono essere dello stesso tipo, ad esempio due database di Access distinti, o di tipo diverso, ad esempio un database di SQL Server e uno di Access.  Per accesso uniforme si intende la possibilità di eseguire la stessa query su tutte le origini dati.  
  
-   Accesso non DBMS  
  
     Offre la possibilità di rendere le origini dati non DBMS accessibili da parte delle applicazioni di database.  Le origini dati DBMS includono, ad esempio, IMS, DB2, Oracle, SQL Server, Access e Paradox.  Le origini dati non DBMS includono, ad esempio, le informazioni memorizzate nei file system, nei programmi di posta elettronica, nei fogli di calcolo e negli strumenti per la gestione dei progetti.  
  
 Si consideri uno scenario in cui i funzionari di un reparto vendite desiderino trovare tutti i messaggi di posta elettronica ricevuti nel corso di una settimana da clienti di una determinata area.  Questa query può richiedere una ricerca nel file della cassetta postale dell'applicazione di posta elettronica e un'altra in una tabella di Access per trovare i nomi dei clienti.  Access è un'applicazione DBMS, mentre Outlook non lo è.  
  
 OLE DB consente di sviluppare applicazioni in grado di accedere a origini dati diverse, che si tratti o meno di origini DBMS.  Con OLE DB l'accesso universale è possibile grazie all'utilizzo di interfacce COM che supportano la funzionalità DBMS appropriata per ogni origine dati.  COM riduce le operazioni di duplicazione dei servizi non necessarie e potenzia al massimo l'interoperabilità, non solo tra origini dati, ma anche tra altre applicazioni.  
  
## Vantaggi di COM  
 Qui entra in gioco COM.  OLE DB è un set di interfacce COM.  Accedendo ai dati tramite un insieme uniforme di interfacce, è possibile organizzare un database in un insieme di componenti che interagiscono.  
  
 Basato sulla specifica COM, OLE DB definisce una raccolta di interfacce estensibile e di facile gestione che forniscono e includono funzionalità DBMS coerenti e riutilizzabili.  Tali interfacce definiscono i limiti dei componenti DBMS quali i contenitori di riga, i processori delle query e i coordinatori delle transazioni, che consentono l'accesso uniforme tramite transazioni a diverse origini di informazioni.  
  
 In genere, le applicazioni OLE DB vengono scritte come DLL, ma la relativa implementazione COM evita gli svantaggi delle DLL, ad esempio i problemi relativi alla denominazione e al numero di versione, utilizzando codice costituito da componenti.  In OLE DB le interfacce vengono chiamate tramite il relativo GUID e nello stesso modo viene effettuato l'accesso ad altri componenti.  
  
 Infine, COM tiene traccia dell'uso dei componenti tramite il conteggio dei riferimenti.  Quando si chiama un metodo su un'interfaccia, il conteggio dei riferimenti viene incrementato, mentre, quando il metodo restituisce un risultato, il conteggio viene decrementato.  Quando il conteggio risulta pari a zero, il componente a cui appartiene il metodo viene rilasciato.  
  
## Vedere anche  
 [Programmazione con OLE DB](../../data/oledb/ole-db-programming.md)   
 [Modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Modelli provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [modelli OLE DB](../../data/oledb/ole-db-templates.md)