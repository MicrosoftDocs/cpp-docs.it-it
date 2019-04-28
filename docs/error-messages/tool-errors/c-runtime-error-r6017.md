---
title: Errore di runtime di C R6017
ms.date: 11/04/2016
f1_keywords:
- R6017
helpviewer_keywords:
- R6017
ms.assetid: df3ec5f5-6771-4648-ba06-0e26c6a1cc6a
ms.openlocfilehash: 45f3b07f540cb72a955b19420130a5a806b750d7
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62299660"
---
# <a name="c-runtime-error-r6017"></a>Errore di runtime di C R6017

Errore imprevisto blocco multithread

> [!NOTE]
> Se si verifica questo messaggio di errore durante l'esecuzione di un'app, l'app è stata arrestata perché ha un problema interno. Esistono diversi motivi possibili per questo errore, ma spesso è causata da un difetto nel codice dell'app.
>
> Per risolvere questo errore, è possibile provare questi passaggi:
>
> - Usare la **App e funzionalità** o **programmi e funzionalità** nella pagina il **Pannello di controllo** per ripristinare o reinstallare il programma.
> - Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.
> - Cercare una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.

**Informazioni per i programmatori**

Il processo ha ricevuto un errore imprevisto durante il tentativo di accedere a un blocco multithread di runtime C su una risorsa di sistema. Questo errore si verifica in genere quando il processo di modifica inavvertitamente i dati dell'heap di runtime. Tuttavia, può anche essere causato da un errore interno nella libreria di runtime o codice di sistema operativo.

Per risolvere questo problema, verificare i bug di danneggiamento dell'heap nel codice. Per altre informazioni ed esempi, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details). Successivamente, controllare che si siano usando i file ridistribuibili più recenti per la distribuzione dell'app. Per informazioni, vedere [distribuzione in Visual C++](../../windows/deployment-in-visual-cpp.md).