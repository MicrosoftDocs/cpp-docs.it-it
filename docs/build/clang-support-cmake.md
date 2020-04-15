---
title: Supporto Di Clang/LLVM nei progetti Di Visual Studio CMake
ms.date: 07/01/2019
ms.description: Configure a CMake project in Visual Studio to use the Clang/LLVM toolchain.
helpviewer_keywords:
- Clang support for C++ CMake projects
ms.openlocfilehash: 46bfe788c13df3a37dd9cba654d16cfe4c3fe177
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81323186"
---
# <a name="clangllvm-support-in-visual-studio-cmake-projects"></a>Supporto Di Clang/LLVM nei progetti Di Visual Studio CMake

::: moniker range="<=vs-2017"

Il supporto Clang è disponibile in Visual Studio 2019.

::: moniker-end

::: moniker range="vs-2019"

È possibile utilizzare Visual Studio con Clang per modificare ed eseguire il debug di progetti CMake c'è che destinati a Windows o Linux.

**Windows**: Visual Studio 2019 versione 16.1 include il supporto per la modifica, la compilazione e il debug con Clang/LLVM in progetti CMake destinati a Windows.

**Linux**: per i progetti Linux CMake, non è richiesto alcun supporto speciale per Visual Studio. È possibile installare Clang utilizzando il gestore di pacchetti della distro e aggiungere i comandi appropriati nel file CMakeLists.txt.

## <a name="install"></a>Installazione

For best IDE support in Visual Studio, we recommend using the latest Clang compiler tools for Windows. Se non si dispone già di tali applicazioni, è possibile installarli aprendo il programma di installazione di Visual Studio e scegliendo il **compilatore C. Clang per Windows** in Sviluppo desktop con i componenti facoltativi di **C.** Quando si utilizza un'installazione personalizzata di Clang, controllare il componente degli strumenti di **compilazione C'è C'clang-cl per la versione 142.**

![Installazione dei componenti Clang](media/clang-install-vs2019.png)

## <a name="create-a-new-configuration"></a>Creare una nuova configurazioneCreate a new configuration

Per aggiungere una nuova configurazione Clang a un progetto CMake:

1. Fare clic con il pulsante destro del mouse su CMakeLists.txt in **Esplora soluzioni** e **scegliere Impostazioni CMake per il progetto**.

1. In **Configurazioni**premere il pulsante **Aggiungi configurazione:**

   ![Aggiungere la configurazione](media/cmake-add-config-icon.png)

1. Scegliere la configurazione Clang desiderata (si noti che vengono fornite configurazioni Clang separate per Windows e Linux), quindi premere **Seleziona**:

   ![Configurazione di CMake Clang](media/cmake-clang-configuration.png)

1. Per apportare modifiche a questa configurazione, utilizzare **l'Editor impostazioni CMake**. Per ulteriori informazioni, vedere [Personalizzare le impostazioni di compilazione CMake in Visual Studio](customize-cmake-settings.md).

## <a name="modify-an-existing-configuration-to-use-clang"></a>Modificare una configurazione esistente per utilizzare Clang

Per modificare una configurazione esistente per utilizzare Clang, attenersi alla seguente procedura:

1. Fare clic con il pulsante destro del mouse su CMakeLists.txt in **Esplora soluzioni** e **scegliere Impostazioni CMake per il progetto**.

1. In **Generale** selezionare l'elenco a discesa **Set** di strumenti e scegliere il set di strumenti Clang desiderato:

   ![Set di strumenti CMake Clang](media/cmake-clang-toolset.png)

## <a name="custom-clang-locations"></a>Posizioni Clang personalizzate

Per impostazione predefinita, Visual Studio cerca Clang in due posizioni:By default, Visual Studio looks for Clang in two places:

- (Windows) Copia installata internamente di Clang/LLVM fornita con il programma di installazione di Visual Studio.
- (Windows e Linux) Variabile di ambiente PATH.

È possibile specificare un'altra posizione impostando le **CMAKE_C_COMPILER** e **CMAKE_CXX_COMPILER** variabili CMake in **Impostazioni CMake**:

![Set di strumenti CMake Clang](media/clang-location-cmake.png)

## <a name="clang-compatibility-modes"></a>Modalità di compatibilità Clang

Per le configurazioni di Windows, CMake per impostazione predefinita richiama Clang in modalità [clang-cl](https://llvm.org/devmtg/2014-04/PDFs/Talks/clang-cl.pdf) e si collega con l'implementazione Microsoft della libreria standard. Per impostazione predefinita, **clang-cl.exe** si trova in `C:\Program Files (x86)\Microsoft Visual Studio\2019\Common7\IDE\CommonExtensions\Microsoft\Llvm\bin`.

È possibile modificare questi valori in **Impostazioni CMake** in **Variabili CMake e cache**. Fare clic su **Mostra variabili avanzate**. Scorrere verso il basso per trovare **CMAKE_CXX_COMPILER**, quindi fare clic sul pulsante **Sfoglia** per specificare un percorso del compilatore diverso.

## <a name="edit-build-and-debug"></a>Modificare, compilare ed eseguire il debug

Dopo aver impostato una configurazione di Clang, è possibile compilare ed eseguire il debug del progetto. Visual Studio rileva che si sta utilizzando il compilatore Clang e fornisce IntelliSense, evidenziazione, navigazione e altre funzionalità di modifica. Gli errori e gli avvisi vengono visualizzati nella **finestra di output**.

Durante il debug, è possibile utilizzare punti di interruzione, memoria e visualizzazione dei dati e la maggior parte delle altre funzionalità di debug. Alcune funzionalità dipendenti dal compilatore, ad esempio Modifica e continuazione, non sono disponibili per le configurazioni Clang.

![Debug di CMake Clang](media/clang-debug-visualize.png)

::: moniker-end
