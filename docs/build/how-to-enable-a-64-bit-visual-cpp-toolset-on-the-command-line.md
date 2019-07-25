---
title: 'Procedura: Abilitare un set di strumenti MSVC a 64 bit dalla riga di comando'
ms.date: 07/24/2019
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
ms.openlocfilehash: fa02e49ecc820835275e50f116f7abed8133e1a8
ms.sourcegitcommit: ce3393846c86e7905ff0c86e4cd6610476809585
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/25/2019
ms.locfileid: "68492265"
---
# <a name="how-to-enable-a-64-bit-x64-hosted-msvc-toolset-on-the-command-line"></a>Procedura: Abilitare un set di strumenti MSVC a 64 bit ospitato in una piattaforma x64 bit dalla riga di comando

Visual Studio include compilatori, linker e altri strumenti C++ con cui creare versioni delle app specifiche per ciascuna piattaforma ed eseguibili con sistemi operativi Windows a 32 bit, a 64 bit o basati su ARM. Altri carichi di lavoro di Visual Studio facoltativi consentono di usare strumenti C++ con altre piattaforme come destinazione, ad esempio iOS, Android e Linux. L'architettura di compilazione predefinita usa strumenti ospitati da piattaforme x86 a 32 bit per compilare codice Windows a 32 bit nativo per piattaforme x86. È tuttavia probabile che si usi un computer a 64 bit. Quando Visual Studio è installato in un sistema operativo Windows a 64 bit, sono disponibili collegamenti aggiuntivi al prompt dei comandi per sviluppatori per gli strumenti a 64 bit ospitati su piattaforma x64 in modo nativo e con compilatori incrociati. Quando si compila codice per processori ARM, x64 o x86, è possibile sfruttare i vantaggi del processore e dello spazio di memoria disponibili per il codice a 64 bit usando il set di strumenti a 64 bit ospitato su piattaforma x64.

## <a name="use-a-64-bit-hosted-developer-command-prompt-shortcut"></a>Usare un collegamento al prompt dei comandi per sviluppatori ospitato in una piattaforma a 64 bit

 Per accedere a questi prompt dei comandi in Windows 10, dal menu **Start** aprire la cartella della versione di Visual Studio installata, ad esempio **Visual Studio 2019**, e quindi scegliere uno dei prompt dei comandi per sviluppatori nativi per piattaforma x64 o con compilatore incrociato. 

![prompt dei comandi degli strumenti nativi x64](media/x64-native-tools-command-prompt.png "strumenti nativi x64 nel menu Start")

Per accedere a questi prompt dei comandi in Windows 8, nella schermata **Start** aprire **Tutte le app**. Sotto l'intestazione della versione di Visual Studio installata aprire la cartella **Visual Studio**. Nelle versioni precedenti di Visual Studio può essere denominata **Strumenti di Visual Studio**. Nelle versioni precedenti di Windows scegliere **Start**, espandere **Tutti i programmi**, la cartella della versione di **Visual Studio** installata e, nelle versioni precedenti di Visual Studio, **Strumenti di Visual Studio**. Per altre informazioni, vedere [Collegamenti al prompt dei comandi per gli sviluppatori](building-on-the-command-line.md#developer_command_prompt_shortcuts).

## <a name="use-vcvarsallbat-to-set-a-64-bit-hosted-build-architecture"></a>Usare vcvarsall.bat per impostare un'architettura di compilazione ospitata in una piattaforma a 64 bit

È possibile usare dalla riga di comando qualsiasi configurazione di compilazione degli strumenti nativi o con compilatore incrociato eseguendo il file di comando vcvarsall.bat. Questo file di comando configura il percorso e le variabili di ambiente che consentono un'architettura di compilazione specifica in una finestra del prompt dei comandi esistente. Per istruzioni specifiche, vedere [Percorsi dei file di comando per gli sviluppatori](building-on-the-command-line.md#developer_command_file_locations).

## <a name="remarks"></a>Note

> [!NOTE]
> Per informazioni sugli strumenti specifici inclusi in ogni edizione di Visual Studio, vedere [Visual C++ Tools and Features in Visual Studio Editions](../overview/visual-cpp-tools-and-features-in-visual-studio-editions.md) (Strumenti e funzionalità di Visual C++ nelle versioni di Visual Studio).
>
> Per informazioni su come usare l'IDE di Visual Studio per creare applicazioni a 64 bit, vedere [Procedura: Configurare i progetti Visual C++ per piattaforme x64 a 64 bit](how-to-configure-visual-cpp-projects-to-target-64-bit-platforms.md).

Quando si installa un carico di lavoro C++ nel programma di installazione di Visual Studio, vengono sempre installati strumenti a 32 bit, ospitati su piattaforma x86, nativi e con compilatore incrociato per la compilazione di codice per piattaforme x86 e x64. Se si include il carico di lavoro della piattaforma UWP (Universal Windows Platform), vengono installati anche gli strumenti con compilatore incrociato ospitati su piattaforma x86 per la compilazione di codice ARM. Se si installano questi carichi di lavoro in un computer con processore x64 a 64 bit, si ottengono anche strumenti a 64 bit nativi con compilatore incrociato per la compilazione di codice x86, x64 e ARM. I compilatori a 32 e a 64 bit generano codice identico, ma gli strumenti a 64 bit supportano una maggiore quantità di memoria per i simboli di intestazione precompilata e le opzioni Ottimizzazione intero programma ([/GL](reference/gl-whole-program-optimization.md) e [/LTCG](reference/ltcg-link-time-code-generation.md)). In caso di limiti della memoria quando si usano gli strumenti a 32 bit, provare gli strumenti a 64 bit.

## <a name="see-also"></a>Vedere anche

[Configurare progetti C++ per destinazioni x64 a 64 bit](configuring-programs-for-64-bit-visual-cpp.md)<br/>
