---
description: 'Altre informazioni su: ___lc_locale_name_func'
title: ___lc_locale_name_func
ms.date: 1/14/2021
api_name:
- ___lc_locale_name_func
- _o____lc_locale_name_func
api_location:
- msvcrt.dll
- msvcr110.dll
- msvcr100.dll
- msvcr90.dll
- msvcr120.dll
- msvcr80.dll
- msvcr110_clr0400.dll
- api-ms-win-crt-private-l1-1-0.dll
- api-ms-win-crt-locale-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- ___lc_locale_name_func
helpviewer_keywords:
- ___lc_locale_name_func
ms.assetid: ef858308-872e-43de-95e0-9b1b4084343e
ms.openlocfilehash: 4747b64c0fc61e0f5d77eacb92c04c9f6d2e2759
ms.sourcegitcommit: 1cd8f8a75fd036ffa57bc70f3ca869042d8019d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/15/2021
ms.locfileid: "98242865"
---
# <a name="___lc_locale_name_func"></a>___lc_locale_name_func

Funzione CRT interna. Recupera l'attuale nome delle impostazioni locali del thread.

## <a name="syntax"></a>Sintassi

```cpp
wchar_t** ___lc_locale_name_func(void);
```

## <a name="return-value"></a>Valore restituito

Puntatore a una stringa che contiene l'attuale nome delle impostazioni locali del thread.

## <a name="remarks"></a>Commenti

`___lc_locale_name_func` è una funzione CRT interna che viene usata da altre funzioni CRT per ottenere l'attuale nome delle impostazioni locali dall'archiviazione locale di thread per i dati CRT. Queste informazioni sono disponibili anche usando la funzione [_get_current_locale](../c-runtime-library/reference/get-current-locale.md) o le funzioni [setlocale, _wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md).

Le funzioni CRT interne sono specifiche dell'implementazione e soggette a modifica a ogni rilascio. Se ne sconsiglia l'uso nel codice.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|`___lc_locale_name_func`|crt\src\setlocal.h|

## <a name="see-also"></a>Vedere anche

[_get_current_locale](../c-runtime-library/reference/get-current-locale.md)<br/>
[setlocale, _wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md)<br/>
[_create_locale, _wcreate_locale](../c-runtime-library/reference/create-locale-wcreate-locale.md)<br/>
[_free_locale](../c-runtime-library/reference/free-locale.md)
