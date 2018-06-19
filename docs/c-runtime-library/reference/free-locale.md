---
title: _free_locale | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _free_locale
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
- __free_locale
- free_locale
- _free_locale
dev_langs:
- C++
helpviewer_keywords:
- __free_locale function
- free_locale function
- locales, freeing
- _free_locale function
ms.assetid: 1f08d348-ab32-4028-a145-6cbd51b49af9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0b74725ddd7884bcc714e1048b28c53f201ebe4e
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32397132"
---
# <a name="freelocale"></a>_free_locale

Libera un oggetto delle impostazioni locali.

## <a name="syntax"></a>Sintassi

```C
void _free_locale(
   _locale_t locale
);
```

### <a name="parameters"></a>Parametri

*impostazioni locali* oggetto impostazioni locali da liberare.

## <a name="remarks"></a>Note

Il **free_locale** funzione viene utilizzata per liberare l'oggetto delle impostazioni locali ottenuto da una chiamata a **get_current_locale** oppure **create_locale**.

Il nome precedente di questa funzione, **free_locale** (con due caratteri di sottolineatura iniziali) è stato deprecato.

## <a name="requirements"></a>Requisiti

|**Routine**|Intestazione obbligatoria|
|---------------|---------------------|
|**_free_locale**|\<locale.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[_get_current_locale](get-current-locale.md)<br/>
[_create_locale, _wcreate_locale](create-locale-wcreate-locale.md)<br/>
