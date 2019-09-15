---
title: ___lc_collate_cp_func
ms.date: 11/04/2016
api_name:
- ___lc_collate_cp_func
api_location:
- msvcr120.dll
- msvcrt.dll
- msvcr100.dll
- msvcr80.dll
- msvcr110_clr0400.dll
- msvcr110.dll
- msvcr90.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- ___lc_collate_cp_func
helpviewer_keywords:
- ___lc_collate_cp_func
ms.assetid: 46ccc084-7ac9-4e5d-9138-e12cb5845615
ms.openlocfilehash: d6a857760bf3b76481cc608ef8f015bca207f35f
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70940147"
---
# <a name="___lc_collate_cp_func"></a>___lc_collate_cp_func

Funzione CRT interna. Recupera l'attuale tabella codici delle regole di confronto del thread.

## <a name="syntax"></a>Sintassi

```cpp
UINT ___lc_codepage_func(void);
```

## <a name="return-value"></a>Valore restituito

Attuale tabella codici delle regole di confronto del thread.

## <a name="remarks"></a>Note

`___lc_collate_cp_func` è una funzione CRT interna che viene usata da altre funzioni CRT per ottenere l'attuale tabella codici delle regole di confronto dall'archiviazione locale di thread per i dati di CRT. Queste informazioni sono disponibili anche usando la funzione [_get_current_locale](../c-runtime-library/reference/get-current-locale.md).

Le funzioni CRT interne sono specifiche dell'implementazione e soggette a modifica a ogni rilascio. Se ne sconsiglia l'uso nel codice.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|`___lc_collate_cp_func`|crt\src\setlocal.h|

## <a name="see-also"></a>Vedere anche

[_get_current_locale](../c-runtime-library/reference/get-current-locale.md)<br/>
[setlocale, _wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md)<br/>
[_create_locale, _wcreate_locale](../c-runtime-library/reference/create-locale-wcreate-locale.md)<br/>
[_free_locale](../c-runtime-library/reference/free-locale.md)
