---
title: "_sopen_s, _wsopen_s | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_sopen_s"
  - "_wsopen_s"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
  - "api-ms-win-crt-stdio-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_sopen_s"
  - "wsopen_s"
  - "_wsopen_s"
  - "sopen_s"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_sopen_s (funzione)"
  - "_wsopen_s (funzione)"
  - "file [C++], apertura"
  - "file [C++], condivisione"
  - "apertura di file, condivisione"
  - "sopen_s (funzione)"
  - "wsopen_s (funzione)"
ms.assetid: 059a0084-d08c-4973-9174-55e391b72aa2
caps.latest.revision: 29
caps.handback.revision: 29
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _sopen_s, _wsopen_s
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Apre un file per la condivisione.  Queste sono versioni di [\_sopen e \_wsopen](../../c-runtime-library/reference/sopen-wsopen.md) con miglioramenti della sicurezza come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Sintassi  
  
```  
errno_t _sopen_s(    int* pfh,    const char *filename,    int oflag,    int shflag,    int pmode ); errno_t _wsopen_s(    int* pfh,    const wchar_t *filename,    int oflag,    int shflag,    int pmode, );  
```  
  
#### Parametri  
 \[out\] `pfh`  
 L'handle di file o \-1 in caso di errore.  
  
 \[in\] `filename`  
 Nome file.  
  
 \[in\] `oflag`  
 Tipo di operazioni consentite.  
  
 \[in\] `shflag`  
 Tipo di condivisione consentita.  
  
 \[in\] `pmode`  
 Impostazione di autorizzazione.  
  
## Valore restituito  
 Un valore restituito diverso da zero indica un errore, nel qual caso `errno` viene impostato su uno dei valori seguenti.  
  
 `EACCES`  
 Il percorso specificato è una directory o il file è di sola lettura, ma è stata tentata un'operazione di apertura in scrittura.  
  
 `EEXIST`  
 Sono stati specificati i flag `_O_CREAT` e `_O_EXCL`, ma `filename` esiste già.  
  
 `EINVAL`  
 `oflag`, `shflag` o `pmode` sono argomenti non validi oppure `pfh` o `filename` era un puntatore null.  
  
 `EMFILE`  
 Non sono disponibili altri descrittori di file.  
  
 `ENOENT`  
 File o percorso non trovato.  
  
 Se viene passato alla funzione un argomento non valido, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, `errno` viene impostato su `EINVAL` e viene restituito `EINVAL`.  
  
 Per altre informazioni su questi e altri codici restituiti, vedere [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
 In caso di errore, verrà restituito \-1 da `pfh` \(a meno che `pfh` non sia un puntatore Null\).  
  
## Note  
 La funzione `_sopen_s` apre il file specificato da `filename` e prepara il file per la lettura o la scrittura condivisa, come definito da `oflag` e `shflag`.  `_wsopen_s` è una versione a caratteri wide di `_sopen_s`; l'argomento `filename` in `_wsopen_s` è una stringa di caratteri wide.  In caso contrario, `_wsopen_s` e `_sopen_s` si comportano in modo identico.  
  
### Mapping di routine di testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tsopen_s`|`_sopen_s`|`_sopen_s`|`_wsopen_s`|  
  
 L'espressione di valori integer `oflag` è costituita dalla combinazione di una o più costanti del manifesto, definite in \<fcntl.h\>.  Quando due o più costanti costituiscono l'argomento `oflag`, vengono combinate con l'operatore OR bit per bit \(  `|` \).  
  
 `_O_APPEND`  
 Riposiziona un puntatore a file alla fine del file prima di ogni operazione di scrittura.  
  
 `_O_BINARY`  
 Apre un file in modalità binaria \(non convertita\).  Vedere [fopen](../../c-runtime-library/reference/fopen-wfopen.md) per una descrizione della modalità binaria.  
  
 `_O_CREAT`  
 Crea e apre un nuovo file per la scrittura.  Non ha effetto se il file specificato da `filename` esiste.  
  
 `_O_CREAT | _O_SHORT_LIVED`  
 Crea un file come temporaneo e se possibile non lo scarica su disco.  
  
 `_O_CREAT | _O_TEMPORARY`  
 Crea un file come temporaneo; il file viene eliminato quando l'ultimo descrittore del file viene chiuso.  
  
 `_O_CREAT | _O_EXCL`  
 Restituisce un errore se il file specificato da `filename` esiste.  Si applica solo se usato con `_O_CREAT`.  
  
 `_O_NOINHERIT`  
 Impedisce la creazione di un descrittore di file condiviso.  
  
 `_O_RANDOM`  
 Specifica l'accesso sul disco principalmente casuale.  
  
 `_O_RDONLY`  
 Apre un file per la sola lettura.  Non può essere specificato con `_O_RDWR` o `_O_WRONLY`.  
  
 `_O_RDWR`  
 Apre un file per lettura e scrittura.  Non può essere specificato con `_O_RDONLY` o `_O_WRONLY`.  
  
 `_O_SEQUENTIAL`  
 Specifica l'accesso sul disco principalmente sequenziale.  
  
 `_O_TEXT`  
 Apre un file in modalità testo \(convertito\).  Per altre informazioni, vedere [I\/O file modalità testo e binaria](../../c-runtime-library/text-and-binary-mode-file-i-o.md) e [fopen](../../c-runtime-library/reference/fopen-wfopen.md).  
  
 `_O_TRUNC`  
 Apre un file e lo tronca a lunghezza zero; il file deve disporre dell'autorizzazione di scrittura.  Non può essere specificato con `_O_RDONLY`.  `_O_TRUNC` usato con `_O_CREAT` apre un file esistente o crea un nuovo file.  
  
> [!NOTE]
>  Il flag `_O_TRUNC` elimina in modo permanente il contenuto del file specificato.  
  
 `_O_WRONLY`  
 Apre un file per la sola scrittura.  Non può essere specificato con `_O_RDONLY` o `_O_RDWR`.  
  
 `_O_U16TEXT`  
 Apre un file in modalità Unicode UTF\-16.  
  
 `_O_U8TEXT`  
 Apre un file in modalità Unicode UTF\-8.  
  
 `_O_WTEXT`  
 Apre un file in modalità Unicode.  
  
 Per specificare la modalità di accesso al file, è necessario specificare `_O_RDONLY`, `_O_RDWR` o `_O_WRONLY`.  Non vi è alcun valore predefinito per la modalità d'accesso.  
  
 Quando un file viene aperto in modalità Unicode usando `_O_WTEXT`, `_O_U8TEXT` o `_O_U16TEXT`, le funzioni di input traducono i dati letti dal file in dati UTF\-16 archiviati come tipo `wchar_t`.  Le funzioni che scrivono in un file aperto in modalità Unicode prevedono buffer contenenti dati UTF\-16 archiviati come tipo `wchar_t`.  Se il file è codificato come UTF\-8, i dati UTF\-16 vengono tradotti in UTF\-8 alla scrittura e il contenuto del file codificato in UTF\-8 viene tradotto in UTF\-16 alla lettura.  Un tentativo di leggere o scrivere un numero dispari di byte in modalità Unicode causerà un errore di convalida del parametro.  Per leggere o scrivere dati archiviati nel programma come UTF\-8, usare una modalità file di testo o binaria al posto della modalità Unicode.  Eventuali traduzioni della codifica vanno gestite dall'utente.  
  
 Se `_sopen_s` viene chiamato con `_O_WRONLY | _O_APPEND` \(modalità di aggiunta\) e `_O_WTEXT`, `_O_U16TEXT` o `_O_U8TEXT`, tenterà prima di tutto di aprire il file per la lettura e la scrittura, di leggere l'indicatore di ordine dei byte e quindi di riaprirlo per la sola scrittura.  Se l'apertura del file per lettura e scrittura ha esito negativo, il file verrà aperto per la sola lettura e verrà usato il valore predefinito per l'impostazione della modalità Unicode.  
  
 L'argomento `shflag` è un'espressione costante costituita da una delle seguenti costanti manifesto, definite in \<share.h\>.  
  
 `_SH_DENYRW`  
 Nega l'accesso in lettura e scrittura a un file.  
  
 `_SH_DENYWR`  
 Nega l'accesso in scrittura a un file.  
  
 `_SH_DENYRD`  
 Nega l'accesso in lettura a un file.  
  
 `_SH_DENYNO`  
 Consente l'accesso in lettura e scrittura.  
  
 L'argomento `pmode` è sempre necessario, a differenza di `_sopen`.  Quando si specifica `_O_CREAT`, se il file non esiste, `pmode` specifica le impostazioni di autorizzazione del file, che vengono impostate quando il nuovo file viene chiuso la prima volta.  In caso contrario `pmode` viene ignorato.  `pmode` è un'espressione integer che contiene una o entrambe le costanti manifesto `_S_IWRITE` e `_S_IREAD`, definite in \<sys\\stat.h\>.  Quando vengono fornite entrambe le costanti, queste sono combinate con l'operatore OR bit per bit.  Il significato di `pmode` è indicato di seguito.  
  
 `_S_IWRITE`  
 Scrittura consentita.  
  
 `_S_IREAD`  
 Lettura consentita.  
  
 `_S_IREAD | _S_IWRITE`  
 Lettura e scrittura consentite.  
  
 Se non viene concessa l'autorizzazione in scrittura, il file è di sola lettura.  Nel sistema operativo Windows, tutti i file sono leggibili; non è possibile concedere l'autorizzazione di sola scrittura.  Di conseguenza, le modalità `_S_IWRITE` e `_S_IREAD | _S_IWRITE` sono equivalenti.  
  
 `_sopen_s` applica la maschera corrente di autorizzazione file a `pmode` prima di impostare le autorizzazioni.  Vedere [\_umask](../../c-runtime-library/reference/umask.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazione facoltativa|  
|-------------|-------------------------------|------------------------------|  
|`_sopen_s`|\<io.h\>|\<fcntl.h\>, \<sys\\types.h\>, \<sys\\stat.h\>, \<share.h\>|  
|`_wsopen_s`|\<io.h\> o \<wchar.h\>|\<fcntl.h\>, \<sys\/types.h\>, \<sys\/stat.h\>, \<share.h\>|  
  
 `_sopen_s` e `_wsopen_s` sono estensioni Microsoft.  Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
 Vedere l'esempio per [\_locking](../../c-runtime-library/reference/locking.md).  
  
## Vedere anche  
 [I\/O a basso livello](../../c-runtime-library/low-level-i-o.md)   
 [\_close](../../c-runtime-library/reference/close.md)   
 [\_creat, \_wcreat](../../c-runtime-library/reference/creat-wcreat.md)   
 [fopen, \_wfopen](../../c-runtime-library/reference/fopen-wfopen.md)   
 [\_fsopen, \_wfsopen](../../c-runtime-library/reference/fsopen-wfsopen.md)   
 [\_open, \_wopen](../../c-runtime-library/reference/open-wopen.md)