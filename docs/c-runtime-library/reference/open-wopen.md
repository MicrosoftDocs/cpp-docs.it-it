---
title: _open, _wopen | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _open
- _wopen
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
- _wopen
- _topen
- _open
dev_langs:
- C++
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
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: bf1d5cca5f729e0b3e2ee55cd6d8778450bdead1
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32405341"
---
# <a name="open-wopen"></a>_open, _wopen

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

*oflag*<br/>
Tipo di operazioni consentite.

*pmode*<br/>
Modalità di autorizzazione.

## <a name="return-value"></a>Valore restituito

Ognuna di queste funzioni restituisce un descrittore di file per il file aperto. Valore restituito di -1 indica un errore. In questo caso **errno** è impostata su uno dei valori seguenti.

|Valore errno|Condizione|
|-|-|
**EACCES**|Si è tentato di aprire un file di sola lettura per la scrittura, la modalità di condivisione del file non consente le operazioni specificate o il percorso specificato è una directory.
**EEXIST**|**O_creat** e **o_excl** flag specificati, ma *filename* esiste già.
**EINVAL**|Non valido *oflag* oppure *pmode* argomento.
**EMFILE**|Non sono disponibili altri descrittori di file (sono aperti troppi file).
**ENOENT**|File o percorso non trovato.

Per altre informazioni su questi e altri codici restituiti, vedere [errno, _doserrno, _sys_errlist, e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Il **Open** funzione si apre il file specificato da *filename* e prepararlo per la lettura o scrittura, come specificato dalle *oflag*. **wopen** è una versione a caratteri "wide" **Open**; il *filename* argomento **wopen** è una stringa di caratteri "wide". **wopen** e **Open** si comportano in modo identico in caso contrario.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**topen**|**_open**|**_open**|**_wopen**|

*oflag* è un'espressione integer formata da una o più delle costanti manifesto seguenti o combinazioni di costanti, definite in \<fcntl >.

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

Se **o_wtext** consente di aprire un file per la lettura, **Open** legge la parte iniziale del file e verifica la presenza di un byte order mark (BOM). Se l'indicatore è presente, il file viene considerato come un file UTF-8 o UTF-16LE, a seconda dell'indicatore dell'ordine dei byte. In caso contrario, il file viene considerato come ANSI. Quando un file è aperto per la scrittura usando **o_wtext**, viene utilizzato UTF-16. Indipendentemente da qualsiasi impostazione precedente o byte order mark, se **_O_U8TEXT** viene utilizzato, il file viene sempre aperto come UTF-8; se **_O_U16TEXT** viene utilizzato, il file viene sempre aperto come UTF-16.

Quando un file è aperto in modalità Unicode usando **o_wtext**, **_O_U8TEXT**, o **_O_U16TEXT**, input funzioni traducono i dati vengono letti dal file in dati UTF-16 archiviati come tipo **wchar_t**. Le funzioni che scrivono in un file aperto in modalità Unicode prevedono buffer contenenti dati UTF-16 archiviati come tipo **wchar_t**. Se il file è codificato come UTF-8, i dati UTF-16 vengono tradotti in UTF-8 alla scrittura e il contenuto del file codificato in UTF-8 viene tradotto in UTF-16 alla lettura. Un tentativo di leggere o scrivere un numero dispari di byte in modalità Unicode causerà un errore di convalida del parametro. Per leggere o scrivere dati archiviati nel programma come UTF-8, usare una modalità file di testo o binaria al posto della modalità Unicode. Eventuali traduzioni della codifica vanno gestite dall'utente.

Se **Open** viene chiamato con **o_wronly** | **o_append** (modalità di aggiunta) e **o_wtext**, **_O_ U16TEXT**, o **_O_U8TEXT**, tenta innanzitutto di aprire il file per leggere e scrivere, leggere il BOM, quindi riaprirla per la sola scrittura. Se l'apertura del file per lettura e scrittura ha esito negativo, il file verrà aperto per la sola lettura e verrà usato il valore predefinito per l'impostazione della modalità Unicode.

Quando due o più costanti del manifesto vengono usate per costituire il *oflag* argomento, vengono combinate con l'operatore OR bit per bit ( **&#124;** ). Per una discussione sulle modalità testo e binaria, vedere [I/O file in modalità testo e binaria](../../c-runtime-library/text-and-binary-mode-file-i-o.md).

Il *pmode* argomento è obbligatorio solo quando **o_creat** è specificato. Se il file esiste già, *pmode* viene ignorato. In caso contrario, *pmode* specifica le impostazioni di autorizzazione file, che vengono impostate quando il nuovo file viene chiuso la prima volta. **Open** si applica la maschera corrente di autorizzazione file a *pmode* prima di impostare le autorizzazioni. (Per altre informazioni, vedere [umask](umask.md).) *pmode* è un'espressione integer che contiene una o entrambe le costanti manifesto seguenti, definite in \<sys\stat.h >.

|*pmode*|Significato|
|-|-|
**S_IREAD**|Solo lettura consentita.
**S_IWRITE**|Scrittura consentita. (In effetti, consente la lettura e la scrittura)
**S_IREAD** &AMP;#124; **S_IWRITE**|Lettura e scrittura consentite.

Quando vengono fornite entrambe le costanti, queste sono combinate con l'operatore OR bit per bit ( **&#124;** ). In Windows tutti i file solo leggibili. L'autorizzazione di sola scrittura non è disponibile. Di conseguenza, le modalità **s_iwrite** e **s_iread** | **s_iwrite** sono equivalenti.

Se un valore diverso da una combinazione di **s_iread** e **s_iwrite** specificato per *pmode*, anche se viene specificato un valore valido *pmode*in un altro sistema operativo, o se un valore diverso consentiti *oflag* values viene specificata, la funzione genera un'asserzione in modalità di Debug e richiama il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce -1 e imposta **errno** alla **EINVAL**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_open**|\<io.h>|\<fcntl.h>, \<sys\types.h>, \<sys\stat.h>|
|**_wopen**|\<io.h> o \<wchar.h>|\<fcntl.h>, \<sys\types.h>, \<sys\stat.h>|

**Open** e **wopen** sono estensioni Microsoft. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

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
