---
title: Classe const_mem_fun1_ref_t | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- xfunctional/std::const_mem_fun1_ref_t
dev_langs:
- C++
helpviewer_keywords:
- const_mem_fun1_ref_t class
ms.assetid: 8220d373-fa1c-44be-a21d-96d49b3ea6bb
caps.latest.revision: 20
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 4236f510ad942dc0ab8cbe64a34670623ea3aaf2
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="constmemfun1reft-class"></a>Classe const_mem_fun1_ref_t

Classe di adattatori che consente a una funzione membro **const** che accetta un singolo argomento di essere chiamata come oggetto funzione binaria, una volta inizializzata con un argomento di riferimento.

## <a name="syntax"></a>Sintassi

```cpp
template <class Result, class Type, class Arg>
class const_mem_fun1_ref_t
 : public binary_function<Type, Arg, Result>
 {
    explicit const_mem_fun1_ref_t(Result (Type::* Pm)(Arg) const);
    Result operator()(const Type& left, Arg right) const;
 };
```

### <a name="parameters"></a>Parametri

`Pm` Un puntatore alla funzione membro della classe **tipo** da convertire in un oggetto funzione.

`left` Il **const** dell'oggetto che il `Pm` funzione membro viene chiamata su.

`right` L'argomento cui è in corso ai `Pm`.

## <a name="return-value"></a>Valore restituito

Funzione binaria adattabile.

## <a name="remarks"></a>Note

La classe modello archivia una copia di `Pm`, che deve essere un puntatore a una funzione membro della classe **Type**, in un oggetto membro privato. Definisce la relativa funzione membro `operator()` che restituisce ( `left`.\* *Pm*)( `right`) **const**.

## <a name="example"></a>Esempio

Il costruttore di `const_mem_fun1_ref_t` non viene usato in genere direttamente; per adattare le funzioni membro, viene usata la funzione di supporto `mem_fun_ref`. Per esempi di come usare gli adattatori di funzione membro, vedere [mem_fun_ref](../standard-library/functional-functions.md#mem_fun_ref).

## <a name="requirements"></a>Requisiti

**Intestazione:** \<functional>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
