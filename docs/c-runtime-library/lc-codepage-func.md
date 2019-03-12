---
title: ___lc_codepage_func
ms.date: 11/04/2016
apiname:
- ___lc_codepage_func
apilocation:
- msvcr120.dll
- msvcr110_clr0400.dll
- msvcr80.dll
- msvcr100.dll
- msvcr90.dll
- msvcr110.dll
- msvcrt.dll
apitype: DLLExport
f1_keywords:
- lc_codepage_func
- ___lc_codepage_func
helpviewer_keywords:
- ___lc_codepage_func
ms.assetid: 6a663bd0-5a63-4a2f-9507-872ec1582aae
ms.openlocfilehash: aebd978839cc59c94c01e9c24432b69add72c4dc
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57751339"
---
# <a name="lccodepagefunc"></a>___lc_codepage_func

Funzione CRT interna. Recupera la pagina del codice corrente del thread.

## <a name="syntax"></a>Sintassi

```cpp
UINT ___lc_codepage_func(void);
```

## <a name="return-value"></a>Valore restituito

Pagina del codice corrente del thread.

## <a name="remarks"></a>Osservazioni

`___lc_codepage_func` è una funzione CRT interna che viene usata da altre funzioni CRT per ottenere la tabella codici corrente delle regole di confronto dall'archiviazione locale del thread per i dati di CRT. Queste informazioni sono disponibili anche usando la funzione [_get_current_locale](../c-runtime-library/reference/get-current-locale.md).

Una *tabella codici* è un mapping di codici a un byte o a byte doppio su singoli caratteri. Diverse tabelle codici contengono caratteri speciali differenti, in genere personalizzati per un linguaggio o per un gruppo di linguaggi. Per altre informazioni sulle tabelle codici, vedere [Code Pages](../c-runtime-library/code-pages.md).

Le funzioni CRT interne sono specifiche dell'implementazione e soggette a modifica a ogni rilascio. Se ne sconsiglia l'uso nel codice.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|`___lc_codepage_func`|crt\src\setlocal.h|

## <a name="see-also"></a>Vedere anche

[_get_current_locale](../c-runtime-library/reference/get-current-locale.md)<br/>
[setlocale, _wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md)<br/>
[_create_locale, _wcreate_locale](../c-runtime-library/reference/create-locale-wcreate-locale.md)<br/>
[_free_locale](../c-runtime-library/reference/free-locale.md)
