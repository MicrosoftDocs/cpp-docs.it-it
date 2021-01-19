---
title: memset, wmemset
description: 'Altre informazioni su: memset, wmemset'
ms.date: 1/15/2021
api_name:
- wmemset
- memset
- _o_memset
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
- api-ms-win-crt-string-l1-1-0.dll
- ntoskrnl.exe
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- memset
- wmemset
helpviewer_keywords:
- wmemset function
- memset function
ms.openlocfilehash: 1ee5b3cb3653a3d5486eecb0f3b033e69d9db9fa
ms.sourcegitcommit: 92dc6d99ba5dcf3b64dee164df2d29beb1e608da
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/18/2021
ms.locfileid: "98563965"
---
# <a name="memset-wmemset"></a>`memset`, `wmemset`

Imposta i buffer su un carattere specificato.

## <a name="syntax"></a>Sintassi

```C
void *memset(
   void *dest,
   int c,
   size_t count
);
wchar_t *wmemset(
   wchar_t *dest,
   wchar_t c,
   size_t count
);
```

### <a name="parameters"></a>Parametri

*`dest`*\
Puntatore alla destinazione.

*`c`*\
Carattere da impostare.

*`count`*\
Numero di caratteri.

## <a name="return-value"></a>Valore restituito

Valore di *`dest`* .

## <a name="remarks"></a>Commenti

Imposta i primi *`count`* caratteri di sul *`dest`* carattere *`c`* .

**Nota sulla sicurezza** Verificare che il buffer di destinazione disponga di spazio sufficiente per almeno *`count`* caratteri. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](/windows/win32/SecBP/avoiding-buffer-overruns).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**`memset`**|`<memory.h>` o `<string.h>`|
|**`wmemset`**|`<wchar.h>`|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

```C
// crt_memset.c
/* This program uses memset to
* set the first four chars of buffer to "*".
*/

#include <memory.h>
#include <stdio.h>

int main( void )
{
   char buffer[] = "This is a test of the memset function";

   printf( "Before: %s\n", buffer );
   memset( buffer, '*', 4 );
   printf( "After:  %s\n", buffer );
}
```

### <a name="output"></a>Output

```Output
Before: This is a test of the memset function
After:  **** is a test of the memset function
```

Ecco un esempio dell'uso di wmemset:

```C
// crt_wmemset.c
/* This program uses memset to
* set the first four chars of buffer to "*".
*/

#include <wchar.h>
#include <stdio.h>

int main( void )
{
   wchar_t buffer[] = L"This is a test of the wmemset function";

   wprintf( L"Before: %s\n", buffer );
   wmemset( buffer, '*', 4 );
   wprintf( L"After:  %s\n", buffer );
}
```

### <a name="output"></a>Output

```Output
Before: This is a test of the wmemset function
After:  **** is a test of the wmemset function
```

## <a name="see-also"></a>Vedere anche

[Manipolazione del buffer](../../c-runtime-library/buffer-manipulation.md)\
[`_memccpy`](memccpy.md)\
[`memchr`, `wmemchr`](memchr-wmemchr.md)\
[`memcmp`, `wmemcmp`](memcmp-wmemcmp.md)\
[`memcpy`, wmemcpy](memcpy-wmemcpy.md)\
[`_strnset, _strnset_l, _wcsnset, _wcsnset_l, _mbsnset, _mbsnset_l`](strnset-strnset-l-wcsnset-wcsnset-l-mbsnset-mbsnset-l.md)