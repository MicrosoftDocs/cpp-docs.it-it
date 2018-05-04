---
title: _get_current_locale | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _get_current_locale
apilocation:
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
- api-ms-win-crt-locale-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- get_current_locale
- __get_current_locale
- _get_current_locale
dev_langs:
- C++
helpviewer_keywords:
- get_current_locale function
- _get_current_locale function
- locales, getting information on
- __get_current_locale function
ms.assetid: 572217f2-a37a-4105-a293-a250b4fabd99
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c658d960953bea2890202bebe280d46dd3407d63
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="getcurrentlocale"></a>_get_current_locale

Ottiene un oggetto locale che rappresenta le impostazioni locali correnti.

## <a name="syntax"></a>Sintassi

```C
_locale_t _get_current_locale(void);
```

## <a name="return-value"></a>Valore restituito

Oggetto locale che rappresenta le impostazioni locali correnti.

## <a name="remarks"></a>Note

Il **get_current_locale** funzione ottiene attualmente impostati dalle impostazioni locali per il thread e restituisce un oggetto delle impostazioni locali che rappresentano tali impostazioni locali.

Il nome precedente di questa funzione, **get_current_locale** (con due caratteri di sottolineatura iniziali) è stato deprecato.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_get_current_locale**|\<locale.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[setlocale, _wsetlocale](setlocale-wsetlocale.md)<br/>
[_create_locale, _wcreate_locale](create-locale-wcreate-locale.md)<br/>
[_free_locale](free-locale.md)<br/>
