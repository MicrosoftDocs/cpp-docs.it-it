---
title: _sopen, _wsopen | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _sopen
- _wsopen
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
- api-ms-win-crt-stdio-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _wsopen
- wsopen
- _sopen
- _tsopen
dev_langs:
- C++
helpviewer_keywords:
- sopen function
- sharing files
- opening files, for sharing
- _sopen function
- wsopen function
- files [C++], opening
- files [C++], sharing
- _wsopen function
ms.assetid: a9d4cccf-06e9-414d-96fa-453fca88cc1f
caps.latest.revision: 21
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: fe8bc1480f2f0aa0234eb56242924543a6640dd5
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="sopen-wsopen"></a>_sopen, _wsopen

Apre un file per la condivisione. Sono disponibili versioni più sicure di queste funzioni: vedere [sopen_s, wsopen_s](sopen-s-wsopen-s.md).

## <a name="syntax"></a>Sintassi

```C
int _sopen(
   const char *filename,
   int oflag,
   int shflag [,
   int pmode ]
);
int _wsopen(
   const wchar_t *filename,
   int oflag,
   int shflag [,
   int pmode ]
);
```

### <a name="parameters"></a>Parametri

*filename*<br/>
Nome file.

*oflag*<br/>
Tipo di operazioni consentite.

*shflag*<br/>
Tipo di condivisione consentita.

*pmode*<br/>
Impostazione di autorizzazione.

## <a name="return-value"></a>Valore restituito

Ognuna di queste funzioni restituisce un descrittore di file per il file aperto.

Se *filename* oppure *oflag* è un **NULL** puntatore, o se *oflag* o *shflag* non è compreso in un valore valido intervallo di valori, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono -1 e impostare **errno** a uno dei valori seguenti.

|Valore errno|Condizione|
|-|-|
**EACCES**|Il percorso specificato è una directory o il file è di sola lettura, ma è stata tentata un'operazione di apertura in scrittura.
**EEXIST**|**O_creat** e **o_excl** flag sono stati specificati, ma *filename* esiste già.
**EINVAL**|Non valido *oflag* oppure *shflag* argomento.
**EMFILE**|Non sono disponibili altri descrittori di file.
**ENOENT**|Il file o il percorso non è stato trovato.

Per altre informazioni su questi e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Il **sopen** funzione si apre il file specificato da *filename* e prepara il file per la lettura o scrittura, condivisa come definito dal *oflag* e *shflag* . **wsopen** è una versione a caratteri "wide" **sopen**; il *filename* argomento **wsopen** è una stringa di caratteri "wide". **wsopen** e **sopen** si comportano in modo identico in caso contrario.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tsopen**|**_sopen**|**_sopen**|**_wsopen**|

L'espressione integer *oflag* è costituita dalla combinazione di uno o più delle seguenti costanti manifesto, definite in \<fcntl >. Quando due o più costanti costituiscono l'argomento *oflag*, vengono combinate con l'operatore OR bit per bit ( **&#124;** ).

|*oflag* costante|Comportamento|
|-|-|
**_O_APPEND**|Sposta il puntatore a file alla fine del file prima di ogni operazione di scrittura.
**O_BINARY**|Apre il file in modalità binaria (non convertita). Vedere [fopen](fopen-wfopen.md) per una descrizione della modalità binaria.
**O_CREAT**|Crea e apre un nuovo file per la scrittura. Non ha alcun effetto se il file specificato da *filename* esiste. Il *pmode* argomento è obbligatorio quando **o_creat** è specificato.
**O_CREAT** &AMP;#124; **_O_SHORT_LIVED**|Crea un file come temporaneo e se possibile non lo scarica su disco. Il *pmode* argomento è obbligatorio quando **o_creat** è specificato.
**O_CREAT** &AMP;#124; **_O_TEMPORARY**|Crea un file come temporaneo; il file viene eliminato quando l'ultimo descrittore del file viene chiuso. Il *pmode* argomento è obbligatorio quando **o_creat** è specificato.
**O_CREAT**&AMP;#124; ` _O_EXCL`|Restituisce un errore se un file specificato da *filename* esiste. Si applica solo se usato con **o_creat**.
**O_NOINHERIT**|Impedisce la creazione di un descrittore di file condiviso.
**_O_RANDOM**|Specifica che la memorizzazione nella cache è ottimizzata, ma non limitata, per l'accesso casuale dal disco.
**_O_RDONLY**|Apre un file per la sola lettura. Non è possibile specificare con **o_rdwr** oppure **o_wronly**.
**O_RDWR**|Apre un file per lettura e scrittura. Non è possibile specificare con **o_rdonly** oppure **o_wronly**.
**_O_SEQUENTIAL**|Specifica che la memorizzazione nella cache è ottimizzata, ma non limitata, per l'accesso sequenziale dal disco.
**_O_TEXT**|Apre un file in modalità testo (convertito). Per altre informazioni, vedere [I/O file in modalità testo e binaria](../../c-runtime-library/text-and-binary-mode-file-i-o.md) e [fopen](fopen-wfopen.md).
**O_TRUNC**|Apre un file e lo tronca a lunghezza zero; il file deve disporre dell'autorizzazione di scrittura. Non è possibile specificare con **o_rdonly**. **O_trunc** abbinata **o_creat** apre un file esistente o crea un file. **Nota:** il **o_trunc** flag Elimina definitivamente il contenuto del file specificato.
**O_WRONLY**|Apre un file per la sola scrittura. Non è possibile specificare con **o_rdonly** oppure **o_rdwr**.
**_O_U16TEXT**|Apre un file in modalità Unicode UTF-16.
**_O_U8TEXT**|Apre un file in modalità Unicode UTF-8.
**_O_WTEXT**|Apre un file in modalità Unicode.

Per specificare la modalità di accesso ai file, è necessario specificare **o_rdonly**, **o_rdwr**, o **o_wronly**. Non vi è alcun valore predefinito per la modalità d'accesso.

Quando un file è aperto in modalità Unicode usando **o_wtext**, **_O_U8TEXT**, o **_O_U16TEXT**, input funzioni traducono i dati vengono letti dal file in dati UTF-16 archiviati come tipo **wchar_t**. Le funzioni che scrivono in un file aperto in modalità Unicode prevedono buffer contenenti dati UTF-16 archiviati come tipo **wchar_t**. Se il file è codificato come UTF-8, i dati UTF-16 vengono tradotti in UTF-8 alla scrittura e il contenuto del file codificato in UTF-8 viene tradotto in UTF-16 alla lettura. Un tentativo di leggere o scrivere un numero dispari di byte in modalità Unicode causerà un errore di convalida del parametro. Per leggere o scrivere dati archiviati nel programma come UTF-8, usare una modalità file di testo o binaria al posto della modalità Unicode. Eventuali traduzioni della codifica vanno gestite dall'utente.

Se **sopen** viene chiamato con **o_wronly** | **o_append** (modalità di aggiunta) e **o_wtext**, **_O_ U16TEXT**, o **_O_U8TEXT**, tenta innanzitutto di aprire il file per leggere e scrivere, leggere il BOM, quindi riaprirla per la sola scrittura. Se l'apertura del file per lettura e scrittura ha esito negativo, il file verrà aperto per la sola lettura e verrà usato il valore predefinito per l'impostazione della modalità Unicode.

L'argomento *shflag* è un'espressione costante costituita da una delle seguenti costanti manifesto, definite in \<Share >.

|*shflag* costante|Comportamento|
|-|-|
**SH_DENYRW**|Nega l'accesso in lettura e scrittura a un file.
**SH_DENYWR**|Nega l'accesso in scrittura a un file.
**SH_DENYRD**|Nega l'accesso in lettura a un file.
**SH_DENYNO**|Consente l'accesso in lettura e scrittura.

Il *pmode* argomento è obbligatorio solo quando **o_creat** è specificato. Se il file non esiste, *pmode* specifica impostazioni di autorizzazione del file, che vengono impostate quando il nuovo file viene chiuso la prima volta. In caso contrario, *pmode* viene ignorato. *pmode* è un'espressione integer che contiene una o entrambe le costanti manifesto **s_iwrite** e **s_iread**, che sono definite in \<sys\stat.h >. Quando vengono fornite entrambe le costanti, queste sono combinate con l'operatore OR bit per bit. Il significato dei *pmode* è indicato di seguito.

|*pmode*|Significato|
|-|-|
**S_IREAD**|Solo lettura consentita.
**S_IWRITE**|Scrittura consentita. (In effetti, consente la lettura e la scrittura)
**S_IREAD** &AMP;#124; **S_IWRITE**|Lettura e scrittura consentite.

Se non viene concessa l'autorizzazione in scrittura, il file è di sola lettura. Nel sistema operativo Windows, tutti i file sono leggibili; non è possibile concedere l'autorizzazione di sola scrittura. Di conseguenza, le modalità **s_iwrite** e **s_iread** | **s_iwrite** sono equivalenti.

**sopen** si applica la maschera corrente di autorizzazione file a *pmode* prima di impostare le autorizzazioni. Vedere [_umask](umask.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_sopen**|\<io.h>|\<fcntl.h>, \<sys\types.h>, \<sys\stat.h>, \<share.h>|
|**_wsopen**|\<io.h> o \<wchar.h>|\<fcntl.h>, \<sys\types.h>, \<sys\stat.h>, \<share.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [_locking](locking.md).

## <a name="see-also"></a>Vedere anche

[I/O a basso livello](../../c-runtime-library/low-level-i-o.md)<br/>
[_close](close.md)<br/>
[_creat, _wcreat](creat-wcreat.md)<br/>
[fopen, _wfopen](fopen-wfopen.md)<br/>
[_fsopen, _wfsopen](fsopen-wfsopen.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
