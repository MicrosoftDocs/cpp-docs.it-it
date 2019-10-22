---
title: Classe const_mem_fun_ref_t
ms.date: 02/21/2019
f1_keywords:
- functional/std::const_mem_fun_ref_t
helpviewer_keywords:
- const_mem_fun_ref_t class
ms.assetid: 316ddbaa-9f46-4931-8eba-ea4ca66360ef
ms.openlocfilehash: 8ce29eb0d2122dbd95fea34fa59f3fa11b9b388e
ms.sourcegitcommit: 590e488e51389066a4da4aa06d32d4c362c23393
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/21/2019
ms.locfileid: "72689765"
---
# <a name="const_mem_fun_ref_t-class"></a>Classe const_mem_fun_ref_t

Classe di adattatori che consente a una funzione membro **const** che non accetta argomenti di essere chiamata come oggetto funzione unaria, una volta inizializzata con un argomento di riferimento. Deprecato in C++ 11, rimosso in C++ 17.

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

@No__t_1 *PM*
Puntatore alla funzione membro di classe `Type` da convertire in un oggetto funzione.

\ a *sinistra*
Oggetto su cui viene chiamata la funzione membro *PM* .

## <a name="return-value"></a>Valore restituito

Funzione unaria adattabile.

## <a name="remarks"></a>Note

Il modello di classe archivia una copia di *PM*, che deve essere un puntatore a una funzione membro della classe `Type`, in un oggetto membro privato. Definisce la funzione membro `operator()` come restituito (**Left**. \* `Pm`) () **const**.

## <a name="example"></a>Esempio

Il costruttore di `const_mem_fun_ref_t` non viene usato in genere direttamente. Per adattare le funzioni membro, viene usata la funzione helper `mem_fun_ref`. Per un esempio di come usare gli adattatori di funzione membro, vedere [mem_fun_ref](../standard-library/functional-functions.md#mem_fun_ref).
