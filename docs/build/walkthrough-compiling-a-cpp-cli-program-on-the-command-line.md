---
title: "Procedura dettagliata: Compilazione di un programma in C++/CLI dalla riga di comando | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: cef41c88-faf9-439d-8423-25aa3f5674dd
caps.latest.revision: 11
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Procedura dettagliata: Compilazione di un programma in C++/CLI dalla riga di comando
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile creare programmi Visual C\+\+ destinati a Common Language Runtime \(CLR\), che usano .NET Framework e compilarli dalla riga di comando.  Visual C\+\+ supporta il linguaggio di programmazione C\+\+\/CLI, che offre tipi e operatori aggiuntivi per indirizzare il lavoro al modello di programmazione .NET.  Per un'introduzione al linguaggio C\+\+\/CLI, vedere l'articolo [Pure C\+\+: Hello, C\+\+\/CLI](http://msdn.microsoft.com/magazine/cc163681.aspx).  Per informazioni di carattere generale, vedere [Programmazione .NET con C\+\+\/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md).  
  
 Questa procedura dettagliata illustra come usare un editor di testo per creare un programma C\+\+\/CLI di base, quindi compilarlo nella riga di comando.  È possibile usare il proprio programma C\+\+\/CLI anziché digitare quello riportato nell'esempio oppure è possibile usare esempi di codice C\+\+\/CLI di un altro articolo della Guida.  Questa tecnica è utile per lo sviluppo e il test di piccoli moduli che non contengono elementi dell'interfaccia utente.  
  
> [!NOTE]
>  Per compilare programmi C\+\+\/CLI, è anche possibile usare l'IDE di Visual Studio.  Per altre informazioni, vedere [Procedura dettagliata: compilazione di un programma C\+\+ destinato a CLR in Visual Studio](../ide/walkthrough-compiling-a-cpp-program-that-targets-the-clr-in-visual-studio.md).  
  
## Prerequisiti  
 È necessario comprendere le nozioni di base del linguaggio C\+\+.  
  
## Compilazione di un programma C\+\+\/CLI  
 Nei passaggi seguenti viene illustrato come compilare un'applicazione console C\+\+\/CLI che usa le classi .NET Framework.  
  
 Per abilitare la compilazione per C\+\+\/CLI, è necessario usare l'opzione del compilatore [\/clr](../build/reference/clr-common-language-runtime-compilation.md).  Il compilatore Visual C\+\+ genera un file con estensione exe che contiene codice MSIL, o una combinazione di codice MSIL e codice nativo, e crea un collegamento alle librerie .NET Framework richieste.  
  
#### Per compilare un'applicazione C\+\+\/CLI dalla riga di comando  
  
1.  Aprire una finestra del **prompt dei comandi per gli sviluppatori**.  Dalla finestra di **avvio** aprire **App**.  Aprire la cartella **Strumenti di Visual Studio** nella versione in uso di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)], quindi fare clic sul collegamento **Prompt dei comandi per gli sviluppatori**. Per altre informazioni su come aprire una finestra del prompt dei comandi, vedere [Impostazione delle variabili di percorso e di ambiente per la compilazione dalla riga di comando](../build/setting-the-path-and-environment-variables-for-command-line-builds.md).  
  
     Per la corretta compilazione del codice, a seconda del sistema operativo del computer e della configurazione, potrebbero essere necessarie le credenziali di amministratore.  Per eseguire la finestra del prompt dei comandi come amministratore, aprire il menu di scelta rapida per il **Prompt dei comandi per gli sviluppatori**, quindi scegliere **Esegui come amministratore**.  
  
2.  Al prompt dei comandi digitare **notepad basicclr.cpp**.  
  
     Scegliere **Sì** alla richiesta di creazione di un file.  
  
3.  Nel Blocco note, inserire le righe seguenti:  
  
    ```  
    int main()  
    {  
        System::Console::WriteLine("This is a C++/CLI program.");  
    }  
    ```  
  
4.  Nella barra dei menu scegliere **File**, **Salva**.  
  
     Si è creato un file di origine Visual C\+\+ che usa una classe .NET Framework \(<xref:System.Console>\) nello spazio dei nomi <xref:System>.  
  
5.  Al prompt dei comandi digitare **cl \/clr basicclr.cpp**.  Il compilatore cl.exe compilerà il codice sorgente in un file .obj che contiene MSIL, quindi eseguirà il linker per generare un programma eseguibile denominato basicclr.exe.  
  
6.  Per eseguire il programma basicclr.exe.exe, immettere **basicclr** al prompt dei comandi.  
  
     Il programma viene avviato e chiuso dopo aver visualizzato il testo seguente:  
  
  **This is a C\+\+\/CLI program.**  
  
## Vedere anche  
 [Visual C\+\+ Guided Tour](http://msdn.microsoft.com/it-it/499cb66f-7df1-45d6-8b6b-33d94fd1f17c)   
 [Riferimenti del linguaggio C\+\+](../cpp/cpp-language-reference.md)   
 [Compilazione di programmi C\/C\+\+](../build/building-c-cpp-programs.md)   
 [Opzioni del compilatore](../build/reference/compiler-options.md)