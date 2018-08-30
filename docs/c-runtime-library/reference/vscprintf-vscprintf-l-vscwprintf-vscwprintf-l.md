---
title: _vscprintf, _vscprintf_l, _vscwprintf, _vscwprintf_l | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _vscprintf
- _vscprintf_l
- _vscwprintf_l
- _vscwprintf
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
- vscprintf_l
- vscwpeintf
- _vscwprintf
- _vsctprintf
- _vscprintf
- vscwprintf_l
- vscprintf
- _vscwprintf_l
dev_langs:
- C++
helpviewer_keywords:
- vsctprintf function
- _vscprintf_l function
- _vsctprintf_l function
- _vsctprintf function
- _vscwprintf_l function
- vscwprintf_l function
- _vscprintf function
- _vscwprintf function
- vscwprintf function
- vsctprintf_l function
- formatted text [C++]
- vscprintf function
- vscprintf_l function
ms.assetid: 1bc67d3d-21d5-49c9-ac8d-69e26b16a3c3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 959f39df33c2cdcd40a71a801ca715ab7c0eccf0
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43213646"
---
# <a name="vscprintf-vscprintfl-vscwprintf-vscwprintfl"></a>_vscprintf, _vscprintf_l, _vscwprintf, _vscwprintf_l

Restituisce il numero di caratteri nella stringa formattata usando un puntatore a un elenco di argomenti.

## <a name="syntax"></a>Sintassi

```C
int _vscprintf(
   const char *format,
   va_list argptr
);
int _vscprintf_l(
   const char *format,
   locale_t locale,
   va_list argptr
);
int _vscwprintf(
   const wchar_t *format,
   va_list argptr
);
int _vscwprintf_l(
   const wchar_t *format,
   locale_t locale,
   va_list argptr
);
```

### <a name="parameters"></a>Parametri

*format*<br/>
Stringa di controllo del formato.

*valore di ArgPtr*<br/>
Puntatore a un elenco di argomenti.

*locale*<br/>
Impostazioni locali da usare.

Per ulteriori informazioni, vedere [Specifiche di formato](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).

## <a name="return-value"></a>Valore restituito

**vscprintf** restituisce il numero di caratteri che verrebbero generati se la stringa puntata dall'elenco di argomenti venisse stampato o inviato a un file o i codici di buffer utilizzando la formattazione specificata. Il valore restituito non include il carattere Null di terminazione. **vscwprintf** esegue la stessa funzione per i caratteri "wide".

Le versioni di queste funzioni con il **l** suffisso sono identiche ad eccezione del fatto che usano il parametro delle impostazioni locali passato anziché le impostazioni locali del thread corrente.

Se *formato* è un puntatore null, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, le funzioni restituiscono -1 e impostare **errno** al **EINVAL**.

## <a name="remarks"></a>Note

Ciascuna *argomenti* (se presente) viene convertito in base alla specifica di formato corrispondente in *formato*. Il formato è costituito da caratteri ordinari e ha lo stesso formato e funzione il *formato* argomento per [printf](printf-printf-l-wprintf-wprintf-l.md).

> [!IMPORTANT]
> Assicurarsi che, se *formato* è una stringa definita dall'utente, è con terminata null e ha il numero corretto e il tipo dei parametri. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](/windows/desktop/SecBP/avoiding-buffer-overruns).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**vsctprintf**|**_vscprintf**|**_vscprintf**|**_vscwprintf**|
|**vsctprintf_l**|**_vscprintf_l**|**_vscprintf_l**|**_vscwprintf_l**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**vscprintf**, **vscprintf_l**|\<stdio.h>|
|**vscwprintf**, **vscwprintf_l**|\<stdio.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [vsprintf](vsprintf-vsprintf-l-vswprintf-vswprintf-l-vswprintf-l.md).

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[fprintf, _fprintf_l, fwprintf, _fwprintf_l](fprintf-fprintf-l-fwprintf-fwprintf-l.md)<br/>
[printf, _printf_l, wprintf, _wprintf_l](printf-printf-l-wprintf-wprintf-l.md)<br/>
[scanf, _scanf_l, wscanf, _wscanf_l](scanf-scanf-l-wscanf-wscanf-l.md)<br/>
[sscanf, _sscanf_l, swscanf, _swscanf_l](sscanf-sscanf-l-swscanf-swscanf-l.md)<br/>
[Funzioni vprintf](../../c-runtime-library/vprintf-functions.md)<br/>
