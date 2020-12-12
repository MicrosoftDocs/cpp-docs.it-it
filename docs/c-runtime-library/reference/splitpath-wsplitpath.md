---
description: 'Altre informazioni su: _splitpath, _wsplitpath'
title: _splitpath, _wsplitpath
ms.date: 4/2/2020
api_name:
- _wsplitpath
- _splitpath
- _o__splitpath
- _o__wsplitpath
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
- wsplitpath
- _splitpath
- splitpath
- _wsplitpath
- _tsplitpath
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
ms.openlocfilehash: d270cf15c00c42f350dafe0cd45dddbb2f6594c2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97292312"
---
# <a name="_splitpath-_wsplitpath"></a>_splitpath, _wsplitpath

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

*path*<br/>
Percorso completo.

*unità*<br/>
Lettera di unità, seguita da due punti (**:**). È possibile passare **null** per questo parametro se non è necessaria la lettera di unità.

*dir*<br/>
Percorso di directory, inclusa la barra finale. **/** È possibile utilizzare le barre (), le barre rovesciate ( **\\** ) o entrambe. È possibile passare **null** per questo parametro se non è necessario il percorso della directory.

*fname*<br/>
Nome di file di base (senza estensione). È possibile passare **null** per questo parametro se non è necessario il nome file.

*EXT*<br/>
Estensione del nome file, incluso il punto principale (**.**). È possibile passare **null** per questo parametro se non è necessaria l'estensione del nome file.

## <a name="remarks"></a>Commenti

La funzione **_splitpath** suddivide un percorso nei quattro componenti. **_splitpath** gestisce automaticamente gli argomenti della stringa di caratteri multibyte in base alle esigenze, riconoscendo le sequenze di caratteri multibyte in base alla tabella codici multibyte attualmente in uso. **_wsplitpath** è una versione a caratteri wide di **_splitpath**; gli argomenti da **_wsplitpath** sono stringhe a caratteri wide. A parte ciò, queste funzioni si comportano in modo identico.

**Nota sulla sicurezza** Queste funzioni sono esposte a una potenziale minaccia dovuta a un problema di sovraccarico del buffer. I problemi di sovraccarico del buffer sono usati spesso come metodo di attacco di sistema e provocano un'elevazione dei privilegi non autorizzata. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](/windows/win32/SecBP/avoiding-buffer-overruns). Sono disponibili versioni più sicure di queste funzioni. vedere [_splitpath_s, _wsplitpath_s](splitpath-s-wsplitpath-s.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tsplitpath**|**_splitpath**|**_splitpath**|**_wsplitpath**|

Ogni componente del percorso completo è archiviato in un buffer separato. le costanti manifeste **_MAX_DRIVE**, **_MAX_DIR**, **_MAX_FNAME** e **_MAX_EXT** (definite in STDLIB. H) specificare le dimensioni massime per ogni componente del file. I componenti del file più grandi delle costanti manifeste corrispondenti causano il danneggiamento dell'heap.

Ogni buffer deve essere di dimensioni pari alla costante manifesta corrispondente per evitare potenziali sovraccarichi del buffer.

La tabella seguente elenca i valori delle costanti manifeste.

|Nome|Valore|
|----------|-----------|
|**_MAX_DRIVE**|3|
|**_MAX_DIR**|256|
|**_MAX_FNAME**|256|
|**_MAX_EXT**|256|

Se il percorso completo non contiene un componente, ad esempio un nome di file, **_splitpath** assegna stringhe vuote ai buffer corrispondenti.

È possibile passare **null** a **_splitpath** per qualsiasi parametro diverso da *path* che non è necessario.

Se *path* è **null**, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** viene impostato su **EINVAL** e la funzione restituisce **EINVAL**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_splitpath**|\<stdlib.h>|
|**_wsplitpath**|\<stdlib.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [_makepath](makepath-wmakepath.md).

## <a name="see-also"></a>Vedi anche

[Gestione di file](../../c-runtime-library/file-handling.md)<br/>
[_fullpath, _wfullpath](fullpath-wfullpath.md)<br/>
[_getmbcp](getmbcp.md)<br/>
[_makepath, _wmakepath](makepath-wmakepath.md)<br/>
[_setmbcp](setmbcp.md)<br/>
[_splitpath_s, _wsplitpath_s](splitpath-s-wsplitpath-s.md)<br/>
