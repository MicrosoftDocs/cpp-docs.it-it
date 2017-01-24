---
title: "SafeModulus | Microsoft Docs"
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
  - "SafeModulus"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SafeModulus (funzione)"
ms.assetid: ae5c81eb-5dcf-45a5-aa76-465fdfe68654
caps.latest.revision: 6
caps.handback.revision: 6
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# SafeModulus
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'azione modulo in due numeri.  
  
## Sintassi  
  
```  
template<typename T, typename U>  
inline bool SafeModulus (  
   const T t,  
   const U u,  
   T& result  
) throw ();  
```  
  
#### Parametri  
 \[in\] `t`  
 Divisore.  L'espressione deve essere di tipo T.  
  
 \[in\] `u`  
 Dividendo.  L'espressione deve essere di tipo U.  
  
 \[out\] `result`  
 Il parametro `SafeModulus` dove archiviare il risultato.  
  
## Valore restituito  
 `true` se non si verificano errori; `false` se si verifica un errore.  
  
## Note  
 Questo metodo fa parte di [Libreria SafeInt](../windows/safeint-library.md) ed è progettata per una singola operazione modulo senza creare un'istanza di [Classe SafeInt](../windows/safeint-class.md).  
  
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
 [SafeDivide](../windows/safedivide.md)