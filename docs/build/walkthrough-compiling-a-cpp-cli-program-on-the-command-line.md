---
title: 'Procedura dettagliata: Compilazione di un c++ /CLI programma della riga di comando nella riga di comando'
ms.date: 04/23/2019
ms.assetid: cef41c88-faf9-439d-8423-25aa3f5674dd
ms.openlocfilehash: 8a5c5659367350a80725b365ef9c431bbec209d1
ms.sourcegitcommit: 18d3b1e9cdb4fc3a76f7a650c31994bdbd2bde64
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 04/29/2019
ms.locfileid: "64877460"
---
# <a name="walkthrough-compiling-a-ccli-program-on-the-command-line"></a>Procedura dettagliata: Compilazione di un c++ /CLI programma della riga di comando nella riga di comando

È possibile creare programmi Visual C++ destinati a Common Language Runtime (CLR), che usano .NET Framework e compilarli dalla riga di comando. Visual C++ supporta il linguaggio di programmazione C++/CLI, che offre tipi e operatori aggiuntivi per indirizzare il lavoro al modello di programmazione .NET. Per informazioni generali su di C++linguaggio /CLI, vedere [programmazione con .NET C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md).

Questa procedura dettagliata illustra come usare un editor di testo per creare un programma C++/CLI di base, quindi compilarlo nella riga di comando. È possibile usare il proprio programma C++/CLI anziché digitare quello riportato nell'esempio oppure è possibile usare esempi di codice C++/CLI di un altro articolo della Guida. Questa tecnica è utile per la compilazione e test di piccoli moduli che non dispongono di alcun elemento dell'interfaccia utente.)

## <a name="prerequisites"></a>Prerequisiti

Comprendere i concetti fondamentali del linguaggio C++.

## <a name="compiling-a-ccli-program"></a>Compilazione di un programma C++/CLI

Nei passaggi seguenti viene illustrato come compilare un'applicazione console C++/CLI che usa le classi .NET Framework.

Per abilitare la compilazione per C++/CLI, è necessario usare il [/clr](reference/clr-common-language-runtime-compilation.md) l'opzione del compilatore. Il compilatore MSVC genera un file .exe che contiene codice MSIL, o una combinazione di codice MSIL e codice nativo e i collegamenti alle librerie .NET Framework richieste.

### <a name="to-compile-a-ccli-application-on-the-command-line"></a>Per compilare un'applicazione C++/CLI dalla riga di comando

1. Aprire una **prompt dei comandi sviluppatore** finestra. Per istruzioni specifiche, vedere [per aprire una finestra del prompt dei comandi per gli sviluppatori](building-on-the-command-line.md#developer_command_prompt).

   Per la corretta compilazione del codice, a seconda del sistema operativo del computer e della configurazione, potrebbero essere necessarie le credenziali di amministratore. Per eseguire il prompt dei comandi come amministratore, fare doppio clic per aprire il menu di scelta rapida per il prompt dei comandi e quindi scegliere **altre** > **Esegui come amministratore**.

1. Al prompt dei comandi digitare `notepad basicclr.cpp`.

   Scegli **Sì** quando viene chiesto di creare un file.

1. Nel Blocco note, inserire le righe seguenti:

   ```cpp
   int main()
   {
       System::Console::WriteLine("This is a C++/CLI program.");
   }
   ```

1. Nella barra dei menu, scegliere **File** > **salvare**.

   È stato creato un file di origine Visual C++ che usa una classe .NET Framework (<xref:System.Console>) nel <xref:System> dello spazio dei nomi.

1. Al prompt dei comandi digitare `cl /clr basicclr.cpp`. Il compilatore cl.exe compilerà il codice sorgente in un file .obj che contiene MSIL, quindi eseguirà il linker per generare un programma eseguibile denominato basicclr.exe.

1. Per eseguire il programma basicclr.exe.exe, immettere `basicclr` al prompt dei comandi.

   Il programma viene avviato e chiuso dopo aver visualizzato il testo seguente:

   ```Output
   This is a C++/CLI program.
   ```

## <a name="see-also"></a>Vedere anche

[Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)<br/>
[Progetti e sistemi di compilazione](projects-and-build-systems-cpp.md)<br/>
[Opzioni del compilatore MSVC](reference/compiler-options.md)
