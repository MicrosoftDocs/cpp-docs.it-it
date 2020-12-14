---
description: 'Altre informazioni su: _cgets_s, _cgetws_s'
title: _cgets_s, _cgetws_s
ms.date: 4/2/2020
api_name:
- _cgetws_s
- _cgets_s
- _o__cgets_s
- _o__cgetws_s
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
- api-ms-win-crt-conio-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _cgets_s
- cgets_s
- cgetws_s
- _cgetws_s
helpviewer_keywords:
- strings [C++], getting from console
- console, getting strings from
- _cgets_s function
- cget_s function
- _cgetws_s function
- cgetws_s function
ms.assetid: 38b74897-afe6-4dd9-a43f-36a3c0d72c5c
ms.openlocfilehash: 827f3c8b155f58fe13396f5dc0c66e8999b5f942
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97275087"
---
# <a name="_cgets_s-_cgetws_s"></a>_cgets_s, _cgetws_s

Ottiene una stringa di caratteri dalla console. Queste versioni di [_cgets e _cgetws](../../c-runtime-library/cgets-cgetws.md) offrono miglioramenti della sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
errno_t _cgets_s(
   char *buffer,
   size_t numberOfElements,
   size_t *pSizeRead
);
errno_t _cgetws_s(
   wchar_t *buffer
   size_t numberOfElements,
   size_t *pSizeRead
);
template <size_t size>
errno_t _cgets_s(
   char (&buffer)[size],
   size_t *pSizeRead
); // C++ only
template <size_t size>
errno_t _cgetws_s(
   wchar_t (&buffer)[size],
   size_t *pSizeRead
); // C++ only
```

### <a name="parameters"></a>Parametri

*buffer*<br/>
Percorso di archiviazione per i dati.

*numberOfElements*<br/>
La dimensione del buffer in caratteri a byte singolo o wide, che è anche il numero massimo di caratteri da leggere.

*pSizeRead*<br/>
Numero di caratteri attualmente letti.

## <a name="return-value"></a>Valore restituito

Il valore restituito è zero se ha esito positivo; in caso contrario si verifica un errore.

### <a name="error-conditions"></a>Condizioni di errore

|*buffer*|*numberOfElements*|*pSizeRead*|Return|Contenuto del *buffer*|
|--------------|------------------------|-----------------|------------|--------------------------|
|**NULL**|any|any|**EINVAL**|n/d|
|Not **null**|zero|any|**EINVAL**|non modificato|
|Not **null**|any|**NULL**|**EINVAL**|stringa di lunghezza zero|

## <a name="remarks"></a>Commenti

**_cgets_s** e **_cgetws_s** leggere una stringa dalla console e copiare la stringa (con un carattere di terminazione null) in *buffer*. **_cgetws_s** è la versione a caratteri wide della funzione; Oltre alla dimensione del carattere, il comportamento di queste due funzioni è identico. La dimensione massima della stringa da leggere viene passata come parametro *NumberOfElements* . Questa dimensione deve includere un carattere aggiuntivo per la terminazione null. Il numero effettivo di caratteri letti viene inserito in *pSizeRead*.

Se si verifica un errore durante l'operazione o nella convalida dei parametri, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** viene impostato su **EINVAL** e **EINVAL** viene restituito.

In C++ l'utilizzo di queste funzioni è semplificato dagli overload di modello; gli overload possono dedurre la lunghezza del buffer automaticamente, eliminando quindi la necessità di specificare un argomento di dimensione, e possono sostituire automaticamente le funzioni precedenti, meno sicure con le controparti più recenti e sicure. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).

Le versioni della libreria di debug di queste funzioni riempiono innanzitutto il buffer con 0xFE. Per disabilitare questo comportamento, usare [_CrtSetDebugFillThreshold](crtsetdebugfillthreshold.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_cgetts_s**|**_cgets_s**|**_cgets_s**|**_cgetws_s**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_cgets_s**|\<conio.h>|
|**_cgetws_s**|\<conio.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedi anche

[I/O console e porta](../../c-runtime-library/console-and-port-i-o.md)<br/>
[_getch, _getwch](getch-getwch.md)<br/>
