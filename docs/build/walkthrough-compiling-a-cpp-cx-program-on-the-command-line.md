---
title: 'Procedura dettagliata: Compilazione di un programma in C++/CX dalla riga di comando'
ms.date: 04/23/2019
ms.assetid: 626f5544-69ed-4736-83a9-f11389b371b2
ms.openlocfilehash: 8dcd27ca8fff826f33ee8bd752cd32f2d44d3691
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88836712"
---
# <a name="walkthrough-compiling-a-ccx-program-on-the-command-line"></a>Procedura dettagliata: Compilazione di un programma in C++/CX dalla riga di comando

> [!NOTE]
> Per le nuove app e i componenti di UWP, è consigliabile usare [c++/WinRT](/windows/uwp/cpp-and-winrt-apis/), una proiezione del linguaggio c++ 17 standard per le API Windows Runtime. C++/WinRT è disponibile in Windows 10 SDK dalla versione 1803 in poi. C++/WinRT viene implementato interamente nei file di intestazione ed è progettato per fornire l'accesso di prima classe all'API Windows moderna.

Il compilatore Microsoft C++ (MSVC) supporta le estensioni del componente C++ (C++/CX), che dispone di tipi e operatori aggiuntivi per definire come destinazione il modello di programmazione Windows Runtime. È possibile usare C++/CX per compilare app per piattaforma UWP (Universal Windows Platform) (UWP) e Windows desktop. Per altre informazioni, vedere [Panoramica di C++/CX](/archive/msdn-magazine/2013/april/component-extensions-a-tour-of-c-cx) e delle [estensioni dei componenti per le piattaforme di runtime](../extensions/component-extensions-for-runtime-platforms.md).

Questa procedura dettagliata illustra come usare un editor di testo per creare un programma C++/CX di base, quindi compilarlo nella riga di comando. È possibile usare il proprio programma C++/CX anziché digitare quello riportato nell'esempio oppure è possibile usare esempi di codice C++/CX di un altro articolo della Guida. Questa tecnica è utile per la compilazione e il test di piccoli moduli senza elementi dell'interfaccia utente.

> [!NOTE]
> È anche possibile usare IDE di Visual Studio per compilare programmi C++/CX. Poiché l'IDE include il supporto per la progettazione, il debug, l'emulazione e la distribuzione che non sono disponibili nella riga di comando, è consigliabile usare l'IDE per compilare piattaforma UWP (Universal Windows Platform) app (UWP). Per altre informazioni, vedere [creare un'app UWP in C++](/windows/uwp/get-started/create-a-basic-windows-10-app-in-cpp).

## <a name="prerequisites"></a>Prerequisiti

Si conoscono le nozioni di base del linguaggio C++.

## <a name="compiling-a-ccx-program"></a>Compilazione di un programma C++/CX

Per abilitare la compilazione per C++/CX, è necessario usare l'opzione del compilatore [/ZW](reference/zw-windows-runtime-compilation.md) . Il compilatore MSVC genera un file con estensione exe destinato alla Windows Runtime e collegamenti alle librerie richieste.

#### <a name="to-compile-a-ccx-application-on-the-command-line"></a>Per compilare un'applicazione C++/CX dalla riga di comando

1. Aprire una finestra di **prompt dei comandi per gli sviluppatori** . Nella finestra di **avvio** aprire **app**. Aprire la cartella **strumenti di Visual Studio** nella versione di Visual Studio, quindi scegliere il collegamento **prompt dei comandi per gli sviluppatori** . Per altre informazioni su come aprire una finestra di Prompt dei comandi per gli sviluppatori, vedere [usare il set di strumenti MSVC dalla riga di comando](building-on-the-command-line.md).

   Per la corretta compilazione del codice, a seconda del sistema operativo del computer e della configurazione, potrebbero essere necessarie le credenziali di amministratore. Per eseguire la finestra del prompt dei comandi come amministratore, aprire il menu di scelta rapida per **prompt dei comandi per gli sviluppatori** , quindi scegliere **Esegui come amministratore**.

1. Al prompt dei comandi, immettere **notepad basiccx. cpp**.

   Scegliere **Sì** quando viene richiesto di creare un file.

1. Nel Blocco note, inserire le righe seguenti:

    ```cpp
    using namespace Platform;

    int main(Platform::Array<Platform::String^>^ args)
    {
        Platform::Details::Console::WriteLine("This is a C++/CX program.");
    }
    ```

1. Nella barra dei menu scegliere **file**  >  **Salva**.

   È stato creato un file di origine C++ che usa lo spazio dei nomi della [piattaforma](../cppcx/platform-namespace-c-cx.md) Windows Runtime.

1. Al prompt dei comandi, immettere **cl/EHsc/ZW basiccx. cpp/link/Subsystem: console**. Il compilatore cl.exe compilerà il codice sorgente in un file .obj, quindi eseguirà il linker per generare un programma eseguibile denominato basiccx.exe. L'opzione del compilatore [/EHsc](reference/eh-exception-handling-model.md) specifica il modello di gestione delle eccezioni C++ e il flag [/link](reference/link-pass-options-to-linker.md) specifica un'applicazione console.

1. Per eseguire il programma basiccx.exe, digitare **basiccx**al prompt dei comandi.

   Il programma viene avviato e chiuso dopo aver visualizzato il testo seguente:

    ```Output
    This is a C++/CX program.
    ```

## <a name="see-also"></a>Vedere anche

[Progetti e sistemi di compilazione](projects-and-build-systems-cpp.md)<br/>
[Opzioni del compilatore MSVC](reference/compiler-options.md)
