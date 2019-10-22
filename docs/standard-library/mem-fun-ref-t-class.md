---
title: Classe mem_fun_ref_t
ms.date: 02/21/2019
f1_keywords:
- functional/std::mem_fun_ref_t
helpviewer_keywords:
- mem_fun_ref_t class
ms.assetid: 7dadcac3-8d33-4e4b-a792-81bd53d3df39
ms.openlocfilehash: d8f5ef05d1bdeec694cdf22d7e7a163478127dfc
ms.sourcegitcommit: 590e488e51389066a4da4aa06d32d4c362c23393
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/21/2019
ms.locfileid: "72687763"
---
# <a name="mem_fun_ref_t-class"></a>Classe mem_fun_ref_t

Classe di adattatori che consente a una funzione membro `non_const` che non accetta argomenti di essere chiamata come oggetto funzione unaria se inizializzata con un argomento di riferimento. Deprecato in C++ 11, rimosso in C++ 17.

## <a name="syntax"></a>Sintassi

```cpp
template <class Result, class Type>
class mem_fun_ref_t : public unary_function<Type, Result> {
    explicit mem_fun_ref_t(
    Result (Type::* _Pm)());

    Result operator()(Type& left) const;
};
```

### <a name="parameters"></a>Parametri

@No__t_1 *_Pm*
Puntatore alla funzione membro di classe `Type` da convertire in un oggetto funzione.

\ a *sinistra*
Oggetto su cui viene chiamata la funzione membro *_Pm* .

## <a name="return-value"></a>Valore restituito

Funzione unaria adattabile.

## <a name="remarks"></a>Note

Il modello di classe archivia una copia di *_Pm*, che deve essere un puntatore a una funzione membro della classe `Type`, in un oggetto membro privato. Definisce la funzione membro `operator()` come restituito (**Left**. * `_Pm`) ().

## <a name="example"></a>Esempio

Il costruttore di `mem_fun_ref_t` non viene usato in genere direttamente. Per adattare le funzioni membro, viene usata la funzione helper `mem_fun_ref`. Per un esempio di come usare gli adattatori di funzione membro, vedere [mem_fun_ref](../standard-library/functional-functions.md#mem_fun_ref).
