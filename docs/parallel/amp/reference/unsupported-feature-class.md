---
title: "Classe unsupported_feature | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "amprt/Concurrency::unsupported_feature"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "unsupported_feature (classe)"
ms.assetid: 6b1ab917-df13-48c7-9648-7cb2465a0ff5
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 12
---
# Classe unsupported_feature
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

L'eccezione che viene generata quando viene utilizzata una funzionalità non supportata.  
  
## Sintassi  
  
```  
class unsupported_feature : public runtime_exception;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore unsupported\_feature::unsupported\_feature](../Topic/unsupported_feature::unsupported_feature%20Constructor.md)|Costruisce una nuova istanza dell'eccezione `unsupported_feature`.|  
  
## Gerarchia di ereditarietà  
 `exception`  
  
 `runtime_exception`  
  
 `unsupported_feature`  
  
## Requisiti  
 **Intestazione:** amprt.h  
  
 **Spazio dei nomi:** Concurrency  
  
## Vedere anche  
 [Spazio dei nomi Concurrency \(C\+\+ AMP\)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)