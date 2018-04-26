---
title: Classe const_mem_fun_t | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- xfunctional/std::const_mem_fun_t
dev_langs:
- C++
helpviewer_keywords:
- const_mem_fun_t class
ms.assetid: f169d381-019b-4a0e-a9a3-54da6d948270
caps.latest.revision: 20
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 8189148262f0996f8082db154f161c03615da530
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="constmemfunt-class"></a>Classe const_mem_fun_t

Classe di adattatori che consente a una funzione membro const che non accetta argomenti di chiamare gli operatori come oggetto funzione unaria una volta inizializzata con un argomento di riferimento.

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

`Pm` Un puntatore alla funzione membro della classe **tipo** da convertire in un oggetto funzione.

`Pleft` L'oggetto che il `Pm` funzione membro viene chiamata su.

## <a name="return-value"></a>Valore restituito

Funzione unaria adattabile.

## <a name="remarks"></a>Note

La classe modello archivia una copia di `Pm`, che deve essere un puntatore a una funzione membro della classe **Type**, in un oggetto membro privato. Definisce la relativa funzione membro `operator()` che restituisce ( `Pleft`->\* `Pm`)() **const**.

## <a name="example"></a>Esempio

Il costruttore di `const_mem_fun_t` non viene usato in genere direttamente. Per adattare le funzioni membro, viene usata la funzione helper `mem_fun`. Per un esempio di come usare gli adattatori di funzione membro, vedere [mem_fun](../standard-library/functional-functions.md#mem_fun).

## <a name="requirements"></a>Requisiti

**Intestazione:** \<functional>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
