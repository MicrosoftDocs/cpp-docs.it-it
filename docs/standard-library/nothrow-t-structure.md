---
title: Struttura nothrow_t
ms.date: 11/04/2016
f1_keywords:
- nothrow_t
helpviewer_keywords:
- nothrow_t class
ms.assetid: dc7d5d42-ed5a-4919-88fe-bbad519b7a1d
ms.openlocfilehash: bd65b5006326850522a251cbcf7d655133a1aa8a
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68245574"
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
