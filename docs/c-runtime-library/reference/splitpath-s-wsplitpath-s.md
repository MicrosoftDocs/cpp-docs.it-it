---
title: _splitpath_s, _wsplitpath_s | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _wsplitpath_s
- _splitpath_s
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
- _wsplitpath_s
- splitpath_s
- _splitpath_s
- wsplitpath_s
dev_langs:
- C++
helpviewer_keywords:
- splitpath_s function
- pathnames
- _splitpath_s function
- _wsplitpath_s function
- path names
- wsplitpath_s function
ms.assetid: 30fff3e2-cd00-4eb6-b5a2-65db79cb688b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e5fd1407aa6c2b7630e0720eeec179ca27e7d31a
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32417432"
---
# <a name="splitpaths-wsplitpaths"></a>_splitpath_s, _wsplitpath_s

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

*Unità*<br/>
Lettera, seguita da due punti (**:**). È possibile passare **NULL** per questo parametro se non è necessaria la lettera di unità.

*driveNumberOfElements*<br/>
Le dimensioni del *unità* buffer in caratteri a byte singolo o wide. Se *unità* viene **NULL**, questo valore deve essere 0.

*dir*<br/>
Percorso di directory, inclusa la barra finale. Barre ( **/** ), barre rovesciate ( **\\** ), o entrambi possono essere utilizzate. È possibile passare **NULL** per questo parametro se non è necessario il percorso della directory.

*dirNumberOfElements*<br/>
Le dimensioni del *dir* buffer in caratteri a byte singolo o wide. Se *dir* viene **NULL**, questo valore deve essere 0.

*fname*<br/>
Nome di file di base (senza estensione). È possibile passare **NULL** per questo parametro se non è necessario il nome del file.

*nameNumberOfElements*<br/>
Le dimensioni del *fname* buffer in caratteri a byte singolo o wide. Se *fname* viene **NULL**, questo valore deve essere 0.

*ext*<br/>
Estensioni di nome file, incluse quelle iniziali periodo (**.**). È possibile passare **NULL** per questo parametro se non è necessaria l'estensione del file.

*extNumberOfElements*<br/>
Il valore pari *ext* buffer in caratteri a byte singolo o wide. Se *ext* viene **NULL**, questo valore deve essere 0.

## <a name="return-value"></a>Valore restituito

Zero se con esito positivo; un codice di errore in caso di errore.

### <a name="error-conditions"></a>Condizioni di errore

|Condizione|Valore restituito|
|---------------|------------------|
|*percorso* è **NULL**|**EINVAL**|
|*unità* viene **NULL**, *driveNumberOfElements* è diverso da zero|**EINVAL**|
|*unità* è non**NULL**, *driveNumberOfElements* è uguale a zero|**EINVAL**|
|*dir* viene **NULL**, *dirNumberOfElements* è diverso da zero|**EINVAL**|
|*dir* è non**NULL**, *dirNumberOfElements* è uguale a zero|**EINVAL**|
|*fname* viene **NULL**, *nameNumberOfElements* è diverso da zero|**EINVAL**|
|*fname* è non**NULL**, *nameNumberOfElements* è uguale a zero|**EINVAL**|
|*ext* viene **NULL**, *extNumberOfElements* è diverso da zero|**EINVAL**|
|*ext* è non**NULL**, *extNumberOfElements* è uguale a zero|**EINVAL**|

Se si verifica una delle condizioni precedenti, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano **errno** alla **EINVAL** e restituire **EINVAL**.

Se uno qualsiasi dei buffer è troppo breve per contenere il risultato, queste funzioni deselezionare tutti i buffer per le stringhe vuote, impostare **errno** alla **ERANGE**e restituire **ERANGE**.

## <a name="remarks"></a>Note

Il **splitpath_s** funzione suddivide un percorso nei suoi quattro componenti. **splitpath_s** gestisce automaticamente gli argomenti di stringa di caratteri multibyte esigenze, riconoscendo le sequenze di caratteri multibyte in base alla tabella codici multibyte attualmente in uso. **wsplitpath_s** è una versione a caratteri wide **splitpath_s**; gli argomenti da **wsplitpath_s** sono stringhe a caratteri "wide". A parte ciò, queste funzioni si comportano in modo identico.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tsplitpath_s**|**_splitpath_s**|**_splitpath_s**|**_wsplitpath_s**|

Ogni componente del percorso completo è archiviata in un buffer separato; le costanti manifesto **max_drive**, **max_dir**, **max_fname**, e **max_ext** (definita in STDLIB. H) specificare la dimensione massima consentita per ogni componente del file. I componenti del file più grandi delle costanti manifeste corrispondenti causano il danneggiamento dell'heap.

La tabella seguente elenca i valori delle costanti manifeste.

|nome|Valore|
|----------|-----------|
|_MAX_DRIVE|3|
|_MAX_DIR|256|
|_MAX_FNAME|256|
|_MAX_EXT|256|

Se il percorso completo non contiene un componente (ad esempio, un nome file), **splitpath_s** assegna una stringa vuota al buffer di corrispondente.

In C++ l'uso di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente, eliminando la necessità di specificare un argomento di dimensione. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

Le versioni di debug di queste funzioni riempiono innanzitutto il buffer con 0xFD. Per disabilitare questo comportamento, usare [_CrtSetDebugFillThreshold](crtsetdebugfillthreshold.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_splitpath_s**|\<stdlib.h>|
|**_wsplitpath_s**|\<stdlib.h> or \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

See the example for [_makepath_s, _wmakepath_s](makepath-s-wmakepath-s.md).

## <a name="see-also"></a>Vedere anche

[Gestione di file](../../c-runtime-library/file-handling.md)<br/>
[_splitpath, _wsplitpath](splitpath-wsplitpath.md)<br/>
[_fullpath, _wfullpath](fullpath-wfullpath.md)<br/>
[_getmbcp](getmbcp.md)<br/>
[_makepath, _wmakepath](makepath-wmakepath.md)<br/>
[_setmbcp](setmbcp.md)<br/>
