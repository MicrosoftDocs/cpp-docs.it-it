---
title: Classe mem_fun_ref_t | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- xfunctional/std::mem_fun_ref_t
dev_langs:
- C++
helpviewer_keywords:
- mem_fun_ref_t class
ms.assetid: 7dadcac3-8d33-4e4b-a792-81bd53d3df39
caps.latest.revision: 20
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: eaf3a1d3e549122c6d407ec3ade3f5f68fc53f4a
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="memfunreft-class"></a>Classe mem_fun_ref_t

Classe di adattatori che consente a una funzione membro **non_const** che non accetta argomenti di essere chiamata come oggetto funzione unaria se inizializzata con un argomento di riferimento.

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

`_Pm` Un puntatore alla funzione membro della classe **tipo** da convertire in un oggetto funzione.

`left` L'oggetto che il `_Pm` funzione membro viene chiamata su.

## <a name="return-value"></a>Valore restituito

Funzione unaria adattabile.

## <a name="remarks"></a>Note

La classe modello archivia una copia di `_Pm`, che deve essere un puntatore a una funzione membro della classe **Type**, in un oggetto membro privato. Definisce la relativa funzione membro `operator()` che restituisce ( **left**.* `_Pm`)( ).

## <a name="example"></a>Esempio

Il costruttore di `mem_fun_ref_t` non viene usato in genere direttamente. Per adattare le funzioni membro, viene usata la funzione helper `mem_fun_ref`. Per un esempio di come usare gli adattatori di funzione membro, vedere [mem_fun_ref](../standard-library/functional-functions.md#mem_fun_ref).

## <a name="requirements"></a>Requisiti

**Intestazione:** \<functional>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
