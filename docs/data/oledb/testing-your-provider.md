---
title: "Test del provider | Microsoft Docs"
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
  - "provider OLE DB, test"
  - "verifica provider"
  - "test, provider OLE DB"
ms.assetid: bf824fe4-81af-4ffb-beb3-4fa2928dc450
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# Test del provider
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Prima di rilasciare un provider, è opportuno eseguire i test riportati di seguito, nell'ordine indicato,  al fine di verificare il corretto funzionamento del provider per la maggior parte dei potenziali utenti.  
  
1.  Eseguire il test del provider utilizzando un'applicazione [consumer](../../data/oledb/creating-an-ole-db-consumer.md) scritta con i modelli consumer OLE DB.  È opportuno che il consumer di test copra tutte le aree funzionali del provider, ovvero tutto il codice che è stato aggiunto o modificato.  
  
2.  Eseguire il test del provider utilizzando un'applicazione consumer scritta con ADO.  La maggior parte degli sviluppatori, in particolare quelli che utilizzano Microsoft Visual Basic e Microsoft C\#, utilizza ADO o ADO.NET per le applicazioni consumer.  È opportuno che il consumer di test copra tutte le aree funzionali del provider.  Per un esempio di applicazione consumer ADO, vedere [Esempi di codice ADO in Microsoft Visual Basic](https://msdn.microsoft.com/en-us/library/ms807514.aspx).  
  
3.  Eseguire i test di conformità OLE DB e i test di conformità ADO per accertarsi che il provider rispetti lo standard del livello 0 per i provider OLE DB. \(Per una spiegazione di Livello 0, cercare "di conformità di Livello 0 OLE DB test a [La guida per i programmatori OLE DB](http://go.microsoft.com/fwlink/?LinkId=121548)".  Questi test e la documentazione associata sono inclusi in Visual C\+\+ nell'SDK di Data Access.  I test consentono inoltre di garantire che il provider funzioni correttamente quando viene aggregato da altri [provider di servizi](../../data/oledb/ole-db-resource-pooling-and-services.md) e sono particolarmente utili se si modificano o aggiungono proprietà.  Per ulteriori informazioni sui test di conformità, vedere il file Readme relativo all'SDK di Data Access, disponibile su uno dei CD di Visual Studio.  
  
## Vedere anche  
 [Utilizzo dei modelli provider OLE DB](../../data/oledb/working-with-ole-db-provider-templates.md)