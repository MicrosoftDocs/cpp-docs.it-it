---
title: Compilatore avviso (livello 1) C4382 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4382
dev_langs:
- C++
helpviewer_keywords:
- C4382
ms.assetid: 34be9ad3-bae6-411a-8f80-0c8fd0d2c092
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: cc82b83860786ffc3f0aee73ede18ecadef16a7a
ms.openlocfilehash: 4571fe618b0ae89251d2748fbbcdfcb654201054
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-warning-level-1-c4382"></a>Avviso del compilatore (livello 1) C4382
generazione di 'tipo': un tipo con distruttore clrcall o costruttore di copia può essere rilevato solo in /clr: pura modulo  
  
 Il **/clr: pure** l'opzione del compilatore è deprecato in Visual Studio 2015.  
  
 Quando viene compilato con **/clr** (non **/clr: pure**), la gestione delle eccezioni si prevede che le funzioni membro in un tipo nativo da [cdecl](../../cpp/cdecl.md) e non [clrcall](../../cpp/clrcall.md). I tipi nativi con funzioni membro che utilizzano `__clrcall` la convenzione di chiamata non può essere intercettati in un modulo compilato con **/clr**.  
  
 Se l'eccezione verrà rilevata in un modulo compilato con **/clr: pure**, è possibile ignorare questo avviso.  
  
 Per altre informazioni, vedere [/clr (Compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md).  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene generato l'errore C4382.  
  
```  
// C4382.cpp  
// compile with: /clr /W1 /c  
struct S {  
   __clrcall ~S() {}  
};  
  
struct T {  
   ~T() {}  
};  
  
int main() {  
   S s;  
   throw s;   // C4382  
  
   S * ps = &s;  
   throw ps;   // OK  
  
   T t;  
   throw t;   // OK  
}  
```
