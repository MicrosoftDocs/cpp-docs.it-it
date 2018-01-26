---
title: property (C++) | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: property_cpp
dev_langs: C++
helpviewer_keywords:
- property __declspec keyword
- __declspec keyword [C++], property
ms.assetid: f3b850ba-bf48-4df7-a1d6-8259d97309ce
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 313123a75c2fbcf295d1c1d87aa423e76154091e
ms.sourcegitcommit: 9a0a287d6940591523af959ebdac5affa36220da
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/25/2018
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
 Quando il compilatore rileva un membro dati dichiarato con questo attributo a destra di un operatore di selezione dei membri ("**.**"o"**->**"), converte l'operazione per un **ottenere** o **inserire** funzione, a seconda che un'espressione di questo tipo sia un l-value o un r-value. In contesti più complessi, ad esempio "`+=`", una riscrittura viene eseguita utilizzando sia **ottenere** e **inserire**.  
  
 Questo attributo può anche essere utilizzato in una dichiarazione di una matrice vuota in una definizione di classe o struttura. Ad esempio:  
  
```  
__declspec(property(get=GetX, put=PutX)) int x[];  
```  
  
 L'istruzione sopra indica che `x[]` può essere utilizzato con uno o più indici di matrice. In questo caso, `i=p->x[a][b]` si trasformerà in `i=p->GetX(a, b)` e `p->x[a][b] = i` si trasformerà in `p->PutX(a, b, i);`  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="example"></a>Esempio  
  
```  
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