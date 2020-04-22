---
title: Stato globale nel CRT
ms.date: 04/02/2020
helpviewer_keywords:
- CRT global state
ms.openlocfilehash: 1b32e8d4f23d2361a52a9b81150ef7c5c7422761
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81745357"
---
# <a name="global-state-in-the-crt"></a>Stato globale nel CRT

Alcune funzioni nell'Universal C Runtime (UCRT) utilizzano lo stato globale. Ad esempio, `setlocale()` imposta le impostazioni locali per l'intero programma, che influisce sui separatori di cifre, sulla tabella codici di testo e così via.

Lo stato globale di UCRT non è condiviso tra le applicazioni e il sistema operativo. Ad esempio, se `setlocale()`l'applicazione chiama , non influirà sulle impostazioni locali per i componenti del sistema operativo che utilizza nodi del linguaggio C o viceversa.

## <a name="os-specific-versions-of-crt-functions"></a>Versioni specifiche del sistema operativo delle funzioni CRT

In UCRT, le funzioni che interagiscono con lo stato `_o_`globale hanno una funzione "gemella", preceduta da . Ad esempio:

- `setlocale()`influisce sullo stato globale specifico dell'app.
- `_o_setlocale()`influisce sullo stato globale condiviso da tutti i componenti del sistema operativo, ma non sulle app.

L'unica differenza tra queste funzioni "gemelle" è che quando leggono/scrivono lo stato CRT `_o_`globale, le versioni specifiche del sistema operativo (ovvero le versioni che iniziano con ) utilizzano la copia del sistema operativo dello stato globale anziché la copia dello stato globale dell'app.

Le versioni specifiche del sistema operativo `ucrt.osmode.lib`di queste funzioni sono in . Ad esempio, la versione specifica `setlocale()` del sistema operativo di è`_o_setlocale()`

Esistono due modi per isolare lo stato CRT del componente dallo stato CRT di un'app:There are two ways to isolate your component's CRT state from an app's CRT state:

- Collegare staticamente il componente utilizzando le opzioni del compilatore /MT (release) o MTd (debug). Per informazioni dettagliate, vedere [/MD, /MT, /LD](https://docs.microsoft.com/cpp/build/reference/md-mt-ld-use-run-time-library?view=vs-2019). Si noti che il collegamento statico può aumentare notevolmente le dimensioni binarie.
- A partire da Windows 10 20H2, ottenere l'isolamento dello stato CRT collegando dinamicamente la libreria CRT ma chiamare le esportazioni in modalità sistema operativo (le funzioni che iniziano con _o_). Per chiamare le esportazioni in modalità sistema operativo, collegare in modo `/NODEFAULTLIB:libucrt.lib` statico come `/NODEFAULTLIB:libucrtd.lib` in precedenza, ma ignorare l'UCRT statico utilizzando l'opzione del linker (rilascio) o (debug) Vedere [/NODEFAULTLIB (Ignora librerie)](https://docs.microsoft.com/cpp/build/reference/nodefaultlib-ignore-libraries?view=vs-2019) per i dettagli. E `ucrt.osmode.lib` aggiungere all'input del linker.

> [!Note]
> Nel codice sorgente, `setlocale()` `_o_setlocale()`scrivere , non . Quando si `ucrt.osmode.lib`esegue il collegamento a , il linker sostituirà automaticamente la versione specifica del sistema operativo della funzione. Cioè, `setlocale()` sarà sostituito con `_o_setlocale()`.

Il `ucrt.osmode.lib` collegamento contro disabilita alcune chiamate UCRT che sono disponibili solo in modalità app. Tentativo di chiamare questi si tradurrà in un errore di collegamento.

## <a name="global-state-affected-by-appos-separation"></a>Stato globale interessato dalla separazione app/OS

Lo stato globale interessato dalla separazione dello stato dell'app e del sistema operativo include:

- [Dati delle impostazioni locali](locale.md)
- Gestori di segnale impostati dal [segnale](reference/signal.md)
- Routine di terminazione impostate per [terminazione](reference/set-terminate-crt.md)
- [errno e _doserrno](errno-doserrno-sys-errlist-and-sys-nerr.md)
- Stato di generazione di numeri casuali utilizzato da [rand](reference/rand.md) e [srand](reference/srand.md)
- Funzioni che restituiscono un buffer che l'utente non deve rilasciare: [strtok, wcstok, _mbstok](reference/strtok-strtok-l-wcstok-wcstok-l-mbstok-mbstok-l.md) [Tmpnam,](reference/tempnam-wtempnam-tmpnam-wtmpnam.md) [asctime _wtmpnam, _wasctime](reference/asctime-wasctime.md) [gmtime, _gmtime32 _gmtime64 _fcvt](reference/gmtime-gmtime32-gmtime64.md) [_ecvt](reference/fcvt.md) [_ecvt](reference/ecvt.md) [strerror, _strerror, _wcserror __wcserror](reference/strerror-strerror-wcserror-wcserror.md)
- Il buffer utilizzato da [_putch, _putwch](reference/putch-putwch.md)
- [_set_invalid_parameter_handler, _set_thread_local_invalid_parameter_handler](reference/set-invalid-parameter-handler-set-thread-local-invalid-parameter-handler.md)
- [_set_new_handler](reference/set-new-handler.md) e [_set_new_mode](reference/set-new-mode.md)
- [fmode] (text-and-binary-mode-file-i-o.md)
- [Informazioni sul fuso orario](time-management.md)

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sulla libreria di runtime del codice C](c-run-time-library-reference.md)
