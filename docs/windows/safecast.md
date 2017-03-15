---
title: "SafeCast | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "SafeCast"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SafeCast (funzione)"
ms.assetid: 55316729-8456-403a-9f96-59d4038f67af
caps.latest.revision: 7
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 7
---
# SafeCast
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Cast di un tipo di numero a un altro.  
  
## Sintassi  
  
```  
template<typename T, typename U>  
inline bool SafeCast (  
   const T From,  
   U& To  
);  
```  
  
#### Parametri  
 \[in\] `From`  
 Il numero di origine da convertire.  L'espressione deve essere di tipo T.  
  
 \[out\] `To`  
 Un riferimento al nuovo tipo di numero.  L'espressione deve essere di tipo U.  
  
## Valore restituito  
 `true` se non si verificano errori; `false` se si verifica un errore.  
  
## Note  
 Questo metodo fa parte di [Libreria SafeInt](../windows/safeint-library.md) ed è progettata per una singola unione senza creare un'istanza di [Classe SafeInt](../windows/safeint-class.md).  
  
> [!NOTE]
>  Questo metodo deve essere utilizzato solo quando una singola operazione deve essere protetta.  Se sono presenti più operazioni, è necessario utilizzare la classe di `SafeInt` anziché chiamare le singole funzioni autonome.  
  
 Per ulteriori informazioni sui tipi T e U del modello, vedere [Funzioni SafeInt](../windows/safeint-functions.md).  
  
## Requisiti  
 **Intestazione:** safeint.h  
  
 **Spazio dei nomi:** Microsoft::Utilities  
  
## Vedere anche  
 [Funzioni SafeInt](../windows/safeint-functions.md)   
 [Libreria SafeInt](../windows/safeint-library.md)   
 [Classe SafeInt](../windows/safeint-class.md)