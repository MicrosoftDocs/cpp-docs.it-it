---
description: 'Altre informazioni su: add_rvalue_reference Class'
title: Classe add_rvalue_reference
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::add_rvalue_reference
helpviewer_keywords:
- add_rvalue_reference Class
ms.assetid: 76b0cb7c-1031-45d0-b409-f03ab0297580
ms.openlocfilehash: f4f5b58ddd2aa1e02b3023a27ef2feba83624326
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97319882"
---
# <a name="add_rvalue_reference-class"></a>Classe add_rvalue_reference

Crea un tipo di riferimento rvalue del parametro del modello, se si tratta di un tipo di oggetto o funzione. In caso contrario, a causa della semantica di compressione dei riferimenti, il tipo è lo stesso del parametro di modello.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct add_rvalue_reference;

template <class T>
using add_rvalue_reference_t = typename add_rvalue_reference<T>::type;
```

### <a name="parameters"></a>Parametri

*T*\
Tipo da modificare.

## <a name="remarks"></a>Commenti

La `add_rvalue_reference` classe dispone di un membro denominato `type` , che è un alias per il tipo di un riferimento rvalue al parametro di modello *T*. La semantica di compressione dei riferimenti implica che, per i tipi non oggetto e non-funzione *t*, `T&&` è un *t*. Se, ad esempio, *T* è un tipo di riferimento lvalue, `add_rvalue_reference<T>::type` è il tipo di riferimento lvalue, non un riferimento rvalue.

Per praticità, \<type_traits> definisce un modello Helper, `add_rvalue_reference_t` , che consente di eseguire l'alias del `type` membro di `add_rvalue_reference` .

## <a name="example"></a>Esempio

Questo esempio di codice usa static_assert per mostrare come i tipi di riferimento rvalue vengono creati usando `add_rvalue_reference` e `add_rvalue_reference_t` e come il risultato di `add_rvalue_reference` in un tipo di riferimento lvalue non è un riferimento rvalue, ma viene compresso nel tipo di riferimento lvalue.

```cpp
// ex_add_rvalue_reference.cpp
// Build by using: cl /EHsc /W4 ex_add_rvalue_reference.cpp
#include <type_traits>
#include <iostream>
#include <string>

using namespace std;
int main()
{
    static_assert(is_same<add_rvalue_reference<string>::type, string&&>::value,
        "Expected add_rvalue_reference_t<string> to be string&&");
    static_assert(is_same<add_rvalue_reference_t<string*>, string*&&>::value,
        "Expected add_rvalue_reference_t<string*> to be string*&&");
    static_assert(is_same<add_rvalue_reference<string&>::type, string&>::value,
        "Expected add_rvalue_reference_t<string&> to be string&");
    static_assert(is_same<add_rvalue_reference_t<string&&>, string&&>::value,
        "Expected add_rvalue_reference_t<string&&> to be string&&");
    cout << "All static_assert tests of add_rvalue_reference passed." << endl;
    return 0;
}

/*Output:
All static_assert tests of add_rvalue_reference passed.
*/
```

## <a name="requirements"></a>Requisiti

Intestazione: \<type_traits>

Spazio dei nomi: std

## <a name="see-also"></a>Vedi anche

[<type_traits>](type-traits.md)\
[Classe add_lvalue_reference](add-lvalue-reference-class.md)\
[Classe is_rvalue_reference](is-rvalue-reference-class.md)
