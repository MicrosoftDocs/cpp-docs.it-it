---
description: 'Altre informazioni su: errore di runtime di C R6008'
title: Errore di runtime di C R6008
ms.date: 11/04/2016
f1_keywords:
- R6008
helpviewer_keywords:
- R6008
ms.assetid: f0f304fc-709a-4843-bc7e-bad1ae0d1649
ms.openlocfilehash: d74bd647a4a4d844bb0b9bf0fe2f2d53994dc9ab
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97237776"
---
# <a name="c-runtime-error-r6008"></a>Errore di runtime di C R6008

spazio insufficiente per gli argomenti

> [!NOTE]
> Se si verifica questo messaggio di errore durante l'esecuzione di un'app, l'app è stata arrestata perché presenta un problema di memoria interna. Questo errore può essere dovuto a diversi motivi, ma spesso a causa di una condizione di memoria molto bassa, di una quantità eccessiva di memoria utilizzata dalle variabili di ambiente o di un bug nel programma.
>
> Per risolvere questo errore, è possibile provare questi passaggi:
>
> - Chiudere le altre applicazioni in esecuzione o riavviare il computer per liberare memoria.
> - Ridurre il numero e le dimensioni degli argomenti della riga di comando all'app.
> - Utilizzare la pagina **app e funzionalità** o **programmi e funzionalità** nel **Pannello di controllo** per ripristinare o reinstallare il programma.
> - Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.
> - Verificare la presenza di una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.

**Informazioni per i programmatori**

Memoria sufficiente per caricare il programma, ma memoria insufficiente per creare la matrice **argv** . Questo problema può essere causato da condizioni di memoria estremamente basse o da righe di comando insolitamente grandi o da utilizzo di variabili di ambiente. Prendere in considerazione una delle soluzioni seguenti:

- Aumentare la quantità di memoria disponibile per il programma.

- Ridurre il numero e le dimensioni degli argomenti della riga di comando.

- Ridurre le dimensioni dell'ambiente rimuovendo le variabili non necessarie.
