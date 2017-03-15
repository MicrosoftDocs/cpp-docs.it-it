---
title: "Classe messages_base | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.messages_base"
  - "messages_base"
  - "std::messages_base"
  - "locale/std::messages_base"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "messages_base (classe)"
ms.assetid: 9aad38c6-4c13-445d-b096-364bd0836efb
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 19
---
# Classe messages_base
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe base descrive un tipo di `int` per il catalogo dei messaggi.  
  
## Sintassi  
  
```  
struct messages_base : locale::facet {  
    typedef int catalog;  
    explicit messages_base(size_t _Refs = 0)  
};  
```  
  
## Note  
 Il catalogo del tipo è sinonimo di tipo `int` che descrive i valori possibili restituiti da messages::[do\_open](../Topic/messages::do_open.md).  
  
## Requisiti  
 impostazioni locali \<di**Intestazione:** \>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)