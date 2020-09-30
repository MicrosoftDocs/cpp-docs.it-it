---
title: Convalida dei parametri
description: Descrizione della convalida dei parametri nella libreria di runtime di Microsoft C.
ms.date: 11/04/2016
ms.topic: conceptual
helpviewer_keywords:
- parameters, validation
ms.assetid: 019dd5f0-dc61-4d2e-b4e9-b66409ddf1f2
ms.openlocfilehash: 60ded7fc5a4388b2c4bf87ab5a388caab5fc47c2
ms.sourcegitcommit: 9451db8480992017c46f9d2df23fb17b503bbe74
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/30/2020
ms.locfileid: "91589822"
---
# <a name="parameter-validation"></a>Convalida dei parametri

La maggior parte delle funzioni CRT con sicurezza avanzata e molte che non sono, convalidano i parametri per elementi come il controllo dei puntatori per **null**, che i numeri interi rientrano in un intervallo valido o che i valori di enumerazione sono validi. Se viene trovato un parametro non valido, viene chiamato il gestore di parametri non validi.

## <a name="invalid-parameter-handler-routine"></a>Routine del gestore di parametri non validi

Quando una funzione della libreria di runtime C rileva un parametro non valido, acquisisce alcune informazioni sull'errore, quindi chiama una macro che esegue il wrapping di una funzione di invio del gestore di parametri non valida. Che sarà uno dei [_invalid_parameter](../c-runtime-library/reference/invalid-parameter-functions.md), [_invalid_parameter_noinfo](../c-runtime-library/reference/invalid-parameter-functions.md)o [_invalid_parameter_noinfo_noreturn](../c-runtime-library/reference/invalid-parameter-functions.md). La funzione di invio viene chiamata a seconda che il codice sia rispettivamente, una build di debug, una compilazione al dettaglio o che l'errore non sia considerato reversibile.

Nelle build di debug, la macro di parametro non valido in genere genera un'asserzione non riuscita e un punto di interruzione del debugger prima della chiamata della funzione Dispatch. Quando il codice viene eseguito, l'asserzione può essere segnalata all'utente in una finestra di dialogo con "Abort", "Retry" e "continue" o opzioni simili a seconda della versione del sistema operativo e della libreria di Runtime. Queste opzioni consentono all'utente di terminare immediatamente il programma, di alleghire un debugger o di continuare a eseguire il codice esistente, che chiama la funzione Dispatch.

La funzione di invio del gestore di parametri non validi chiama il gestore di parametri non validi attualmente assegnato. Per impostazione predefinita, il parametro non valido chiama `_invoke_watson` , che fa sì che l'applicazione chiuda e generi un piccolo dump. Se abilitata dal sistema operativo, una finestra di dialogo chiede all'utente se desidera inviare il dump di arresto anomalo a Microsoft per l'analisi.

È possibile modificare questo comportamento usando le funzioni [_set_invalid_parameter_handler](../c-runtime-library/reference/set-invalid-parameter-handler-set-thread-local-invalid-parameter-handler.md) o [_set_thread_local_invalid_parameter_handler](../c-runtime-library/reference/set-invalid-parameter-handler-set-thread-local-invalid-parameter-handler.md) per impostare il gestore di parametri non validi sulla propria funzione. Se la funzione specificata non termina l'applicazione, il controllo viene restituito alla funzione che ha ricevuto i parametri non validi. In CRT queste funzioni arresteranno normalmente l'esecuzione della funzione, imposteranno `errno` su un codice di errore e restituiranno un codice di errore. In molti casi, il `errno` valore e il valore restituito sono entrambi `EINVAL` , per indicare un parametro non valido. In alcuni casi, viene restituito un codice di errore più specifico, ad esempio `EBADF` per un puntatore di file non valido passato come parametro. 

Per altre informazioni su `errno`, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="see-also"></a>Vedi anche

[Funzionalità di sicurezza in CRT](../c-runtime-library/security-features-in-the-crt.md)\
[Funzionalità della libreria CRT](../c-runtime-library/crt-library-features.md)
