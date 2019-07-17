---
title: Classe const_mem_fun_t
ms.date: 02/21/2019
f1_keywords:
- functional/std::const_mem_fun_t
helpviewer_keywords:
- const_mem_fun_t class
ms.assetid: f169d381-019b-4a0e-a9a3-54da6d948270
ms.openlocfilehash: 0bdfdbac7a23a4b0e3b830b05990bf028c7bb316
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68244553"
---
# <a name="constmemfunt-class"></a>Classe const_mem_fun_t

Classe di adattatori che consente a una funzione membro const che non accetta argomenti di chiamare gli operatori come oggetto funzione unaria una volta inizializzata con un argomento di riferimento. Deprecate in c++11, rimossi in c++17.

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
L'oggetto che il *Pm* funzione membro viene chiamata su.

## <a name="return-value"></a>Valore restituito

Funzione unaria adattabile.

## <a name="remarks"></a>Note

La classe modello archivia una copia della *Pm*, che deve essere un puntatore a una funzione membro della classe `Type`, in un oggetto membro privato. Definisce la relativa funzione membro `operator()` prevede la restituzione (`Pleft` -> \* `Pm`) () **const**.

## <a name="example"></a>Esempio

Il costruttore di `const_mem_fun_t` non viene usato in genere direttamente. Per adattare le funzioni membro, viene usata la funzione helper `mem_fun`. Per un esempio di come usare gli adattatori di funzione membro, vedere [mem_fun](../standard-library/functional-functions.md#mem_fun).
