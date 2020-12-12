---
description: 'Altre informazioni su: const_mem_fun_ref_t Class'
title: Classe const_mem_fun_ref_t
ms.date: 02/21/2019
f1_keywords:
- functional/std::const_mem_fun_ref_t
helpviewer_keywords:
- const_mem_fun_ref_t class
ms.assetid: 316ddbaa-9f46-4931-8eba-ea4ca66360ef
ms.openlocfilehash: 484416676b7957e3be08ddf03544d2679f1fbf18
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97324958"
---
# <a name="const_mem_fun_ref_t-class"></a>Classe const_mem_fun_ref_t

Classe di adattatori che consente a una **`const`** funzione membro che non accetta argomenti di essere chiamata come oggetto funzione unaria se inizializzata con un argomento di riferimento. Deprecato in C++ 11, rimosso in C++ 17.

## <a name="syntax"></a>Sintassi

```cpp
template <class Result, class Type>
    class const_mem_fun_ref_t
: public unary_function<Type, Result>
{
    explicit const_mem_fun_t(Result (Type::* Pm)() const);
    Result operator()(const Type& left) const;
};
```

### <a name="parameters"></a>Parametri

*PM*\
Puntatore alla funzione membro di classe `Type` da convertire in un oggetto funzione.

*sinistra*\
Oggetto su cui viene chiamata la funzione membro *PM* .

## <a name="return-value"></a>Valore restituito

Funzione unaria adattabile.

## <a name="remarks"></a>Commenti

Il modello di classe archivia una copia di *PM*, che deve essere un puntatore a una funzione membro della classe `Type` , in un oggetto membro privato. Definisce la relativa funzione membro `operator()` che restituisce (**Left** \* `Pm` ). () **`const`**.

## <a name="example"></a>Esempio

Il costruttore di `const_mem_fun_ref_t` non viene usato in genere direttamente. Per adattare le funzioni membro, viene usata la funzione helper `mem_fun_ref`. Per un esempio di come usare gli adattatori di funzione membro, vedere [mem_fun_ref](../standard-library/functional-functions.md#mem_fun_ref).
