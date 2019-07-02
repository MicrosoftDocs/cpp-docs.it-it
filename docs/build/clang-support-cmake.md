---
title: Supporto per clang/LLVM in progetti CMake di Visual Studio
ms.date: 07/01/2019
ms.description: Configure a CMake project in Visual Studio to use the Clang/LLVM toolchain.
helpviewer_keywords:
- Clang support for C++
ms.openlocfilehash: 6773d9cdb076ef305ba635306f3bc9c6575d2203
ms.sourcegitcommit: b233f05adae607f75815111006a771c432df5a9d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/02/2019
ms.locfileid: "67517106"
---
# <a name="clangllvm-support-in-visual-studio-cmake-projects"></a>Supporto per clang/LLVM in progetti CMake di Visual Studio

::: moniker range="<=vs-2017"

Supporto di clang è disponibile in Visual Studio 2019.

::: moniker-end

::: moniker range="vs-2019"

È possibile usare Visual Studio con Clang modificare ed eseguire il debug C++ progetti CMake di tale destinazione Windows o Linux.

**Windows**: Visual Studio 2019 versione 16.1 include il supporto per la modifica, compilazione e debug con Clang/LLVM nei progetti CMake destinate a Windows. 

**Linux**: Per i progetti CMake per Linux, non è necessario alcun supporto speciale di Visual Studio. È possibile installare Clang usando Gestione pacchetti di distribuzione e aggiungere i comandi appropriati nel file cmakelists. txt.

## <a name="install"></a>Installazione di

Migliore supporto dell'IDE in Visual Studio, è consigliabile usare gli strumenti del compilatore Clang più recenti per Windows. Se non si ha già quelli, è possibile installarli aprendo l'installazione di Visual Studio e scegliendo **compiler Clang per Windows** sotto **sviluppo di applicazioni Desktop con C++**  componenti facoltativi.

![Installazione del componente clang](media/clang-install-vs2019.png)

## <a name="create-a-new-configuration"></a>Creare una nuova configurazione

Per aggiungere una nuova configurazione Clang a un progetto CMake:

1. Fare clic sul file cmakelists. txt nel **Esplora soluzioni** e scegliere **le impostazioni di CMake per progetto**.

1. Sotto **configurazioni**, premere il **Aggiungi configurazione** pulsante:

   ![Aggiungere la configurazione](media/cmake-add-config-icon.png)

1. Scegliere la configurazione desiderata di Clang (si noti che vengono fornite configurazioni Clang separate per Windows e Linux), quindi premere **seleziona**:

   ![Configurazione di CMake Clang](media/cmake-clang-configuration.png)

1. Per apportare modifiche a questa configurazione, usare il **Editor di impostazioni di CMake**. Per altre informazioni, vedere [delle impostazioni in Visual Studio di compilazione CMake personalizzare](customize-cmake-settings.md).

## <a name="modify-an-existing-configuration-to-use-clang"></a>Modificare una configurazione esistente per usare Clang

Per modificare una configurazione esistente per usare Clang, seguire questa procedura:

1. Fare clic sul file cmakelists. txt nel **Esplora soluzioni** e scegliere **le impostazioni di CMake per progetto**.

1. Sotto **generali** selezionare la **set di strumenti** elenco a discesa e scegliere il set di strumenti Clang desiderato:

   ![Set di strumenti CMake Clang](media/cmake-clang-toolset.png)

## <a name="custom-clang-locations"></a>Percorsi Clang personalizzati

Per impostazione predefinita, Visual Studio cerca Clang in due posizioni:

- (Windows) La copia di Clang/LLVM fornita con il programma di installazione di Visual Studio installata internamente.
- (Windows e Linux) Variabile di ambiente PATH.

È possibile specificare un altro percorso impostando il **CMAKE_C_COMPILER** e **CMAKE_CXX_COMPILER** variabili di CMake in **impostazioni di CMake**:

![Set di strumenti CMake Clang](media/clang-location-cmake.png)

## <a name="clang-compatibility-modes"></a>Modalità di compatibilità clang

Per le configurazioni di Windows, CMake per impostazione predefinita richiama in Clang [clang-cl](https://llvm.org/devmtg/2014-04/PDFs/Talks/clang-cl.pdf) modalità e i collegamenti con l'implementazione Microsoft della libreria Standard. Per impostazione predefinita **clang-cl.exe** si trova in `C:\Program Files (x86)\Microsoft Visual Studio\2019\Common7\IDE\CommonExtensions\Microsoft\Llvm\bin`.

 È possibile modificare questi valori nel **impostazioni di CMake** sotto **CMake variabili e cache**. Fare clic su **Show advanced variabili**. Scorrere fino a **CMAKE_CXX_COMPILER**, quindi fare clic sui **Sfoglia** pulsante per specificare un percorso del compilatore diverse.

## <a name="edit-build-and-debug"></a>Modificare, compilare ed eseguire il debug

Dopo aver impostato una configurazione Clang, è possibile compilare ed eseguire il debug del progetto. Visual Studio rileva che si usi il compiler Clang e offre il supporto IntelliSense, l'evidenziazione, navigazione e altre funzionalità di modifica. Errori e avvisi vengono visualizzati nei **finestra di Output**.

Durante il debug, è possibile usare i punti di interruzione, memoria e visualizzazione dei dati e la maggior parte delle altre funzionalità di debug. Alcune funzionalità dipendente dal compilatore, ad esempio modifica e continuazione non sono disponibili per le configurazioni Clang.

![CMake Clang debug](media/clang-debug-visualize.png)

::: moniker-end
