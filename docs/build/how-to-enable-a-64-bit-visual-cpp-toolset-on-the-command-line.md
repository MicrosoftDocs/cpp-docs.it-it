---
title: 'Procedura: abilitare un 64-Bit Visual C++ set di strumenti della riga di comando | Documenti Microsoft'
ms.custom: ''
ms.date: 03/29/2018
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- x64 [C++]
- 64-bit compiler [C++], command line usage
- 64-bit compiler [C++], toolset enabling at command line
- command line [C++], 64-bit compiler
- Itanium [C++], command-line compiler
- IPF
- Itanium [C++]
- IPF, command-line compiler
- x64 [C++], command-line compiler
ms.assetid: 4da93a19-e20d-4778-902a-5eee9a6a90b5
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 22290cdf9418299cbba51ab1d893d60cb790e2e1
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32369140"
---
# <a name="how-to-enable-a-64-bit-x64-hosted-visual-c-toolset-on-the-command-line"></a>Procedura: abilitare a 64 bit, x64 ospitato set di strumenti di Visual C++ nella riga di comando

Visual C++ include compilatori, i linker e altri strumenti che è possibile utilizzare per la creazione di versioni specifiche della piattaforma delle applicazioni eseguibili nei sistemi operativi di Windows a 32 bit, 64 bit o basati su ARM. Altri carichi di lavoro facoltativi di Visual Studio consentono di utilizzare gli strumenti di C++ per interagire con altre piattaforme, ad esempio iOS, Android e Linux. L'architettura di compilazione predefinito utilizza gli strumenti a 32 bit, ospitati da x86 per compilare il codice di Windows a 32 bit, nativo x86. Tuttavia, è probabile che un computer a 64 bit. È possibile sfruttare il processore e spazio di memoria disponibile per il codice a 64 bit utilizzando il set di strumenti a 64 bit, ospitati da x64, quando si genera codice per processori ARM, x64 o x86.

> [!NOTE]
> Per informazioni sugli strumenti specifici che sono inclusi in ogni edizione di Visual C++, vedere [strumenti di Visual C++ e funzionalità in edizioni di Visual Studio](../ide/visual-cpp-tools-and-features-in-visual-studio-editions.md).
>
> Per informazioni su come usare l'IDE di Visual Studio per creare applicazioni a 64 bit, vedere [procedura: configurare progetti di Visual C++ a destinazione 64 Bit, x64 piattaforme](../build/how-to-configure-visual-cpp-projects-to-target-64-bit-platforms.md).

Quando si installa un carico di lavoro di C++ nel programma di installazione di Visual Studio, viene sempre installata a 32 bit, ospitati da x86, nativi e tra gli strumenti di compilazione per compilare codice x86 e x64. Se si include il carico di lavoro di Universal Windows Platform, inoltre, viene installato Strumenti compilatore incrociato ospitati in x86 per compilare il codice ARM. Se si installa questi carichi di lavoro in un x64 a 64 bit, processore, anche ottenere nativo a 64 bit e tra gli strumenti di compilazione per compilare x86, x64 e ARM del codice. Gli strumenti a 32 e 64 bit generano codice identico, ma gli strumenti a 64 bit supportano più memoria per l'ottimizzazione dell'intero programma e i simboli di intestazione precompilata ([/GL](../build/reference/gl-whole-program-optimization.md) e [/LTCG](../build/reference/ltcg-link-time-code-generation.md)) opzioni. Se si verificano i limiti di memoria quando si usano gli strumenti a 32 bit, provare gli strumenti a 64 bit.

## <a name="use-a-64-bit-hosted-developer-command-prompt-shortcut"></a>Utilizzare un collegamento del prompt dei comandi sviluppatore ospitati a 64 bit

Quando Visual Studio è installato in un sistema operativo di Windows a 64 bit, sono disponibili scelte rapide da prompt dei comandi per sviluppatori aggiuntive per nativo a 64 bit, basati su x64 e tra compilatori. Per accedere a questo prompt dei comandi in Windows 10, scegliere il **avviare** menu, aprire la cartella per la versione di Visual Studio, ad esempio **Visual Studio 2017**e quindi scegliere una delle x64 nativo o cross-strumento prompt dei comandi per sviluppatori. Per accedere a questo prompt dei comandi in Windows 8, scegliere il **avviare** schermata aprirlo **tutte le app**. Sotto l'intestazione per la versione installata di Visual Studio, aprire il **Visual Studio** cartella (nelle versioni precedenti di Visual Studio, potrebbero essere denominata **Visual Studio Tools**). Nelle versioni precedenti di Windows, scegliere **avviare**, espandere **tutti i programmi**, la cartella per la versione di **Visual Studio** (e nelle versioni precedenti di Visual Studio,  **Strumenti di Visual Studio**). Per altre informazioni, vedere [Collegamenti al prompt dei comandi per gli sviluppatori](../build/building-on-the-command-line.md#developer-command-prompt-shortcuts).

## <a name="use-vcvarsallbat-to-set-a-64-bit-hosted-build-architecture"></a>Utilizzare Vcvarsall.bat per impostare un'architettura a 64 bit di compilazione ospitato

Uno dei nativo o tra gli strumenti di compilazione sono utilizzabile configurazioni di compilazione nella riga di comando eseguendo il file vcvarsall.bat i file di comando. Questo file di comando consente di configurare il percorso e le variabili di ambiente che consentono una particolare architettura in una finestra del prompt dei comandi esistente di compilazione. Per istruzioni dettagliate, vedere [file di comando per sviluppatori e i percorsi](../build/building-on-the-command-line.md#developer-command-files-and-locations).

## <a name="see-also"></a>Vedere anche

[Configurare Visual C++ per destinazioni x64 a 64 bit](../build/configuring-programs-for-64-bit-visual-cpp.md)<br/>
