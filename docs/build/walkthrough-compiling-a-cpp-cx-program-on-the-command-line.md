---
title: "Procedura dettagliata: Compilazione di un programma in C++/CX dalla riga di comando | Microsoft Docs"
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
ms.assetid: 626f5544-69ed-4736-83a9-f11389b371b2
caps.latest.revision: 8
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Procedura dettagliata: Compilazione di un programma in C++/CX dalla riga di comando
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile creare programmi Visual C\+\+ destinati a Windows Runtime e compilarli dalla riga di comando.  Visual C\+\+ supporta le estensioni del componente Visual C\+\+ \(C\+\+\/CX\), che offrono tipi e operatori aggiuntivi per il modello di programmazione Windows Runtime.  È possibile usare C\+\+\/CX per la compilazione di app per Windows Phone 8.1, Windows Store e applicazioni desktop per Windows.  Per altre informazioni, vedere [Panoramica di C\+\+\/CX](http://msdn.microsoft.com/magazine/dn166929.aspx) e [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md).  
  
 Questa procedura dettagliata illustra come usare un editor di testo per creare un programma C\+\+\/CX di base, quindi compilarlo nella riga di comando.  È possibile usare il proprio programma C\+\+\/CX anziché digitare quello riportato nell'esempio oppure è possibile usare esempi di codice C\+\+\/CX di un altro articolo della Guida.  Questa tecnica è utile per lo sviluppo e il test di piccoli moduli che non contengono elementi dell'interfaccia utente.  
  
> [!NOTE]
>  È anche possibile usare IDE di Visual Studio per compilare programmi C\+\+\/CX.  Poiché l'IDE comprende progettazione, debug, emulazione e supporto per la distribuzione che non è disponibile nella riga di comando, è consigliabile usare l'IDE per compilare applicazioni Windows Store.  Per altre informazioni, vedere [Create a basic C\+\+ Store app](http://msdn.microsoft.com/library/windows/apps/dn263168).  
  
## Prerequisiti  
 È necessario comprendere le nozioni di base del linguaggio C\+\+.  
  
## Compilazione di un programma C\+\+\/CX  
 Per abilitare la compilazione per C\+\+\/CX, è necessario usare l'opzione del compilatore [\/ZW](../build/reference/zw-windows-runtime-compilation.md).  Il compilatore Visual C\+\+ genera un file .exe destinato a Windows Runtime con i collegamenti alle librerie richieste.  
  
#### Per compilare un'applicazione C\+\+\/CX dalla riga di comando  
  
1.  Aprire una finestra del **prompt dei comandi per gli sviluppatori**.  Dalla finestra di **avvio** aprire **App**.  Aprire la cartella **Strumenti di Visual Studio** nella versione in uso di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)], quindi fare clic sul collegamento **Prompt dei comandi per gli sviluppatori**. Per altre informazioni su come aprire una finestra del prompt dei comandi, vedere [Impostazione delle variabili di percorso e di ambiente per la compilazione dalla riga di comando](../build/setting-the-path-and-environment-variables-for-command-line-builds.md).  
  
     Per la corretta compilazione del codice, a seconda del sistema operativo del computer e della configurazione, potrebbero essere necessarie le credenziali di amministratore.  Per eseguire la finestra del prompt dei comandi come amministratore, aprire il menu di scelta rapida per il **Prompt dei comandi per gli sviluppatori**, quindi scegliere **Esegui come amministratore**.  
  
2.  Al prompt dei comandi digitare **notepad basiccx.cpp**.  
  
     Scegliere **Sì** alla richiesta di creazione di un file.  
  
3.  Nel Blocco note, inserire le righe seguenti:  
  
    ```cpp  
    using namespace Platform;  
  
    int main(Platform::Array<Platform::String^>^ args)  
    {  
        Platform::Details::Console::WriteLine("This is a C++/CX program.");  
    }  
  
    ```  
  
4.  Nella barra dei menu scegliere **File**, **Salva**.  
  
     Si è creato un file di origine di Visual C\+\+ che usa lo spazio dei nomi [Spazio dei nomi Platform](../Topic/Platform%20namespace%20\(C++-CX\).md) di Windows Runtime.  
  
5.  Al prompt dei comandi digitare **cl \/EHsc \/ZW basiccx.cpp \/link \/SUBSYSTEM:CONSOLE**.  Il compilatore cl.exe compilerà il codice sorgente in un file .obj, quindi eseguirà il linker per generare un programma eseguibile denominato basiccx.exe.  L'opzione del compilatore [\/EHsc](../build/reference/eh-exception-handling-model.md) specifica il modello di gestione delle eccezioni di C\+\+, mentre il flag [\/link](../build/reference/link-pass-options-to-linker.md) specifica un'applicazione console.  
  
6.  Per eseguire il programma basiccx.exe, immettere **basiccx** al prompt dei comandi.  
  
     Il programma viene avviato e chiuso dopo aver visualizzato il testo seguente:  
  
  **"This is a C\+\+\/CX program."**  
  
## Vedere anche  
 [Visual C\+\+ Guided Tour](http://msdn.microsoft.com/it-it/499cb66f-7df1-45d6-8b6b-33d94fd1f17c)   
 [Riferimenti del linguaggio C\+\+](../cpp/cpp-language-reference.md)   
 [Compilazione di programmi C\/C\+\+](../build/building-c-cpp-programs.md)   
 [Opzioni del compilatore](../build/reference/compiler-options.md)