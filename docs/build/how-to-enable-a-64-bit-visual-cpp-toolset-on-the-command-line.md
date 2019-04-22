---
title: 'Procedura: Abilitare un set di strumenti MSVC a 64 bit dalla riga di comando'
ms.date: 03/29/2018
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
ms.openlocfilehash: 8436254a3d8c5c1dae018c2309ceaad7bd5b2408
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58769277"
---
# <a name="how-to-enable-a-64-bit-x64-hosted-msvc-toolset-on-the-command-line"></a>Procedura: Abilitare una a 64 bit e x64 ospitato sul set di strumenti MSVC nella riga di comando

Visual Studio include i compilatori C++, ai linker e altri strumenti che è possibile usare per creare versioni specifiche della piattaforma delle App eseguibili nei sistemi operativi di Windows a 32 bit, 64 bit o basati su ARM. Altri carichi di lavoro facoltativi di Visual Studio consentono di usare gli strumenti di C++ per interagire con altre piattaforme, ad esempio iOS, Android e Linux. L'architettura di compilazione predefinito Usa strumenti ospitati da x86 a 32 bit per compilare il codice di Windows a 32 bit, native x86. Tuttavia, è probabile che un computer a 64 bit. È possibile sfruttare i vantaggi del processore e spazio di memoria disponibile per il codice a 64 bit utilizzando il set di strumenti a 64 bit e x64 ospitato quando si compila il codice per processori ARM, x64 o x86.

> [!NOTE]
> Per informazioni sugli strumenti specifici inclusi in ogni edizione di Visual Studio, vedere [strumenti di Visual C++ e funzionalità in edizioni di Visual Studio](../overview/visual-cpp-tools-and-features-in-visual-studio-editions.md).
>
> Per informazioni su come usare l'IDE di Visual Studio per creare applicazioni a 64 bit, vedere [come: Configurare i progetti Visual C++ per piattaforme x64 a 64 bit](how-to-configure-visual-cpp-projects-to-target-64-bit-platforms.md).

Quando si installa un carico di lavoro di C++ nel programma di installazione di Visual Studio, viene sempre installata a 32 bit, ospitati da x86, nativi e incrociati gli strumenti di compilazione per compilare codice x86 e x64. Se si include il carico di lavoro (Universal Windows Platform), installa anche gli strumenti di compilazione incrociata ospitati da x86 per compilare codice ARM. Se si installa questi carichi di lavoro su un x64 a 64 bit, processore, è anche ottenere nativo a 64 bit e tra gli strumenti di compilazione per compilare x86, x64 e ARM di codice. Gli strumenti a 32 e 64 bit generano codice identico, ma gli strumenti a 64 bit supportano più memoria per l'Ottimizzazione intero programma e simboli di intestazione precompilata ([/GL](reference/gl-whole-program-optimization.md) e [/LTCG](reference/ltcg-link-time-code-generation.md)) opzioni. Se si verificano i limiti di memoria quando si usano gli strumenti a 32 bit, provare gli strumenti a 64 bit.

## <a name="use-a-64-bit-hosted-developer-command-prompt-shortcut"></a>Utilizzare un collegamento prompt dei comandi per gli sviluppatori ospitati a 64 bit

Quando Visual Studio è installato in un sistema operativo di Windows a 64 bit, sono disponibili scelte rapide del prompt dei comandi per sviluppatori per l'oggetto nativo a 64 bit, basato su x64 e tra compilatori. Per accedere a questo prompt dei comandi in Windows 10, scegliere il **avviare** menu, aprire la cartella per la versione di Visual Studio, ad esempio **Visual Studio 2017**e quindi scegliere una delle x64 nativi o incrociati prompt dei comandi per gli sviluppatori. Per accedere a questo prompt dei comandi in Windows 8, scegliere il **avviare** schermata, aprire **tutte le app**. Sotto l'intestazione per la versione installata di Visual Studio, aprire il **Visual Studio** cartella (nelle versioni precedenti di Visual Studio, potrebbe essere denominato **strumenti di Visual Studio**). Nelle versioni precedenti di Windows, scegliere **avviare**, espandere **tutti i programmi**, la cartella per la versione di **Visual Studio** (e nelle versioni precedenti di Visual Studio  **Strumenti di Visual Studio**). Per altre informazioni, vedere [Collegamenti al prompt dei comandi per gli sviluppatori](building-on-the-command-line.md#developer_command_prompt_shortcuts).

## <a name="use-vcvarsallbat-to-set-a-64-bit-hosted-build-architecture"></a>Utilizzare vcvarsall. bat per impostare un'architettura a 64 bit di compilazione ospitato

Uno dei nativi o incrociati gli strumenti di compilazione configurazioni della build possono essere utilizzate nella riga di comando eseguendo il file vcvarsall. bat i file di comando. Questo file di comando Configura il percorso e le variabili di ambiente che consentono a una determinata generare architettura in una finestra del prompt dei comandi esistente. Per istruzioni specifiche, vedere [percorsi dei file di comando per gli sviluppatori](building-on-the-command-line.md#developer_command_file_locations).

## <a name="see-also"></a>Vedere anche

[Configurare i progetti C++ a 64 bit x64 destinazioni](configuring-programs-for-64-bit-visual-cpp.md)<br/>
