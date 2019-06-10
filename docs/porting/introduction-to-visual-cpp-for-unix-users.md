---
title: Introduzione a Visual C++ per utenti UNIX
ms.date: 09/01/2017
helpviewer_keywords:
- UNIX [C++]
ms.assetid: 36108b31-e7fa-49a8-a1f7-7077fcbec873
ms.openlocfilehash: 17f8082ac0442f65b9195b37da18b04f795d3d66
ms.sourcegitcommit: 7d64c5f226f925642a25e07498567df8bebb00d4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2019
ms.locfileid: "65448971"
---
# <a name="introduction-to-visual-c-for-unix-users"></a>Introduzione a Visual C++ per utenti UNIX

Questo argomento contiene informazioni per gli utenti UNIX che non hanno familiarità con Visual Studio e vogliono aumentare la produttività con C++ e l'IDE (Integrated Development Environment) di Visual Studio.

## <a name="getting-started-on-the-command-line"></a>Introduzione all'uso della riga di comando

È possibile usare il compilatore C++ dalla riga di comando in modo analogo a come si usa un ambiente della riga di comando UNIX. Per compilare dal prompt dei comandi, si usano infatti il compilatore C e C++ (CL.EXE), il linker (LINK.EXE) e altri strumenti da riga di comando, incluso NMAKE.EXE, la versione Microsoft dell'utilità make di UNIX.

In UNIX i comandi vengono installati in una cartella comune, ad esempio /usr/bin. In Visual Studio gli strumenti da riga di comando vengono installati nella directory di installazione di Visual Studio, nella sottodirectory VC\bin e nelle relative sottodirectory. Diversamente da UNIX, questi strumenti non sono disponibili in una normale finestra del prompt dei comandi. Per usare gli strumenti da riga di comando, usare un collegamento al prompt dei comandi per gli sviluppatori o eseguire un file di comando per gli sviluppatori, ad esempio vcvarsall.bat. In tal modo vengono configurati il percorso e le altre variabili di ambiente necessari per compilare programmi C++ dalla riga di comando. Per altre informazioni, vedere [Compilare codice C/C++ nella riga di comando](../build/building-on-the-command-line.md) e [ Procedura dettagliata: Compilazione di un programma C++ nativo nella riga di comando](../build/walkthrough-compiling-a-native-cpp-program-on-the-command-line.md).

Per aprire un collegamento al prompt dei comandi per gli sviluppatori, immettere *prompt dei comandi per gli sviluppatori* nel controllo ricerca desktop e scegliere il risultato **Prompt dei comandi per gli sviluppatori** per la versione in uso di Visual Studio. Per scegliere un prompt dei comandi per gli sviluppatori preconfigurato per un determinato host e una determinata architettura di destinazione, aprire il menu **Start** (icona di Windows nell'angolo del desktop) e quindi scorrere fino alla cartella della versione in uso di Visual Studio, ad esempio **Visual Studio 2017**. Aprire la cartella e scegliere il collegamento al prompt dei comandi per l'host preferito e l'architettura di destinazione.

Per sfruttare le funzionalità più avanzate, ad esempio il debugger di Visual Studio, la ricerca di codice e il completamento istruzioni di IntelliSense, le finestre di progettazione visiva, la gestione dei progetti e così via, è necessario usare l'IDE di Visual Studio.

## <a name="debugging-your-code"></a>Debug del codice

Se si usa la riga di comando e si eseguono le applicazioni nella workstation di sviluppo, verrà visualizzata una finestra di dialogo per eseguire il debugger di Visual Studio quando il codice rileva una violazione di accesso di memoria, un'eccezione non gestita o altri errori irreversibili. Facendo clic su **OK** viene avviato l'ambiente di sviluppo di Visual Studio e il debugger viene aperto in corrispondenza del punto di errore. È possibile eseguire il debug delle applicazioni in questo modo e, in questo caso, il codice sorgente sarà disponibile solo se è stato compilato con l'opzione [/Z7, /Zi, /ZI (Formato informazioni di debug)](../build/reference/z7-zi-zi-debug-information-format.md). Per altre informazioni, vedere [Debug del codice nativo](/visualstudio/debugger/debugging-native-code) e [Utilizzo dell'ambiente di sviluppo di Visual Studio per lo sviluppo di applicazioni desktop C++](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md).

## <a name="using-the-development-environment"></a>Uso dell'ambiente di sviluppo

Per modificare e compilare il codice sorgente in un *progetto*, è più agevole usare l'ambiente di sviluppo. Per progetto si intende una raccolta di file di origine e correlati che verranno compilati in una singola unità, ad esempio una libreria o un eseguibile. Un progetto contiene anche informazioni sulla modalità di compilazione dei file. Le informazioni sui progetti vengono archiviate in un file di progetto con estensione prj.

Un'applicazione è invece costituita da più librerie ed eseguibili, ognuno dei quali potenzialmente compilato con un set diverso di opzioni del compilatore o persino in un altro linguaggio e che vengono archiviati in più progetti appartenenti a un'unica *soluzione*. Una soluzione è un'astrazione di un contenitore in cui raggruppare più progetti. Le informazioni sulle soluzioni vengono archiviate in un file di soluzione con estensione sln. Per altre informazioni, vedere [Soluzioni e progetti in Visual Studio](/visualstudio/ide/solutions-and-projects-in-visual-studio) e [Utilizzo dell'ambiente di sviluppo di Visual Studio per lo sviluppo di applicazioni desktop C++](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md).

## <a name="importing-your-existing-code"></a>Importazione di codice esistente

È possibile usare il compilatore C++ per compilare il codice esistente configurato per la compilazione con e senza un makefile e inserirlo in un progetto di Visual Studio. Per altre informazioni, vedere [Procedura: Creare un progetto C++ da codice esistente](../build/how-to-create-a-cpp-project-from-existing-code.md).

## <a name="creating-a-new-project"></a>Creazione di un nuovo progetto

È possibile creare nuovi progetti nell'ambiente di sviluppo. In Visual Studio sono disponibili numerosi modelli che forniscono codice standard per vari progetti comuni. È possibile usare creazioni guidate applicazione per generare progetti con strutture di codice per i vari tipi di applicazione.

È possibile iniziare con un progetto vuoto usando la **creazione guidata applicazione console (Win32)** . Selezionare la casella di controllo **Progetto vuoto**. È quindi possibile aggiungere file nuovi ed esistenti al progetto in un secondo momento.

A ogni progetto creato è necessario assegnare un nome. Per impostazione predefinita, il nome del progetto è uguale al nome della libreria di collegamento dinamico (DLL) o dell'eseguibile compilato dal progetto. Per altre informazioni, vedere [Creazione di soluzioni e progetti](/visualstudio/ide/creating-solutions-and-projects).

## <a name="microsoft-specific-modifiers"></a>Modificatori specifici Microsoft

Il compilatore Microsoft C++ implementa diverse estensioni per il linguaggio di programmazione C++ standard per supportare la programmazione per i sistemi operativi Windows. Queste estensioni consentono di specificare, tra l'altro, attributi della classe di archiviazione, convenzioni di chiamata delle funzioni e indirizzi di base. Per un elenco completo di tutte le estensioni C++ supportate, vedere [Modificatori specifici Microsoft](../cpp/microsoft-specific-modifiers.md).

Per disabilitare tutte le estensioni specifiche di Microsoft in C++, usare l'opzione `/Za` del compilatore. Questa opzione è consigliata se si intende scrivere codice da eseguire su più piattaforme. Per altre informazioni sull'opzione del compilatore `/Za`, vedere [/Za, /Ze (Disabilita estensioni linguaggio)](../build/reference/za-ze-disable-language-extensions.md). Per altre informazioni sulla conformità del compilatore C++, vedere [Conformità al linguaggio Visual C++](../overview/visual-cpp-language-conformance.md) e [Comportamento non standard](../cpp/nonstandard-behavior.md).

## <a name="precompiled-headers"></a>Intestazioni precompilate

I compilatori Microsoft C e C++ includono opzioni per la precompilazione di codice C o C++ di qualsiasi tipo, incluso quello inline. Questa funzionalità avanzata consente di compilare un corpo di codice stabile, archiviare lo stato del codice compilato in un file e, durante le successive compilazioni, combinare il codice precompilato con quello ancora in fase di sviluppo. Le compilazioni successive risultano più veloci perché il codice stabile non deve essere ricompilato.

Per impostazione predefinita, tutto il codice precompilato viene specificato nei file stdafx.h e stdafx.cpp. Questi file vengono creati automaticamente durante l'esecuzione della procedura guidata **Nuovo progetto** a meno che l'opzione **Intestazione precompilata** non venga deselezionata. Per altre informazioni sulle intestazioni precompilate, vedere [Creazione di file di intestazione precompilati](../build/creating-precompiled-header-files.md).

## <a name="related-sections"></a>Sezioni correlate

Per altre informazioni, vedere [Porting da UNIX a Win32](../porting/porting-from-unix-to-win32.md).

## <a name="see-also"></a>Vedere anche

[Progetti e sistemi di compilazione](../build/projects-and-build-systems-cpp.md)
