---
description: 'Altre informazioni su: _free_locale'
title: _free_locale
ms.date: 4/2/2020
api_name:
- _free_locale
- _o__free_locale
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
- api-ms-win-crt-locale-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- __free_locale
- free_locale
- _free_locale
helpviewer_keywords:
- __free_locale function
- free_locale function
- locales, freeing
- _free_locale function
ms.assetid: 1f08d348-ab32-4028-a145-6cbd51b49af9
ms.openlocfilehash: 441686a1ee037097c164ae60b4ccc418f0d38ac8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97211271"
---
# <a name="_free_locale"></a>_free_locale

Libera un oggetto delle impostazioni locali.

## <a name="syntax"></a>Sintassi

```C
void _free_locale(
   _locale_t locale
);
```

### <a name="parameters"></a>Parametri

*locale*<br/>
L'oggetto delle impostazioni locali da liberare.

## <a name="remarks"></a>Commenti

La funzione **_free_locale** viene utilizzata per liberare l'oggetto delle impostazioni locali ottenuto da una chiamata a **_get_current_locale** o **_create_locale**.

Il nome precedente di questa funzione, **__free_locale** (con due caratteri di sottolineatura iniziali), è stato deprecato.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|**Routine**|Intestazione obbligatoria|
|---------------|---------------------|
|**_free_locale**|\<locale.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedi anche

[_get_current_locale](get-current-locale.md)<br/>
[_create_locale, _wcreate_locale](create-locale-wcreate-locale.md)<br/>
