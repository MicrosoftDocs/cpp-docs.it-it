---
title: "Errore del compilatore C2702 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2702"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2702"
ms.assetid: 6def15d4-9a8d-43e7-ae35-42d7cb57c27e
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2702
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

\_\_except può non apparire in un blocco di terminazione  
  
 Un gestore eccezioni \(`__try`\/`__except`\) non può essere annidato all'interno di un blocco `__finally`.  
  
 Il seguente codice di esempio genera l'errore C2702:  
  
```  
// C2702.cpp  
// processor: x86 IPF  
int Counter;  
int main() {  
   __try {}  
   __finally {  
      __try {}   // C2702  
      __except( Counter ) {}   // C2702  
   }  
}  
```