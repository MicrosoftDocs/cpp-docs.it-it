---
title: _findclose
ms.date: 11/04/2016
api_name:
- _findclose
api_location:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
- api-ms-win-crt-filesystem-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _findclose
- findclose
helpviewer_keywords:
- _findclose function
- findclose function
ms.assetid: 9216c573-0878-444c-b5d7-cdaf16fb9163
ms.openlocfilehash: c67336cc12bcdee754edd40b91078faa83a17984
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70957327"
---
# <a name="_findclose"></a>_findclose

Chiude l'handle di ricerca specificato e rilascia le risorse associate.

## <a name="syntax"></a>Sintassi

```C
int _findclose(
   intptr_t handle
);
```

### <a name="parameters"></a>Parametri

*gestire*<br/>
Handle di ricerca restituito da una chiamata precedente a **FindFirst**.

## <a name="return-value"></a>Valore restituito

Se ha esito positivo, **_findclose** restituisce 0. In caso contrario, viene restituito-1 e **errno** viene impostato su **ENOENT**, a indicare che non sono stati trovati altri file corrispondenti.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**_findclose**|\<io.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Chiamate di sistema](../../c-runtime-library/system-calls.md)<br/>
[Funzioni di ricerca dei nomi file](../../c-runtime-library/filename-search-functions.md)<br/>
