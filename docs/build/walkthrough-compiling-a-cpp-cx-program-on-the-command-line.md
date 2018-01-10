---
title: 'Procedura dettagliata: Compilazione di C + + CX programma nella riga di comando | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 626f5544-69ed-4736-83a9-f11389b371b2
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 677779aa8550869fe0859974b2aa4bbbb1c23d83
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="walkthrough-compiling-a-ccx-program-on-the-command-line"></a>Procedura dettagliata: Compilazione di un programma in C++/CX dalla riga di comando
È possibile creare programmi Visual C++ destinati a Windows Runtime e compilarli dalla riga di comando. Visual C++ supporta le estensioni del componente Visual C++ (C++/CX), che offrono tipi e operatori aggiuntivi per il modello di programmazione Windows Runtime. È possibile usare C++/CX per la compilazione di app per Windows Phone 8.1, Windows Store e applicazioni desktop per Windows. Per ulteriori informazioni, vedere [una presentazione di c++ + CX](http://msdn.microsoft.com/magazine/dn166929.aspx) e [estensioni componenti per le piattaforme Runtime](../windows/component-extensions-for-runtime-platforms.md).  
  
 Questa procedura dettagliata illustra come usare un editor di testo per creare un programma C++/CX di base, quindi compilarlo nella riga di comando. È possibile usare il proprio programma C++/CX anziché digitare quello riportato nell'esempio oppure è possibile usare esempi di codice C++/CX di un altro articolo della Guida. Questa tecnica è utile per lo sviluppo e il test di piccoli moduli che non contengono elementi dell'interfaccia utente.  
  
> [!NOTE]
>  È anche possibile usare IDE di Visual Studio per compilare programmi C++/CX. Poiché l'IDE comprende progettazione, debug, emulazione e supporto per la distribuzione che non è disponibile nella riga di comando, è consigliabile usare l'IDE per compilare applicazioni Windows Store. Per ulteriori informazioni, vedere [creare un'app di Store in C++ di base](http://msdn.microsoft.com/library/windows/apps/dn263168).  
  
## <a name="prerequisites"></a>Prerequisiti  
 È necessario comprendere le nozioni di base del linguaggio C++.  
  
## <a name="compiling-a-ccx-program"></a>Compilazione di un programma C++/CX  
 Per abilitare la compilazione di C + + CX, è necessario utilizzare il [/ZW](../build/reference/zw-windows-runtime-compilation.md) l'opzione del compilatore. Il compilatore Visual C++ genera un file .exe destinato a Windows Runtime con i collegamenti alle librerie richieste.  
  
#### <a name="to-compile-a-ccx-application-on-the-command-line"></a>Per compilare un'applicazione C++/CX dalla riga di comando  
  
1.  Aprire un **prompt dei comandi per sviluppatori** finestra. (Nel **avviare** finestra, aprire **app**. Aprire il **Visual Studio Tools** cartella sotto la versione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)], quindi scegliere il **prompt dei comandi per sviluppatori** scelta rapida.) Per ulteriori informazioni su come aprire una finestra del prompt dei comandi per sviluppatori, vedere [codice C/C++ di compilazione nella riga di comando](../build/building-on-the-command-line.md).  
  
     Per la corretta compilazione del codice, a seconda del sistema operativo del computer e della configurazione, potrebbero essere necessarie le credenziali di amministratore. Per eseguire il prompt dei comandi come amministratore, aprire il menu di scelta rapida per **prompt dei comandi per sviluppatori** e quindi scegliere **Esegui come amministratore**.  
  
2.  Al prompt dei comandi, immettere **basiccx.cpp blocco note**.  
  
     Scegliere **Sì** quando viene chiesto di creare un file.  
  
3.  Nel Blocco note, inserire le righe seguenti:  
  
    ```cpp  
    using namespace Platform;  
  
    int main(Platform::Array<Platform::String^>^ args)  
    {  
        Platform::Details::Console::WriteLine("This is a C++/CX program.");  
    }  
  
    ```  
  
4.  Nella barra dei menu, scegliere **File**, **salvare**.  
  
     È stato creato un file di origine Visual C++ che utilizza Windows Runtime [spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md) dello spazio dei nomi.  
  
5.  Al prompt dei comandi, immettere **cl /EHsc /ZW basiccx.cpp /link /Subsystem**. Il compilatore cl.exe compilerà il codice sorgente in un file .obj, quindi eseguirà il linker per generare un programma eseguibile denominato basiccx.exe. (Il [/EHsc](../build/reference/eh-exception-handling-model.md) opzione del compilatore specifica il modello di gestione delle eccezioni C++ e [/link](../build/reference/link-pass-options-to-linker.md) flag specifica di un'applicazione console.)  
  
6.  Per eseguire il programma basiccx.exe, al prompt dei comandi, immettere **basiccx**.  
  
     Il programma viene avviato e chiuso dopo aver visualizzato il testo seguente:  
  
    ```Output  
    This is a C++/CX program.  
    ```  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)   
 [Compilazione di programmi C/C++](../build/building-c-cpp-programs.md)   
 [Opzioni del compilatore](../build/reference/compiler-options.md)