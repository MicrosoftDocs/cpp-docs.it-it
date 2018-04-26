---
title: memmove, wmemmove | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- memmove
- wmemmove
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
- ntdll.dll
- ucrtbase.dll
apitype: DLLExport
f1_keywords:
- memmove
- wmemmove
dev_langs:
- C++
helpviewer_keywords:
- wmemmove function
- memmove function
ms.assetid: 3a906114-9cf3-40d7-bd99-ee452004f218
caps.latest.revision: 21
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: cd65c2fc73a20c45338348f05736bb71c1f6b772
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="memmove-wmemmove"></a>memmove, wmemmove

Sposta un buffer in un altro. Sono disponibili versioni più sicure di queste funzioni. Vedere [memmove_s, wmemmove_s](memmove-s-wmemmove-s.md).

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

*dest*<br/>
Oggetto di destinazione.

*src*<br/>
Oggetto di origine.

*count*<br/>
Numero di byte (**memmove**) o caratteri (**wmemmove**) da copiare.

## <a name="return-value"></a>Valore restituito

Il valore di *dest*.

## <a name="remarks"></a>Note

Copie *conteggio* byte (**memmove**) o caratteri (**wmemmove**) da *src* a *dest*. Se alcune parti dell'area di origine e di destinazione si sovrappongono, entrambe le funzioni assicurano che i byte di origine originali nell'area sovrapposta vengono copiati prima di essere sovrascritti.

**Nota sulla sicurezza** Assicurarsi che il buffer di destinazione sia della stessa dimensione o più grande del buffer di origine. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](http://msdn.microsoft.com/library/windows/desktop/ms717795).

Il **memmove** e **wmemmove** funzioni verranno deprecate solo se la costante **_CRT_SECURE_DEPRECATE_MEMORY** è definito prima dell'istruzione di inclusione in ordine per le funzioni per essere deprecate, come nell'esempio riportato di seguito:

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
|**memmove**|\<string.h>|
|**wmemmove**|\<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

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

[Modifica del buffer](../../c-runtime-library/buffer-manipulation.md)<br/>
[_memccpy](memccpy.md)<br/>
[memcpy, wmemcpy](memcpy-wmemcpy.md)<br/>
[strcpy, wcscpy, _mbscpy](strcpy-wcscpy-mbscpy.md)<br/>
[strncpy, _strncpy_l, wcsncpy, _wcsncpy_l, _mbsncpy, _mbsncpy_l](strncpy-strncpy-l-wcsncpy-wcsncpy-l-mbsncpy-mbsncpy-l.md)<br/>
