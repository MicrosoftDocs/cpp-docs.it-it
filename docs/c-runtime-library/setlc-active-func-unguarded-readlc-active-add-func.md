---
title: ___setlc_active_func, ___unguarded_readlc_active_add_func
ms.date: 11/04/2016
apiname:
- ___setlc_active_func
- ___unguarded_readlc_active_add_func
apilocation:
- msvcr90.dll
- msvcr110_clr0400.dll
- msvcrt.dll
- msvcr110.dll
- msvcr80.dll
- msvcr120.dll
- msvcr100.dll
apitype: DLLExport
f1_keywords:
- ___unguarded_readlc_active_add_func
- ___setlc_active_func
helpviewer_keywords:
- ___setlc_active_func
- ___unguarded_readlc_active_add_func
ms.assetid: 605ec4e3-81e5-4ece-935a-f434768cc702
ms.openlocfilehash: 244bb5b0bd6a15dab2de1ad2d6b71c2ae2f850bb
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57743983"
---
# <a name="setlcactivefunc-unguardedreadlcactiveaddfunc"></a>___setlc_active_func, ___unguarded_readlc_active_add_func

OBSOLETE. CRT esporta queste funzioni interne esclusivamente per mantenere la compatibilità binaria.

## <a name="syntax"></a>Sintassi

```cpp
int ___setlc_active_func(void);
int * ___unguarded_readlc_active_add_func(void);
```

## <a name="return-value"></a>Valore restituito

Il valore restituito non è rilevante.

## <a name="remarks"></a>Osservazioni

Sebbene le funzioni CRT interne `___setlc_active_func` e `___unguarded_readlc_active_add_func` siano obsolete e non vengano più usate, vengono esportate dalla libreria CRT per mantenere la compatibilità binaria. Lo scopo originale di `___setlc_active_func` è quello di restituire il numero di chiamate alla funzione `setlocale` attualmente attive. Lo scopo originale di `___unguarded_readlc_active_add_func` è quello di restituire il numero di funzioni che fanno riferimento alle impostazioni locali senza bloccarle.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|`___setlc_active_func`, `___unguarded_readlc_active_add_func`|none|

## <a name="see-also"></a>Vedere anche

[setlocale, _wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md)
