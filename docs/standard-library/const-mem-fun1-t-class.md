---
title: Classe const_mem_fun1_t
ms.date: 02/21/2019
f1_keywords:
- functional/std::const_mem_fun1_t
helpviewer_keywords:
- const_mem_fun1_t class
ms.assetid: 250fac30-9663-4133-9051-6303f76ea259
ms.openlocfilehash: 93d0e7a116c7c7ba7a2ed1cb46fd88585a99120d
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87228323"
---
# <a name="const_mem_fun1_t-class"></a>Classe const_mem_fun1_t

Classe di adattatori che consente a una **`const`** funzione membro che accetta un singolo argomento di essere chiamata come oggetto funzione binaria se inizializzata con un argomento di puntatore. Deprecato in C++ 11, rimosso in C++ 17.

## <a name="syntax"></a>Sintassi

```cpp
template <class Result, class Type, class Arg>
class const_mem_fun1_t : public binary_function<const Type *, Arg, Result>
{
    explicit const_mem_fun1_t(Result (Type::* member_ptr)(Arg) const);
    Result operator()(const Type* left, Arg right) const;
};
```

### <a name="parameters"></a>Parametri

*member_ptr*\
Puntatore alla funzione membro di classe `Type` da convertire in un oggetto funzione.

*sinistra*\
**`const`** Oggetto su cui viene chiamata la funzione membro *member_ptr* .

*Ok*\
Argomento assegnato a *member_ptr*.

## <a name="return-value"></a>Valore restituito

Funzione binaria adattabile.

## <a name="remarks"></a>Osservazioni

Il modello di classe archivia una copia di *member_ptr*, che deve essere un puntatore a una funzione membro della classe `Type` , in un oggetto membro privato. Definisce la relativa funzione membro `operator()` che restituisce `(left->member_ptr)(right) const` .

## <a name="example"></a>Esempio

Il costruttore di `const_mem_fun1_t` viene usato raramente in modo diretto. `mem_fn`viene usato per adattare le funzioni membro. Vedere [mem_fn](../standard-library/functional-functions.md#mem_fn) per un esempio di come usare gli adattatori di funzioni membro.
