---
description: 'Altre informazioni su: _setjmp3'
title: _setjmp3
ms.date: 1/14/2021
api_name:
- _setjmp3
api_location:
- msvcrt.dll
- msvcr90.dll
- msvcr110.dll
- msvcr80.dll
- msvcr110_clr0400.dll
- msvcr100.dll
- msvcr120.dll
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- setjmp3
- _setjmp3
helpviewer_keywords:
- _setjmp3 function
- setjmp3 function
ms.assetid: 6129c2f3-8bac-4fdb-a827-44e1eebba500
ms.openlocfilehash: 9d65f807c34d926485777d49156061196dfc0948
ms.sourcegitcommit: 1cd8f8a75fd036ffa57bc70f3ca869042d8019d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/15/2021
ms.locfileid: "98243099"
---
# `_setjmp3`

Funzione CRT interna. Nuova implementazione della funzione `setjmp`.

## <a name="syntax"></a>Sintassi

```
int _setjmp3(
   OUT jmp_buf env,
   int count,
   (optional parameters)
);
```

#### <a name="parameters"></a>Parametri

*`env`*\
[out] Indirizzo del buffer per l'archiviazione di informazioni sullo stato.

*`count`*\
[in] Numero di `DWORD` aggiuntivi di informazioni archiviati in `optional parameters`.

*`optional parameters`*\
[in] Dati aggiuntivi propagati da `setjmp` intrinseco. Il primo `DWORD` è un puntatore a funzione usato per rimuovere i dati in eccesso e tornare a uno stato di registro non volatile. Il secondo `DWORD` è il livello Try da ripristinare. Eventuali altri dati sono salvati nella matrice di dati generica in `jmp_buf`.

## <a name="return-value"></a>Valore restituito

Restituisce sempre 0.

## <a name="remarks"></a>Commenti

Non usare questa funzione in un programma C++. Si tratta di una funzione intrinseca che non supporta C++. Per altre informazioni sull'uso di `setjmp`, vedere [Uso di setjmp/longjmp](../cpp/using-setjmp-longjmp.md).

## <a name="requirements"></a>Requisiti

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](../c-runtime-library/reference/crt-alphabetical-function-reference.md)\
[`setjmp`](../c-runtime-library/reference/setjmp.md)
