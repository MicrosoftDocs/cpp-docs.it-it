---
title: "Avviso del compilatore (livello 4) C4205 | Microsoft Docs"
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
  - "C4205"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4205"
ms.assetid: 39b5108c-7230-41b4-b2fe-2293eb6aae28
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 4) C4205
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

utilizzata estensione non standard: dichiarazione di funzione static in ambito funzione  
  
 Con le estensioni Microsoft \(\/Ze\), è possibile dichiarare le funzioni **static** all'interno di un'altra funzione.  L'ambito della funzione è globale.  
  
## Esempio  
  
```  
// C4205.c  
// compile with: /W4  
void func1()  
{  
   static int func2();  // C4205  
};  
  
int main()  
{  
}  
```  
  
 Tali inizializzazione non sono valide in compatibilità ANSI \([\/Za](../../build/reference/za-ze-disable-language-extensions.md)\).