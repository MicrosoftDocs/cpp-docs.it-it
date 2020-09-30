---
title: Stato globale in CRT
description: Viene descritto il modo in cui lo stato globale condiviso viene gestito in Microsoft Universal C Runtime.
ms.topic: conceptual
ms.date: 04/02/2020
helpviewer_keywords:
- CRT global state
ms.openlocfilehash: 60532fbdb905bd8ea78b4ce705ec8ecc3e374d9d
ms.sourcegitcommit: 9451db8480992017c46f9d2df23fb17b503bbe74
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/30/2020
ms.locfileid: "91589731"
---
# <a name="global-state-in-the-crt"></a>Stato globale in CRT

Alcune funzioni in Universal C Runtime (UCRT) utilizzano lo stato globale. Ad esempio, `setlocale()` imposta le impostazioni locali per l'intero programma, che influiscono sui separatori di cifre, sulla tabella codici del testo e così via.

Lo stato globale di UCRT non è condiviso tra le applicazioni e il sistema operativo. Se, ad esempio, l'applicazione chiama `setlocale()` , non influirà sulle impostazioni locali per i componenti del sistema operativo che usano il runtime del linguaggio C o viceversa.

## <a name="os-specific-versions-of-crt-functions"></a>Versioni specifiche del sistema operativo di funzioni CRT

In UCRT, le funzioni che interagiscono con lo stato globale hanno una funzione "Twin", con prefisso `_o_` . Ad esempio:

- `setlocale()` influiscono sullo stato globale specifico dell'app.
- `_o_setlocale()` influiscono sullo stato globale condiviso da tutti i componenti del sistema operativo, ma non dalle app.

L'unica differenza tra queste funzioni "gemelle" è che quando leggono/scrivono lo stato della libreria CRT globale, le versioni specifiche del sistema operativo (ovvero le versioni che iniziano con `_o_` ) usano la copia del sistema operativo dello stato globale invece della copia dello stato globale dell'app.

Le versioni specifiche del sistema operativo di queste funzioni sono in `ucrt.osmode.lib` . Ad esempio, la versione specifica del sistema operativo di `setlocale()` è `_o_setlocale()`

Esistono due modi per isolare lo stato CRT del componente dallo stato CRT di un'app:

- Collegare in modo statico il componente usando le opzioni del compilatore/MT (Release) o MTd (debug). Per informazioni dettagliate, vedere [/MD,/MT,/LD](../build/reference/md-mt-ld-use-run-time-library.md). Si noti che il collegamento statico può aumentare significativamente le dimensioni binarie.
- A partire da Windows 10 20H2, ottenere l'isolamento dello stato CRT tramite il collegamento dinamico a CRT, ma chiamare le esportazioni in modalità sistema operativo, ovvero le funzioni che iniziano con _o_. Per chiamare le esportazioni in modalità sistema operativo, collegare staticamente come prima, ma ignorare il UCRT statico usando l'opzione del linker `/NODEFAULTLIB:libucrt.lib` (versione) o `/NODEFAULTLIB:libucrtd.lib` (debug) vedere [/NODEFAULTLIB (Ignora librerie)](../build/reference/nodefaultlib-ignore-libraries.md) per informazioni dettagliate. E aggiungono `ucrt.osmode.lib` all'input del linker.

> [!Note]
> Nel codice sorgente scrivere `setlocale()` , non `_o_setlocale()` . Quando si esegue `ucrt.osmode.lib` il collegamento, il linker sostituisce automaticamente la versione specifica del sistema operativo della funzione. Ovvero, `setlocale()` verrà sostituito con `_o_setlocale()` .

`ucrt.osmode.lib`Il collegamento a Disabilita alcune chiamate UCRT disponibili solo in modalità app. Il tentativo di chiamare questi comporterà un errore di collegamento.

## <a name="global-state-affected-by-appos-separation"></a>Stato globale interessato dalla separazione app/sistema operativo

Lo stato globale interessato dalla separazione dello stato dell'app e del sistema operativo include:

- [Dati delle impostazioni locali](locale.md)
- Gestori dei segnali impostati dal [segnale](reference/signal.md)
- Routine di terminazione impostate da [Terminate](reference/set-terminate-crt.md)
- [errno e _doserrno](errno-doserrno-sys-errlist-and-sys-nerr.md)
- Stato di generazione dei numeri casuali usato da [Rand](reference/rand.md) e [srand](reference/srand.md)
- Funzioni che restituiscono un buffer che l'utente non deve rilasciare: [strtok, wcstok, _mbstok](reference/strtok-strtok-l-wcstok-wcstok-l-mbstok-mbstok-l.md) [tmpnam, _wtmpnam](reference/tempnam-wtempnam-tmpnam-wtmpnam.md) [asctime, _wasctime](reference/asctime-wasctime.md) [gmtime, _gmtime32](reference/gmtime-gmtime32-gmtime64.md) [_gmtime64 _fcvt _ecvt](reference/fcvt.md) [_ecvt](reference/ecvt.md) [strerror,](reference/strerror-strerror-wcserror-wcserror.md) _strerror, _wcserror __wcserror
- Buffer utilizzato da [_putch, _putwch](reference/putch-putwch.md)
- [_set_invalid_parameter_handler, _set_thread_local_invalid_parameter_handler](reference/set-invalid-parameter-handler-set-thread-local-invalid-parameter-handler.md)
- [_set_new_handler](reference/set-new-handler.md) e [_set_new_mode](reference/set-new-mode.md)
- [fmode] (text-and-binary-mode-file-i-o.md)
- [Informazioni sul fuso orario](time-management.md)

## <a name="see-also"></a>Vedi anche

[Riferimenti alla libreria di runtime C](c-run-time-library-reference.md)
