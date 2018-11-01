---
title: R6008 di errore di Runtime C
ms.date: 11/04/2016
f1_keywords:
- R6008
helpviewer_keywords:
- R6008
ms.assetid: f0f304fc-709a-4843-bc7e-bad1ae0d1649
ms.openlocfilehash: 60e6475a84d2662ad3718e04dba879dc06afeee7
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50441899"
---
# <a name="c-runtime-error-r6008"></a>R6008 di errore di Runtime C

spazio insufficiente per gli argomenti

> [!NOTE]
> Se si verifica questo messaggio di errore durante l'esecuzione di un'app, l'app è stata arrestata perché ha un problema di memoria interna. Esistono diversi motivi possibili per questo errore, ma spesso è causata da una condizione di memoria estremamente ridotto, eccessivo di memoria eseguita da variabili di ambiente o un bug nel programma.
>
> Per risolvere questo errore, è possibile provare questi passaggi:
>
> - Chiudere le altre applicazioni in esecuzione oppure riavviare il computer per liberare memoria.
> - Ridurre il numero e dimensioni degli argomenti della riga di comando per l'app.
> - Usare la **App e funzionalità** o **programmi e funzionalità** nella pagina il **Pannello di controllo** per ripristinare o reinstallare il programma.
> - Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.
> - Cercare una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.

**Informazioni per i programmatori**

Si è verificato di memoria insufficiente per caricare il programma ma non sono sufficienti per creare il **argv** matrice. Ciò può essere causato da condizioni di memoria estremamente ridotto oppure insolitamente elevato di righe di comando o dell'utilizzo di variabili di ambiente. Prendere in considerazione una delle soluzioni seguenti:

- Aumentare la quantità di memoria disponibile per il programma.

- Ridurre il numero e la dimensione degli argomenti della riga di comando.

- Ridurre le dimensioni di ambiente rimuovendo le variabili non necessarie.