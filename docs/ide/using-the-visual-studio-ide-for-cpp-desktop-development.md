---
title: Utilizzo dell'ambiente di sviluppo di Visual Studio per lo sviluppo di applicazioni desktop C++
ms.date: 03/14/2019
helpviewer_keywords:
- IDE [C++]
- Visual Studio IDE [C++]
ms.assetid: d985c230-8e81-49d6-92be-2db9cac8d023
ms.openlocfilehash: 7417c46097b1f0c6282e3684a7556880c21be42a
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58773567"
---
# <a name="using-the-visual-studio-ide-for-c-desktop-development"></a>Utilizzo dell'ambiente di sviluppo di Visual Studio per lo sviluppo di applicazioni desktop C++

L'ambiente di sviluppo integrato (IDE) di Visual Studio offre un set di funzionalità che consentono di gestire grandi e piccoli progetti di codice, scrivere ed effettuare il refactoring del codice, rilevare e correggere gli errori tramite analisi statica e potenti strumenti di debug. Questo set di articoli è progettato per guidare ogni passaggio necessario per gestire i progetti, scrivere, testare ed eseguire il debug del codice e quindi distribuirlo in un altro computer.

## <a name="prerequisites"></a>Prerequisiti

Se Visual Studio non è stato installato, procedere subito. Per i collegamenti ai download e una procedura dettagliata, vedere [Installare il supporto C++ in Visual Studio](../build/vscpp-step-0-installation.md). Per altre informazioni su come installare Visual Studio in generale e suggerimenti per la risoluzione dei problemi, vedere [Installare Visual Studio](/visualstudio/install/install-visual-studio). Assicurarsi di scegliere il carico di lavoro **Sviluppo di applicazioni desktop con C++** per includere compilatori, strumenti e librerie di C++ al momento dell'installazione di Visual Studio poiché questi non vengono installati per impostazione predefinita.

Queste procedure dettagliate presuppongono che si sia già installato Visual Studio, il linguaggio e i componenti Visual C++ necessari per lo sviluppo di Windows Desktop. Si presuppone inoltre una conoscenza delle nozioni di base del linguaggio C++. Per approfondire C++ ci sono molti libri e risorse Web disponibili. Un buon punto di partenza è la pagina [Get Started](https://isocpp.org/get-started) (Attività iniziali) del sito Web della Standard C++ Foundation.

Se Visual Studio non è stato installato, procedere subito.

**Installazione di Visual Studio 2017**

È possibile scaricare Visual Studio 2017 da [Download di Visual Studio](https://www.visualstudio.com/downloads/download-visual-studio-vs.aspx). Quando si installa Visual Studio, assicurarsi di includere gli strumenti di sviluppo di Visual C++ perché non sono installati per impostazione predefinita. Per altre informazioni su come installare Visual Studio, vedere [Installare Visual Studio](/visualstudio/install/install-visual-studio).

**Installazione di Visual Studio 2015**

Per installare Visual Studio 2015, passare alla pagina per il [download delle versioni precedenti di Visual Studio](https://www.visualstudio.com/vs/older-downloads/). Eseguire il programma di installazione, scegliere **Installazione personalizzata** e quindi scegliere il componente C++.

In generale, è consigliabile usare Visual Studio 2017 anche se occorre compilare il codice tramite il compilatore di Visual Studio 2015. Per altre informazioni, vedere [Usare multitargeting nativo in Visual Studio per compilare progetti precedenti](../porting/use-native-multi-targeting.md).

Una volta completata l'installazione di Visual Studio, si può continuare.

## <a name="get-started"></a>Introduzione

Per iniziare a usare l'IDE di Visual Studio per compilare app C++, studiare ognuno di questi argomenti nell'ordine proposto. Ognuno approfondisce quanto appreso negli argomenti precedenti:

- [Procedura dettagliata: Uso di progetti e soluzioni (C++)](walkthrough-working-with-projects-and-solutions-cpp.md)

- [Procedura dettagliata: Compilazione di un progetto (C++)](walkthrough-building-a-project-cpp.md)

- [Procedura dettagliata: Test di un progetto (C++)](walkthrough-testing-a-project-cpp.md)

- [Procedura dettagliata: Debug di un progetto (C++)](walkthrough-debugging-a-project-cpp.md)

- [Procedura dettagliata: Distribuzione di un programma (C++)](walkthrough-deploying-your-program-cpp.md)

## <a name="next-steps"></a>Passaggi successivi

Dopo aver completato queste procedure dettagliate, si è pronti per iniziare a creare i progetti. Per ulteriori informazioni e risorse per lo sviluppo di Visual C++, vedere [Visual C++ in Visual Studio](../overview/visual-cpp-in-visual-studio.md).

## <a name="see-also"></a>Vedere anche

[Introduzione allo sviluppo con Visual Studio](/visualstudio/ide/get-started-developing-with-visual-studio)