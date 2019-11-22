---
title: memcpy, wmemcpy
ms.date: 11/04/2016
api_name:
- memcpy
- wmemcpy
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
- ntoskrnl.exe
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- wmemcpy
- memcpy
helpviewer_keywords:
- wmemcpy function
- memcpy function
ms.assetid: 34abb90b-bffb-46dc-a2f3-a5e9940839d6
ms.openlocfilehash: bf7f12cd00780347f23252764aace449dd6f5722
ms.sourcegitcommit: 069e3833bd821e7d64f5c98d0ea41fc0c5d22e53
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/21/2019
ms.locfileid: "74303290"
---
# <a name="memcpy-wmemcpy"></a>memcpy, wmemcpy

Copia i byte tra i buffer. Sono disponibili versioni più sicure di queste funzioni. Vedere [memcpy_s, wmemcpy_s](memcpy-s-wmemcpy-s.md).

## <a name="syntax"></a>Sintassi

```C
void *memcpy(
   void *dest,
   const void *src,
   size_t count
);
wchar_t *wmemcpy(
   wchar_t *dest,
   const wchar_t *src,
   size_t count
);
```

### <a name="parameters"></a>Parametri

*dest*<br/>
Nuovo buffer.

*src*<br/>
Buffer da cui copiare.

*count*<br/>
Numero di caratteri da copiare.

## <a name="return-value"></a>Valore restituito

Valore di *dest*.

## <a name="remarks"></a>Osservazioni

**memcpy** copia i byte del *conteggio* da *src* a *dest*; **wmemcpy** copia il *numero* di caratteri wide (due byte). Se l'origine e la destinazione si sovrappongono, il comportamento di **memcpy** non è definito. Usare **memmove** per gestire le aree sovrapposte.

> [!IMPORTANT]
> Verificare che il buffer di destinazione abbia una dimensione maggiore o uguale al buffer di origine. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](/windows/win32/SecBP/avoiding-buffer-overruns).

> [!IMPORTANT]
> Poiché il numero di sovraccarichi del buffer e di conseguenza potenziali exploit di sicurezza è stato tracciato per un utilizzo non corretto di **memcpy**, questa funzione è elencata tra le funzioni "vietate" dal processo SDL (Security Development Lifecycle).  È possibile osservare che alcune classi di libreria VC + + continuano a usare **memcpy**.  Inoltre, è possibile osservare che l'utilità di ottimizzazione del compilatore VC + + a volte emette chiamate a **memcpy**.  Il prodotto Visual C++ viene sviluppato in conformità con il processo SDL, quindi l'utilizzo di questa funzione bloccata è stato esaminato attentamente.  In caso di utilizzo della funzione da parte di una libreria, le chiamate sono state analizzate attentamente per assicurare il blocco dei sovraccarichi del buffer attraverso tali chiamate.  Nel caso del compilatore, a volte alcuni modelli di codice vengono riconosciuti come identici al modello di **memcpy**e vengono quindi sostituiti con una chiamata alla funzione.  In questi casi, l'uso di **memcpy** non è più sicuro rispetto alle istruzioni originali. sono state semplicemente ottimizzate per una chiamata alla funzione **memcpy** ottimizzata per le prestazioni.  Proprio come l'uso di funzioni CRT "sicure" non garantisce la sicurezza (sono semplicemente più difficili da non essere sicure), l'uso di funzioni "vietate" non garantisce rischi (richiedono solo un controllo maggiore per garantire la sicurezza).
>
> Poiché l'utilizzo di **memcpy** da parte del compilatore e delle librerie di VC + + è stato analizzato in modo accurato, queste chiamate sono consentite all'interno del codice che è altrimenti conforme a SDL.  le chiamate **memcpy** introdotte nel codice sorgente dell'applicazione sono conformi al processo SDL solo quando tale utilizzo è stato esaminato da esperti di sicurezza.

Le funzioni **memcpy** e **wmemcpy** verranno deprecate solo se la costante **_CRT_SECURE_DEPRECATE_MEMORY** viene definita prima dell'istruzione di inclusione affinché le funzioni vengano deprecate, come nell'esempio seguente:

```C
#define _CRT_SECURE_DEPRECATE_MEMORY
#include <memory.h>
```

oppure

```C
#define _CRT_SECURE_DEPRECATE_MEMORY
#include <wchar.h>
```

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**memcpy**|\<memory.h> o \<string.h>|
|**wmemcpy**|\<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Per un esempio di come usare **memcpy**, vedere [memmove](memmove-wmemmove.md) .

## <a name="see-also"></a>Vedere anche

[Modifica del buffer](../../c-runtime-library/buffer-manipulation.md)<br/>
[_memccpy](memccpy.md)<br/>
[memchr, wmemchr](memchr-wmemchr.md)<br/>
[memcmp, wmemcmp](memcmp-wmemcmp.md)<br/>
[memmove, wmemmove](memmove-wmemmove.md)<br/>
[memset, wmemset](memset-wmemset.md)<br/>
[strcpy_s, wcscpy_s, _mbscpy_s](strcpy-s-wcscpy-s-mbscpy-s.md)<br/>
[strncpy_s, _strncpy_s_l, wcsncpy_s, _wcsncpy_s_l, _mbsncpy_s, _mbsncpy_s_l](strncpy-s-strncpy-s-l-wcsncpy-s-wcsncpy-s-l-mbsncpy-s-mbsncpy-s-l.md)<br/>
