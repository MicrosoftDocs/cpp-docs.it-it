---
title: _findfirst, _findfirst32, _findfirst32i64, _findfirst64, _findfirst64i32, _findfirsti64, _wfindfirst, _wfindfirst32, _wfindfirst32i64, _wfindfirst64, _wfindfirst64i32, _wfindfirsti64
ms.date: 11/04/2016
apiname:
- _findfirst
- _wfindfirst
- _findfirst32
- _wfindfirst32
- _findfirst32i64
- _wfindfirst32i64
- _findfirst64
- _wfindfirst64
- _findfirst64i32
- _wfindfirst64i32
- _findfirsti64
- _wfindfirsti64
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
- api-ms-win-crt-filesystem-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- findfirst32i64
- wfindfirst32i64
- tfindfirst64
- _findfirst64i32
- _wfindfirst32i64
- _wfindfirsti64
- wfindfirst
- _tfindfirsti64
- findfirst32
- _tfindfirst32
- _findfirsti64
- findfirst
- wfindfirst64
- wfindfirst32
- tfindfirst32
- _wfindfirst64i32
- findfirst64i32
- tfindfirst64i32
- _wfindfirst
- findfirsti64
- _findfirst32i64
- wfindfirst64i32
- _wfindfirst32
- _findfirst32
- _tfindfirst32i64
- tfindfirst
- _tfindfirst64i32
- findfirst64
- _tfindfirst
- _findfirst64
- _tfindfirst64
- tfindfirst32i64
- _findfirst
- _wfindfirst64
helpviewer_keywords:
- _tfindfirst64 function
- _wfindfirst64i32 function
- _wfindfirst32i64 function
- wfindfirst32 function
- _findfirst function
- wfindfirst64 function
- _wfindfirst function
- _findfirst64i32 function
- wfindfirst function
- _findfirst64 function
- tfindfirst32 function
- _tfindfirst64i32 function
- findfirst function
- findfirst32i64 function
- tfindfirst64 function
- _tfindfirst32 function
- tfindfirst32i64 function
- tfindfirst64i32 function
- _wfindfirsti64 function
- _findfirst32i64 function
- findfirst32 function
- findfirsti64 function
- findfirst64i32 function
- tfindfirsti64 function
- tfindfirst function
- _wfindfirst32 function
- wfindfirsti64 function
- _tfindfirsti64 function
- _tfindfirst function
- _tfindfirst32i64 function
- findfirst64 function
- _findfirst32 function
- _findfirsti64 function
- wfindfirst32i64 function
- wfindfirst64i32 function
- _wfindfirst64 function
ms.assetid: 9bb46d1a-b946-47de-845a-a0b109a33ead
ms.openlocfilehash: 47a1d7301b59a942a1af860f310e1f1f9da12ec7
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62333742"
---
# <a name="findfirst-findfirst32-findfirst32i64-findfirst64-findfirst64i32-findfirsti64-wfindfirst-wfindfirst32-wfindfirst32i64-wfindfirst64-wfindfirst64i32-wfindfirsti64"></a>_findfirst, _findfirst32, _findfirst32i64, _findfirst64, _findfirst64i32, _findfirsti64, _wfindfirst, _wfindfirst32, _wfindfirst32i64, _wfindfirst64, _wfindfirst64i32, _wfindfirsti64

Fornire informazioni sulla prima istanza di un nome di file che corrisponde al file specificato nella *filespec* argomento.

## <a name="syntax"></a>Sintassi

```C
intptr_t _findfirst(
   const char *filespec,
   struct _finddata_t *fileinfo
);
intptr_t _findfirst32(
   const char *filespec,
   struct _finddata32_t *fileinfo
);
intptr_t _findfirst64(
   const char *filespec,
   struct _finddata64_t *fileinfo
);
intptr_t _findfirsti64(
   const char *filespec,
   struct _finddatai64_t *fileinfo
);
intptr_t _findfirst32i64(
   const char *filespec,
   struct _finddata32i64_t *fileinfo
);
intptr_t _findfirst64i32(
   const char *filespec,
   struct _finddata64i32_t *fileinfo
);
intptr_t _wfindfirst(
   const wchar_t *filespec,
   struct _wfinddata_t *fileinfo
);
intptr_t _wfindfirst32(
   const wchar_t *filespec,
   struct _wfinddata32_t *fileinfo
);
intptr_t _wfindfirst64(
   const wchar_t *filespec,
   struct _wfinddata64_t *fileinfo
);
intptr_t _wfindfirsti64(
   const wchar_t *filespec,
   struct _wfinddatai64_t *fileinfo
);
intptr_t _wfindfirst32i64(
   const wchar_t *filespec,
   struct _wfinddata32i64_t *fileinfo
);
intptr_t _wfindfirst64i32(
   const wchar_t *filespec,
   struct _wfinddata64i32_t *fileinfo
);
```

### <a name="parameters"></a>Parametri

*filespec*<br/>
Specifica del file di destinazione. Può includere caratteri jolly.

*fileinfo*<br/>
Buffer delle informazioni del file.

## <a name="return-value"></a>Valore restituito

Caso di esito positivo **FindFirst** restituisce un handle di ricerca univoco che identifica il file o un gruppo di file che soddisfano le *filespec* specifica, che può essere usato in una chiamata successiva a [_ FindNext](findnext-functions.md) o a [FindClose](findclose.md). In caso contrario, **FindFirst** restituisce -1 e imposta **errno** a uno dei valori seguenti.

| Valore errno | Condizione |
|-|-|
| **EINVAL** | Parametri non validi: *filespec* oppure *fileinfo* era **NULL**. oppure il sistema operativo ha restituito un errore imprevisto. |
| **ENOENT** | Specifica del file per la quale non sono state trovate corrispondenze. |
| **ENOMEM** | Memoria insufficiente. |
| **EINVAL** | Specifica del nome file non valido o nome file specificato è maggiore **MAX_PATH**. |

Per altre informazioni su questi e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

Se viene passato un parametro non valido, queste funzioni chiamano il gestore di parametri non validi, come descritto in [Parameter Validation](../../c-runtime-library/parameter-validation.md) (Convalida dei parametri).

## <a name="remarks"></a>Note

È necessario chiamare [FindClose](findclose.md) quando si finisce con la **FindFirst** oppure [FindNext](findnext-functions.md) funzione (o eventuali varianti). Ciò consente di liberare le risorse usate da queste funzioni nell'applicazione.

Le variazioni di queste funzioni che hanno le **w** prefisso sono versioni a caratteri wide; in caso contrario, sono identiche alle funzioni a byte singolo corrispondente.

Le varianti di queste funzioni supportano tipi time a 32 o 64 bit e dimensioni di file a 32 o a 64 bit. Il primo suffisso numerico (**32** oppure **64**) indica la dimensione del tipo time; il secondo suffisso è **i32** oppure **i64**e indica indica se le dimensioni del file sono rappresentata come intero a 32 bit o 64 bit. Per informazioni su quali versioni supportano tipi time e dimensioni dei file a 32 bit e 64 bit, vedere la tabella seguente. Il **i32** oppure **i64** suffisso viene omesso se è quello utilizzato per la dimensione del tipo di fase, pertanto **_findfirst64** supporta anche lunghezze di file a 64 bit e **_findfirst32**  supporta solo lunghezze di file a 32 bit.

Queste funzioni usano diverse forme del **finddata_t** struttura per il *fileinfo* parametro. Per altre informazioni sulla struttura, vedere [Filename Search Functions](../../c-runtime-library/filename-search-functions.md) (Funzioni di ricerca dei nomi file).

Le varianti che usano un tipo time a 64 bit consentono di esprimere le date di creazione di file fino alle 23.59.59 del 31 dicembre 3000 UTC. Quelle che usano tipi time a 32 bit possono rappresentare date solo fino alle 23.59.59 del 18 gennaio 2038 UTC. La mezzanotte del 1 gennaio 1970 è il limite inferiore dell'intervallo di date per tutte queste funzioni.

Se non si dispone di un motivo preciso per usare le versioni che specificano la dimensione time in modo esplicito, usare **FindFirst** oppure **wfindfirst** oppure, se è necessario supportare dimensioni superiori a 3 GB, usare **_ findfirsti64** oppure **_wfindfirsti64**. Tutte queste funzioni usano il tipo time a 64 bit. Nelle versioni precedenti queste funzioni usavano un tipo time a 32 bit. Se si tratta di una modifica di rilievo per un'applicazione, è possibile definire **_USE_32BIT_TIME_T** per ripristinare il comportamento precedente. Se **_USE_32BIT_TIME_T** viene definito **FindFirst**, **_finfirsti64**, e le corrispondenti versioni Unicode usano un tipo time a 32 bit.

### <a name="time-type-and-file-length-type-variations-of-findfirst"></a>Varianti di _findfirst per il tipo time e di lunghezza dei file

|Funzioni|**_USE_32BIT_TIME_T** defined?|Tipo Time|Tipo lunghezza file|
|---------------|----------------------------------|---------------|----------------------|
|**_findfirst**, **_wfindfirst**|Non definito|64 bit|32 bit|
|**_findfirst**, **_wfindfirst**|Definito|32 bit|32 bit|
|**_findfirst32**, **_wfindfirst32**|Non interessato dalla definizione macro|32 bit|32 bit|
|**_findfirst64**, **_wfindfirst64**|Non interessato dalla definizione macro|64 bit|64 bit|
|**_findfirsti64**, **_wfindfirsti64**|Non definito|64 bit|64 bit|
|**_findfirsti64**, **_wfindfirsti64**|Definito|32 bit|64 bit|
|**_findfirst32i64**, **_wfindfirst32i64**|Non interessato dalla definizione macro|32 bit|64 bit|
|**_findfirst64i32**, **_wfindfirst64i32**|Non interessato dalla definizione macro|64 bit|32 bit|

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tfindfirst**|**_findfirst**|**_findfirst**|**_wfindfirst**|
|**_tfindfirst32**|**_findfirst32**|**_findfirst32**|**_wfindfirst32**|
|**_tfindfirst64**|**_findfirst64**|**_findfirst64**|**_wfindfirst64**|
|**_tfindfirsti64**|**_findfirsti64**|**_findfirsti64**|**_wfindfirsti64**|
|**_tfindfirst32i64**|**_findfirst32i64**|**_findfirst32i64**|**_wfindfirst32i64**|
|**_tfindfirst64i32**|**_findfirst64i32**|**_findfirst64i32**|**_wfindfirst64i32**|

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**_findfirst**|\<io.h>|
|**_findfirst32**|\<io.h>|
|**_findfirst64**|\<io.h>|
|**_findfirsti64**|\<io.h>|
|**_findfirst32i64**|\<io.h>|
|**_findfirst64i32**|\<io.h>|
|**_wfindfirst**|\<io.h> o \<wchar.h>|
|**_wfindfirst32**|\<io.h> o \<wchar.h>|
|**_wfindfirst64**|\<io.h> o \<wchar.h>|
|**_wfindfirsti64**|\<io.h> o \<wchar.h>|
|**_wfindfirst32i64**|\<io.h> o \<wchar.h>|
|**_wfindfirst64i32**|\<io.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Chiamate di sistema](../../c-runtime-library/system-calls.md)<br/>
[Funzioni di ricerca dei nomi file](../../c-runtime-library/filename-search-functions.md)<br/>
