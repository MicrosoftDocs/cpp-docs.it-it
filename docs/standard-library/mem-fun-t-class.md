---
title: Classe mem_fun_t
ms.date: 02/21/2019
f1_keywords:
- functional/std::mem_fun_t
helpviewer_keywords:
- mem_fun_t class
ms.assetid: 242566d4-750c-4c87-9d63-2e2c9d19ca2a
ms.openlocfilehash: 19ccd4835c4257a7f409bcf0f7bda1a898567458
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68245078"
---
# <a name="memfunt-class"></a>Classe mem_fun_t

Classe di adattatori che consente un `non_const` funzione membro che non accetta argomenti di essere chiamata come oggetto funzione unaria se inizializzata con un argomento di puntatore. Deprecate in c++11, rimossi in c++17.

## <a name="syntax"></a>Sintassi

```cpp
template <class Result, class Type>
class mem_fun_t : public unary_function<Type *, Result> {
    explicit mem_fun_t(Result (Type::* _Pm)());

    Result operator()(Type* _Pleft) const;
};
```

### <a name="parameters"></a>Parametri

*_Pm*\
Puntatore alla funzione membro di classe `Type` da convertire in un oggetto funzione.

*Pleft*\
L'oggetto che il *_Pm* funzione membro viene chiamata su.

## <a name="return-value"></a>Valore restituito

Funzione unaria adattabile.

## <a name="remarks"></a>Note

La classe modello archivia una copia della *_Pm*, che deve essere un puntatore a una funzione membro della classe `Type`, in un oggetto membro privato. Definisce la relativa funzione membro `operator()` prevede la restituzione (`_Pleft`->* `_Pm`) ().

## <a name="example"></a>Esempio

Il costruttore di `mem_fun_t` non viene usato in genere direttamente. Per adattare le funzioni membro, viene usata la funzione helper `mem_fun`. Per un esempio di come usare gli adattatori di funzione membro, vedere [mem_fun](../standard-library/functional-functions.md#mem_fun).
