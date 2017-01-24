---
title: "Struttura once_flag | Microsoft Docs"
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
  - "mutex/std::once_flag"
dev_langs: 
  - "C++"
ms.assetid: 71bfb88d-ca8c-4082-a6e1-ff52151e8629
caps.latest.revision: 13
caps.handback.revision: 3
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Struttura once_flag
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rappresenta `struct` utilizzato con la funzione [call\_once](../Topic/call_once%20Function.md) del modello per garantire che il codice di inizializzazione venga chiamato una sola volta, anche in presenza di più thread di esecuzione.  
  
## Sintassi  
  
```cpp  
struct once_flag  
{  
   constexpr once_flag() noexcept;  
   once_flag(const once_flag&);  
   once_flag& operator=(const once_flag&);  
};  
```  
  
## Note  
 `once_flag` `struct` dispone di un costruttore predefinito.  
  
 Oggetti di tipo `once_flag` possono essere creati, ma non possono essere copiati.  
  
## Requisiti  
 **Intestazione:** mutex  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [\<mutex\>](../standard-library/mutex.md)