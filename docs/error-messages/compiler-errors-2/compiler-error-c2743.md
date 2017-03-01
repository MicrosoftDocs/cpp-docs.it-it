---
title: Errore del compilatore C2743 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2743
dev_langs:
- C++
helpviewer_keywords:
- C2743
ms.assetid: 644cd444-21d2-471d-a176-f5f52c5a0b73
caps.latest.revision: 8
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
ms.openlocfilehash: 7420231e64515b556cfe81fc695eda5f75231506
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c2743"></a>Errore del compilatore C2743
'tipo': Impossibile rilevare un tipo nativo con distruttore clrcall o costruttore di copia  
  
 Un modulo compilato con **/clr** ha tentato di intercettare un'eccezione di tipo nativo in distruttore del tipo o un costruttore di copia utilizza `__clrcall` la convenzione di chiamata.  
  
 Quando viene compilato con **/clr**, la gestione delle eccezioni si prevede che le funzioni membro in un tipo nativo da [cdecl](../../cpp/cdecl.md) e non [clrcall](../../cpp/clrcall.md). I tipi nativi con funzioni membro che utilizzano `__clrcall` la convenzione di chiamata non può essere intercettati in un modulo compilato con **/clr**.  
  
 Per altre informazioni, vedere [/clr (Compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md).  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene generato l'errore C2743.  
  
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
