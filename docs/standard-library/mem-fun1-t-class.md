---
title: Classe mem_fun1_t
ms.date: 02/21/2019
f1_keywords:
- functional/std::mem_fun1_t
helpviewer_keywords:
- mem_fun1_t class
ms.assetid: 01a8c2c2-b2f7-4e3f-869c-5b5b9f06ea54
ms.openlocfilehash: 822de97849750a72948137ba8fe23beab8554ff5
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68245093"
---
# <a name="memfun1t-class"></a>Classe mem_fun1_t

Classe di adattatori che consente un `non_const` funzione membro che accetta un singolo argomento di essere chiamata come oggetto funzione binaria se inizializzata con un argomento di puntatore. Deprecate in c++11, rimossi in c++17.

## <a name="syntax"></a>Sintassi

```cpp
template <class Result, class Type, class Arg>
class mem_fun1_t : public binary_function<Type *, Arg, Result> {
    explicit mem_fun1_t(
    Result (Type::* _Pm)(Arg));

    Result operator()(
    Type* _Pleft,
    Arg right) const;
};
```

### <a name="parameters"></a>Parametri

*_Pm*\
Puntatore alla funzione membro di classe `Type` da convertire in un oggetto funzione.

*Pleft*\
L'oggetto che il *_Pm* funzione membro viene chiamata su.

*Ok*\
L'argomento che viene assegnato a *_Pm*.

## <a name="return-value"></a>Valore restituito

Funzione binaria adattabile.

## <a name="remarks"></a>Note

La classe modello archivia una copia della *_Pm*, che deve essere un puntatore a una funzione membro della classe `Type`, in un oggetto membro privato. Definisce la relativa funzione membro `operator()` prevede la restituzione (**pleft** -> \* `_Pm`) (**destro**).

## <a name="example"></a>Esempio

Il costruttore di `mem_fun1_t` non viene usato in genere direttamente. Per adattare le funzioni membro, viene usata la funzione helper `mem_fun`. Per un esempio di come usare gli adattatori di funzione membro, vedere [mem_fun](../standard-library/functional-functions.md#mem_fun).
