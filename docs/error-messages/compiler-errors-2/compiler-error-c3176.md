---
title: "Errore del compilatore C3176 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3176"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3176"
ms.assetid: 6cc8d602-8e15-47a7-b1b5-e93e5d50e271
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C3176
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'tipo': impossibile dichiarare un tipo valore locale  
  
 Una classe può essere dichiarata come tipo valore solo in ambito globale.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3176:  
  
```  
// C3176.cpp  
// compile with: /clr  
int main () {  
   enum class C {};   // C3176  
}  
```