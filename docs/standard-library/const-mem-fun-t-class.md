---
title: Classe const_mem_fun_t
ms.date: 02/21/2019
f1_keywords:
- functional/std::const_mem_fun_t
helpviewer_keywords:
- const_mem_fun_t class
ms.assetid: f169d381-019b-4a0e-a9a3-54da6d948270
ms.openlocfilehash: 5263612a26b2bcb606ad712a2a8e0a521ce9437a
ms.sourcegitcommit: 590e488e51389066a4da4aa06d32d4c362c23393
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/21/2019
ms.locfileid: "72688200"
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

@No__t_1 *PM*
Puntatore alla funzione membro di classe `Type` da convertire in un oggetto funzione.

@No__t_1 *Pleft*
Oggetto su cui viene chiamata la funzione membro *PM* .

## <a name="return-value"></a>Valore restituito

Funzione unaria adattabile.

## <a name="remarks"></a>Note

Il modello di classe archivia una copia di *PM*, che deve essere un puntatore a una funzione membro della classe `Type`, in un oggetto membro privato. Definisce la funzione membro `operator()` come restituito (`Pleft` -> \* `Pm`) () **const**.

## <a name="example"></a>Esempio

Il costruttore di `const_mem_fun_t` non viene usato in genere direttamente. Per adattare le funzioni membro, viene usata la funzione helper `mem_fun`. Per un esempio di come usare gli adattatori di funzione membro, vedere [mem_fun](../standard-library/functional-functions.md#mem_fun).
