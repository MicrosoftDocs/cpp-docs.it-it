---
title: 'Procedura dettagliata: Compilazione di C + + CLI programma nella riga di comando | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: cef41c88-faf9-439d-8423-25aa3f5674dd
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 46e4b8d6341ad659596f7e83ab3cdcb89b18df2d
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2018
ms.locfileid: "34705306"
---
# <a name="walkthrough-compiling-a-ccli-program-on-the-command-line"></a>Procedura dettagliata: Compilazione di un programma in C++/CLI dalla riga di comando

È possibile creare programmi Visual C++ destinati a Common Language Runtime (CLR), che usano .NET Framework e compilarli dalla riga di comando. Visual C++ supporta il linguaggio di programmazione C++/CLI, che offre tipi e operatori aggiuntivi per indirizzare il lavoro al modello di programmazione .NET. Per informazioni generali di C + c++ linguaggio CLI, vedere [programmazione .NET con c++ /CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md).

Questa procedura dettagliata illustra come usare un editor di testo per creare un programma C++/CLI di base, quindi compilarlo nella riga di comando. È possibile usare il proprio programma C++/CLI anziché digitare quello riportato nell'esempio oppure è possibile usare esempi di codice C++/CLI di un altro articolo della Guida. Questa tecnica è utile per lo sviluppo e il test di piccoli moduli che non contengono elementi dell'interfaccia utente.

> [!NOTE]
> Per compilare programmi C++/CLI, è anche possibile usare l'IDE di Visual Studio. Per ulteriori informazioni, vedere [procedura dettagliata: compilazione di un programma C++ destinato a CLR in Visual Studio](../ide/walkthrough-compiling-a-cpp-program-that-targets-the-clr-in-visual-studio.md).

## <a name="prerequisites"></a>Prerequisiti

È necessario comprendere le nozioni di base del linguaggio C++.

## <a name="compiling-a-ccli-program"></a>Compilazione di un programma C++/CLI

Nei passaggi seguenti viene illustrato come compilare un'applicazione console C++/CLI che usa le classi .NET Framework.

Per abilitare la compilazione di C + + CLI, è necessario utilizzare il [/clr](../build/reference/clr-common-language-runtime-compilation.md) l'opzione del compilatore. Il compilatore Visual C++ genera un file con estensione exe che contiene codice MSIL, o una combinazione di codice MSIL e codice nativo, e crea un collegamento alle librerie .NET Framework richieste.

### <a name="to-compile-a-ccli-application-on-the-command-line"></a>Per compilare un'applicazione C++/CLI dalla riga di comando

1. Aprire un **prompt dei comandi per sviluppatori** finestra. Per istruzioni dettagliate, vedere [per aprire una finestra del prompt dei comandi per sviluppatori](../build/building-on-the-command-line.md#developer_command_prompt).

   Per la corretta compilazione del codice, a seconda del sistema operativo del computer e della configurazione, potrebbero essere necessarie le credenziali di amministratore. Per eseguire il prompt dei comandi come amministratore, fare doppio clic per aprire il menu di scelta rapida per il prompt dei comandi, quindi scegliere **più**, **Esegui come amministratore**.

1. Al prompt dei comandi, immettere **basicclr.cpp blocco note**.

   Scegliere **Sì** quando viene chiesto di creare un file.

1. Nel Blocco note, inserire le righe seguenti:

   ```cpp
   int main()
   {
       System::Console::WriteLine("This is a C++/CLI program.");
   }
   ```

1. Nella barra dei menu, scegliere **File**, **salvare**.

   Si è creato un file di origine Visual C++ che usa una classe .NET Framework (<xref:System.Console>) nello spazio dei nomi <xref:System>.

1. Al prompt dei comandi, immettere **cl /clr basicclr.cpp**. Il compilatore cl.exe compilerà il codice sorgente in un file .obj che contiene MSIL, quindi eseguirà il linker per generare un programma eseguibile denominato basicclr.exe.

1. Per eseguire il programma basicclr.exe.exe, al prompt dei comandi, immettere **basicclr**.

   Il programma viene avviato e chiuso dopo aver visualizzato il testo seguente:

   ```Output
   This is a C++/CLI program.
   ```

## <a name="see-also"></a>Vedere anche

- [Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)
- [Compilazione di programmi C/C++](../build/building-c-cpp-programs.md)
- [Opzioni del compilatore](../build/reference/compiler-options.md)
