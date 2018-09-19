---
title: ___lc_locale_name_func | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
apiname:
- ___lc_locale_name_func
apilocation:
- msvcrt.dll
- msvcr110.dll
- msvcr100.dll
- msvcr90.dll
- msvcr120.dll
- msvcr80.dll
- msvcr110_clr0400.dll
apitype: DLLExport
f1_keywords:
- ___lc_locale_name_func
dev_langs:
- C++
helpviewer_keywords:
- ___lc_locale_name_func
ms.assetid: ef858308-872e-43de-95e0-9b1b4084343e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: eb94b73bf3f32c61fae37f7d3c9b9c51d012bfb6
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46087916"
---
# <a name="lclocalenamefunc"></a>___lc_locale_name_func

Funzione CRT interna. Recupera l'attuale nome delle impostazioni locali del thread.

## <a name="syntax"></a>Sintassi

```cpp
wchar_t** ___lc_locale_name_func(void);
```

## <a name="return-value"></a>Valore restituito

Puntatore a una stringa che contiene l'attuale nome delle impostazioni locali del thread.

## <a name="remarks"></a>Note

`___lc_locale_name_func` è una funzione CRT interna che viene usata da altre funzioni CRT per ottenere l'attuale nome delle impostazioni locali dall'archiviazione locale di thread per i dati CRT. Queste informazioni sono disponibili anche usando la funzione [_get_current_locale](../c-runtime-library/reference/get-current-locale.md) o le funzioni [setlocale, _wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md).

Le funzioni CRT interne sono specifiche dell'implementazione e soggette a modifica a ogni rilascio. Se ne sconsiglia l'uso nel codice.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|`___lc_locale_name_func`|crt\src\setlocal.h|

## <a name="see-also"></a>Vedere anche

[_get_current_locale](../c-runtime-library/reference/get-current-locale.md)<br/>
[setlocale, _wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md)<br/>
[_create_locale, _wcreate_locale](../c-runtime-library/reference/create-locale-wcreate-locale.md)<br/>
[_free_locale](../c-runtime-library/reference/free-locale.md)