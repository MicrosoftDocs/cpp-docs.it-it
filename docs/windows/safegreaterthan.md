---
title: "SafeGreaterThan | Microsoft Docs"
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
  - "SafeGreaterThan"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SafeGreaterThan (funzione)"
ms.assetid: 32cecac9-ba88-43eb-a7a4-30e390456739
caps.latest.revision: 6
caps.handback.revision: 6
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# SafeGreaterThan
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Confronta due numeri.  
  
## Sintassi  
  
```  
template<typename T, typename U>  
inline bool SafeGreaterThan (  
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
 `true` se `t` è maggiore di `u`; in caso contrario `false`.  
  
## Note  
 `SafeGreaterThan` estende l'operatore di confronto usuale consentendo di confrontare due tipi diversi di numeri.  
  
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
 [SafeLessThan](../windows/safelessthan.md)   
 [SafeLessThanEquals](../windows/safelessthanequals.md)   
 [SafeGreaterThanEquals](../windows/safegreaterthanequals.md)