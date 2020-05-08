---
title: _splitpath_s, _wsplitpath_s
ms.date: 4/2/2020
api_name:
- _wsplitpath_s
- _splitpath_s
- _o__splitpath_s
- _o__wsplitpath_s
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
- ntoskrnl.exe
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _wsplitpath_s
- splitpath_s
- _splitpath_s
- wsplitpath_s
helpviewer_keywords:
- splitpath_s function
- pathnames
- _splitpath_s function
- _wsplitpath_s function
- path names
- wsplitpath_s function
ms.assetid: 30fff3e2-cd00-4eb6-b5a2-65db79cb688b
ms.openlocfilehash: 984b55737e575656670f561c45f528265800f214
ms.sourcegitcommit: 5a069c7360f75b7c1cf9d4550446ec2fa2eb2293
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2020
ms.locfileid: "82920291"
---
# <a name="_splitpath_s-_wsplitpath_s"></a>_splitpath_s, _wsplitpath_s

Suddivide un nome di percorso nei componenti. Queste sono versioni di [_splitpath, _wsplitpath](splitpath-wsplitpath.md) con miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
errno_t _splitpath_s(
   const char * path,
   char * drive,
   size_t driveNumberOfElements,
   char * dir,
   size_t dirNumberOfElements,
   char * fname,
   size_t nameNumberOfElements,
   char * ext,
   size_t extNumberOfElements
);
errno_t _wsplitpath_s(
   const wchar_t * path,
   wchar_t * drive,
   size_t driveNumberOfElements,
   wchar_t *dir,
   size_t dirNumberOfElements,
   wchar_t * fname,
   size_t nameNumberOfElements,
   wchar_t * ext,
   size_t extNumberOfElements
);
template <size_t drivesize, size_t dirsize, size_t fnamesize, size_t extsize>
errno_t _splitpath_s(
   const char *path,
   char (&drive)[drivesize],
   char (&dir)[dirsize],
   char (&fname)[fnamesize],
   char (&ext)[extsize]
); // C++ only
template <size_t drivesize, size_t dirsize, size_t fnamesize, size_t extsize>
errno_t _wsplitpath_s(
   const wchar_t *path,
   wchar_t (&drive)[drivesize],
   wchar_t (&dir)[dirsize],
   wchar_t (&fname)[fnamesize],
   wchar_t (&ext)[extsize]
); // C++ only
```

### <a name="parameters"></a>Parametri

*path*<br/>
Percorso completo.

*unità*<br/>
Lettera di unità, seguita da due punti (**:**). È possibile passare **null** per questo parametro se non è necessaria la lettera di unità.

*driveNumberOfElements*<br/>
Dimensioni del buffer dell' *unità* in caratteri a byte singolo o Wide. Se l' *unità* è **null**, questo valore deve essere 0.

*dir*<br/>
Percorso di directory, inclusa la barra finale. È possibile utilizzare le **/** barre (), le barre **\\** rovesciate () o entrambe. È possibile passare **null** per questo parametro se non è necessario il percorso della directory.

*dirNumberOfElements*<br/>
Dimensioni del buffer *dir* in caratteri a byte singolo o Wide. Se *dir* è **null**, questo valore deve essere 0.

*fname*<br/>
Nome di file di base (senza estensione). È possibile passare **null** per questo parametro se non è necessario il nome file.

*nameNumberOfElements*<br/>
Dimensioni del buffer *fname* in caratteri a byte singolo o Wide. Se *fname* è **null**, questo valore deve essere 0.

*EXT*<br/>
Estensione del nome file, incluso il punto principale (**.**). È possibile passare **null** per questo parametro se non è necessaria l'estensione del nome file.

*extNumberOfElements*<br/>
Dimensioni del buffer *ext* in caratteri a byte singolo o Wide. Se *ext* è **null**, questo valore deve essere 0.

## <a name="return-value"></a>Valore restituito

Zero se con esito positivo; un codice di errore in caso di errore.

### <a name="error-conditions"></a>Condizioni di errore

|Condizione|Valore restituito|
|---------------|------------------|
|il *percorso* è **null**|**EINVAL**|
|l' *unità* è **null**, *driveNumberOfElements* è diverso da zero|**EINVAL**|
|l' *unità* non è**null**, *driveNumberOfElements* è zero|**EINVAL**|
|*dir* è **null**, *dirNumberOfElements* è diverso da zero|**EINVAL**|
|*dir* è diverso da**null**, *dirNumberOfElements* è zero|**EINVAL**|
|*fname* è **null**, *nameNumberOfElements* è diverso da zero|**EINVAL**|
|*fname* è diverso da**null**, *nameNumberOfElements* è zero|**EINVAL**|
|*ext* è **null**, *extNumberOfElements* è diverso da zero|**EINVAL**|
|*ext* è diverso da**null**, *extNumberOfElements* è zero|**EINVAL**|

Se si verifica una delle condizioni precedenti, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano **errno** su **EINVAL** e restituiscono **EINVAL**.

Se uno dei buffer è troppo breve per conservare il risultato, queste funzioni cancellano tutti i buffer in stringhe vuote, imposta **errno** su **ERANGE**e restituisce **ERANGE**.

## <a name="remarks"></a>Osservazioni

La funzione **_splitpath_s** suddivide un percorso nei quattro componenti. **_splitpath_s** gestisce automaticamente gli argomenti della stringa di caratteri multibyte in base alle esigenze, riconoscendo le sequenze di caratteri multibyte in base alla tabella codici multibyte attualmente in uso. **_wsplitpath_s** è una versione a caratteri wide di **_splitpath_s**; gli argomenti da **_wsplitpath_s** sono stringhe a caratteri wide. A parte ciò, queste funzioni si comportano in modo identico.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tsplitpath_s**|**_splitpath_s**|**_splitpath_s**|**_wsplitpath_s**|

Ogni componente del percorso completo è archiviato in un buffer separato. le costanti manifeste **_MAX_DRIVE**, **_MAX_DIR**, **_MAX_FNAME**e **_MAX_EXT** (definite in STDLIB. H) specificare la dimensione massima consentita per ogni componente del file. I componenti del file più grandi delle costanti manifeste corrispondenti causano il danneggiamento dell'heap.

La tabella seguente elenca i valori delle costanti manifeste.

|Nome|valore|
|----------|-----------|
|_MAX_DRIVE|3|
|_MAX_DIR|256|
|_MAX_FNAME|256|
|_MAX_EXT|256|

Se il percorso completo non contiene un componente, ad esempio un nome di file, **_splitpath_s** assegna una stringa vuota al buffer corrispondente.

In C++ l'uso di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente, eliminando la necessità di specificare un argomento di dimensione. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).

Le versioni della libreria di debug di queste funzioni riempiono innanzitutto il buffer con 0xFE. Per disabilitare questo comportamento, usare [_CrtSetDebugFillThreshold](crtsetdebugfillthreshold.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_splitpath_s**|\<stdlib.h>|
|**_wsplitpath_s**|\<stdlib.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

See the example for [_makepath_s, _wmakepath_s](makepath-s-wmakepath-s.md).

## <a name="see-also"></a>Vedere anche

[Gestione dei file](../../c-runtime-library/file-handling.md)<br/>
[_splitpath, _wsplitpath](splitpath-wsplitpath.md)<br/>
[_fullpath, _wfullpath](fullpath-wfullpath.md)<br/>
[_getmbcp](getmbcp.md)<br/>
[_makepath, _wmakepath](makepath-wmakepath.md)<br/>
[_setmbcp](setmbcp.md)<br/>
