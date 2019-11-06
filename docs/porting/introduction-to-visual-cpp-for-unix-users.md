---
title: Introduzione a Microsoft C++ per utenti UNIX
ms.date: 10/23/2019
helpviewer_keywords:
- UNIX [C++]
ms.assetid: 36108b31-e7fa-49a8-a1f7-7077fcbec873
ms.openlocfilehash: 791c513553acbd300204746ae1e1dddf7a3ae5c4
ms.sourcegitcommit: 0cfc43f90a6cc8b97b24c42efcf5fb9c18762a42
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/05/2019
ms.locfileid: "73626997"
---
# <a name="introduction-to-microsoft-c-for-unix-users"></a>Introduzione a Microsoft C++ per utenti UNIX

Questo argomento fornisce informazioni per gli utenti di tutte le versioni di UNIX che non hanno familiarità con Visual Studio e vogliono C++ aumentare la produttività con la riga di comando o con Visual Studio. È possibile usare Visual Studio con il compilatore C++ Microsoft per le finestre di destinazione. È anche possibile usare l'IDE di Visual Studio con GCC o Clang in ambienti UNIX, ad esempio computer Linux remoti, MinGW-w64 e sottosistema Windows per Linux. Per usare C++ in Visual Studio, è necessario installare lo **sviluppo di applicazioni desktop con C++**  carico di lavoro. Aprire il Programma di installazione di Visual Studio per installare il carico di lavoro o aggiungere o rimuovere i componenti facoltativi. Installare anche lo **sviluppo di Linux C++ con** il carico di lavoro se si è destinati a un computer Linux remoto. Per lo sviluppo per Android o iOS, installare lo **sviluppo C++ per dispositivi mobili con** carico di lavoro.

## <a name="getting-started-on-the-command-line"></a>Guida introduttiva alla riga di comando

È possibile utilizzare il compilatore C++ Microsoft dalla riga di comando in modo analogo all'utilizzo di un ambiente della riga di comando UNIX. Per compilare dal prompt dei comandi, si usano infatti il compilatore C e C++ (CL.EXE), il linker (LINK.EXE) e altri strumenti da riga di comando, incluso NMAKE.EXE, la versione Microsoft dell'utilità make di UNIX.

In UNIX i comandi vengono installati in una cartella comune, ad esempio /usr/bin. In Visual Studio gli strumenti da riga di comando vengono installati nella directory di installazione di Visual Studio, nella sottodirectory VC\bin e nelle relative sottodirectory. Diversamente da UNIX, questi strumenti non sono disponibili in una normale finestra del prompt dei comandi. Per usare gli strumenti da riga di comando, è necessario usare un prompt dei comandi per gli sviluppatori speciale che configura il percorso e altre variabili di ambiente necessarie C++ per compilare i programmi. Per altre informazioni, vedere [Compilare codice C/C++ nella riga di comando](../build/building-on-the-command-line.md) e [Procedura dettagliata: Compilazione di un programma C++ nativo nella riga di comando](../build/walkthrough-compiling-a-native-cpp-program-on-the-command-line.md).

## <a name="debugging-your-code"></a>Debug del codice

È possibile usare il debugger di Visual Studio per C++ i progetti Microsoft dalla riga di comando o dall'interno dell'IDE. Eseguire la compilazione con l'opzione [/Z7,/Zi,/Zi (formato informazioni di debug)](../build/reference/z7-zi-zi-debug-information-format.md) per abilitare l'esecuzione delle origini. Per altre informazioni, vedere [Debug del codice nativo](/visualstudio/debugger/debugging-native-code) e [Utilizzo dell'ambiente di sviluppo di Visual Studio per lo sviluppo di applicazioni desktop C++](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md).

Per i programmi compilati con GCC o Clang, Visual Studio richiama GDB, LLDB o qualsiasi debugger personalizzato specificato.

## <a name="visual-studio-project-system"></a>Sistema di progetto di Visual Studio

Il sistema di progetto di Visual Studio è denominato MSBuild. USA i file di progetto in formato XML; C++ i file di progetto hanno estensione. vcxproj. Un'applicazione è invece costituita da più librerie ed eseguibili, ognuno dei quali potenzialmente compilato con un set diverso di opzioni del compilatore o persino in un altro linguaggio e che vengono archiviati in più progetti appartenenti a un'unica *soluzione*. Una soluzione è un'astrazione di un contenitore in cui raggruppare più progetti. Le informazioni sulle soluzioni vengono archiviate in un file di soluzione con estensione sln. Per altre informazioni, vedere [Soluzioni e progetti in Visual Studio](/visualstudio/ide/solutions-and-projects-in-visual-studio) e [Utilizzo dell'ambiente di sviluppo di Visual Studio per lo sviluppo di applicazioni desktop C++](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md). Dal menu principale scegliere **File** > **nuovo** **progetto** > per visualizzare i modelli di progetto di Visual Studio disponibili.

A partire da Visual Studio 2017, viene aggiunto il supporto per i progetti CMake, nonché le opzioni per l' C++ uso del compilatore Microsoft con qualsiasi sistema di compilazione arbitrario o con una cartella separata dei file di origine e nessun file di progetto. Per altre informazioni, vedere [progetti CMake in Visual Studio](../build/cmake-projects-in-visual-studio.md) e [aprire progetti cartella in Visual Studio](../build/open-folder-projects-cpp.md).

## <a name="microsoft-specific-modifiers"></a>Modificatori specifici Microsoft

Il compilatore Microsoft C++ implementa diverse estensioni per il linguaggio di programmazione C++ standard per supportare la programmazione per i sistemi operativi Windows. Queste estensioni consentono di specificare, tra l'altro, attributi della classe di archiviazione, convenzioni di chiamata delle funzioni e indirizzi di base. Per un elenco completo di tutte le estensioni C++ supportate, vedere [Modificatori specifici Microsoft](../cpp/microsoft-specific-modifiers.md).

Per disabilitare tutte le estensioni specifiche di Microsoft in C++, usare l'opzione `/Za` del compilatore. Questa opzione è consigliata se si intende scrivere codice da eseguire su più piattaforme. Per altre informazioni sull'opzione del compilatore `/Za`, vedere [/Za, /Ze (Disabilita estensioni linguaggio)](../build/reference/za-ze-disable-language-extensions.md). Per ulteriori informazioni sulla C++ conformità del compilatore, vedere [tabella di C++ conformità del linguaggio Microsoft](../overview/visual-cpp-language-conformance.md) e [comportamento non standard](../cpp/nonstandard-behavior.md).

## <a name="precompiled-headers"></a>Intestazioni precompilate

I compilatori Microsoft C e C++ includono opzioni per la precompilazione di codice C o C++ di qualsiasi tipo, incluso quello inline. Questa funzionalità avanzata consente di compilare un corpo di codice stabile, archiviare lo stato del codice compilato in un file e, durante le successive compilazioni, combinare il codice precompilato con quello ancora in fase di sviluppo. Le compilazioni successive risultano più veloci perché il codice stabile non deve essere ricompilato.

Per impostazione predefinita, tutto il codice precompilato viene specificato nei file *pch.h* e *pch.cpp* (*stdafx.h* e *stdafx.cpp* in Visual Studio 2017 e versioni precedenti). Per altre informazioni sulle intestazioni precompilate, vedere [Creazione di file di intestazione precompilati](../build/creating-precompiled-header-files.md).

## <a name="related-sections"></a>Sezioni correlate

Per ulteriori informazioni, vedere [esecuzione di programmi Linux in Windows](../porting/porting-from-unix-to-win32.md).

## <a name="see-also"></a>Vedere anche

[Progetti e sistemi di compilazione](../build/projects-and-build-systems-cpp.md)
