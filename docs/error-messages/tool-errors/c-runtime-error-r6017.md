---
description: 'Altre informazioni su: errore di runtime di C R6017'
title: Errore di runtime di C R6017
ms.date: 11/04/2016
f1_keywords:
- R6017
helpviewer_keywords:
- R6017
ms.assetid: df3ec5f5-6771-4648-ba06-0e26c6a1cc6a
ms.openlocfilehash: 38c4b65ec3d577176485882d6f581bacd2ad007c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97237647"
---
# <a name="c-runtime-error-r6017"></a>Errore di runtime di C R6017

errore di blocco multithread imprevisto

> [!NOTE]
> Se si verifica questo messaggio di errore durante l'esecuzione di un'app, l'app è stata arrestata perché presenta un problema interno. Questo errore può essere dovuto a diversi motivi, ma spesso è causato da un difetto nel codice dell'app.
>
> Per risolvere questo errore, è possibile provare questi passaggi:
>
> - Utilizzare la pagina **app e funzionalità** o **programmi e funzionalità** nel **Pannello di controllo** per ripristinare o reinstallare il programma.
> - Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.
> - Verificare la presenza di una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.

**Informazioni per i programmatori**

Il processo ha ricevuto un errore imprevisto durante il tentativo di accesso a un blocco multithread di runtime C su una risorsa di sistema. Questo errore si verifica in genere se il processo modifica inavvertitamente i dati dell'heap di Runtime. Tuttavia, può anche essere causato da un errore interno nella libreria di runtime o nel codice del sistema operativo.

Per risolvere questo problema, verificare la presenza di bug di danneggiamento dell'heap nel codice. Per ulteriori informazioni ed esempi, vedere la pagina relativa ai [Dettagli dell'heap di debug CRT](/visualstudio/debugger/crt-debug-heap-details). Verificare quindi di usare i ridistribuibili più recenti per la distribuzione dell'app. Per informazioni, vedere [distribuzione in Visual C++](../../windows/deployment-in-visual-cpp.md).
