---
description: 'Altre informazioni su: Property (C++)'
title: property (C++)
ms.date: 11/04/2016
f1_keywords:
- property_cpp
helpviewer_keywords:
- property __declspec keyword
- __declspec keyword [C++], property
ms.assetid: f3b850ba-bf48-4df7-a1d6-8259d97309ce
ms.openlocfilehash: ed996ecadd16837af1e28b71bbedd9b4e3c1abaa
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97299163"
---
# <a name="property-c"></a>property (C++)

**Specifico di Microsoft**

L'attributo può essere applicato ai "membri dati virtuali" non statici in una definizione di classe o struttura. Il compilatore considera questi "membri dati virtuali" come membri dati modificando i riferimenti nelle chiamate di funzione.

## <a name="syntax"></a>Sintassi

```
   __declspec( property( get=get_func_name ) ) declarator
   __declspec( property( put=put_func_name ) ) declarator
   __declspec( property( get=get_func_name, put=put_func_name ) ) declarator
```

## <a name="remarks"></a>Osservazioni

Quando il compilatore rileva un membro dati dichiarato con questo attributo a destra di un operatore di selezione dei membri ("**.**" o " **->** "), converte l'operazione in una `get` funzione o `put` , a seconda che tale espressione sia un l-value o un r-value. In contesti più complessi, ad esempio " `+=` ", una riscrittura viene eseguita eseguendo sia `get` che `put` .

Questo attributo può anche essere utilizzato in una dichiarazione di una matrice vuota in una definizione di classe o struttura. Ad esempio:

```cpp
__declspec(property(get=GetX, put=PutX)) int x[];
```

L'istruzione sopra indica che `x[]` può essere utilizzato con uno o più indici di matrice. In questo caso, `i=p->x[a][b]` si trasformerà in `i=p->GetX(a, b)` e `p->x[a][b] = i` si trasformerà in `p->PutX(a, b, i);`

**TERMINA specifica Microsoft**

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

[__declspec](../cpp/declspec.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
