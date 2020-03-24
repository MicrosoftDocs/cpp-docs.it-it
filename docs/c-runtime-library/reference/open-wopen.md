---
title: _open, _wopen
ms.date: 11/04/2016
api_name:
- _open
- _wopen
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _wopen
- _topen
- _open
helpviewer_keywords:
- opening files, for file I/O
- topen function
- _open function
- _topen function
- _wopen function
- files [C++], opening
- wopen function
- open function
ms.assetid: 13f6a0c3-d1aa-450d-a7aa-74abc91b163e
ms.openlocfilehash: 4ce6e9aebe5d058143ad737f9c9db5bb68b30b1f
ms.sourcegitcommit: eff68e4e82be292a5664616b16a526df3e9d1cda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80150726"
---
# <a name="_open-_wopen"></a>_open, _wopen

Apre un file. Queste funzioni sono deprecate perché sono disponibili versioni più sicure. Vedere [_sopen_s, _wsopen_s](sopen-s-wsopen-s.md).

## <a name="syntax"></a>Sintassi

```C
int _open(
   const char *filename,
   int oflag [,
   int pmode]
);
int _wopen(
   const wchar_t *filename,
   int oflag [,
   int pmode]
);
```

### <a name="parameters"></a>Parametri

*filename*<br/>
Nome file.

*Oflag*<br/>
Tipo di operazioni consentite.

*pmode*<br/>
Modalità di autorizzazione.

## <a name="return-value"></a>Valore restituito

Ognuna di queste funzioni restituisce un descrittore di file per il file aperto. Un valore restituito di-1 indica un errore. in tal caso, **errno** viene impostato su uno dei valori seguenti.

|Valore errno|Condizione|
|-|-|
| **EACCES** | Si è tentato di aprire un file di sola lettura per la scrittura, la modalità di condivisione del file non consente le operazioni specificate o il percorso specificato è una directory. |
| **EEXIST** | Flag di **_O_CREAT** e di **_O_EXCL** specificati, ma *filename* esiste già. |
| **EINVAL** | Argomento *Oflag* o *pmode* non valido. |
| **EMFILE** | Non sono disponibili altri descrittori di file (sono aperti troppi file). |
| **ENOENT** | File o percorso non trovato. |

Per altre informazioni su questi e altri codici restituiti, vedere [errno, _doserrno, _sys_errlist, e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

La funzione **_open** apre il file specificato da *filename* e lo prepara per la lettura o la scrittura, come specificato da *Oflag*. **_wopen** è una versione a caratteri wide di **_open**; l'argomento *filename* per **_wopen** è una stringa di caratteri wide. **_wopen** e **_open** si comportano in modo identico.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_topen**|**_open**|**_open**|**_wopen**|

*Oflag* è un'espressione Integer formata da una o più delle seguenti costanti manifesto o combinazioni di costanti, definite in \<fcntl. h >.

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

Per specificare la modalità di accesso ai file, è necessario specificare **_O_RDONLY**, **_O_RDWR**o **_O_WRONLY**. Non vi è alcun valore predefinito per la modalità d'accesso.

Se **_O_WTEXT** viene utilizzato per aprire un file per la lettura, **_open** legge l'inizio del file e verifica la presenza di un byte order mark (BOM). Se l'indicatore è presente, il file viene considerato come un file UTF-8 o UTF-16LE, a seconda dell'indicatore dell'ordine dei byte. In caso contrario, il file viene considerato come ANSI. Quando un file viene aperto per la scrittura tramite **_O_WTEXT**, viene utilizzato UTF-16. Indipendentemente da qualsiasi impostazione precedente o byte order mark, se si utilizza **_O_U8TEXT** , il file viene sempre aperto come UTF-8; Se si utilizza **_O_U16TEXT** , il file viene sempre aperto come UTF-16.

Quando un file viene aperto in modalità Unicode usando **_O_WTEXT**, **_O_U8TEXT**o **_O_U16TEXT**, le funzioni di input traducono i dati letti dal file in dati UTF-16 archiviati come tipo **wchar_t**. Le funzioni che scrivono in un file aperto in modalità Unicode prevedono buffer contenenti dati UTF-16 archiviati come tipo **wchar_t**. Se il file è codificato come UTF-8, i dati UTF-16 vengono tradotti in UTF-8 alla scrittura e il contenuto del file codificato in UTF-8 viene tradotto in UTF-16 alla lettura. Un tentativo di lettura o scrittura di un numero dispari di byte in modalità Unicode causerà un errore di convalida del parametro. Per leggere o scrivere dati archiviati nel programma come UTF-8, usare una modalità file di testo o binaria al posto della modalità Unicode. Eventuali traduzioni della codifica vanno gestite dall'utente.

Se **_open** viene chiamato con **_O_WRONLY** |  **_O_APPEND** (modalità Append) e **_O_WTEXT**, **_O_U16TEXT**o **_O_U8TEXT**, tenta innanzitutto di aprire il file per la lettura e la scrittura, di leggere l'indicatore di ordine dei byte e quindi di riaprirlo per la sola scrittura. Se l'apertura del file per lettura e scrittura ha esito negativo, il file verrà aperto per la sola lettura e verrà usato il valore predefinito per l'impostazione della modalità Unicode.

Quando vengono usate due o più costanti manifeste per formare l'argomento *Oflag* , le costanti vengono combinate con l'operatore OR bit per bit **&#124;** (). Per una discussione sulle modalità testo e binaria, vedere [I/O file in modalità testo e binaria](../../c-runtime-library/text-and-binary-mode-file-i-o.md).

L'argomento *pmode* è obbligatorio solo quando si specifica **_O_CREAT** . Se il file esiste già, *pmode* viene ignorato. In caso contrario, *pmode* specifica le impostazioni di autorizzazione file, che vengono impostate quando il nuovo file viene chiuso la prima volta. **_open** applica la maschera di autorizzazione file corrente a *pmode* prima che vengano impostate le autorizzazioni. Per ulteriori informazioni, vedere [_umask](umask.md). *pmode* è un'espressione Integer che contiene una o entrambe le costanti manifeste seguenti, definite in \<SYS\Stat.h >.

|*pmode*|Significato|
|-|-|
| **_S_IREAD** | Solo lettura consentita. |
| **_S_IWRITE** | Scrittura consentita. (In effetti, consente la lettura e la scrittura) |
| **_S_IREAD** &#124; **_S_IWRITE** | Lettura e scrittura consentite. |

Quando vengono specificate entrambe le costanti, queste vengono unite con l'operatore OR bit per **&#124;** bit (). In Windows tutti i file solo leggibili. L'autorizzazione di sola scrittura non è disponibile. Pertanto, le modalità **_S_IWRITE** e **_S_IREAD** |  **_S_IWRITE** sono equivalenti.

Se viene specificato un valore diverso da una combinazione di **_S_IREAD** e **_S_IWRITE** per *pmode*, anche se si specifica un *pmode* valido in un altro sistema operativo, o se viene specificato un valore diverso dai valori *Oflag* consentiti, la funzione genera un'asserzione in modalità debug e richiama il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce-1 e **errno** viene impostato su **EINVAL**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_open**|\<io.h>|\<fcntl.h>, \<sys\types.h>, \<sys\stat.h>|
|**_wopen**|\<io.h> o \<wchar.h>|\<fcntl.h>, \<sys\types.h>, \<sys\stat.h>|

**_open** e **_Wopen** sono estensioni Microsoft. Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

```C
// crt_open.c
// compile with: /W3
/* This program uses _open to open a file
* named CRT_OPEN.C for input and a file named CRT_OPEN.OUT
* for output. The files are then closed.
*/
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <io.h>
#include <stdio.h>

int main( void )
{
   int fh1, fh2;

   fh1 = _open( "CRT_OPEN.C", _O_RDONLY ); // C4996
   // Note: _open is deprecated; consider using _sopen_s instead
   if( fh1 == -1 )
      perror( "Open failed on input file" );
   else
   {
      printf( "Open succeeded on input file\n" );
      _close( fh1 );
   }

   fh2 = _open( "CRT_OPEN.OUT", _O_WRONLY | _O_CREAT, _S_IREAD |
                            _S_IWRITE ); // C4996
   if( fh2 == -1 )
      perror( "Open failed on output file" );
   else
   {
      printf( "Open succeeded on output file\n" );
      _close( fh2 );
   }
}
```

### <a name="output"></a>Output

```Output
Open succeeded on input file
Open succeeded on output file
```

## <a name="see-also"></a>Vedere anche

[I/O a basso livello](../../c-runtime-library/low-level-i-o.md)<br/>
[_chmod, _wchmod](chmod-wchmod.md)<br/>
[_close](close.md)<br/>
[_creat, _wcreat](creat-wcreat.md)<br/>
[_dup, _dup2](dup-dup2.md)<br/>
[fopen, _wfopen](fopen-wfopen.md)<br/>
[_sopen, _wsopen](sopen-wsopen.md)<br/>
