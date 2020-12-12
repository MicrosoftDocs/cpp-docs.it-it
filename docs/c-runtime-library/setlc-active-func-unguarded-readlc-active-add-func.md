---
description: 'Altre informazioni su: ___setlc_active_func, ___unguarded_readlc_active_add_func'
title: ___setlc_active_func, ___unguarded_readlc_active_add_func
ms.date: 11/04/2016
api_name:
- ___setlc_active_func
- ___unguarded_readlc_active_add_func
api_location:
- msvcr90.dll
- msvcr110_clr0400.dll
- msvcrt.dll
- msvcr110.dll
- msvcr80.dll
- msvcr120.dll
- msvcr100.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- ___unguarded_readlc_active_add_func
- ___setlc_active_func
helpviewer_keywords:
- ___setlc_active_func
- ___unguarded_readlc_active_add_func
ms.assetid: 605ec4e3-81e5-4ece-935a-f434768cc702
ms.openlocfilehash: 85273b52102e9cca2e42ba4401da60b1d292560c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97277088"
---
# <a name="___setlc_active_func-___unguarded_readlc_active_add_func"></a>___setlc_active_func, ___unguarded_readlc_active_add_func

OBSOLETE. CRT esporta queste funzioni interne esclusivamente per mantenere la compatibilità binaria.

## <a name="syntax"></a>Sintassi

```cpp
int ___setlc_active_func(void);
int * ___unguarded_readlc_active_add_func(void);
```

## <a name="return-value"></a>Valore restituito

Il valore restituito non è rilevante.

## <a name="remarks"></a>Commenti

Sebbene le funzioni CRT interne `___setlc_active_func` e `___unguarded_readlc_active_add_func` siano obsolete e non vengano più usate, vengono esportate dalla libreria CRT per mantenere la compatibilità binaria. Lo scopo originale di `___setlc_active_func` è quello di restituire il numero di chiamate alla funzione `setlocale` attualmente attive. Lo scopo originale di `___unguarded_readlc_active_add_func` è quello di restituire il numero di funzioni che fanno riferimento alle impostazioni locali senza bloccarle.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|`___setlc_active_func`, `___unguarded_readlc_active_add_func`|Nessuno|

## <a name="see-also"></a>Vedi anche

[setlocale, _wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md)
