---
description: 'Altre informazioni su: errore di runtime di C R6009'
title: Errore di runtime di C R6009
ms.date: 11/04/2016
f1_keywords:
- R6009
helpviewer_keywords:
- R6009
ms.assetid: edfb1f8b-3807-48f4-a994-318923b747ae
ms.openlocfilehash: 797e1f98247705afcacc59c0372e241748154a0a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97237712"
---
# <a name="c-runtime-error-r6009"></a>Errore di runtime di C R6009

spazio insufficiente per l'ambiente

> [!NOTE]
> Se si verifica questo messaggio di errore durante l'esecuzione di un'app, l'app è stata arrestata perché presenta un problema di memoria interna. Questo errore può essere dovuto a diversi motivi, ma spesso a causa di una condizione di memoria molto bassa, di una quantità eccessiva di memoria utilizzata dalle variabili di ambiente o di un bug nel programma.
>
> Per risolvere questo errore, è possibile provare questi passaggi:
>
> - Chiudere le altre applicazioni in esecuzione o riavviare il computer per liberare memoria.
> - Utilizzare la pagina **app e funzionalità** o **programmi e funzionalità** nel **Pannello di controllo** per ripristinare o reinstallare il programma.
> - Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.
> - Verificare la presenza di una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.

**Informazioni per i programmatori**

Memoria sufficiente per caricare il programma, ma memoria insufficiente per creare la matrice **envp** .  Questo problema può essere causato da condizioni di memoria estremamente basse o da un utilizzo insolitamente elevato di variabili di ambiente. Prendere in considerazione una delle soluzioni seguenti:

- Aumentare la quantità di memoria disponibile per il programma.

- Ridurre il numero e le dimensioni degli argomenti della riga di comando.

- Ridurre le dimensioni dell'ambiente rimuovendo le variabili non necessarie.
