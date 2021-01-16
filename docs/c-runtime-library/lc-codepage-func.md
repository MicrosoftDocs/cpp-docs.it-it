---
description: 'Altre informazioni su: ___lc_codepage_func'
title: ___lc_codepage_func
ms.date: 1/14/2021
api_name:
- ___lc_codepage_func
- _o____lc_codepage_func
api_location:
- msvcr120.dll
- msvcr110_clr0400.dll
- msvcr80.dll
- msvcr100.dll
- msvcr90.dll
- msvcr110.dll
- msvcrt.dll
- api-ms-win-crt-private-l1-1-0.dll
- api-ms-win-crt-locale-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- lc_codepage_func
- ___lc_codepage_func
helpviewer_keywords:
- ___lc_codepage_func
ms.assetid: 6a663bd0-5a63-4a2f-9507-872ec1582aae
ms.openlocfilehash: afe49a10498f65c01b501874b602079e79af3be8
ms.sourcegitcommit: 1cd8f8a75fd036ffa57bc70f3ca869042d8019d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/15/2021
ms.locfileid: "98242982"
---
# <a name="___lc_codepage_func"></a>___lc_codepage_func

Funzione CRT interna. Recupera la pagina del codice corrente del thread.

## <a name="syntax"></a>Sintassi

```cpp
UINT ___lc_codepage_func(void);
```

## <a name="return-value"></a>Valore restituito

Pagina del codice corrente del thread.

## <a name="remarks"></a>Commenti

`___lc_codepage_func` è una funzione CRT interna che viene usata da altre funzioni CRT per ottenere la tabella codici corrente delle regole di confronto dall'archiviazione locale del thread per i dati di CRT. Queste informazioni sono disponibili anche usando la funzione [_get_current_locale](../c-runtime-library/reference/get-current-locale.md).

Una *tabella codici* è un mapping di codici a un byte o a byte doppio su singoli caratteri. Diverse tabelle codici contengono caratteri speciali differenti, in genere personalizzati per un linguaggio o per un gruppo di linguaggi. Per altre informazioni sulle tabelle codici, vedere [Tabelle codici](../c-runtime-library/code-pages.md).

Le funzioni CRT interne sono specifiche dell'implementazione e soggette a modifica a ogni rilascio. Se ne sconsiglia l'uso nel codice.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|`___lc_codepage_func`|crt\src\setlocal.h|

## <a name="see-also"></a>Vedere anche

[_get_current_locale](../c-runtime-library/reference/get-current-locale.md)<br/>
[setlocale, _wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md)<br/>
[_create_locale, _wcreate_locale](../c-runtime-library/reference/create-locale-wcreate-locale.md)<br/>
[_free_locale](../c-runtime-library/reference/free-locale.md)
