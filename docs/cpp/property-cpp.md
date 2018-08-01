---
title: proprietà (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- property_cpp
dev_langs:
- C++
helpviewer_keywords:
- property __declspec keyword
- __declspec keyword [C++], property
ms.assetid: f3b850ba-bf48-4df7-a1d6-8259d97309ce
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c4673101d41b896ed3fc19aa1998aa9329064b41
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39409066"
---
# <a name="property-c"></a>property (C++)
**Sezione specifica Microsoft**  
  
 L'attributo può essere applicato ai "membri dati virtuali" non statici in una definizione di classe o struttura. Il compilatore considera questi "membri dati virtuali" come membri dati modificando i riferimenti nelle chiamate di funzione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
   __declspec( property( get=get_func_name ) ) declarator  
   __declspec( property( put=put_func_name ) ) declarator  
   __declspec( property( get=get_func_name, put=put_func_name ) ) declarator  
```  
  
## <a name="remarks"></a>Note  
 Se il compilatore rileva un membro dati dichiarato con questo attributo a destra di un operatore di selezione dei membri ("**.**"o"**->**"), l'operazione per la funzione converte un `get` o`put` funzione, a seconda se tale espressione è un l-value o un r-value. In contesti più complessi, ad esempio "`+=`", una riscrittura viene eseguita utilizzando sia `get` e `put`.  
  
 Questo attributo può anche essere utilizzato in una dichiarazione di una matrice vuota in una definizione di classe o struttura. Ad esempio:  
  
```cpp 
__declspec(property(get=GetX, put=PutX)) int x[];  
```  
  
 L'istruzione sopra indica che `x[]` può essere utilizzato con uno o più indici di matrice. In questo caso, `i=p->x[a][b]` si trasformerà in `i=p->GetX(a, b)` e `p->x[a][b] = i` si trasformerà in `p->PutX(a, b, i);`  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="example"></a>Esempio  
  
```cpp 
// declspec_property.cpp  
struct S {  
   int i;  
   void putprop(int j) {   
      i = j;  
   }  
  
   int getprop() {  
      return i;  
   }  
  
   __declspec(property(get = getprop, put = putprop)) int the_prop;  
};  
  
int main() {  
   S s;  
   s.the_prop = 5;  
   return s.the_prop;  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [__declspec](../cpp/declspec.md)   
 [Parole chiave](../cpp/keywords-cpp.md)