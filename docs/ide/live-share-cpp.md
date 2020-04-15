---
title: Collaborare con Live Share per C++ in Visual Studio
description: Usare Live Share per C++ in Visual Studio per collaborare e condividere codice in tempo reale.
ms.date: 05/24/2019
ms.openlocfilehash: 0ebdd77d0e277778b48cf69024b24841f775d968
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81377280"
---
# <a name="collaborate-using-live-share-for-c"></a>Collaborare tramite Live Share per C++

In Visual Studio 2019 e Visual Studio Code è possibile usare **Live Share** per collaborare su progetti C++ in tempo reale. Con **Live Share** un'altra persona può modificare ed eseguire il debug del codice senza la necessità di installare il progetto o una delle sue dipendenze. Si possono vedere le modifiche reciproche man mano che avvengono e ogni modifica è contrassegnata con il nome della persona che l'ha apportata.

![C modifica&#43;&#43; Live Share](../ide/media/live-share-edit-cpp.png "Modifica delle condivisioni dal vivo in C")

## <a name="live-share-host-and-guests"></a>Host e partecipanti di Live Share

Una sessione di Live Share comprende un host e uno o più partecipanti. Sia l'host che i partecipanti possono utilizzare Visual Studio o Visual Studio Code. Un host di Visual Studio 2019 in Windows può partecipare a una condivisione con un partecipante di Visual Studio Code in Linux.

L'host mette a disposizione dei partecipanti tutto il necessario per essere produttivi. Per i partecipanti non è necessario avere il codice sorgente, il compilatore, le dipendenze esterne e neanche gli stessi componenti installati.

L'host e i partecipanti possono usare queste funzionalità di IntelliSense:

- Elenco membri
- Guida per i parametri
- Informazioni rapide
- Debug/Punti di interruzione
- Trova tutti i riferimenti
- Vai a definizione
- Ricerca dei simboli (CTRL+T)
- Evidenziazione di riferimenti
- Diagnostica/Errori/Controllo ortografia

![C&#43;&#43; Live Share Debugging](../ide/media/live-share-debug-cpp.png "Debug di condivisioni dal vivo in C")

## <a name="start-and-end-a-live-share-session"></a>Avviare e terminare una sessione di Live Share

Per avviare una sessione di live share in Visual Studio, fare clic sul pulsante Condividi in alto a destra oppure passare a Sessione di collaborazione di**avvio** **file** > . Viene generato un collegamento che è possibile condividere con i collaboratori.

![C&#43;&#43; pulsante di condivisione dal vivo](../ide/media/live-share-button-cpp.png "Pulsante di condivisione dal vivo")

Per terminare una sessione, selezionare **End Collaboration Session** (Termina la sessione di collaborazione) dall'elenco a discesa **Condivisione**.

![C&#43;&#43; pulsante di condivisione dal vivo](../ide/media/live-share-end-session-cpp.png "Pulsante di condivisione dal vivo")

## <a name="for-more-information"></a>Per ulteriori informazioni

Per altre informazioni su **Live Share** in Visual Studio, vedere [Che cos'è Visual Studio Live Share?](/visualstudio/liveshare/). Per altre informazioni su Live Share in Visual Studio Code, vedere [Live Share](https://marketplace.visualstudio.com/items?itemName=ms-vsliveshare.vsliveshare).

## <a name="see-also"></a>Vedere anche

[Scrittura e refactoring del codice (C++)](writing-and-refactoring-code-cpp.md)</br>
[Spostarsi all'interno del codice C++ in Visual Studio](navigate-code-cpp.md)</br>
[Leggere e comprendere il codice C++](read-and-understand-code-cpp.md)</br>
