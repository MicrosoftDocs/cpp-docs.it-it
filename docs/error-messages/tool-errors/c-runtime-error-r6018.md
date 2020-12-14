---
description: 'Altre informazioni su: errore di runtime di C R6018'
title: Errore di runtime di C R6018
ms.date: 11/04/2016
f1_keywords:
- R6018
helpviewer_keywords:
- R6018
ms.assetid: f6dd40d1-a119-4d8b-b39e-97350ea23349
ms.openlocfilehash: 778b57c7071ab6ce042c9e1c434541c1dbcfad13
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97237660"
---
# <a name="c-runtime-error-r6018"></a>Errore di runtime di C R6018

errore imprevisto dell'heap

> [!NOTE]
> Se si verifica questo messaggio di errore durante l'esecuzione di un'app, l'app è stata arrestata perché presenta un problema interno. Questo errore può essere dovuto a diversi motivi, ma spesso è causato da un difetto nel codice dell'app.
>
> Per risolvere questo errore, è possibile provare questi passaggi:
>
> - Utilizzare la pagina **app e funzionalità** o **programmi e funzionalità** nel **Pannello di controllo** per ripristinare o reinstallare il programma.
> - Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.
> - Verificare la presenza di una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.

**Informazioni per i programmatori**

Si è verificato un errore imprevisto durante l'esecuzione di un'operazione di gestione della memoria.

Questo errore si verifica in genere se il programma modifica inavvertitamente i dati dell'heap di run-time. Tuttavia, può anche essere causato da un errore interno nel codice del runtime o del sistema operativo.

Per risolvere questo problema, verificare la presenza di bug di danneggiamento dell'heap nel codice. Per ulteriori informazioni ed esempi, vedere la pagina relativa ai [Dettagli dell'heap di debug CRT](/visualstudio/debugger/crt-debug-heap-details). Verificare quindi di usare i ridistribuibili più recenti per la distribuzione dell'app. Per informazioni, vedere [distribuzione in Visual C++](../../windows/deployment-in-visual-cpp.md).
