---
title: Classe const_mem_fun1_t
ms.date: 02/21/2019
f1_keywords:
- functional/std::const_mem_fun1_t
helpviewer_keywords:
- const_mem_fun1_t class
ms.assetid: 250fac30-9663-4133-9051-6303f76ea259
ms.openlocfilehash: 8ccd9d7e58b9cadec83b64df5553564db20a5745
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68244521"
---
# <a name="constmemfun1t-class"></a>Classe const_mem_fun1_t

Classe di adattatori che consente a una funzione membro **const** che accetta un singolo argomento di essere chiamata come oggetto funzione binaria, una volta inizializzata con un argomento di puntatore. Deprecate in c++11, rimossi in c++17.

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

*A sinistra*\
Il **const** oggetto a cui il *member_ptr* funzione membro viene chiamata su.

*Ok*\
L'argomento che viene assegnato a *member_ptr*.

## <a name="return-value"></a>Valore restituito

Funzione binaria adattabile.

## <a name="remarks"></a>Note

La classe modello archivia una copia della *member_ptr*, che deve essere un puntatore a una funzione membro della classe `Type`, in un oggetto membro privato. Definisce la relativa funzione membro `operator()` prevede la restituzione `(left->member_ptr)(right) const`.

## <a name="example"></a>Esempio

Il costruttore di `const_mem_fun1_t` viene usato raramente in modo diretto. `mem_fn` Consente di adattare le funzioni membro. Visualizzare [mem_fn](../standard-library/functional-functions.md#mem_fn) per un esempio di come usare gli adattatori di funzione membro.
