---
title: _splitpath, _wsplitpath | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _wsplitpath
- _splitpath
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
- wsplitpath
- _splitpath
- splitpath
- _wsplitpath
- _tsplitpath
dev_langs:
- C++
helpviewer_keywords:
- _splitpath function
- pathnames
- wsplitpath function
- splitpath function
- _wsplitpath function
- tsplitpath function
- path names
- _tsplitpath function
ms.assetid: 32bd76b5-1385-4ee8-a64c-abcb541cd2e4
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 220e2befc40dba342a7f8c2aa4c94294bc667ce0
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="splitpath-wsplitpath"></a>_splitpath, _wsplitpath

Suddivide un nome di percorso nei componenti. Sono disponibili versioni più sicure di queste funzioni. Vedere [_splitpath_s, _wsplitpath_s](splitpath-s-wsplitpath-s.md).

## <a name="syntax"></a>Sintassi

```C
void _splitpath(
   const char *path,
   char *drive,
   char *dir,
   char *fname,
   char *ext
);
void _wsplitpath(
   const wchar_t *path,
   wchar_t *drive,
   wchar_t *dir,
   wchar_t *fname,
   wchar_t *ext
);
```

### <a name="parameters"></a>Parametri

*percorso* percorso completo.

*unità* lettera di unità, seguita da due punti (**:**). È possibile passare **NULL** per questo parametro se non è necessaria la lettera di unità.

*dir* percorso della Directory, tra cui barra finale. Barre ( **/** ), barre rovesciate ( **\\** ), o entrambi possono essere utilizzate. È possibile passare **NULL** per questo parametro se non è necessario il percorso della directory.

*fname* filename (senza estensione) di Base. È possibile passare **NULL** per questo parametro se non è necessario il nome del file.

*ext* estensione di file, tra cui iniziali periodo (**.**). È possibile passare **NULL** per questo parametro se non è necessaria l'estensione del file.

## <a name="remarks"></a>Note

Il **splitpath** funzione suddivide un percorso nei suoi quattro componenti. **splitpath** gestisce automaticamente gli argomenti di stringa di caratteri multibyte esigenze, riconoscendo le sequenze di caratteri multibyte in base alla tabella codici multibyte attualmente in uso. **wsplitpath** è una versione a caratteri wide **splitpath**; gli argomenti da **wsplitpath** sono stringhe a caratteri "wide". A parte ciò, queste funzioni si comportano in modo identico.

**Nota sulla sicurezza** Queste funzioni sono esposte a una potenziale minaccia dovuta a un problema di sovraccarico del buffer. I problemi di sovraccarico del buffer sono usati spesso come metodo di attacco di sistema e provocano un'elevazione dei privilegi non autorizzata. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](http://msdn.microsoft.com/library/windows/desktop/ms717795). Sono disponibili versioni più sicure di queste funzioni. Vedere [_splitpath_s, _wsplitpath_s](splitpath-s-wsplitpath-s.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**tsplitpath**|**_splitpath**|**_splitpath**|**_wsplitpath**|

Ogni componente del percorso completo è archiviata in un buffer separato; le costanti manifesto **max_drive**, **max_dir**, **max_fname**, e **max_ext** (definita in STDLIB. H) specificare le dimensioni massime per ogni componente del file. I componenti del file più grandi delle costanti manifeste corrispondenti causano il danneggiamento dell'heap.

Ogni buffer deve essere di dimensioni pari alla costante manifesta corrispondente per evitare potenziali sovraccarichi del buffer.

La tabella seguente elenca i valori delle costanti manifeste.

|nome|Valore|
|----------|-----------|
|**MAX_DRIVE**|3|
|**MAX_DIR**|256|
|**MAX_FNAME**|256|
|**MAX_EXT**|256|

Se il percorso completo non contiene un componente (ad esempio, un nome file), **splitpath** assegna stringhe ai buffer di corrispondente vuote.

È possibile passare **NULL** alla **splitpath** per qualsiasi parametro diverso da *percorso* che non è necessario.

Se *percorso* viene **NULL**, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** è impostata su **EINVAL** e la funzione restituisce **EINVAL**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_splitpath**|\<stdlib.h>|
|**_wsplitpath**|\<stdlib.h> or \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [_makepath](makepath-wmakepath.md).

## <a name="see-also"></a>Vedere anche

[Gestione di file](../../c-runtime-library/file-handling.md)<br/>
[_fullpath, _wfullpath](fullpath-wfullpath.md)<br/>
[_getmbcp](getmbcp.md)<br/>
[_makepath, _wmakepath](makepath-wmakepath.md)<br/>
[_setmbcp](setmbcp.md)<br/>
[_splitpath_s, _wsplitpath_s](splitpath-s-wsplitpath-s.md)<br/>
