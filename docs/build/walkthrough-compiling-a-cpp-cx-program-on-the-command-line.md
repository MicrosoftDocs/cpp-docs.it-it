---
title: 'Procedura dettagliata: Compilazione di un c++ /CX Program nella riga di comando | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 626f5544-69ed-4736-83a9-f11389b371b2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: fdde74f1612986fab8f88f4659b006bbcfbd3901
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45703774"
---
# <a name="walkthrough-compiling-a-ccx-program-on-the-command-line"></a>Procedura dettagliata: Compilazione di un programma in C++/CX dalla riga di comando

È possibile creare programmi Visual C++ destinati a Windows Runtime e compilarli dalla riga di comando. Visual C++ supporta le estensioni del componente Visual C++ (C++/CX), che offrono tipi e operatori aggiuntivi per il modello di programmazione Windows Runtime. È possibile usare c++ /CX per creare App per la Universal Windows Platform (UWP), Windows Phone 8.1 e Windows desktop. Per altre informazioni, vedere [una presentazione di c++ /Visual c++ /CX](https://msdn.microsoft.com/magazine/dn166929.aspx) e [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md).

Questa procedura dettagliata illustra come usare un editor di testo per creare un programma C++/CX di base, quindi compilarlo nella riga di comando. È possibile usare il proprio programma C++/CX anziché digitare quello riportato nell'esempio oppure è possibile usare esempi di codice C++/CX di un altro articolo della Guida. Questa tecnica è utile per lo sviluppo e il test di piccoli moduli che non contengono elementi dell'interfaccia utente.

> [!NOTE]
> È anche possibile usare IDE di Visual Studio per compilare programmi C++/CX. Poiché l'IDE comprende progettazione, debug, emulazione e supporto per la distribuzione che non è disponibile nella riga di comando, è consigliabile usare l'IDE per compilare App Universal Windows Platform (UWP). Per altre informazioni, vedere [creare un'app UWP in C++](/windows/uwp/get-started/create-a-basic-windows-10-app-in-cpp).

## <a name="prerequisites"></a>Prerequisiti

È necessario comprendere le nozioni di base del linguaggio C++.

## <a name="compiling-a-ccx-program"></a>Compilazione di un programma C++/CX

Per abilitare la compilazione per C + + c++ /CX, è necessario usare il [/ZW](../build/reference/zw-windows-runtime-compilation.md) opzione del compilatore. Il compilatore Visual C++ genera un file .exe destinato a Windows Runtime con i collegamenti alle librerie richieste.

#### <a name="to-compile-a-ccx-application-on-the-command-line"></a>Per compilare un'applicazione C++/CX dalla riga di comando

1. Aprire una **prompt dei comandi sviluppatore** finestra. (Nelle **avviare** finestra aperta **app**. Aprire il **strumenti di Visual Studio** cartella sotto la versione di Visual Studio e quindi scegliere il **prompt dei comandi sviluppatore** scelta rapida.) Per altre informazioni su come aprire una finestra del prompt dei comandi per gli sviluppatori, vedere [codice C/C++ di compilazione dalla riga di comando](../build/building-on-the-command-line.md).

   Per la corretta compilazione del codice, a seconda del sistema operativo del computer e della configurazione, potrebbero essere necessarie le credenziali di amministratore. Per eseguire il prompt dei comandi come amministratore, aprire il menu di scelta rapida **prompt dei comandi sviluppatore** e quindi scegliere **Esegui come amministratore**.

1. Al prompt dei comandi, immettere **notepad basiccx**.

   Scegli **Sì** quando viene chiesto di creare un file.

1. Nel Blocco note, inserire le righe seguenti:

    ```cpp
    using namespace Platform;

    int main(Platform::Array<Platform::String^>^ args)
    {
        Platform::Details::Console::WriteLine("This is a C++/CX program.");
    }

    ```

1. Nella barra dei menu, scegliere **File**, **salvare**.

   Avere creato un file di origine Visual C++ che usa il Runtime di Windows [spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md) dello spazio dei nomi.

1. Al prompt dei comandi, immettere **cl /EHsc /ZW basiccx /link /SUBSYSTEM: console**. Il compilatore cl.exe compilerà il codice sorgente in un file .obj, quindi eseguirà il linker per generare un programma eseguibile denominato basiccx.exe. (Il [/EHsc](../build/reference/eh-exception-handling-model.md) l'opzione del compilatore specifica il modello di gestione delle eccezioni C++ e il [/Link](../build/reference/link-pass-options-to-linker.md) flag specifica un'applicazione console.)

1. Per eseguire il programma basiccx.exe, al prompt dei comandi, immettere **basiccx**.

   Il programma viene avviato e chiuso dopo aver visualizzato il testo seguente:

    ```Output
    This is a C++/CX program.
    ```

## <a name="see-also"></a>Vedere anche

[Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)<br/>
[Compilazione di programmi C/C++](../build/building-c-cpp-programs.md)<br/>
[Opzioni del compilatore](../build/reference/compiler-options.md)