---
title: Classe mem_fun1_ref_t | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- xfunctional/std::mem_fun1_ref_t
dev_langs:
- C++
helpviewer_keywords:
- mem_fun1_ref_t class
ms.assetid: 7d6742f6-19ba-4523-b3c8-0e5b8f11464f
caps.latest.revision: 20
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 6e6a209511201a5c4c851eee2b72a530c0003197
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="memfun1reft-class"></a>Classe mem_fun1_ref_t

Classe di adattatori che consente a una funzione membro **non_const** che accetta un singolo argomento di essere chiamata come oggetto funzione binaria se inizializzata con un argomento di riferimento.

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

`_Pm` Un puntatore alla funzione membro della classe **tipo** da convertire in un oggetto funzione.

`left` L'oggetto che il `_Pm` funzione membro viene chiamata su.

`right` L'argomento cui è in corso ai `_Pm`.

## <a name="return-value"></a>Valore restituito

Funzione binaria adattabile.

## <a name="remarks"></a>Note

La classe modello archivia una copia di `_Pm`, che deve essere un puntatore a una funzione membro della classe **Type**, in un oggetto membro privato. Definisce la funzione membro `operator()` la restituzione di ( **sinistro**.\* `_Pm`) ( **destra**).

## <a name="example"></a>Esempio

Il costruttore di `mem_fun1_ref_t` non viene usato in genere direttamente. Per adattare le funzioni membro, viene usata la funzione helper `mem_fun_ref`. Per un esempio di come usare gli adattatori di funzione membro, vedere [mem_fun_ref](../standard-library/functional-functions.md#mem_fun_ref).

## <a name="requirements"></a>Requisiti

**Intestazione:** \<functional>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
