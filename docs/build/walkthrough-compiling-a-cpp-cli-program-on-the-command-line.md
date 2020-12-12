---
description: 'Altre informazioni su: procedura dettagliata: compilazione di un programma C++/CLI dalla riga di comando'
title: 'Procedura dettagliata: Compilazione di un programma in C++/CLI dalla riga di comando'
ms.date: 04/23/2019
ms.assetid: cef41c88-faf9-439d-8423-25aa3f5674dd
ms.openlocfilehash: 075ac90f08f62fb75c9a220b398f34841eafa60d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97198999"
---
# <a name="walkthrough-compiling-a-ccli-program-on-the-command-line"></a>Procedura dettagliata: Compilazione di un programma in C++/CLI dalla riga di comando

È possibile creare programmi Visual C++ destinati a Common Language Runtime (CLR), che usano .NET Framework e compilarli dalla riga di comando. Visual C++ supporta il linguaggio di programmazione C++/CLI, che offre tipi e operatori aggiuntivi per indirizzare il lavoro al modello di programmazione .NET. Per informazioni generali sul linguaggio C++/CLI, vedere [programmazione .NET con c++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md).

Questa procedura dettagliata illustra come usare un editor di testo per creare un programma C++/CLI di base, quindi compilarlo nella riga di comando. È possibile usare il proprio programma C++/CLI anziché digitare quello riportato nell'esempio oppure è possibile usare esempi di codice C++/CLI di un altro articolo della Guida. Questa tecnica è utile per la compilazione e il test di piccoli moduli senza elementi dell'interfaccia utente.

## <a name="prerequisites"></a>Prerequisiti

Si conoscono le nozioni di base del linguaggio C++.

## <a name="compiling-a-ccli-program"></a>Compilazione di un programma C++/CLI

Nei passaggi seguenti viene illustrato come compilare un'applicazione console C++/CLI che usa le classi .NET Framework.

Per abilitare la compilazione per C++/CLI, è necessario usare l'opzione del compilatore [/CLR](reference/clr-common-language-runtime-compilation.md) . Il compilatore MSVC genera un file con estensione exe che contiene codice MSIL, o codice MSIL misto e codice nativo, e collega alle librerie .NET Framework richieste.

### <a name="to-compile-a-ccli-application-on-the-command-line"></a>Per compilare un'applicazione C++/CLI dalla riga di comando

1. Aprire una finestra di **prompt dei comandi per gli sviluppatori** . Per istruzioni specifiche, vedere [per aprire una finestra del prompt dei comandi](building-on-the-command-line.md#developer_command_prompt)per gli sviluppatori.

   Per la corretta compilazione del codice, a seconda del sistema operativo del computer e della configurazione, potrebbero essere necessarie le credenziali di amministratore. Per eseguire la finestra del prompt dei comandi come amministratore, fare clic con il pulsante destro del mouse per aprire il menu di scelta rapida per il prompt dei comandi, quindi scegliere **altro**  >  **Esegui come amministratore**.

1. Al prompt dei comandi digitare `notepad basicclr.cpp`.

   Scegliere **Sì** quando viene richiesto di creare un file.

1. Nel Blocco note, inserire le righe seguenti:

   ```cpp
   int main()
   {
       System::Console::WriteLine("This is a C++/CLI program.");
   }
   ```

1. Nella barra dei menu scegliere **file**  >  **Salva**.

   È stato creato un file di origine Visual C++ che usa una classe .NET Framework ( <xref:System.Console> ) nello <xref:System> spazio dei nomi.

1. Al prompt dei comandi digitare `cl /clr basicclr.cpp`. Il compilatore cl.exe compilerà il codice sorgente in un file .obj che contiene MSIL, quindi eseguirà il linker per generare un programma eseguibile denominato basicclr.exe.

1. Per eseguire il programma basicclr.exe.exe, immettere `basicclr` al prompt dei comandi.

   Il programma viene avviato e chiuso dopo aver visualizzato il testo seguente:

   ```Output
   This is a C++/CLI program.
   ```

## <a name="see-also"></a>Vedi anche

[Riferimenti per il linguaggio C++](../cpp/cpp-language-reference.md)<br/>
[Progetti e sistemi di compilazione](projects-and-build-systems-cpp.md)<br/>
[Opzioni del compilatore MSVC](reference/compiler-options.md)
