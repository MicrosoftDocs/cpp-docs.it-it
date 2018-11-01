---
title: _sopen_s, _wsopen_s
ms.date: 11/04/2016
apiname:
- _sopen_s
- _wsopen_s
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
- _sopen_s
- wsopen_s
- _wsopen_s
- sopen_s
helpviewer_keywords:
- sopen_s function
- _wsopen_s function
- wsopen_s function
- opening files, for sharing
- files [C++], opening
- _sopen_s function
- files [C++], sharing
ms.assetid: 059a0084-d08c-4973-9174-55e391b72aa2
ms.openlocfilehash: 0b26f8e15efe3e0a044de4c3b2d19f70510a91f6
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50660364"
---
# <a name="sopens-wsopens"></a>_sopen_s, _wsopen_s

Apre un file per la condivisione. Queste versioni di [_sopen e _wsopen](sopen-wsopen.md) includono miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
errno_t _sopen_s(
   int* pfh,
   const char *filename,
   int oflag,
   int shflag,
   int pmode
);
errno_t _wsopen_s(
   int* pfh,
   const wchar_t *filename,
   int oflag,
   int shflag,
   int pmode,
);
```

### <a name="parameters"></a>Parametri

*pfh*<br/>
L'handle di file o -1 in caso di errore.

*filename*<br/>
Nome file.

*oflag*<br/>
Tipo di operazioni consentite.

*shflag*<br/>
Tipo di condivisione consentita.

*pmode*<br/>
Impostazione di autorizzazione.

## <a name="return-value"></a>Valore restituito

Valore restituito diverso da zero indica un errore. In questo caso **errno** è impostato su uno dei valori seguenti.

|Valore errno|Condizione|
|-|-|
**EACCES**| Il percorso specificato è una directory o il file è di sola lettura, ma è stata tentata un'operazione di apertura in scrittura.
**EEXIST**| **O_creat** e **o_excl** flag, sono stati specificati ma *filename* esiste già.
**EINVAL**| Non è valido *oflag*, *shflag*, o *pmode* argomento, oppure *pfh* oppure *filename* era un puntatore null.
**EMFILE**|Non sono disponibili altri descrittori di file.
**ENOENT**|File o percorso non trovato.

Se viene passato un argomento non valido alla funzione, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** è impostata su **EINVAL** e **EINVAL** viene restituito.

Per altre informazioni su questi e altri codici restituiti, vedere [errno, _doserrno, _sys_errlist, e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

In caso di errore, viene restituito -1 attraverso *pfh* (a meno che non *pfh* è un puntatore null).

## <a name="remarks"></a>Note

Il **sopen_s** funzione si apre il file specificato da *filename* e prepara il file per la lettura o scrittura, condivisa come definito dal *oflag* e *shflag* . **wsopen_s** è una versione a caratteri wide di **sopen_s**; gli *nomefile* argomento **wsopen_s** è una stringa di caratteri "wide". **wsopen_s** e **sopen_s** hanno lo stesso comportamento in caso contrario.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tsopen_s**|**_sopen_s**|**_sopen_s**|**_wsopen_s**|

L'espressione integer *oflag* è costituita dalla combinazione di uno o più costanti manifeste, definite in \<fcntl. h >. Quando due o più costanti costituiscono l'argomento *oflag*, vengono combinate con l'operatore OR bit per bit ( **&#124;** ).

|*oflag* costante|Comportamento|
|-|-|
**_O_APPEND**|Sposta il puntatore a file alla fine del file prima di ogni operazione di scrittura.
**O_BINARY**|Apre il file in modalità binaria (non convertita). Vedere [fopen](fopen-wfopen.md) per una descrizione della modalità binaria.
**O_CREAT**|Crea e apre un nuovo file per la scrittura. Non ha alcun effetto se il file specificato da *filename* esiste. Il *pmode* argomento è obbligatorio quando **o_creat** è specificato.
**O_CREAT** &AMP;#124; **_O_SHORT_LIVED**|Crea un file come temporaneo e se possibile non lo scarica su disco. Il *pmode* argomento è obbligatorio quando **o_creat** è specificato.
**O_CREAT** &AMP;#124; **_O_TEMPORARY**|Crea un file come temporaneo; il file viene eliminato quando l'ultimo descrittore del file viene chiuso. Il *pmode* argomento è obbligatorio quando **o_creat** è specificato.
**O_CREAT**&AMP;#124; ` _O_EXCL`|Restituisce un errore se un file specificato da *filename* esiste. Si applica solo se abbinata **o_creat**.
**O_NOINHERIT**|Impedisce la creazione di un descrittore di file condiviso.
**_O_RANDOM**|Specifica che la memorizzazione nella cache è ottimizzata, ma non limitata, per l'accesso casuale dal disco.
**_O_RDONLY**|Apre un file per la sola lettura. Non è possibile specificare con **o_rdwr** oppure **o_wronly**.
**O_RDWR**|Apre un file per lettura e scrittura. Non è possibile specificare con **o_rdonly** oppure **o_wronly**.
**_O_SEQUENTIAL**|Specifica che la memorizzazione nella cache è ottimizzata, ma non limitata, per l'accesso sequenziale dal disco.
**_O_TEXT**|Apre un file in modalità testo (convertito). Per altre informazioni, vedere [I/O file in modalità testo e binaria](../../c-runtime-library/text-and-binary-mode-file-i-o.md) e [fopen](fopen-wfopen.md).
**O_TRUNC**|Apre un file e lo tronca a lunghezza zero; il file deve disporre dell'autorizzazione di scrittura. Non è possibile specificare con **o_rdonly**. **O_trunc** abbinata **o_creat** apre un file esistente o crea un file. **Nota:** il **o_trunc** flag distrugge il contenuto del file specificato.
**O_WRONLY**|Apre un file per la sola scrittura. Non è possibile specificare con **o_rdonly** oppure **o_rdwr**.
**_O_U16TEXT**|Apre un file in modalità Unicode UTF-16.
**_O_U8TEXT**|Apre un file in modalità Unicode UTF-8.
**_O_WTEXT**|Apre un file in modalità Unicode.

Per specificare la modalità di accesso ai file, è necessario specificare **o_rdonly**, **o_rdwr**, o **o_wronly**. Non vi è alcun valore predefinito per la modalità d'accesso.

Quando un file viene aperto in modalità Unicode usando **o_wtext**, **_O_U8TEXT**, o **_O_U16TEXT**, input funzioni traducono i dati vengono letti dal file in dati UTF-16 archiviati come tipo **wchar_t**. Le funzioni che scrivono in un file aperto in modalità Unicode prevedono buffer contenenti dati UTF-16 archiviati come tipo **wchar_t**. Se il file è codificato come UTF-8, i dati UTF-16 vengono tradotti in UTF-8 alla scrittura e il contenuto del file codificato in UTF-8 viene tradotto in UTF-16 alla lettura. Un tentativo di leggere o scrivere un numero dispari di byte in modalità Unicode causerà un errore di convalida del parametro. Per leggere o scrivere dati archiviati nel programma come UTF-8, usare una modalità file di testo o binaria al posto della modalità Unicode. Eventuali traduzioni della codifica vanno gestite dall'utente.

Se **sopen_s** viene chiamato con **o_wronly** | **o_append** (modalità di aggiunta) e **o_wtext**, **_O_ U16TEXT**, oppure **_O_U8TEXT**, esso tenta prima di aprire il file per lettura e scrittura, leggere il BOM e quindi riaprirlo per la sola scrittura. Se l'apertura del file per lettura e scrittura ha esito negativo, il file verrà aperto per la sola lettura e verrà usato il valore predefinito per l'impostazione della modalità Unicode.

L'argomento *shflag* è un'espressione costante costituita da una delle costanti manifesto seguenti, definite in \<Share. h >.

|*shflag* costante|Comportamento|
|-|-|
**SH_DENYRW**|Nega l'accesso in lettura e scrittura a un file.
**SH_DENYWR**|Nega l'accesso in scrittura a un file.
**SH_DENYRD**|Nega l'accesso in lettura a un file.
**SH_DENYNO**|Consente l'accesso in lettura e scrittura.

Il *pmode* è sempre obbligatorio, a differenza nell'argomento **sopen**. Quando si specifica **o_creat**, se il file non esiste, *pmode* specifica impostazioni di autorizzazione del file, che vengono impostate quando il nuovo file viene chiuso la prima volta. In caso contrario, *pmode* viene ignorato. *pmode* è un'espressione integer che contiene una o entrambe le costanti manifeste **s_iwrite** e **s_iread**, che sono definiti nella \<sys\stat.h. >. Quando vengono fornite entrambe le costanti, queste sono combinate con l'operatore OR bit per bit. Il significato dei *pmode* è come indicato di seguito.

|*pmode*|Significato|
|-|-|
**S_IREAD**|Solo lettura consentita.
**S_IWRITE**|Scrittura consentita. (In effetti, consente la lettura e la scrittura)
**S_IREAD** &AMP;#124; **S_IWRITE**|Lettura e scrittura consentite.

Se non viene concessa l'autorizzazione in scrittura, il file è di sola lettura. Nel sistema operativo Windows, tutti i file sono leggibili; non è possibile concedere l'autorizzazione di sola scrittura. Di conseguenza, le modalità **s_iwrite** e **s_iread** | **s_iwrite** sono equivalenti.

**sopen_s** applica la maschera di autorizzazione file corrente per *pmode* prima che siano impostate le autorizzazioni. Vedere [_umask](umask.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_sopen_s**|\<io.h>|\<fcntl.h>, \<sys\types.h>, \<sys\stat.h>, \<share.h>|
|**_wsopen_s**|\<io.h> o \<wchar.h>|\<fcntl.h>, \<sys/types.h>, \<sys/stat.h>, \<share.h>|

**sopen_s** e **wsopen_s** sono estensioni Microsoft. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [_locking](locking.md).

## <a name="see-also"></a>Vedere anche

[I/O a basso livello](../../c-runtime-library/low-level-i-o.md)<br/>
[_close](close.md)<br/>
[_creat, _wcreat](creat-wcreat.md)<br/>
[fopen, _wfopen](fopen-wfopen.md)<br/>
[_fsopen, _wfsopen](fsopen-wfsopen.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
