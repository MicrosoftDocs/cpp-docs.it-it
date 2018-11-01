---
title: Classe mem_fun1_ref_t
ms.date: 11/04/2016
f1_keywords:
- xfunctional/std::mem_fun1_ref_t
helpviewer_keywords:
- mem_fun1_ref_t class
ms.assetid: 7d6742f6-19ba-4523-b3c8-0e5b8f11464f
ms.openlocfilehash: 4169ac00cfeeb2bd9f38ef0e7eb30da819fbff5c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50488062"
---
# <a name="memfun1reft-class"></a>Classe mem_fun1_ref_t

Classe di adattatori che consente un `non_const` funzione membro che accetta un singolo argomento di essere chiamata come oggetto funzione binaria se inizializzata con un argomento di riferimento.

## <a name="syntax"></a>Sintassi

```cpp
template <class Result, class Type, class Arg>
class mem_fun1_ref_t : public binary_function<Type, Arg, Result> {
    explicit mem_fun1_ref_t(
    Result (Type::* _Pm)(Arg));

    Result operator()(
    Type& left,
    Arg right) const;

};
```

### <a name="parameters"></a>Parametri

*_Pm*<br/>
Puntatore alla funzione membro di classe `Type` da convertire in un oggetto funzione.

*left*<br/>
L'oggetto che il *_Pm* funzione membro viene chiamata su.

*right*<br/>
L'argomento che viene assegnato a *_Pm*.

## <a name="return-value"></a>Valore restituito

Funzione binaria adattabile.

## <a name="remarks"></a>Note

La classe modello archivia una copia della *_Pm*, che deve essere un puntatore a una funzione membro della classe `Type`, in un oggetto membro privato. Definisce la relativa funzione membro `operator()` prevede la restituzione ( **a sinistra**.\* `_Pm`) ( **destro**).

## <a name="example"></a>Esempio

Il costruttore di `mem_fun1_ref_t` non viene usato in genere direttamente. Per adattare le funzioni membro, viene usata la funzione helper `mem_fun_ref`. Per un esempio di come usare gli adattatori di funzione membro, vedere [mem_fun_ref](../standard-library/functional-functions.md#mem_fun_ref).

## <a name="requirements"></a>Requisiti

**Intestazione:** \<functional>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
