---
title: "Errore del compilatore C3161 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3161"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3161"
ms.assetid: 1fe2be85-a343-487b-8476-bf9e257eb29d
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C3161
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'interfaccia': impossibile annidare una classe, una struttura, un'unione o un'interfaccia in un'interfaccia. Impossibile annidare un'interfaccia in classi, strutture o unioni  
  
 Un [\_\_interface](../../cpp/interface.md) può apparire solo in ambito globale o all'interno di uno spazio dei nomi.  Una classe, una struttura o un'unione non può apparire in un'interfaccia.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3161:  
  
```  
// C3161.cpp  
// compile with: /c  
__interface X {  
   __interface Y {};   // C3161 A nested interface  
};  
```