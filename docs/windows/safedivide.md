---
title: "SafeDivide | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "SafeDivide"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SafeDivide (funzione)"
ms.assetid: b5b27484-ad6e-46b1-ba9f-1c7120dd103b
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 5
---
# SafeDivide
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Divide due numeri in modo che protegge dalla divisione per zero.  
  
## Sintassi  
  
```  
template<typename T, typename U>  
inline bool SafeDivide (  
   T t,  
   U u,  
   T& result  
) throw ();  
```  
  
#### Parametri  
 \[in\] `t`  
 Divisore.  L'espressione deve essere di tipo T.  
  
 \[in\] `u`  
 Dividendo.  L'espressione deve essere di tipo U.  
  
 \[out\] `result`  
 Il parametro `SafeDivide` dove archiviare il risultato.  
  
## Valore restituito  
 `true` se non si verificano errori; `false` se si verifica un errore.  
  
## Note  
 Questo metodo fa parte di [Libreria SafeInt](../windows/safeint-library.md) ed è progettata per una singola operazione di divisione senza creare un'istanza di [Classe SafeInt](../windows/safeint-class.md).  
  
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
 [SafeModulus](../windows/safemodulus.md)   
 [SafeMultiply](../windows/safemultiply.md)