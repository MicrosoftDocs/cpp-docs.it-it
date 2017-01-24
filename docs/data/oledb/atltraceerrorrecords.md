---
title: "AtlTraceErrorRecords | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL.AtlTraceErrorRecords"
  - "ATL::AtlTraceErrorRecords"
  - "AtlTraceErrorRecords"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AtlTraceErrorRecords (funzione)"
ms.assetid: b83970b3-dc2a-445c-9142-f52218719905
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# AtlTraceErrorRecords
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Esegue il dump delle informazioni di errore record OLE DB al dispositivo di dump se viene restituito un errore.  
  
## Sintassi  
  
```  
  
      inline void AtlTraceErrorRecords(   
   HRESULT hrErr = S_OK    
);  
```  
  
#### Parametri  
 `hErr`  
 \[in\] `HRESULT` restituito da una funzione membro di modelli consumer OLE DB.  
  
## Note  
 Se `hErr` non è `S_OK`, `AtlTraceErrorRecords` esegue il dump delle informazioni di errore record OLE DB al dispositivo di dump \(scheda di **Debug** la finestra output o di un file\).  Registrare informazioni di errore, che vengono ottenute dal provider, includono il numero, l'origine, la descrizione, il file della Guida, il contesto e il GUID della riga per ogni immissione di record degli errori.  `AtlTraceErrorRecords` esegue il dump queste informazioni solo nelle build di debug.  Nelle build di rilascio, è uno stub vuoto ottimizzato off.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Macro e funzioni globali per modelli consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)   
 [Classe CDBErrorInfo](../../data/oledb/cdberrorinfo-class.md)