---
title: Classe const_mem_fun1_ref_t
ms.date: 02/21/2019
f1_keywords:
- functional/std::const_mem_fun1_ref_t
helpviewer_keywords:
- const_mem_fun1_ref_t class
ms.assetid: 8220d373-fa1c-44be-a21d-96d49b3ea6bb
ms.openlocfilehash: f9f426b7280872846695e204f2c9843d2622fe19
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87228336"
---
# <a name="const_mem_fun1_ref_t-class"></a>Classe const_mem_fun1_ref_t

Classe di adattatori che consente a una **`const`** funzione membro che accetta un singolo argomento di essere chiamata come oggetto funzione binaria se inizializzata con un argomento di riferimento. Deprecato in C++ 11, rimosso in C++ 17.

## <a name="syntax"></a>Sintassi

```cpp
template <class Result, class Type, class Arg>
    class const_mem_fun1_ref_t
        : public binary_function<Type, Arg, Result>
{
    explicit const_mem_fun1_ref_t(Result (Type::* Pm)(Arg) const);
    Result operator()(const Type& left, Arg right) const;
};
```

### <a name="parameters"></a>Parametri

*PM*\
Puntatore alla funzione membro di classe `Type` da convertire in un oggetto funzione.

*sinistra*\
**`const`** Oggetto su cui viene chiamata la funzione membro *PM* .

*Ok*\
Argomento assegnato a *PM*.

## <a name="return-value"></a>Valore restituito

Funzione binaria adattabile.

## <a name="remarks"></a>Osservazioni

Il modello di classe archivia una copia di *PM*, che deve essere un puntatore a una funzione membro della classe `Type` , in un oggetto membro privato. Definisce la relativa funzione membro `operator()` che restituisce ( `left` . \* *PM*) ( `right` ) **`const`** .

## <a name="example"></a>Esempio

Il costruttore di `const_mem_fun1_ref_t` non viene usato in genere direttamente. Per adattare le funzioni membro, viene usata la funzione helper `mem_fun_ref`. Per esempi di come usare gli adattatori di funzione membro, vedere [mem_fun_ref](../standard-library/functional-functions.md#mem_fun_ref).
