---
title: Errore del compilatore C2743 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2743
dev_langs:
- C++
helpviewer_keywords:
- C2743
ms.assetid: 644cd444-21d2-471d-a176-f5f52c5a0b73
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 29826dde6b9f92dd01e3a6420eed0d836660121f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2743"></a>Errore del compilatore C2743
'type': Impossibile intercettare un tipo nativo con distruttore clrcall o costruttore di copia  
  
 Un modulo compilato con **/clr** ha tentato di intercettare un'eccezione di tipo nativo in un distruttore o costruttore di copia del tipo utilizza `__clrcall` convenzione di chiamata.  
  
 Quando viene compilato con **/clr**, la gestione delle eccezioni prevede che le funzioni membro in un tipo nativo da [cdecl](../../cpp/cdecl.md) e non [clrcall](../../cpp/clrcall.md). I tipi nativi con funzioni membro tramite `__clrcall` la convenzione di chiamata non può essere intercettato in un modulo compilato con **/clr**.  
  
 Per altre informazioni, vedere [/clr (Compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2743.  
  
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