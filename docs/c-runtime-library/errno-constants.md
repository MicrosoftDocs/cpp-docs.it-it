---
description: 'Altre informazioni su: costanti errno'
title: Costanti errno
ms.date: 09/17/2018
f1_keywords:
- ENOEXEC
- ENOMEM
- E2BIG
- STRUNCATE
- ENOENT
- EMFILE
- EBADF
- EDEADLOCK
- EXDEV
- EILSEQ
- EINVAL
- EDOM
- EACCES
- ERANGE
- ENOSPC
- EAGAIN
- EEXIST
- ECHILD
helpviewer_keywords:
- ENOEXEC constant
- EBADF constant
- EAGAIN constant
- EINVAL constant
- ENOENT constant
- errno constants
- E2BIG constant
- EMFILE constant
- EDEADLOCK constant
- ENOSPC constant
- EDOM constant
- ENOMEM constant
- EACCES constant
- EEXIST constant
- STRUNCATE constant
- ERANGE constant
- ECHILD constant
- EXDEV constant
- EILSEQ constant
ms.assetid: 47089258-d5a5-4cd8-b193-223894dea0cf
ms.openlocfilehash: 4eb92b66970f1ef9455a0d7dd741ad02a60c26d2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97329345"
---
# <a name="errno-constants"></a>Costanti errno

## <a name="syntax"></a>Sintassi

```
#include <errno.h>
```

## <a name="remarks"></a>Osservazioni

I valori di **errno** sono costanti assegnate a [errno](../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) in caso di varie condizioni di errore.

ERRNO.H contiene le definizioni dei valori di **errno**. Tuttavia, non tutte le definizioni date da ERRNO.H sono utilizzate nei sistemi operativi Windows a 32 bit. Alcuni valori in ERRNO.H sono presenti per mantenere la compatibilità con la famiglia di sistemi operativi UNIX.

I valori di **errno** in un sistema operativo Windows a 32 bit sono un subset dei valori per **errno** nei sistemi XENIX. Il valore di **errno** non è pertanto necessariamente lo stesso codice di errore restituito da una chiamata di sistema dai sistemi operativi Windows. Per accedere al codice di errore del sistema operativo, usare la variabile [_doserrno](../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md), che contiene questo valore.

Sono supportati i valori **errno** seguenti:

|Costante|Descrizione|
|-|-|
|**ECHILD**|Nessun processo generato.|
|**EAGAIN**|Nessun altro processo. Un tentativo di creare un nuovo processo non è riuscito in quanto non esistono altri slot di processo, oppure la memoria è insufficiente o il massimo livello di annidamento è stato raggiunto.|
|**E2BIG**|Elenco degli argomenti troppo lungo.|
|**EACCES**|Autorizzazione negata. L'impostazione di autorizzazione del file non consente l'accesso specificato. Questo errore indica che si è tentato di accedere a un file (o, in alcuni casi, a una directory) in un modo che è incompatibile con gli attributi del file.<br/><br/>Ad esempio, l'errore può verificarsi quando viene effettuato un tentativo di lettura da un file che non è aperto, per aprire un file di sola lettura esistente per la scrittura o per aprire una directory anziché un file. Nel sistema operativo MS-DOS versioni 3.0 e successive **EACCES** può anche indicare un blocco o una violazione di condivisione.<br/><br/>L'errore può verificarsi anche quando si tenta di rinominare un file o una directory o per rimuovere una directory esistente.|
|**EBADF**|Numero file errato. Esistono due possibili cause: 1) Il descrittore del file specificato non è un valore valido o non fa riferimento a un file aperto. 2) Si è tentato di scrivere in un file o in un dispositivo aperto per l'accesso di sola lettura.|
|**EDEADLOCK**|Si verificherebbe un deadlock delle risorse. L'argomento a una funzione matematica non si trova nel dominio della funzione.|
|**EDOM**|Argomento matematico.|
|**EEXIST**|File esistenti. Si è tentato di creare un file già esistente. Ad esempio, i flag **_O_CREAT** e **_O_EXCL** vengono specificati in una chiamata **_open**, ma il file denominato esiste già.|
|**EILSEQ**|Sequenza non valida di byte (ad esempio, in una stringa MBCS).|
|**EINVAL**|Argomento non valido. Un valore non valido è stato fornito per uno degli argomenti a una funzione. Ad esempio, il valore specificato per l'origine quando si posiziona il puntatore del file (mediante una chiamata a **fseek**) è antecedente l'inizio del file.|
|**EMFILE**|Troppi file aperti. Non esistono descrittori di file disponibili, pertanto nessun altro file può essere aperto.|
|**ENOENT**|Nessun file o directory di questo tipo. Il file o la directory specificata non esiste o non viene trovata. Questo messaggio può essere visualizzato ogni volta che un file specificato non esiste o una parte di un percorso non specifica una directory esistente.|
|**ENOEXEC**|Errore di formato exec. Si è tentato di eseguire un file che non è eseguibile o con un formato di file eseguibile non valido.|
|**ENOMEM**|Core insufficiente. Memoria insufficiente per l'operatore desiderato. Ad esempio, questo messaggio può verificarsi quando la memoria è insufficiente per eseguire un processo figlio o quando la richiesta di allocazione in una chiamata **_getcwd** non può essere soddisfatta.|
|**ENOSPC**|Spazio esaurito sul dispositivo. Non è più disponibile spazio per la scrittura sul dispositivo (ad esempio quando il disco è pieno).|
|**ERANGE**|Risultato troppo grande. Un argomento a una funzione matematica è troppo grande, con conseguente perdita parziale o totale di significato nel risultato. Questo errore può verificarsi anche in altre funzioni quando un argomento è più grande del previsto (ad esempio, quando l'argomento *buffer* di **_getcwd** è più lungo del previsto).|
|**EXDEV**|Collegamento incrociato dispositivo. Si è tentato di spostare un file in un dispositivo diverso (tramite la funzione **rinomina**).|
|**STRUNCATE**|Una copia o una concatenazione di stringhe ha comportato un troncamento di stringa. Vedere [_TRUNCATE](../c-runtime-library/truncate.md).

Per la compatibilità con POSIX sono supportati i valori seguenti. Sono valori richiesti nei sistemi non POSIX.

```C
#define E2BIG /* argument list too long */
#define EACCES /* permission denied */
#define EADDRINUSE /* address in use */
#define EADDRNOTAVAIL /* address not available */
#define EAFNOSUPPORT /* address family not supported */
#define EAGAIN /* resource unavailable try again */
#define EALREADY /* connection already in progress */
#define EBADF /* bad file descriptor */
#define EBADMSG /* bad message */
#define EBUSY /* device or resource busy */
#define ECANCELED /* operation canceled */
#define ECHILD /* no child process */
#define ECONNABORTED /* connection aborted */
#define ECONNREFUSED /* connection refused */
#define ECONNRESET /* connection reset */
#define EDEADLK /* resource deadlock would occur */
#define EDESTADDRREQ /* destination address required */
#define EDOM /* argument out of domain */
#define EEXIST /* file exists */
#define EFAULT /* bad address */
#define EFBIG /* file too large */
#define EHOSTUNREACH /* host unreachable */
#define EIDRM /* identifier removed */
#define EILSEQ /* illegal byte sequence */
#define EINPROGRESS /* operation in progress */
#define EINTR /* interrupted */
#define EINVAL /* invalid argument */
#define EIO /* io error */
#define EISCONN /* already connected */
#define EISDIR /* is a directory */
#define ELOOP /* too many synbolic link levels */
#define EMFILE /* too many files open */
#define EMLINK /* too many links */
#define EMSGSIZE /* message size */
#define ENAMETOOLONG /* filename too long */
#define ENETDOWN /* network down */
#define ENETRESET /* network reset */
#define ENETUNREACH /* network unreachable */
#define ENFILE /* too many files open in system */
#define ENOBUFS /* no buffer space */
#define ENODATA /* no message available */
#define ENODEV /* no such device */
#define ENOENT /* no such file or directory */
#define ENOEXEC /* executable format error */
#define ENOLCK /* no lock available */
#define ENOLINK /* no link */
#define ENOMEM /* not enough memory */
#define ENOMSG /* no message */
#define ENOPROTOOPT /* no protocol option */
#define ENOSPC /* no space on device */
#define ENOSR /* no stream resources */
#define ENOSTR /* not a stream */
#define ENOSYS /* function not supported */
#define ENOTCONN /* not connected */
#define ENOTDIR /* not a directory */
#define ENOTEMPTY /* directory not empty */
#define ENOTRECOVERABLE /* state not recoverable */
#define ENOTSOCK /* not a socket */
#define ENOTSUP /* not supported */
#define ENOTTY /* inappropriate io control operation */
#define ENXIO /* no such device or address */
#define EOPNOTSUPP /* operation not supported */
#define EOTHER /* other */
#define EOVERFLOW /* value too large */
#define EOWNERDEAD /* owner dead */
#define EPERM /* operation not permitted */
#define EPIPE /* broken pipe */
#define EPROTO /* protocol error */
#define EPROTONOSUPPORT /* protocol not supported */
#define EPROTOTYPE /* wrong protocol type */
#define ERANGE /* result out of range */
#define EROFS /* read only file system */
#define ESPIPE /* invalid seek */
#define ESRCH /* no such process */
#define ETIME /* stream timeout */
#define ETIMEDOUT /* timed out */
#define ETXTBSY /* text file busy */
#define EWOULDBLOCK /* operation would block */
#define EXDEV /* cross device link */
```

## <a name="see-also"></a>Vedi anche

[Costanti globali](../c-runtime-library/global-constants.md)
