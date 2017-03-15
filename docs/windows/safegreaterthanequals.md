---
title: "SafeGreaterThanEquals | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "SafeGreaterThanEquals"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SafeGreaterThanEquals (funzione)"
ms.assetid: 43312fa9-d925-4f9f-a352-a190c02b3005
caps.latest.revision: 6
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 6
---
# SafeGreaterThanEquals
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Confronta due numeri.  
  
## Sintassi  
  
```  
template <typename T, typename U>  
inline bool SafeGreaterThanEquals (  
   const T t,  
   const U u  
) throw ();  
```  
  
#### Parametri  
 \[in\] `t`  
 Primo numero da confrontare.  L'espressione deve essere di tipo T.  
  
 \[in\] `u`  
 Secondo numero da confrontare.  L'espressione deve essere di tipo U.  
  
## Valore restituito  
 `true` se `t` è maggiore o uguale a `u`; in caso contrario `false`.  
  
## Note  
 `SafeGreaterThanEquals` migliora l'operatore di confronto standard poiché consente di confrontare due tipi diversi di numeri.  
  
 Questo metodo fa parte di [Libreria SafeInt](../windows/safeint-library.md) ed è progettata per una singola operazione di confronto senza creare un'istanza di [Classe SafeInt](../windows/safeint-class.md).  
  
> [!NOTE]
>  Questo metodo deve essere utilizzato solo quando una singola un'operazione matematica deve essere protetta.  Se sono presenti più operazioni, è necessario utilizzare la classe di `SafeInt` anziché chiamare le singole funzioni autonome.  
  
 Per ulteriori informazioni sui tipi T e U del modello, vedere [Funzioni SafeInt](../windows/safeint-functions.md).  
  
## Requisiti  
 **Intestazione:** safeint.h  
  
 **Spazio dei nomi:** Microsoft::Utilities  
  
## Vedere anche  
 [Funzioni SafeInt](../windows/safeint-functions.md)   
 [Libreria SafeInt](../windows/safeint-library.md)   
 [Classe SafeInt](../windows/safeint-class.md)   
 [SafeGreaterThan](../windows/safegreaterthan.md)   
 [SafeLessThanEquals](../windows/safelessthanequals.md)   
 [SafeLessThan](../windows/safelessthan.md)