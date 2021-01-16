---
description: 'Altre informazioni su: memcpy, wmemcpy'
title: memcpy, wmemcpy
ms.date: 1/14/2021
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
- api-ms-win-crt-private-l1-1-0.dll
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
ms.openlocfilehash: 49b08877f63bf0d331dcc40e2885b375fe6d1ee7
ms.sourcegitcommit: 1cd8f8a75fd036ffa57bc70f3ca869042d8019d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/15/2021
ms.locfileid: "98243138"
---
# <a name="memcpy-wmemcpy"></a>`memcpy`, `wmemcpy`

Copia i byte tra i buffer. Sono disponibili versioni più sicure di queste funzioni. vedere [ `memcpy_s` , `wmemcpy_s` ](memcpy-s-wmemcpy-s.md).

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

*`dest`*\
Nuovo buffer.

*`src`*\
Buffer da cui copiare.

*`count`*\
Numero di caratteri da copiare.

## <a name="return-value"></a>Valore restituito

Valore di *`dest`* .

## <a name="remarks"></a>Commenti

**`memcpy`** copia i *`count`* byte da *`src`* a *`dest`* ; **`wmemcpy`** Copia *`count`* caratteri wide (due byte). Se l'origine e la destinazione si sovrappongono, il comportamento di non **`memcpy`** è definito. Usare **`memmove`** per gestire le aree sovrapposte.

> [!IMPORTANT]
> Verificare che il buffer di destinazione abbia una dimensione maggiore o uguale al buffer di origine. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](/windows/win32/SecBP/avoiding-buffer-overruns).

> [!IMPORTANT]
> Poiché il numero di sovraccarichi del buffer e di conseguenza potenziali exploit di sicurezza è stato tracciato per un utilizzo non corretto di **`memcpy`** , questa funzione è elencata tra le funzioni "vietate" dal processo SDL (Security Development Lifecycle).  È possibile osservare che alcune classi di libreria VC + + continuano a usare **`memcpy`** .  Inoltre, è possibile osservare che l'utilità di ottimizzazione del compilatore VC + + a volte emette chiamate a **`memcpy`** .  Il prodotto Visual C++ viene sviluppato in conformità con il processo SDL, quindi l'utilizzo di questa funzione bloccata è stato esaminato attentamente.  In caso di utilizzo della funzione da parte di una libreria, le chiamate sono state analizzate attentamente per assicurare il blocco dei sovraccarichi del buffer attraverso tali chiamate.  Nel caso del compilatore, a volte alcuni modelli di codice vengono riconosciuti come identici al modello di **`memcpy`** e vengono quindi sostituiti con una chiamata alla funzione.  In questi casi, l'utilizzo di **`memcpy`** non è più sicuro rispetto alle istruzioni originali; sono state semplicemente ottimizzate per una chiamata alla funzione ottimizzata per le prestazioni **`memcpy`** .  Proprio come l'uso di funzioni CRT "sicure" non garantisce la sicurezza (sono semplicemente più difficili da non essere sicure), l'uso di funzioni "vietate" non garantisce rischi (richiedono solo un controllo maggiore per garantire la sicurezza).
>
> Poiché **`memcpy`** l'utilizzo da parte del compilatore e delle librerie VC + + è stato analizzato in modo accurato, queste chiamate sono consentite all'interno del codice che è altrimenti conforme a SDL.  **`memcpy`** le chiamate introdotte nel codice sorgente dell'applicazione sono conformi al processo SDL solo quando tale utilizzo è stato esaminato da esperti di sicurezza.

Le **`memcpy`** **`wmemcpy`** funzioni e verranno deprecate solo se la costante **`_CRT_SECURE_DEPRECATE_MEMORY`** è definita prima dell'istruzione di inclusione in modo che le funzioni vengano deprecate, come nell'esempio seguente:

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
|**`memcpy`**|`<memory.h>` o `<string.h>`|
|**`wmemcpy`**|`<wchar.h>`|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

[`memmove`](memmove-wmemmove.md)Per un esempio di come usare, vedere **`memcpy`** .

## <a name="see-also"></a>Vedere anche

[Manipolazione del buffer](../../c-runtime-library/buffer-manipulation.md)\
[`_memccpy`](memccpy.md)\
[`memchr`, `wmemchr`](memchr-wmemchr.md)\
[`memcmp`, `wmemcmp`](memcmp-wmemcmp.md)\
[`memmove`, `wmemmove`](memmove-wmemmove.md)\
[`memset`, `wmemset`](memset-wmemset.md)\
[`strcpy_s`, `wcscpy_s`, `_mbscpy_s`](strcpy-s-wcscpy-s-mbscpy-s.md)\
[`strncpy_s`, `_strncpy_s_l`, `wcsncpy_s`, `_wcsncpy_s_l`, `_mbsncpy_s`, `_mbsncpy_s_l`](strncpy-s-strncpy-s-l-wcsncpy-s-wcsncpy-s-l-mbsncpy-s-mbsncpy-s-l.md)\
