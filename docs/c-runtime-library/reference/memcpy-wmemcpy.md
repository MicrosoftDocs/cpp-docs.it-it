---
title: memcpy, wmemcpy | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- memcpy
- wmemcpy
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
apitype: DLLExport
f1_keywords:
- wmemcpy
- memcpy
dev_langs:
- C++
helpviewer_keywords:
- wmemcpy function
- memcpy function
ms.assetid: 34abb90b-bffb-46dc-a2f3-a5e9940839d6
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f75aa6a32277fda0796fe2433062f5062fdd47eb
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43196079"
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

Il valore di *dest*.

## <a name="remarks"></a>Note

**memcpy** copie *conteggio* byte dal *src* alla *dest*; **wmemcpy** copie *conteggio* caratteri "wide" (due byte). Se l'origine e destinazione si sovrappongono, il comportamento delle **memcpy** è definito. Uso **memmove** per gestire le aree di sovrapposizione.

> [!IMPORTANT]
> Verificare che il buffer di destinazione abbia una dimensione maggiore o uguale al buffer di origine. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](/windows/desktop/SecBP/avoiding-buffer-overruns).

> [!IMPORTANT]
> Perché così tante sovraccarichi del buffer e pertanto potenziali attacchi alla sicurezza, sono stati registrati per un utilizzo non corretto di **memcpy**, questa funzione viene elencata tra le funzioni "bloccate" da Security Development Lifecycle (SDL).  È possibile osservare che alcune classi di libreria VC + + continuano a usare **memcpy**.  Inoltre, è possibile osservare che l'ottimizzatore del compilatore VC + + a volte emette chiamate a **memcpy**.  Il prodotto Visual C++ viene sviluppato in conformità con il processo SDL, quindi l'utilizzo di questa funzione bloccata è stato esaminato attentamente.  In caso di utilizzo della funzione da parte di una libreria, le chiamate sono state analizzate attentamente per assicurare il blocco dei sovraccarichi del buffer attraverso tali chiamate.  Nel caso del compilatore, a volte alcuni modelli di codice vengono riconosciuti come identici rispetto al modello di **memcpy**e vengono quindi sostituiti con una chiamata alla funzione.  In questi casi, l'uso di **memcpy** non è più rischioso rispetto all'originale sarebbero state le istruzioni; sono state ottimizzate semplicemente a una chiamata per le prestazioni ottimizzate **memcpy** (funzione).  Il semplice utilizzo delle funzioni CRT "sicure" non garantisce la protezione (rendono solo il sistema un po' meno insicuro), così come l'utilizzo delle funzioni "bloccate" non espone maggiormente a rischi (richiedono solo un controllo maggiore che ne garantisca la sicurezza).
>
> In quanto **memcpy** utilizzo dalle librerie e compilatore VC + + è stato così scrupolosamente, queste chiamate sono permesse all'interno del codice conforme a SDL.  **memcpy** chiamate introdotte nel codice sorgente dell'applicazione sono conformi a SDL solo quando tale uso è stato esaminato da esperti di sicurezza.

Il **memcpy** e **wmemcpy** funzioni verranno deprecate solo se la costante **_CRT_SECURE_DEPRECATE_MEMORY** è definita prima dell'istruzione di inclusione nell'ordine per le funzioni deprecate, ad esempio come illustrato nell'esempio riportato di seguito:

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

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Visualizzare [memmove](memmove-wmemmove.md) per un esempio d'uso **memcpy**.

## <a name="see-also"></a>Vedere anche

[Modifica del buffer](../../c-runtime-library/buffer-manipulation.md)<br/>
[_memccpy](memccpy.md)<br/>
[memchr, wmemchr](memchr-wmemchr.md)<br/>
[memcmp, wmemcmp](memcmp-wmemcmp.md)<br/>
[memmove, wmemmove](memmove-wmemmove.md)<br/>
[memset, wmemset](memset-wmemset.md)<br/>
[strcpy_s, wcscpy_s, _mbscpy_s](strcpy-s-wcscpy-s-mbscpy-s.md)<br/>
[strncpy_s, _strncpy_s_l, wcsncpy_s, _wcsncpy_s_l, _mbsncpy_s, _mbsncpy_s_l](strncpy-s-strncpy-s-l-wcsncpy-s-wcsncpy-s-l-mbsncpy-s-mbsncpy-s-l.md)<br/>
