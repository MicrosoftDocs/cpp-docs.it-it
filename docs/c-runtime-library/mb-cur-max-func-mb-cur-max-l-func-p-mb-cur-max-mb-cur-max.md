---
title: ___mb_cur_max_func, ___mb_cur_max_l_func, __p___mb_cur_max, __mb_cur_max
ms.date: 11/04/2016
apiname:
- ___mb_cur_max_l_func
- __p___mb_cur_max
- ___mb_cur_max_func
- __mb_cur_max
apilocation:
- msvcr110_clr0400.dll
- msvcr110.dll
- msvcr80.dll
- msvcr100.dll
- msvcrt.dll
- msvcr90.dll
- msvcr120.dll
- api-ms-win-crt-locale-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- ___mb_cur_max_func
- ___mb_cur_max_l_func
- __p___mb_cur_max
- __mb_cur_max
helpviewer_keywords:
- __mb_cur_max
- ___mb_cur_max_func
- ___mb_cur_max_l_func
- __p___mb_cur_max
ms.assetid: 60d36108-1ca7-45a6-8ce7-68a91f13e3a1
ms.openlocfilehash: e59f487825b49c8ee6fefe41b41100b571619c6c
ms.sourcegitcommit: e98671a4f741b69d6277da02e6b4c9b1fd3c0ae5
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 02/04/2019
ms.locfileid: "55702791"
---
# <a name="mbcurmaxfunc-mbcurmaxlfunc-pmbcurmax-mbcurmax"></a>___mb_cur_max_func, ___mb_cur_max_l_func, __p___mb_cur_max, __mb_cur_max

Funzione CRT interna. Recupera il numero massimo di byte in un carattere multibyte per le impostazioni locali attuali o specificate.

## <a name="syntax"></a>Sintassi

```cpp
int ___mb_cur_max_func(void);
int ___mb_cur_max_l_func(_locale_t locale);
int * __p___mb_cur_max(void);
#define __mb_cur_max (___mb_cur_max_func())
```

#### <a name="parameters"></a>Parametri

locale - Struttura di impostazioni locali da cui recuperare il risultato. Se il valore è null, verranno usate le impostazioni locali correnti.

## <a name="return-value"></a>Valore restituito

Numero massimo di byte in un carattere multibyte per le impostazioni locali del thread corrente o per le impostazioni specificate.

## <a name="remarks"></a>Note

Si tratta di una funzione interna usata da CRT per recuperare il valore attuale della macro [MB_CUR_MAX](../c-runtime-library/mb-cur-max.md) dall'archivio thread-local. Per la portabilità, è consigliabile usare la macro `MB_CUR_MAX` nel codice.

La macro `__mb_cur_max` rappresenta un metodo conveniente per chiamare la funzione `___mb_cur_max_func()`. La funzione `__p___mb_cur_max` viene definita per compatibilità con Visual C++ 5.0 e versioni precedenti.

Le funzioni CRT interne sono specifiche dell'implementazione e soggette a modifica a ogni rilascio. Se ne sconsiglia l'uso nel codice.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|`___mb_cur_max_func`, `___mb_cur_max_l_func`, `__p___mb_cur_max`|\<ctype.h>, \<stdlib.h>|

## <a name="see-also"></a>Vedere anche

[MB_CUR_MAX](../c-runtime-library/mb-cur-max.md)