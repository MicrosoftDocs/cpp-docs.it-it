---
description: 'Altre informazioni su: _sopen_s, _wsopen_s'
title: _sopen_s, _wsopen_s
ms.date: 4/2/2020
api_name:
- _sopen_s
- _wsopen_s
- _o__sopen_s
- _o__wsopen_s
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
- api-ms-win-crt-stdio-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
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
ms.openlocfilehash: 14a15f78ad452873813f9a6eb4f65de93cd055b8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97136994"
---
# <a name="_sopen_s-_wsopen_s"></a>_sopen_s, _wsopen_s

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

*PFH*<br/>
L'handle di file o -1 in caso di errore.

*filename*<br/>
Nome file.

*Oflag*<br/>
Tipo di operazioni consentite.

*shflag*<br/>
Tipo di condivisione consentita.

*pmode*<br/>
Impostazione di autorizzazione.

## <a name="return-value"></a>Valore restituito

Un valore restituito diverso da zero indica un errore. in tal caso, **errno** viene impostato su uno dei valori seguenti.

|Valore errno|Condizione|
|-|-|
| **EACCES** |  Il percorso specificato è una directory o il file è di sola lettura, ma è stata tentata un'operazione di apertura in scrittura. |
| **EEXIST** |  Sono stati specificati i flag **_O_CREAT** e **_O_EXCL** , ma *filename* esiste già. |
| **EINVAL** |  Argomento *Oflag*, *shflag* o *pmode* non valido oppure *PFH* o *filename* è un puntatore null. |
| **EMFILE** | Non sono disponibili altri descrittori di file. |
| **ENOENT** | File o percorso non trovato. |

Se viene passato un argomento non valido alla funzione, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** viene impostato su **EINVAL** e **EINVAL** viene restituito.

Per altre informazioni su questi e altri codici restituiti, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

In caso di errore, viene restituito-1 tramite *PFH* (a meno che *PFH* non sia un puntatore null).

## <a name="remarks"></a>Commenti

La funzione **_sopen_s** apre il file specificato da *filename* e prepara il file per la lettura o la scrittura condivisa, come definito da *Oflag* e *shflag*. **_wsopen_s** è una versione a caratteri wide di **_sopen_s**; l'argomento *filename* per **_wsopen_s** è una stringa di caratteri wide. **_wsopen_s** e **_sopen_s** si comportano in modo identico.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tsopen_s**|**_sopen_s**|**_sopen_s**|**_wsopen_s**|

L'espressione integer *Oflag* è costituita dalla combinazione di una o più costanti manifesto, definite in \<fcntl.h> . Quando due o più costanti formano l'argomento *Oflag*, vengono combinate con l'operatore OR bit per bit ( **&#124;** ).

|costante *Oflag*|Comportamento|
|-|-|
| **_O_APPEND** | Sposta il puntatore a file alla fine del file prima di ogni operazione di scrittura. |
| **_O_BINARY** | Apre il file in modalità binaria (non convertita). Vedere [fopen](fopen-wfopen.md) per una descrizione della modalità binaria. |
| **_O_CREAT** | Crea e apre un nuovo file per la scrittura. Non ha alcun effetto se il file specificato da *filename* esiste. L'argomento *pmode* è obbligatorio quando si specifica **_O_CREAT** . |
| **_O_CREAT** &#124; **_O_SHORT_LIVED** | Crea un file come temporaneo e se possibile non lo scarica su disco. L'argomento *pmode* è obbligatorio quando si specifica **_O_CREAT** . |
| **_O_CREAT** &#124; **_O_TEMPORARY** | Crea un file come temporaneo; il file viene eliminato quando l'ultimo descrittore del file viene chiuso. L'argomento *pmode* è obbligatorio quando si specifica **_O_CREAT** . |
| **_O_CREAT** &#124; `_O_EXCL` | Restituisce un valore di errore se esiste un file specificato da *filename* . Si applica solo se utilizzato con **_O_CREAT**. |
| **_O_NOINHERIT** | Impedisce la creazione di un descrittore di file condiviso. |
| **_O_RANDOM** | Specifica che la memorizzazione nella cache è ottimizzata, ma non limitata, per l'accesso casuale dal disco. |
| **_O_RDONLY** | Apre un file per la sola lettura. Non può essere specificato con **_O_RDWR** o **_O_WRONLY**. |
| **_O_RDWR** | Apre un file per lettura e scrittura. Non può essere specificato con **_O_RDONLY** o **_O_WRONLY**. |
| **_O_SEQUENTIAL** | Specifica che la memorizzazione nella cache è ottimizzata, ma non limitata, per l'accesso sequenziale dal disco. |
| **_O_TEXT** | Apre un file in modalità testo (convertito). Per altre informazioni, vedere [I/O file in modalità testo e binaria](../../c-runtime-library/text-and-binary-mode-file-i-o.md) e [fopen](fopen-wfopen.md). |
| **_O_TRUNC** | Apre un file e lo tronca a lunghezza zero; il file deve disporre dell'autorizzazione di scrittura. Non può essere specificato con **_O_RDONLY**. **_O_TRUNC** utilizzato con **_O_CREAT** apre un file esistente o crea un file. **Nota:** Il flag **_O_TRUNC** Elimina il contenuto del file specificato. |
| **_O_WRONLY** | Apre un file per la sola scrittura. Non può essere specificato con **_O_RDONLY** o **_O_RDWR**. |
| **_O_U16TEXT** | Apre un file in modalità Unicode UTF-16. |
| **_O_U8TEXT** | Apre un file in modalità Unicode UTF-8. |
| **_O_WTEXT** | Apre un file in modalità Unicode. |

Per specificare la modalità di accesso ai file, è necessario specificare **_O_RDONLY**, **_O_RDWR** o **_O_WRONLY**. Non vi è alcun valore predefinito per la modalità d'accesso.

Quando un file viene aperto in modalità Unicode usando **_O_WTEXT**, **_O_U8TEXT** o **_O_U16TEXT**, le funzioni di input traducono i dati letti dal file in dati UTF-16 archiviati come tipo **`wchar_t`** . Le funzioni che scrivono in un file aperto in modalità Unicode prevedono buffer contenenti dati UTF-16 archiviati come tipo **`wchar_t`** . Se il file è codificato come UTF-8, i dati UTF-16 vengono tradotti in UTF-8 alla scrittura e il contenuto del file codificato in UTF-8 viene tradotto in UTF-16 alla lettura. Un tentativo di leggere o scrivere un numero dispari di byte in modalità Unicode causerà un errore di convalida del parametro. Per leggere o scrivere dati archiviati nel programma come UTF-8, usare una modalità file di testo o binaria al posto della modalità Unicode. Eventuali traduzioni della codifica vanno gestite dall'utente.

Se **_sopen_s** viene chiamato con **_O_WRONLY**  |  **_O_APPEND** (modalità Append) e **_O_WTEXT**, **_O_U16TEXT** o **_O_U8TEXT**, tenta innanzitutto di aprire il file per la lettura e la scrittura, di leggere l'indicatore di ordine dei byte e quindi di riaprirlo per la sola scrittura. Se l'apertura del file per lettura e scrittura ha esito negativo, il file verrà aperto per la sola lettura e verrà usato il valore predefinito per l'impostazione della modalità Unicode.

L'argomento *shflag* è un'espressione costante costituita da una delle seguenti costanti manifesto, definite in \<share.h> .

|costante *shflag*|Comportamento|
|-|-|
| **_SH_DENYRW** | Nega l'accesso in lettura e scrittura a un file. |
| **_SH_DENYWR** | Nega l'accesso in scrittura a un file. |
| **_SH_DENYRD** | Nega l'accesso in lettura a un file. |
| **_SH_DENYNO** | Consente l'accesso in lettura e scrittura. |

L'argomento *pmode* è sempre obbligatorio, a differenza del **_sopen**. Quando si specifica **_O_CREAT**, se il file non esiste, *pmode* specifica le impostazioni di autorizzazione del file, che vengono impostate quando il nuovo file viene chiuso la prima volta. In caso contrario, *pmode* viene ignorato. *pmode* è un'espressione Integer che contiene una o entrambe le costanti manifeste **_S_IWRITE** e **_S_IREAD**, definite in \<sys\stat.h> . Quando vengono fornite entrambe le costanti, queste sono combinate con l'operatore OR bit per bit. Il significato di *pmode* è il seguente.

|*pmode*|Significato|
|-|-|
| **_S_IREAD** | Solo lettura consentita. |
| **_S_IWRITE** | Scrittura consentita. (In effetti, consente la lettura e la scrittura) |
| **_S_IREAD** &#124; **_S_IWRITE** | Lettura e scrittura consentite. |

Se non viene concessa l'autorizzazione in scrittura, il file è di sola lettura. Nel sistema operativo Windows, tutti i file sono leggibili; non è possibile concedere l'autorizzazione di sola scrittura. Pertanto, le modalità **_S_IWRITE** e **_S_IREAD**  |  **_S_IWRITE** sono equivalenti.

**_sopen_s** applica la maschera di autorizzazione file corrente a *pmode* prima che vengano impostate le autorizzazioni. Vedere [_umask](umask.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_sopen_s**|\<io.h>|\<fcntl.h>, \<sys\types.h>, \<sys\stat.h>, \<share.h>|
|**_wsopen_s**|\<io.h> o \<wchar.h>|\<fcntl.h>, \<sys/types.h>, \<sys/stat.h>, \<share.h>|

**_sopen_s** e **_Wsopen_s** sono estensioni Microsoft. Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [_locking](locking.md).

## <a name="see-also"></a>Vedi anche

[I/O di basso livello](../../c-runtime-library/low-level-i-o.md)<br/>
[_close](close.md)<br/>
[_creat, _wcreat](creat-wcreat.md)<br/>
[fopen, _wfopen](fopen-wfopen.md)<br/>
[_fsopen, _wfsopen](fsopen-wfsopen.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
