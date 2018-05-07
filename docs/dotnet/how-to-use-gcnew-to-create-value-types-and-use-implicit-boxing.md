---
title: 'Procedura: utilizzare gcnew per creare tipi di valore e utilizzare la conversione Boxing implicita | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- gcnew keyword [C++], creating value types
- boxing, implicit
- value types, creating
ms.assetid: ceb48841-d6bd-47be-a167-57f44c961603
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 6d50b36b69d8be5c1e6311b257de4c31ce1ab0bb
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="how-to-use-gcnew-to-create-value-types-and-use-implicit-boxing"></a>Procedura: utilizzare gcnew per creare tipi di valore e utilizzare la conversione boxing implicita
Utilizzando [gcnew](../windows/ref-new-gcnew-cpp-component-extensions.md) su un valore di tipo verrà creato un tipo di valore boxed, che può essere inserito nell'heap gestito e sottoposto a garbage collection.  
  
## <a name="example"></a>Esempio  
  
```  
// vcmcppv2_explicit_boxing4.cpp  
// compile with: /clr  
public value class V {  
public:  
   int m_i;  
   V(int i) : m_i(i) {}  
};  
  
public ref struct TC {  
   void do_test(V^ v) {  
      if (v != nullptr)  
         ;  
      else  
         ;  
   }  
};  
  
int main() {  
   V^ v = gcnew V(42);  
   TC^ tc = gcnew TC;  
   tc->do_test(v);  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Conversione boxing](../windows/boxing-cpp-component-extensions.md)