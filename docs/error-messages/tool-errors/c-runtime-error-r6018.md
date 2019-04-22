---
title: Errore di runtime di C R6018
ms.date: 11/04/2016
f1_keywords:
- R6018
helpviewer_keywords:
- R6018
ms.assetid: f6dd40d1-a119-4d8b-b39e-97350ea23349
ms.openlocfilehash: b36e2184e5be131645fb4dd58a361fdb9a31da63
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58774977"
---
# <a name="c-runtime-error-r6018"></a>Errore di runtime di C R6018

Errore imprevisto dell'heap

> [!NOTE]
> Se si verifica questo messaggio di errore durante l'esecuzione di un'app, l'app è stata arrestata perché ha un problema interno. Esistono diversi motivi possibili per questo errore, ma spesso è causata da un difetto nel codice dell'app.
>
> Per risolvere questo errore, è possibile provare questi passaggi:
>
> - Usare la **App e funzionalità** o **programmi e funzionalità** nella pagina il **Pannello di controllo** per ripristinare o reinstallare il programma.
> - Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.
> - Cercare una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.

**Informazioni per i programmatori**

Il programma ha individuato un errore imprevisto durante l'esecuzione di un'operazione di gestione della memoria.

Questo errore si verifica in genere quando il programma modifica inavvertitamente i dati dell'heap di runtime. Tuttavia, può anche essere causato da un errore interno nel runtime o codice di sistema operativo.

Per risolvere questo problema, verificare i bug di danneggiamento dell'heap nel codice. Per altre informazioni ed esempi, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details). Successivamente, controllare che si siano usando i file ridistribuibili più recenti per la distribuzione dell'app. Per informazioni, vedere [distribuzione in Visual C++](../../windows/deployment-in-visual-cpp.md).