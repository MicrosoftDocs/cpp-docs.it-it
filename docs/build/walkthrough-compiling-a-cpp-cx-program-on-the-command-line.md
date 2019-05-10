---
title: 'Procedura dettagliata: Compilazione di un c++ /CX Program nella riga di comando'
ms.date: 04/23/2019
ms.assetid: 626f5544-69ed-4736-83a9-f11389b371b2
ms.openlocfilehash: cbf5a48de3c029e36fc6daabe2b3f0db55dc173c
ms.sourcegitcommit: 18d3b1e9cdb4fc3a76f7a650c31994bdbd2bde64
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 04/29/2019
ms.locfileid: "64877171"
---
# <a name="walkthrough-compiling-a-ccx-program-on-the-command-line"></a>Procedura dettagliata: Compilazione di un c++ /CX Program nella riga di comando

> [!NOTE] 
> Per la nuova App della piattaforma UWP e componenti, è consigliabile usare [ C++/WinRT](/windows/uwp/cpp-and-winrt-apis/), una proiezione standard del C + + 17 language for Windows Runtime APIs. C++/ È disponibile in Windows 10 SDK versione 1803 poi WinRT. C++/ WinRT viene implementata interamente nel file di intestazione e viene progettato per fornire un accesso all'API Windows moderna.

Microsoft C++ supportato dal compilatore (MSVC) C++ estensioni del componente (C++/CX), che dispone di tipi e operatori aggiuntivi per il modello di programmazione Windows Runtime. È possibile usare C++/CX per creare App per la Universal Windows Platform (UWP) e Windows desktop. Per altre informazioni, vedere [una presentazione di c++ /Visual c++ /CX](https://msdn.microsoft.com/magazine/dn166929.aspx) e [Component Extensions for Runtime Platforms](../extensions/component-extensions-for-runtime-platforms.md).

Questa procedura dettagliata illustra come usare un editor di testo per creare un programma C++/CX di base, quindi compilarlo nella riga di comando. È possibile usare il proprio programma C++/CX anziché digitare quello riportato nell'esempio oppure è possibile usare esempi di codice C++/CX di un altro articolo della Guida. Questa tecnica è utile per la compilazione e test di piccoli moduli che non dispongono di alcun elemento dell'interfaccia utente.)

> [!NOTE]
> È anche possibile usare IDE di Visual Studio per compilare programmi C++/CX. Poiché l'IDE comprende progettazione, debug, emulazione e supporto per la distribuzione che non è disponibile nella riga di comando, è consigliabile usare l'IDE per compilare App Universal Windows Platform (UWP). Per altre informazioni, vedere [creare un'app UWP in C++](/windows/uwp/get-started/create-a-basic-windows-10-app-in-cpp).

## <a name="prerequisites"></a>Prerequisiti

Comprendere i concetti fondamentali del linguaggio C++.

## <a name="compiling-a-ccx-program"></a>Compilazione di un programma C++/CX

Per abilitare la compilazione per C++//CX, è necessario usare il [/ZW](reference/zw-windows-runtime-compilation.md) l'opzione del compilatore. Il compilatore MSVC genera un file .exe che ha come destinazione il Runtime di Windows e i collegamenti alle librerie richieste.

#### <a name="to-compile-a-ccx-application-on-the-command-line"></a>Per compilare un'applicazione C++/CX dalla riga di comando

1. Aprire una **prompt dei comandi sviluppatore** finestra. (Nelle **avviare** finestra aperta **app**. Aprire il **strumenti di Visual Studio** cartella sotto la versione di Visual Studio e quindi scegliere il **prompt dei comandi sviluppatore** scelta rapida.) Per altre informazioni su come aprire una finestra del prompt dei comandi per gli sviluppatori, vedere [un set di strumenti MSVC dalla riga di comando](building-on-the-command-line.md).

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

1. Nella barra dei menu, scegliere **File** > **salvare**.

   Aver creato un C++ file di origine che usa il Runtime di Windows [spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md) dello spazio dei nomi.

1. Al prompt dei comandi, immettere **cl /EHsc /ZW basiccx /link /SUBSYSTEM: console**. Il compilatore cl.exe compilerà il codice sorgente in un file .obj, quindi eseguirà il linker per generare un programma eseguibile denominato basiccx.exe. (Il [/EHsc](reference/eh-exception-handling-model.md) l'opzione del compilatore specifica il modello di gestione delle eccezioni C++ e il [/Link](reference/link-pass-options-to-linker.md) flag specifica un'applicazione console.)

1. Per eseguire il programma basiccx.exe, al prompt dei comandi, immettere **basiccx**.

   Il programma viene avviato e chiuso dopo aver visualizzato il testo seguente:

    ```Output
    This is a C++/CX program.
    ```

## <a name="see-also"></a>Vedere anche

[Progetti e sistemi di compilazione](projects-and-build-systems-cpp.md)<br/>
[Opzioni del compilatore MSVC](reference/compiler-options.md)
