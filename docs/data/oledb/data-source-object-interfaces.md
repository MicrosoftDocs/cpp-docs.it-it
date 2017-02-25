---
title: "Interfacce dell&#39;oggetto origine dati | Microsoft Docs"
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
  - "oggetti origine dati [C++]"
  - "oggetti origine dati [C++], interfacce"
  - "interfacce [C++], elenco"
  - "interfacce [C++], OLE DB"
  - "OLE DB [C++], interfacce"
  - "modelli provider OLE DB [C++], interfacce oggetto"
ms.assetid: 929e100c-c08c-4b64-8437-d8d1357226f6
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 12
---
# Interfacce dell&#39;oggetto origine dati
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Nella tabella che segue sono elencate le interfacce facoltative e obbligatorie definite da OLE DB per un oggetto DataSource.  
  
|Interfaccia|Obbligatorio?|Implementazione da parte dei modelli OLE DB|  
|-----------------|-------------------|-------------------------------------------------|  
|`IDBCreateSession`|Obbligatorio|Yes|  
|`IDBInitialize`|Obbligatorio|Yes|  
|`IDBProperties`|Obbligatorio|Yes|  
|[\<caps:sentence id\="tgt14" sentenceid\="731a3344bc1c6b5f8f54d9de3524f18a" class\="tgtSentence"\>IPersist\<\/caps:sentence\>](http://msdn.microsoft.com/library/windows/desktop/ms688695)|Obbligatorio|Yes|  
|[\<caps:sentence id\="tgt17" sentenceid\="63e99e63156fc90f114fa402662387ef" class\="tgtSentence"\>IConnectionPointContainer\<\/caps:sentence\>](http://msdn.microsoft.com/library/windows/desktop/ms683857)|Facoltativo|No|  
|`IDBDataSourceAdmin`|Facoltativo|No|  
|`IDBInfo`|Facoltativo|No|  
|[\<caps:sentence id\="tgt26" sentenceid\="7e6a12ecd4cb3b1bd45dccf9421ed567" class\="tgtSentence"\>IPersistFile\<\/caps:sentence\>](http://msdn.microsoft.com/library/windows/desktop/ms687223)|Facoltativo|No|  
|`ISupportErrorInfo`|Facoltativo|No|  
  
 L'oggetto origine dati implementa le interfacce `IDBProperties`, `IDBInitialize` e `IDBCreateSession` attraverso l'ereditarietà.  È possibile scegliere di supportare funzionalità aggiuntive ereditandole da una di queste classi di implementazione.  Per fornire il supporto per l'interfaccia `IDBDataSourceAdmin`, è necessario ereditare dalla classe `IDBDataSourceAdminImpl`.  
  
## Vedere anche  
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)