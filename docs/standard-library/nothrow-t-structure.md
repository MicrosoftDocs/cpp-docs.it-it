---
title: Struttura nothrow_t | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- nothrow_t
dev_langs:
- C++
helpviewer_keywords:
- nothrow_t class
ms.assetid: dc7d5d42-ed5a-4919-88fe-bbad519b7a1d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7a34d9b4e87e2a9036afe7dc12b85fa6d4354209
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33852637"
---
# <a name="nothrowt-structure"></a>Struttura nothrow_t

La struttura viene usata come parametro di funzione di operator new per indicare che la funzione deve restituire un puntatore Null per segnalare un errore di allocazione, anziché generare un'eccezione.

## <a name="syntax"></a>Sintassi

```cpp
struct std::nothrow_t {};
```

## <a name="remarks"></a>Note

La struttura consente al compilatore di selezionare la versione corretta del costruttore. [nothrow](../standard-library/new-functions.md#nothrow) è un sinonimo degli oggetti di tipo `std::nothrow_t`.

## <a name="example"></a>Esempio

Vedere [operator new](../standard-library/new-operators.md#op_new) e [operator new&#91;&#93;](../standard-library/new-operators.md#op_new_arr) per esempi relativi all'uso di `std::nothrow_t` come parametro di funzione.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<new>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
