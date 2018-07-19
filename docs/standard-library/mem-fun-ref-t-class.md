---
title: Classe mem_fun_ref_t | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- xfunctional/std::mem_fun_ref_t
dev_langs:
- C++
helpviewer_keywords:
- mem_fun_ref_t class
ms.assetid: 7dadcac3-8d33-4e4b-a792-81bd53d3df39
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: fc0684d51fd406f16588188555f67fcebb351fbf
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38956098"
---
# <a name="memfunreft-class"></a>Classe mem_fun_ref_t

Classe di adattatori che consente un `non_const` funzione membro che non accetta argomenti di essere chiamata come oggetto funzione unaria se inizializzata con un argomento di riferimento.

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

*_Pm* un puntatore alla funzione membro della classe `Type` da convertire in un oggetto funzione.

*a sinistra* dell'oggetto che il *_Pm* funzione membro viene chiamata su.

## <a name="return-value"></a>Valore restituito

Funzione unaria adattabile.

## <a name="remarks"></a>Note

La classe modello archivia una copia della *_Pm*, che deve essere un puntatore a una funzione membro della classe `Type`, in un oggetto membro privato. Definisce la relativa funzione membro `operator()` che restituisce ( **left**.* `_Pm`)( ).

## <a name="example"></a>Esempio

Il costruttore di `mem_fun_ref_t` non viene usato in genere direttamente. Per adattare le funzioni membro, viene usata la funzione helper `mem_fun_ref`. Per un esempio di come usare gli adattatori di funzione membro, vedere [mem_fun_ref](../standard-library/functional-functions.md#mem_fun_ref).

## <a name="requirements"></a>Requisiti

**Intestazione:** \<functional>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
