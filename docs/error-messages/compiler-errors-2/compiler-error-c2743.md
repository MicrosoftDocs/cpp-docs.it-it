---
title: "Errore del compilatore C2743 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2743"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2743"
ms.assetid: 644cd444-21d2-471d-a176-f5f52c5a0b73
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C2743
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'tipo': impossibile intercettare un tipo nativo con distruttore \_\_clrcall o costruttore di copia  
  
 Un modulo compilato con **\/clr**, e non con **\/clr:pure**, ha tentato di intercettare un'eccezione di tipo nativo in cui il distruttore o il costruttore di copia del tipo utilizza la convenzione di chiamata `_clrcall`.  
  
 Quando la compilazione viene eseguita con **\/clr** e non con **\/clr:pure**, per la gestione delle eccezioni si prevede che le funzioni membro in un tipo nativo siano [\_\_cdecl](../../cpp/cdecl.md) e non [\_\_clrcall](../../cpp/clrcall.md).  I tipi nativi con funzioni membro che utilizzano convenzioni di chiamata `__clrcall` non possono essere intercettati in un modulo compilato con **\/clr**.  
  
 Per ulteriori informazioni, vedere [\/clr \(Compilazione Common Language Runtime\)](../../build/reference/clr-common-language-runtime-compilation.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C2743:  
  
```  
// C2743.cpp  
// compile with: /clr  
public struct S {  
   __clrcall ~S() {}  
};  
  
public struct T {  
   ~T() {}  
};  
  
int main() {  
   try {}  
   catch(S) {}   // C2743  
   // try the following line instead  
   // catch(T) {}  
  
   try {}  
   catch(S*) {}   // OK  
}  
```