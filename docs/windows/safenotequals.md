---
title: "SafeNotEquals | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "SafeNotEquals"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SafeNotEquals (funzione)"
ms.assetid: 032e45a8-4159-4b55-b7cc-ecd27f4e4788
caps.latest.revision: 6
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 6
---
# SafeNotEquals
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Determina se due numeri non sono uguali.  
  
## Sintassi  
  
```  
template<typename T, typename U>  
inline bool SafeNotEquals (  
   const T t,  
   const U u  
) throw ();  
```  
  
#### Parametri  
 \[in\] `t`  
 Primo numero da confrontare.  Questo deve essere di tipo T.  
  
 \[in\] `u`  
 Secondo numero da confrontare.  Questo deve essere di tipo U.  
  
## Valore restituito  
 `true` se `t` e `u` non sono uguali; in caso contrario, `false`.  
  
## Note  
 Il metodo migliora `!=` perché `SafeNotEquals` consente di confrontare due tipi diversi di numeri.  
  
 Questo metodo fa parte di [Libreria SafeInt](../windows/safeint-library.md) ed è progettato per una singola operazione di confronto senza creare un'istanza di [Classe SafeInt](../windows/safeint-class.md).  
  
> [!NOTE]
>  Questo metodo deve essere utilizzato solo quando una singola un'operazione matematica deve essere protetta.  Se sono presenti più operazioni, è necessario utilizzare la classe `SafeInt` anziché chiamare le singole funzioni autonome.  
  
 Per ulteriori informazioni su i tipi di modello T e U, vedere [Funzioni SafeInt](../windows/safeint-functions.md).  
  
## Requisiti  
 **Intestazione:** safeint.h  
  
 **Spazio dei nomi:** Microsoft::Utilities  
  
## Vedere anche  
 [Funzioni SafeInt](../windows/safeint-functions.md)   
 [Libreria SafeInt](../windows/safeint-library.md)   
 [Classe SafeInt](../windows/safeint-class.md)   
 [SafeEquals](../windows/safeequals.md)