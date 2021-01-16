---
description: 'Altre informazioni su: memmove, wmemmove'
title: memmove, wmemmove
ms.date: 1/14/2021
api_name:
- memmove
- wmemmove
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
- ntdll.dll
- ucrtbase.dll
- ntoskrnl.exe
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- memmove
- wmemmove
helpviewer_keywords:
- wmemmove function
- memmove function
ms.openlocfilehash: 6f9942c232710585aa5837510f0f04e5db36fb2a
ms.sourcegitcommit: 1cd8f8a75fd036ffa57bc70f3ca869042d8019d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/15/2021
ms.locfileid: "98243125"
---
# <a name="memmove-wmemmove"></a>`memmove`, `wmemmove`

Sposta un buffer in un altro. Sono disponibili versioni più sicure di queste funzioni. vedere [ `memmove_s` , `wmemmove_s` ](memmove-s-wmemmove-s.md).

## <a name="syntax"></a>Sintassi

```C
void *memmove(
   void *dest,
   const void *src,
   size_t count
);
wchar_t *wmemmove(
   wchar_t *dest,
   const wchar_t *src,
   size_t count
);
```

### <a name="parameters"></a>Parametri

*`dest`*\
Oggetto di destinazione.

*`src`*\
Oggetto di origine.

*`count`*\
Numero di byte ( **`memmove`** ) o caratteri ( **`wmemmove`** ) da copiare.

## <a name="return-value"></a>Valore restituito

Valore di *`dest`* .

## <a name="remarks"></a>Commenti

Copia *`count`* byte ( **`memmove`** ) o caratteri ( **`wmemmove`** ) da *`src`* a *`dest`* . Se alcune parti dell'area di origine e di destinazione si sovrappongono, entrambe le funzioni assicurano che i byte di origine originali nell'area sovrapposta vengono copiati prima di essere sovrascritti.

**Nota sulla sicurezza** Assicurarsi che il buffer di destinazione sia della stessa dimensione o più grande del buffer di origine. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](/windows/win32/SecBP/avoiding-buffer-overruns).

Le **`memmove`** **`wmemmove`** funzioni e verranno deprecate solo se la costante **`_CRT_SECURE_DEPRECATE_MEMORY`** è definita prima dell'istruzione di inclusione in modo che le funzioni vengano deprecate, come nell'esempio seguente:

```C
#define _CRT_SECURE_DEPRECATE_MEMORY
#include <string.h>
```

oppure

```C
#define _CRT_SECURE_DEPRECATE_MEMORY
#include <wchar.h>
```

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**`memmove`**|`<string.h>`|
|**`wmemmove`**|`<wchar.h>`|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_memcpy.c
// Illustrate overlapping copy: memmove
// always handles it correctly; memcpy may handle
// it correctly.
//

#include <memory.h>
#include <string.h>
#include <stdio.h>

char str1[7] = "aabbcc";

int main( void )
{
   printf( "The string: %s\n", str1 );
   memcpy( str1 + 2, str1, 4 );
   printf( "New string: %s\n", str1 );

   strcpy_s( str1, sizeof(str1), "aabbcc" );   // reset string

   printf( "The string: %s\n", str1 );
   memmove( str1 + 2, str1, 4 );
   printf( "New string: %s\n", str1 );
}
```

```Output
The string: aabbcc
New string: aaaabb
The string: aabbcc
New string: aaaabb
```

## <a name="see-also"></a>Vedere anche

[Manipolazione del buffer](../../c-runtime-library/buffer-manipulation.md)\
[`_memccpy`](memccpy.md)\
[`memcpy`, `wmemcpy`](memcpy-wmemcpy.md)\
[`strcpy`, `wcscpy`, `_mbscpy`](strcpy-wcscpy-mbscpy.md)\
[`strncpy`, `_strncpy_l`, `wcsncpy`, `_wcsncpy_l`, `_mbsncpy`, `_mbsncpy_l`](strncpy-strncpy-l-wcsncpy-wcsncpy-l-mbsncpy-mbsncpy-l.md)\
