---
title: "Errore del compilatore C2423 | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2423"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2423"
ms.assetid: 8797fb8b-b58b-4add-b6e6-2a9a3cd9084d
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2423
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'numero': scala non valida  
  
 Un numero diverso da 1, 2, 4 o 8 viene utilizzato dal codice assembly inline per impostare la scala di un registro.  
  
 Il seguente codice di esempio genera l'errore C2423:  
  
```  
// C2423.cpp  
// processor: x86  
int main() {  
   _asm {  
      lea EAX, [EAX*3]   // C2423  
      lea EAX, [EAX+EAX*2]   // OK  
   }  
}  
```