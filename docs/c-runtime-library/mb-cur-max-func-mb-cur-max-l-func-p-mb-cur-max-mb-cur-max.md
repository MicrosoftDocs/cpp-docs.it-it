---
description: 'Altre informazioni su: ___mb_cur_max_func, ___mb_cur_max_l_func, __p___mb_cur_max, __mb_cur_max'
title: ___mb_cur_max_func, ___mb_cur_max_l_func, __p___mb_cur_max, __mb_cur_max
ms.date: 4/2/2020
api_name:
- ___mb_cur_max_l_func
- __p___mb_cur_max
- ___mb_cur_max_func
- __mb_cur_max
- _o____mb_cur_max_func
api_location:
- msvcr110_clr0400.dll
- msvcr110.dll
- msvcr80.dll
- msvcr100.dll
- msvcrt.dll
- msvcr90.dll
- msvcr120.dll
- api-ms-win-crt-locale-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
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
ms.openlocfilehash: 1308dbe969f8b6638835f52ec1e7a2cdcd63bb7f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97321162"
---
# <a name="___mb_cur_max_func-___mb_cur_max_l_func-__p___mb_cur_max-__mb_cur_max"></a>___mb_cur_max_func, ___mb_cur_max_l_func, __p___mb_cur_max, __mb_cur_max

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

## <a name="remarks"></a>Commenti

Si tratta di una funzione interna usata da CRT per recuperare il valore attuale della macro [MB_CUR_MAX](../c-runtime-library/mb-cur-max.md) dall'archivio thread-local. Per la portabilità, è consigliabile usare la macro `MB_CUR_MAX` nel codice.

La macro `__mb_cur_max` rappresenta un metodo conveniente per chiamare la funzione `___mb_cur_max_func()`. La funzione `__p___mb_cur_max` viene definita per compatibilità con Visual C++ 5.0 e versioni precedenti.

Le funzioni CRT interne sono specifiche dell'implementazione e soggette a modifica a ogni rilascio. Se ne sconsiglia l'uso nel codice.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|`___mb_cur_max_func`, `___mb_cur_max_l_func`, `__p___mb_cur_max`|\<ctype.h>, \<stdlib.h>|

## <a name="see-also"></a>Vedi anche

[MB_CUR_MAX](../c-runtime-library/mb-cur-max.md)
