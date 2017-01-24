---
title: "SafeEquals | Microsoft Docs"
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
  - "SafeEquals"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SafeEquals (funzione)"
ms.assetid: 6019627d-f170-413b-9abd-2b5b34396a72
caps.latest.revision: 6
caps.handback.revision: 6
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# SafeEquals
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Confronta due numeri per determinare se sono uguali.  
  
## Sintassi  
  
```  
template<typename T, typename U>  
inline bool SafeEquals (  
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
 `true` se `t` e `u` sono uguali; in caso contrario, `false`.  
  
## Note  
 Il metodo migliora `==` perché `SafeEquals` consente di confrontare due tipi diversi di numeri.  
  
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
 [SafeNotEquals](../windows/safenotequals.md)