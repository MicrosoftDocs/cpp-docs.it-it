---
title: _findnext, _findnext32, _findnext32i64, _findnext64, _findnext64i32, _findnexti64, _wfindnext, _wfindnext32, _wfindnext32i64, _wfindnext64, _wfindnext64i32, _wfindnexti64
ms.date: 4/2/2020
api_name:
- _findnext
- _findnext32
- _findnext32i64
- _findnext64
- _findnext64i32
- _findnexti64
- _wfindnext
- _wfindnext32
- _wfindnext32i64
- _wfindnext64
- _wfindnext64i32
- _wfindnexti64
- _o__findnext32
- _o__findnext32i64
- _o__findnext64
- _o__findnext64i32
- _o__wfindnext32
- _o__wfindnext32i64
- _o__wfindnext64
- _o__wfindnext64i32
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
- api-ms-win-crt-private-l1-1-0
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- findnext
- _wfindnext32i64
- _tfindnext64i32
- findnext32
- findnext32i64
- wfindnext64i32
- _wfindnext
- tfindnext64
- findnexti64
- _findnexti64
- _tfindnexti64
- _findnext64i32
- tfindnexti64
- tfindnext32
- _wfindnext64i32
- findnext64i32
- _findnext
- _tfindnext32i64
- _wfindnext64
- wfindnext
- wfindnext32
- tfindnext32i64
- _findnext64
- _tfindnext64
- _wfindnext32
- findnext64
- _findnext32i64
- tfindnext
- wfindnexti64
- tfindnext64i32
- _tfindnext32
- wfindnext32i64
- wfindnext64
- _wfindnexti64
- _tfindnext
- _findnext32
helpviewer_keywords:
- _wfindnexti64 function
- _tfindnext32 function
- wfindnexti64 function
- _wfindnext32i64 function
- findnext32i64 function
- tfindnext64i32 function
- _tfindnext64i32 function
- _findnext function
- findnext64i32 function
- _tfindnext function
- findnext32 function
- tfindnext32 function
- _findnext32 function
- _tfindnext32i64 function
- _wfindnext function
- tfindnext function
- _findnext64 function
- findnext64 function
- _findnext64i32 function
- wfindnext32i64 function
- findnext function
- wfindnext32 function
- _wfindnext64i32 function
- findnexti64 function
- _wfindnext64 function
- _findnext32i64 function
- _findnexti64 function
- _tfindnext64 function
- wfindnext64i32 function
- tfindnexti64 function
- wfindnext64 function
- wfindnext function
- tfindnext64 function
- _wfindnext32 function
- tfindnext32i64 function
- _tfindnexti64 function
ms.assetid: 75d97188-5add-4698-a46c-4c492378f0f8
ms.openlocfilehash: 38243b48a97c038f36ada85e3ca2cda814f43fa8
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81346730"
---
# <a name="_findnext-_findnext32-_findnext32i64-_findnext64-_findnext64i32-_findnexti64-_wfindnext-_wfindnext32-_wfindnext32i64-_wfindnext64-_wfindnext64i32-_wfindnexti64"></a>_findnext, _findnext32, _findnext32i64, _findnext64, _findnext64i32, _findnexti64, _wfindnext, _wfindnext32, _wfindnext32i64, _wfindnext64, _wfindnext64i32, _wfindnexti64

Individuare il nome successivo, se presente, che corrisponde all'argomento *filespec* in una precedente chiamata a [_findfirst](findfirst-functions.md), quindi modificare di conseguenza il contenuto della struttura *fileinfo.*

## <a name="syntax"></a>Sintassi

```C
int _findnext(
   intptr_t handle,
   struct _finddata_t *fileinfo
);
int _findnext32(
   intptr_t handle,
   struct _finddata32_t *fileinfo
);
int _findnext64(
   intptr_t handle,
   struct __finddata64_t *fileinfo
);
int _findnexti64(
   intptr_t handle,
   struct __finddatai64_t *fileinfo
);
int _findnext32i64(
   intptr_t handle,
   struct _finddata32i64_t *fileinfo
);
int _findnext64i32(
   intptr_t handle,
   struct _finddata64i32_t *fileinfo
);
int _wfindnext(
   intptr_t handle,
   struct _wfinddata_t *fileinfo
);
int _wfindnext32(
   intptr_t handle,
   struct _wfinddata32_t *fileinfo
);
int _wfindnext64(
   intptr_t handle,
   struct _wfinddata64_t *fileinfo
);
int _wfindnexti64(
   intptr_t handle,
   struct _wfinddatai64_t *fileinfo
);
int _wfindnext32i64(
   intptr_t handle,
   struct _wfinddatai64_t *fileinfo
);
int _wfindnext64i32(
   intptr_t handle,
   struct _wfinddata64i32_t *fileinfo
);
```

### <a name="parameters"></a>Parametri

*Gestire*<br/>
Handle di ricerca restituito da una chiamata precedente a **_findfirst**.

*Fileinfo*<br/>
Buffer delle informazioni del file.

## <a name="return-value"></a>Valore restituito

Se l'esito è positivo, restituisce 0. In caso contrario, restituisce -1 e imposta **errno** su un valore che indica la natura dell'errore. Nella tabella seguente vengono illustrati i codici di errore possibili.

|Valore errno|Condizione|
|-|-|
| **Einval** | Parametro non valido: *fileinfo* era **NULL**. oppure il sistema operativo ha restituito un errore imprevisto. |
| **ENOENTE** | Non è stato possibile trovare altri file corrispondenti. |
| **ENOMEM** | Memoria insufficiente o la lunghezza del nome file superata **MAX_PATH**. |

Se viene passato un parametro non valido, queste funzioni chiamano il gestore di parametri non validi, come descritto in [Parameter Validation](../../c-runtime-library/parameter-validation.md) (Convalida dei parametri).

## <a name="remarks"></a>Osservazioni

È necessario chiamare [_findclose](findclose.md) al termine dell'utilizzo della **funzione _findfirst** o **_findnext** (o di eventuali varianti). Ciò consente di liberare le risorse usate da queste funzioni nell'applicazione.

Le variazioni di queste funzioni con il prefisso **w** sono versioni a caratteri wide; in caso contrario, sono identici alle funzioni a byte singolo corrispondenti.

Le varianti di queste funzioni supportano tipi time a 32 o 64 bit e dimensioni di file a 32 o a 64 bit. Il primo suffisso numerico (**32** o **64**) indica la dimensione del tipo di tempo utilizzato; il secondo suffisso è **i32** o **i64**, che indica se la dimensione del file è rappresentata come intero a 32 bit o a 64 bit. Per informazioni su quali versioni supportano tipi time e dimensioni dei file a 32 bit e 64 bit, vedere la tabella seguente. Le varianti che usano un tipo time a 64 bit consentono di esprimere date di creazione di file fino alle 23.59.59 del 31 dicembre 3000 UTC, mentre quelle che usano solo tipi time a 32 bit consentono di rappresentare solo date fino alle 23.59.59 del 18 gennaio 2038 UTC. La mezzanotte del 1 gennaio 1970 è il limite inferiore dell'intervallo di date per tutte queste funzioni.

A meno che non si disponga di un motivo specifico per utilizzare le versioni che specificano la dimensione del tempo in modo esplicito, utilizzare **_findnext** o **_wfindnext** o, se è necessario supportare file di dimensioni superiori a 3 GB, utilizzare **_findnexti64** o **_wfindnexti64**. Tutte queste funzioni usano il tipo time a 64 bit. Nelle versioni precedenti queste funzioni usavano un tipo time a 32 bit. Se si tratta di una modifica sostanziale per un'applicazione, è possibile definire **_USE_32BIT_TIME_T** per ottenere il comportamento precedente. Se **_USE_32BIT_TIME_T** è definita, **_findnext** **, _finnexti64** e le corrispondenti versioni Unicode utilizzano un'ora a 32 bit.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

### <a name="time-type-and-file-length-type-variations-of-_findnext"></a>Varianti di _findnext per il tipo time e di lunghezza dei file

|Funzioni|**_USE_32BIT_TIME_T** definito?|Tipo time|Tipo lunghezza file|
|---------------|----------------------------------|---------------|----------------------|
|**_findnext**, **_wfindnext**|Non definito|64 bit|32 bit|
|**_findnext**, **_wfindnext**|Definito|32 bit|32 bit|
|**_findnext32**, **_wfindnext32**|Non interessato dalla definizione macro|32 bit|32 bit|
|**_findnext64**, **_wfindnext64**|Non interessato dalla definizione macro|64 bit|64 bit|
|**_findnexti64**, **_wfindnexti64**|Non definito|64 bit|64 bit|
|**_findnexti64**, **_wfindnexti64**|Definito|32 bit|64 bit|
|**_findnext32i64**, **_wfindnext32i64**|Non interessato dalla definizione macro|32 bit|64 bit|
|**_findnext64i32**, **_wfindnext64i32**|Non interessato dalla definizione macro|64 bit|32 bit|

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tfindnext**|**_findnext**|**_findnext**|**_wfindnext**|
|**_tfindnext32**|**_findnext32**|**_findnext32**|**_wfindnext32**|
|**_tfindnext64**|**_findnext64**|**_findnext64**|**_wfindnext64**|
|**_tfindnexti64**|**_findnexti64**|**_findnexti64**|**_wfindnexti64**|
|**_tfindnext32i64**|**_findnext32i64**|**_findnext32i64**|**_wfindnext32i64**|
|**_tfindnext64i32**|**_findnext64i32**|**_findnext64i32**|**_wfindnext64i32**|

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**_findnext**|\<io.h>|
|**_findnext32**|\<io.h>|
|**_findnext64**|\<io.h>|
|**_findnexti64**|\<io.h>|
|**_findnext32i64**|\<io.h>|
|**_findnext64i32**|\<io.h>|
|**_wfindnext**|\<io.h> o \<wchar.h>|
|**_wfindnext32**|\<io.h> o \<wchar.h>|
|**_wfindnext64**|\<io.h> o \<wchar.h>|
|**_wfindnexti64**|\<io.h> o \<wchar.h>|
|**_wfindnext32i64**|\<io.h> o \<wchar.h>|
|**_wfindnext64i32**|\<io.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="see-also"></a>Vedere anche

[System Calls](../../c-runtime-library/system-calls.md) (Chiamate di sistema)<br/>
[Funzioni di ricerca dei nomi file](../../c-runtime-library/filename-search-functions.md)<br/>
