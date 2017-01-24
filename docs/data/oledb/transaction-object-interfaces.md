---
title: "Interfacce dell&#39;oggetto Transaction | Microsoft Docs"
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
  - "interfacce, elenco"
  - "interfacce, OLE DB"
  - "modelli del provider OLE DB, interfacce oggetto"
  - "provider OLE DB, supporto della transazione"
  - "OLE DB, interfacce"
  - "transazione di interfacce oggetto"
ms.assetid: d2ce99ce-6f7a-4ff9-bc6e-acda3633d5c8
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Interfacce dell&#39;oggetto Transaction
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'oggetto Transaction definisce un'unità atomica di lavoro su un'origine dati e determina le relazioni tra le unità di lavoro.  Questo oggetto non è supportato direttamente dai modelli provider OLE DB, ma deve essere creato manualmente.  
  
 Nella tabella che segue sono elencate le interfacce facoltative e obbligatorie definite da OLE DB per un oggetto Transaction.  
  
|Interfaccia|Obbligatorio?|Implementazione da parte dei modelli OLE DB|  
|-----------------|-------------------|-------------------------------------------------|  
|[\<caps:sentence id\="tgt7" sentenceid\="63e99e63156fc90f114fa402662387ef" class\="tgtSentence"\>IConnectionPointContainer\<\/caps:sentence\>](http://msdn.microsoft.com/library/windows/desktop/ms683857)|Obbligatorio|No|  
|[\<caps:sentence id\="tgt10" sentenceid\="f5097e646bb93cceb560c38e13953a89" class\="tgtSentence"\>ITransaction\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/ms723053.aspx)|Obbligatorio|No|  
|[\<caps:sentence id\="tgt13" sentenceid\="130702210bcc45e1afd88b1f2aae1a0b" class\="tgtSentence"\>ISupportErrorInfo\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/ms715816.aspx)|Facoltativo|No|  
  
## Vedere anche  
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)