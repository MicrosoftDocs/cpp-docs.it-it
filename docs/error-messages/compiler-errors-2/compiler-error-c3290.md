---
title: Errore del compilatore C3290 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3290
dev_langs:
- C++
helpviewer_keywords:
- C3290
ms.assetid: 0baf684b-1143-4953-ac99-a2fa267d8017
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: bf65a35469ca978b0464c6f7275a6ac0e331da5d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c3290"></a>Errore del compilatore C3290
'type': una proprietà trivial non può avere un tipo riferimento  
  
 Una proprietà è stata dichiarata in modo non corretto. Quando si dichiara una proprietà trivial, il compilatore crea una variabile che verrà aggiornata dalla proprietà e non è possibile avere una variabile di riferimento di rilevamento in una classe.  
  
 Vedere [proprietà](../../windows/property-cpp-component-extensions.md) e [operatore di riferimento di rilevamento](../../windows/tracking-reference-operator-cpp-component-extensions.md) per ulteriori informazioni.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3290.  
  
```  
// C3290.cpp  
// compile with: /clr /c  
ref struct R {};  
  
ref struct X {  
   R^ mr;  
  
   property R % y;   // C3290  
   property R ^ x;   // OK  
  
   // OK  
   property R% prop {  
      R% get() {   
         return *mr;   
      }  
  
      void set(R%) {}  
   }  
};  
  
int main() {  
   X x;  
   R% xp = x.prop;  
}  
```