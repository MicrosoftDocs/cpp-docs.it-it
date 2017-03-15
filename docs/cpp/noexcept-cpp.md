---
title: "noexcept (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "noexcept_cpp"
dev_langs: 
  - "C++"
ms.assetid: df24edb9-c6a6-4e37-9914-fd5c0c3716a8
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# noexcept (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**C\+\+ 11:** specifica se una funzione può generare eccezioni.  
  
## Sintassi  
  
```vb  
ReturnType FunctionName(params) noexcept;  
ReturnType FunctionName(params) noexcept(noexcept(expression);  
```  
  
#### Parametri  
 espressione  
 Espressione costante che viene valutata True o False.  La versione non condizionale è equivalente a noexcept\(true\).  
  
## Note  
 `noexcept` \(e il relativo sinonimo `noecept(true)`\) specifica che la funzione non genererà mai un'eccezione o consentirà la propagazione di un'eccezione da qualsiasi altra funzione che richiama direttamente o indirettamente.  In particolare, `noexcept` significa che è la funzione è `noexcept` solo se anche tutte le funzioni che chiama sono noexcept o const e non ci sono cast dinamici potenzialmente non valutati che richiedono un controllo runtime, espressioni typeid applicate a un'espressione glvalue il cui tipo è una classe polimorfica o generano espressioni.  Tuttavia, il compilatore non necessariamente controlla ogni percorso di codice per le eccezioni che potrebbero essere propagate fino a una funzione `noexcept`.  Se un'eccezione raggiunge una funzione contrassegnata come `noexcept`, [std::terminate](../Topic/terminate%20\(%3Cexception%3E\).md) viene richiamata immediatamente e non è garantito che i distruttori di tutti gli oggetti inclusi nell'ambito verranno richiamati.  
  
 Una funzione dichiarata con un identificatore noexcept condizionale che restituisce noexcept\(false\) specifica che consente la propagazione delle eccezioni.  Ad esempio, una funzione che copia il relativo argomento può essere dichiarata noexcept a condizione che l'oggetto da copiare sia un tipo POD \(Plain Old Data, dati non aggiornati\).  Tale funzione potrebbe essere dichiarata come segue:  
  
```  
#include <type_traits>  
  
template <typename T>  
T copy_object(T& obj) noexcept(std::is_pod<T>)  
{  
 //. . .   
}  
  
```  
  
 Usare `noexcept` anziché l'identificatore di eccezione `throw`, che è deprecato in C\+\+ 11 e versioni successive.  È consigliabile applicare `noexcept` a una funzione, se si è certi che non consentirà mai un'eccezione di propagarsi fino allo stack di chiamate.  Una funzione dichiarata con `noexcept` consente ai compilatori di generare un codice più efficiente in più contesti diversi.  
  
## Vedere anche  
 [Gestione delle eccezioni C\+\+](../cpp/cpp-exception-handling.md)