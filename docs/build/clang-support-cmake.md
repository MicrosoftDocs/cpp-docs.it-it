---
description: 'Altre informazioni su: supporto Clang/LLVM nei progetti di Visual Studio CMake'
title: Supporto Clang/LLVM nei progetti di Visual Studio CMake
ms.date: 07/01/2019
ms.description: Configure a CMake project in Visual Studio to use the Clang/LLVM toolchain.
helpviewer_keywords:
- Clang support for C++ CMake projects
ms.openlocfilehash: 134a6c5edc62d826000752d3c2d1db370f338836
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97157035"
---
# <a name="clangllvm-support-in-visual-studio-cmake-projects"></a>Supporto Clang/LLVM nei progetti di Visual Studio CMake

::: moniker range="<=msvc-150"

Il supporto Clang è disponibile in Visual Studio 2019.

::: moniker-end

::: moniker range="msvc-160"

È possibile usare Visual Studio con Clang per modificare ed eseguire il debug di progetti CMake C++ destinati a Windows o Linux.

**Windows**: Visual Studio 2019 versione 16,1 include il supporto per la modifica, la compilazione e il debug con Clang/LLVM nei progetti CMake destinati a Windows.

**Linux**: per i progetti CMake Linux non è richiesto alcun supporto speciale di Visual Studio. È possibile installare Clang usando Gestione pacchetti della distribuzione e aggiungere i comandi appropriati nel file di CMakeLists.txt.

## <a name="install"></a>Installazione

Per il migliore supporto dell'IDE in Visual Studio, è consigliabile usare gli strumenti del compilatore Clang più recenti per Windows. Se non sono già presenti, è possibile installarli aprendo il Programma di installazione di Visual Studio e scegliendo **C++ Clang Compiler for Windows** in **sviluppo di applicazioni desktop con** i componenti facoltativi c++. Quando si usa un'installazione di Clang personalizzata, controllare il componente **C++ Clang-CL for V142 Build Tools** .

![Installazione del componente Clang](media/clang-install-vs2019.png)

## <a name="create-a-new-configuration"></a>Crea una nuova configurazione

Per aggiungere una nuova configurazione Clang a un progetto CMake:

1. Fare clic con il pulsante destro del mouse su CMakeLists.txt in **Esplora soluzioni** e scegliere **Impostazioni CMake per progetto**.

1. In **configurazioni** premere il pulsante **Aggiungi configurazione** :

   ![Aggiungere la configurazione](media/cmake-add-config-icon.png)

1. Scegliere la configurazione Clang desiderata. si noti che per Windows e Linux sono disponibili configurazioni Clang separate, quindi si preme **Select**:

   ![Configurazione di CMake Clang](media/cmake-clang-configuration.png)

1. Per apportare modifiche a questa configurazione, usare l' **Editor delle impostazioni CMake**. Per altre informazioni, vedere [personalizzare le impostazioni di compilazione CMake in Visual Studio](customize-cmake-settings.md).

## <a name="modify-an-existing-configuration-to-use-clang"></a>Modificare una configurazione esistente per usare Clang

Per modificare una configurazione esistente per usare Clang, attenersi alla procedura seguente:

1. Fare clic con il pulsante destro del mouse su CMakeLists.txt in **Esplora soluzioni** e scegliere **Impostazioni CMake per progetto**.

1. In **generale** selezionare l'elenco a discesa del **set di strumenti** e scegliere il set di strumenti Clang desiderato:

   ![Screenshot della finestra di dialogo generale che mostra che il set di strumenti è selezionato e che il Clang CL x 86 è evidenziato.](media/cmake-clang-toolset.png)

## <a name="custom-clang-locations"></a>Percorsi Clang personalizzati

Per impostazione predefinita, Visual Studio cerca Clang in due posizioni:

- Windows Copia installata internamente di Clang/LLVM fornita con il programma di installazione di Visual Studio.
- (Windows e Linux) Variabile di ambiente PATH.

È possibile specificare un altro percorso impostando le variabili **CMAKE_C_COMPILER** e **CMAKE_CXX_COMPILER** CMake nelle **impostazioni di CMake**:

![Screenshot della finestra di dialogo Impostazioni C con il compilatore c X X evidenziato.](media/clang-location-cmake.png)

## <a name="clang-compatibility-modes"></a>Modalità di compatibilità Clang

Per le configurazioni di Windows, CMake richiama per impostazione predefinita Clang in modalità [Clang-CL](https://llvm.org/devmtg/2014-04/PDFs/Talks/clang-cl.pdf) e si collega all'implementazione Microsoft della libreria standard. Per impostazione predefinita, **clang-cl.exe** si trova in `C:\Program Files (x86)\Microsoft Visual Studio\2019\Common7\IDE\CommonExtensions\Microsoft\Llvm\bin` .

È possibile modificare questi valori in **Impostazioni CMake** in **variabili e cache CMake**. Fare clic su **Mostra variabili avanzate**. Scorrere verso il basso fino a trova **CMAKE_CXX_COMPILER**, quindi fare clic sul pulsante **Sfoglia**  per specificare un percorso del compilatore diverso.

## <a name="edit-build-and-debug"></a>Modifica, compilazione ed debug

Dopo aver configurato una configurazione Clang, è possibile compilare ed eseguire il debug del progetto. Visual Studio rileva che si sta usando il compilatore Clang e fornisce IntelliSense, l'evidenziazione, la navigazione e altre funzionalità di modifica. Gli errori e gli avvisi vengono visualizzati nel **finestra di output**.

Quando si esegue il debug, è possibile usare punti di interruzione, la visualizzazione di memoria e dati e la maggior parte delle altre funzionalità di debug. Alcune funzionalità dipendenti dal compilatore, ad esempio modifica e continuazione, non sono disponibili per le configurazioni Clang.

![Debug di CMake Clang](media/clang-debug-visualize.png)

::: moniker-end
