---
title: "Avviso del compilatore (livello 1) C4288 | Microsoft Docs"
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
  - "C4288"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4288"
ms.assetid: 6aaeb139-90cd-457a-9d37-65687042736f
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4288
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

utilizzata estensione non standard. 'var': variabile di controllo ciclo dichiarata nel ciclo for e utilizzata all'esterno dell'ambito del ciclo for. Conflitto con la dichiarazione esistente nell'ambito esterno  
  
 Durante la compilazione con [\/Ze](../../build/reference/za-ze-disable-language-extensions.md) e **\/Zc:forscope\-**, una variabile dichiarata in un ciclo **for** è stata utilizzata all'esterno dell'ambito del ciclo [for](../../cpp/for-statement-cpp.md).  Un'estensione Microsoft per il linguaggio C\+\+ consente alla variabile di rimanere nell'ambito, mentre nell'avviso C4288 viene indicato che non viene utilizzata la prima dichiarazione della variabile.  
  
 Per informazioni su come specificare l'estensione Microsoft nei cicli **for** con \/Ze, vedere [\/Zc:forScope](../../build/reference/zc-forscope-force-conformance-in-for-loop-scope.md).  
  
 Il seguente codice di esempio genera l'errore C4288:  
  
```  
// C4288.cpp  
// compile with: /W1 /c /Zc:forScope-  
int main() {  
   int i = 0;    // not used in this program  
   for (int i = 0 ; ; ) ;  
   i++;   // C4288 using for-loop declaration of i  
}  
```