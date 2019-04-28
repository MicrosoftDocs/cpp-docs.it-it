---
title: memcpy_s, wmemcpy_s
ms.date: 11/04/2016
apiname:
- memcpy_s
- wmemcpy_s
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
- api-ms-win-crt-string-l1-1-0.dll
- ntoskrnl.exe
apitype: DLLExport
f1_keywords:
- wmemcpy_s
- memcpy_s
helpviewer_keywords:
- memcpy_s function
- wmemcpy_s function
ms.assetid: 5504e20a-83d9-4063-91fc-3f55f7dabe99
ms.openlocfilehash: 802d75307096e649df15b1864b99699fba92a3a1
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62285334"
---
# <a name="memcpys-wmemcpys"></a>memcpy_s, wmemcpy_s

Copia i byte tra i buffer. Queste sono versioni di [memcpy, wmemcpy](memcpy-wmemcpy.md) con miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
errno_t memcpy_s(
   void *dest,
   size_t destSize,
   const void *src,
   size_t count
);
errno_t wmemcpy_s(
   wchar_t *dest,
   size_t destSize,
   const wchar_t *src,
   size_t count
);
```

### <a name="parameters"></a>Parametri

*dest*<br/>
Nuovo buffer.

*destSize*<br/>
Dimensione del buffer di destinazione, in byte per memcpy_s e in caratteri wide (wchar_t) per wmemcpy_s.

*src*<br/>
Buffer da cui copiare.

*count*<br/>
Numero di caratteri da copiare.

## <a name="return-value"></a>Valore restituito

Zero se con esito positivo; un codice di errore in caso di errore.

### <a name="error-conditions"></a>Condizioni di errore

|*dest*|*destSize*|*src*|*count*|Valore restituito|Contenuto di *dest*|
|------------|----------------|-----------|---|------------------|------------------------|
|qualsiasi|qualsiasi|qualsiasi|0|0|Non modificato|
|**NULL**|qualsiasi|qualsiasi|non zero|**EINVAL**|Non modificato|
|qualsiasi|qualsiasi|**NULL**|non zero|**EINVAL**|*dest* è azzerato|
|qualsiasi|< *count*|qualsiasi|non zero|**ERANGE**|*dest* è azzerato|

## <a name="remarks"></a>Note

**memcpy_s** copie *conteggio* byte dal *src* alla *dest*; **wmemcpy_s** copie *conteggio* caratteri "wide" (due byte). Se l'origine e destinazione si sovrappongono, il comportamento delle **memcpy_s** è definito. Uso **memmove_s** per gestire le aree di sovrapposizione.

Queste funzioni convalidano i relativi parametri. Se *conteggio* è diverso da zero e *dest* oppure *src* è un puntatore null, o *destSize* inferiori *conteggio*, queste funzioni richiamano il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono **EINVAL** oppure **ERANGE** e impostare **errno** al valore restituito.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**memcpy_s**|\<memory.h> o \<string.h>|
|**wmemcpy_s**|\<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_memcpy_s.c
// Copy memory in a more secure way.

#include <memory.h>
#include <stdio.h>

int main()
{
   int a1[10], a2[100], i;
   errno_t err;

   // Populate a2 with squares of integers
   for (i = 0; i < 100; i++)
   {
      a2[i] = i*i;
   }

   // Tell memcpy_s to copy 10 ints (40 bytes), giving
   // the size of the a1 array (also 40 bytes).
   err = memcpy_s(a1, sizeof(a1), a2, 10 * sizeof (int) );
   if (err)
   {
      printf("Error executing memcpy_s.\n");
   }
   else
   {
     for (i = 0; i < 10; i++)
       printf("%d ", a1[i]);
   }
   printf("\n");
}
```

```Output
0 1 4 9 16 25 36 49 64 81
```

## <a name="see-also"></a>Vedere anche

[Modifica del buffer](../../c-runtime-library/buffer-manipulation.md)<br/>
[_memccpy](memccpy.md)<br/>
[memchr, wmemchr](memchr-wmemchr.md)<br/>
[memcmp, wmemcmp](memcmp-wmemcmp.md)<br/>
[memmove, wmemmove](memmove-wmemmove.md)<br/>
[memset, wmemset](memset-wmemset.md)<br/>
[strcpy, wcscpy, _mbscpy](strcpy-wcscpy-mbscpy.md)<br/>
[strncpy, _strncpy_l, wcsncpy, _wcsncpy_l, _mbsncpy, _mbsncpy_l](strncpy-strncpy-l-wcsncpy-wcsncpy-l-mbsncpy-mbsncpy-l.md)<br/>
[strncpy_s, _strncpy_s_l, wcsncpy_s, _wcsncpy_s_l, _mbsncpy_s, _mbsncpy_s_l](strncpy-s-strncpy-s-l-wcsncpy-s-wcsncpy-s-l-mbsncpy-s-mbsncpy-s-l.md)<br/>
