---
title: Classe mem_fun1_t | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- xfunctional/std::mem_fun1_t
dev_langs:
- C++
helpviewer_keywords:
- mem_fun1_t class
ms.assetid: 01a8c2c2-b2f7-4e3f-869c-5b5b9f06ea54
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2c90838bf4ae49e372b35ca2e9a2f0feede4eb9b
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33864060"
---
# <a name="memfun1t-class"></a>Classe mem_fun1_t

Classe di adattatori che consente a una funzione membro **non_const** che accetta un singolo argomento di essere chiamata come oggetto funzione unaria se inizializzata con un argomento di puntatore.

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

`_Pm` Un puntatore alla funzione membro della classe **tipo** da convertire in un oggetto funzione.

`_Pleft` L'oggetto che il `_Pm` funzione membro viene chiamata su.

`right` L'argomento cui è in corso ai `_Pm`.

## <a name="return-value"></a>Valore restituito

Funzione binaria adattabile.

## <a name="remarks"></a>Note

La classe modello archivia una copia di `_Pm`, che deve essere un puntatore a una funzione membro della classe **Type**, in un oggetto membro privato. Definisce la relativa funzione membro `operator()` che restituisce ( **_Pleft**->\* `_Pm`)( **right**).

## <a name="example"></a>Esempio

Il costruttore di `mem_fun1_t` non viene usato in genere direttamente. Per adattare le funzioni membro, viene usata la funzione helper `mem_fun`. Per un esempio di come usare gli adattatori di funzione membro, vedere [mem_fun](../standard-library/functional-functions.md#mem_fun).

## <a name="requirements"></a>Requisiti

**Intestazione:** \<functional>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
