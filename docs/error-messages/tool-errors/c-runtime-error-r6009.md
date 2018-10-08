---
title: C R6009 di errore di Runtime | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- R6009
dev_langs:
- C++
helpviewer_keywords:
- R6009
ms.assetid: edfb1f8b-3807-48f4-a994-318923b747ae
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 42a5aed9f823b5d2c5425c4d7baae129c08e76e7
ms.sourcegitcommit: 997e6b7d336cddb388bb6e9e56527725fcaa0624
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/08/2018
ms.locfileid: "48860927"
---
# <a name="c-runtime-error-r6009"></a>R6009 di errore di Runtime C

spazio insufficiente per l'ambiente

> [!NOTE]
> Se si verifica questo messaggio di errore durante l'esecuzione di un'app, l'app è stata arrestata perché ha un problema di memoria interna. Esistono diversi motivi possibili per questo errore, ma spesso è causata da una condizione di memoria estremamente ridotto, eccessivo di memoria eseguita da variabili di ambiente o un bug nel programma.
>
> Per risolvere questo errore, è possibile provare questi passaggi:
>
> - Chiudere le altre applicazioni in esecuzione oppure riavviare il computer per liberare memoria.
> - Usare la **App e funzionalità** o **programmi e funzionalità** nella pagina il **Pannello di controllo** per ripristinare o reinstallare il programma.
> - Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.
> - Cercare una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.

**Informazioni per i programmatori**

Si è verificato disponibile memoria sufficiente per caricare il programma, ma non sono sufficienti per creare il **envp** matrice.  Ciò può essere causato da condizioni di memoria estremamente basse o dall'utilizzo di variabili di ambiente insolitamente ampio. Prendere in considerazione una delle soluzioni seguenti:

- Aumentare la quantità di memoria disponibile per il programma.

- Ridurre il numero e la dimensione degli argomenti della riga di comando.

- Ridurre le dimensioni di ambiente rimuovendo le variabili non necessarie.