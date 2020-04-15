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
- api-ms-win-crt-private-l1-1-0
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
ms.openlocfilehash: 364544a9423668494747405e801d59b73de4e6c6
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81355625"
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

*Percorso*<br/>
Percorso completo.

*Guida*<br/>
Lettera di unità, seguita da due punti (**:**). È possibile passare **NULL** per questo parametro se non è necessaria la lettera di unità.

*driveNumberOfElements (unità NumberOfElements)*<br/>
Dimensione del buffer *dell'unità* in caratteri a byte singolo o wide. Se *unità* è **NULL,** questo valore deve essere 0.

*dir*<br/>
Percorso di directory, inclusa la barra finale. È possibile **/** utilizzare le barre **\\** ( ), le barre rovesciate ( ) o entrambe. È possibile passare **NULL** per questo parametro se non è necessario il percorso della directory.

*DirNumberOfElements*<br/>
Dimensione del buffer *dir* in caratteri a byte singolo o wide. Se *dir* è **NULL**, questo valore deve essere 0.

*Fname*<br/>
Nome di file di base (senza estensione). È possibile passare **NULL** per questo parametro se non è necessario il nome del file.

*nomeNumberOfElements*<br/>
Dimensione del buffer *fname* in caratteri a byte singolo o wide. Se *fname* è **NULL**, questo valore deve essere 0.

*Ext*<br/>
Estensione del nome file, incluso il punto iniziale (**.**). È possibile passare **NULL** per questo parametro se non è necessaria l'estensione del nome file.

*extNumberOfElements*<br/>
Dimensione del buffer *ext* in caratteri a byte singolo o wide. Se *ext* è **NULL,** questo valore deve essere 0.

## <a name="return-value"></a>Valore restituito

Zero se con esito positivo; un codice di errore in caso di errore.

### <a name="error-conditions"></a>Condizioni di errore

|Condizione|Valore restituito|
|---------------|------------------|
|*percorso* è **NULL**|**Einval**|
|*l'unità* è **NULL**, *unitàNumberOfElements* è diversa da zero|**Einval**|
|*unità* è diversa**da NULL,** *driveNumberOfElements* è zero|**Einval**|
|*dir* è **NULL**, *dirNumberOfElements* è diverso da zero|**Einval**|
|*dir* è diverso**da NULL**, *dirNumberOfElements* è zero|**Einval**|
|*fname* è **NULL**, *nameNumberOfElements* è diverso da zero|**Einval**|
|*fname* è diverso da**NULL**, *nameNumberOfElements* è zero|**Einval**|
|*ext* è **NULL**, *extNumberOfElements* è diverso da zero|**Einval**|
|*ext* è diverso da**NULL**, *extNumberOfElements* è zero|**Einval**|

Se si verifica una delle condizioni precedenti, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano **errno** su **EINVAL** e restituiscono **EINVAL**.

Se uno dei buffer è troppo breve per contenere il risultato, queste funzioni cancellano tutti i buffer in stringhe vuote, impostano **errno** su **ERANGE**e restituiscono **ERANGE**.

## <a name="remarks"></a>Osservazioni

La funzione **_splitpath_s** suddivide un percorso nei relativi quattro componenti. **_splitpath_s** gestisce automaticamente gli argomenti di stringa di caratteri multibyte in base alle esigenze, riconoscendo le sequenze di caratteri multibyte in base alla tabella codici multibyte attualmente in uso. **_wsplitpath_s** è una versione a caratteri wide di **_splitpath_s**; gli argomenti per **_wsplitpath_s** sono stringhe di caratteri wide. A parte ciò, queste funzioni si comportano in modo identico.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tsplitpath_s**|**_splitpath_s**|**_splitpath_s**|**_wsplitpath_s**|

Ogni componente del percorso completo viene archiviato in un buffer separato; le costanti manifesto **_MAX_DRIVE**, **_MAX_DIR**, **_MAX_FNAME**e **_MAX_EXT** (definite in STDLIB. H) specificare la dimensione massima consentita per ogni componente del file. I componenti del file più grandi delle costanti manifeste corrispondenti causano il danneggiamento dell'heap.

La tabella seguente elenca i valori delle costanti manifeste.

|Nome|Valore|
|----------|-----------|
|_MAX_DRIVE|3|
|_MAX_DIR|256|
|_MAX_FNAME|256|
|_MAX_EXT|256|

Se il percorso completo non contiene un componente (ad esempio, un nome file), **_splitpath_s** assegna una stringa vuota al buffer corrispondente.

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
