---
title: "Struttura hash (Libreria dei modelli standard) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "thread/std::hash"
dev_langs: 
  - "C++"
ms.assetid: 4a8bf5bc-4334-4070-936b-98585f8a073b
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 13
---
# Struttura hash (Libreria dei modelli standard)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce una funzione membro che restituisce un valore che viene determinato in modo univoco da `Val`. Definisce la funzione membro di un [hash](hash%20Class.md) funzione adatto per i valori di mapping di tipo `thread::id` una distribuzione dei valori di indice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <>  
struct hash<thread::id> :   
    public unary_function<thread::id, size_t>  
{  
    size_t operator()(thread::id Val) const;

 
};  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** thread  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [\< thread>](../standard-library/thread.md)   
 [Struct unary_function](../standard-library/unary-function-struct.md)
