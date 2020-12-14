---
description: 'Altre informazioni su: _findfirst, _findfirst32, _findfirst32i64, _findfirst64, _findfirst64i32, _findfirsti64, _wfindfirst, _wfindfirst32, _wfindfirst32i64, _wfindfirst64, _wfindfirst64i32 _wfindfirsti64'
title: _findfirst, _findfirst32, _findfirst32i64, _findfirst64, _findfirst64i32, _findfirsti64, _wfindfirst, _wfindfirst32, _wfindfirst32i64, _wfindfirst64, _wfindfirst64i32, _wfindfirsti64
ms.date: 4/2/2020
api_name:
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
- _o__findfirst32
- _o__findfirst32i64
- _o__findfirst64
- _o__findfirst64i32
- _o__wfindfirst32
- _o__wfindfirst32i64
- _o__wfindfirst64
- _o__wfindfirst64i32
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
- api-ms-win-crt-filesystem-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
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
ms.openlocfilehash: dce0c283a6177940019f1d358bd6cfa500c04306
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97263140"
---
# <a name="_findfirst-_findfirst32-_findfirst32i64-_findfirst64-_findfirst64i32-_findfirsti64-_wfindfirst-_wfindfirst32-_wfindfirst32i64-_wfindfirst64-_wfindfirst64i32-_wfindfirsti64"></a>_findfirst, _findfirst32, _findfirst32i64, _findfirst64, _findfirst64i32, _findfirsti64, _wfindfirst, _wfindfirst32, _wfindfirst32i64, _wfindfirst64, _wfindfirst64i32, _wfindfirsti64

Fornire informazioni sulla prima istanza di un nome file che corrisponde al file specificato nell'argomento *filespec* .

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

*FileInfo*<br/>
Buffer delle informazioni del file.

## <a name="return-value"></a>Valore restituito

In caso di esito positivo, **_findfirst** restituisce un handle di ricerca univoco che identifica il file o il gruppo di file che corrispondono alla specifica *filespec* , che può essere usato in una chiamata successiva a [_findnext](findnext-functions.md) o a [_findclose](findclose.md). In caso contrario, **_findfirst** restituisce-1 e **errno** imposta uno dei valori seguenti.

| Valore errno | Condizione |
|-|-|
| **EINVAL** | Parametro non valido: *filespec* o *FileInfo* è **null**. oppure il sistema operativo ha restituito un errore imprevisto. |
| **ENOENT** | Specifica del file per la quale non sono state trovate corrispondenze. |
| **ENOMEM** | Memoria insufficiente. |
| **EINVAL** | Specifica del nome file non valida o il nome file specificato è maggiore di **MAX_PATH**. |

Per altre informazioni su questi e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

Se viene passato un parametro non valido, queste funzioni chiamano il gestore di parametri non validi, come descritto in [Parameter Validation](../../c-runtime-library/parameter-validation.md) (Convalida dei parametri).

## <a name="remarks"></a>Commenti

È necessario chiamare [_findclose](findclose.md) una volta terminata la funzione **_findfirst** o [_findnext](findnext-functions.md) (o qualsiasi variante). Ciò consente di liberare le risorse usate da queste funzioni nell'applicazione.

Le varianti di queste funzioni con il prefisso **w** sono versioni a caratteri wide. in caso contrario, sono identici alle funzioni a byte singolo corrispondenti.

Le varianti di queste funzioni supportano tipi time a 32 o 64 bit e dimensioni di file a 32 o a 64 bit. Il primo suffisso numerico (**32** o **64**) indica le dimensioni del tipo di tempo; il secondo suffisso è **i32** o **I64** e indica se le dimensioni del file sono rappresentate come Integer a 32 bit o a 64 bit. Per informazioni su quali versioni supportano tipi time e dimensioni dei file a 32 bit e 64 bit, vedere la tabella seguente. Il suffisso **i32** o **I64** viene omesso se corrisponde alla dimensione del tipo time, quindi **_findfirst64** supporta anche lunghezze di file a 64 bit e **_findfirst32** supporta solo lunghezze di file a 32 bit.

Queste funzioni usano diverse forme della struttura **_finddata_t** per il parametro *FileInfo* . Per altre informazioni sulla struttura, vedere [Filename Search Functions](../../c-runtime-library/filename-search-functions.md) (Funzioni di ricerca dei nomi file).

Le varianti che usano un tipo time a 64 bit consentono di esprimere le date di creazione di file fino alle 23.59.59 del 31 dicembre 3000 UTC. Quelle che usano tipi time a 32 bit possono rappresentare date solo fino alle 23.59.59 del 18 gennaio 2038 UTC. La mezzanotte del 1 gennaio 1970 è il limite inferiore dell'intervallo di date per tutte queste funzioni.

A meno che non esista un motivo specifico per usare le versioni che specificano le dimensioni temporali in modo esplicito, usare **_findfirst** o **_wfindfirst** o, se è necessario supportare dimensioni di file maggiori di 3 GB, usare **_findfirsti64** o **_wfindfirsti64**. Tutte queste funzioni usano il tipo time a 64 bit. Nelle versioni precedenti queste funzioni usavano un tipo time a 32 bit. Se si tratta di una modifica di rilievo per un'applicazione, è possibile definire **_USE_32BIT_TIME_T** per ripristinare il comportamento precedente. Se **_USE_32BIT_TIME_T** è definito, **_findfirst**, **_finfirsti64** e le versioni Unicode corrispondenti utilizzano un'ora a 32 bit.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

### <a name="time-type-and-file-length-type-variations-of-_findfirst"></a>Varianti di _findfirst per il tipo time e di lunghezza dei file

|Funzioni|**_USE_32BIT_TIME_T** definito?|Tipo time|Tipo lunghezza file|
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

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedi anche

[Chiamate di sistema](../../c-runtime-library/system-calls.md)<br/>
[Funzioni di ricerca filename](../../c-runtime-library/filename-search-functions.md)<br/>
