---
description: 'Altre informazioni su: const_mem_fun_t Class'
title: Classe const_mem_fun_t
ms.date: 02/21/2019
f1_keywords:
- functional/std::const_mem_fun_t
helpviewer_keywords:
- const_mem_fun_t class
ms.assetid: f169d381-019b-4a0e-a9a3-54da6d948270
ms.openlocfilehash: cfde3048758673b1918e3cc8eaab7151dde59896
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97233669"
---
# <a name="const_mem_fun_t-class"></a>Classe const_mem_fun_t

Classe di adattatori che consente a una funzione membro const che non accetta argomenti di chiamare gli operatori come oggetto funzione unaria una volta inizializzata con un argomento di riferimento. Deprecato in C++ 11, rimosso in C++ 17.

## <a name="syntax"></a>Sintassi

```cpp
template <class Result, class Type>
class const_mem_fun_t : public unary_function <Type *, Result>
{
    explicit const_mem_fun_t(Result (Type::* Pm)() const);
    Result operator()(const Type* Pleft) const;
};
```

### <a name="parameters"></a>Parametri

*PM*\
Puntatore alla funzione membro di classe `Type` da convertire in un oggetto funzione.

*Pleft*\
Oggetto su cui viene chiamata la funzione membro *PM* .

## <a name="return-value"></a>Valore restituito

Funzione unaria adattabile.

## <a name="remarks"></a>Commenti

Il modello di classe archivia una copia di *PM*, che deve essere un puntatore a una funzione membro della classe `Type` , in un oggetto membro privato. Definisce la relativa funzione membro `operator()` che restituisce ( `Pleft` -> \* `Pm` ) () **`const`** .

## <a name="example"></a>Esempio

Il costruttore di `const_mem_fun_t` non viene usato in genere direttamente. Per adattare le funzioni membro, viene usata la funzione helper `mem_fun`. Per un esempio di come usare gli adattatori di funzione membro, vedere [mem_fun](../standard-library/functional-functions.md#mem_fun).
