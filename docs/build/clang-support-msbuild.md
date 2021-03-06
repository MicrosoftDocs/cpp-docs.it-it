---
description: 'Altre informazioni su: supporto Clang/LLVM nei progetti di Visual Studio'
title: Supporto Clang/LLVM nei progetti di Visual Studio
ms.date: 02/05/2021
ms.description: Configure a Visual Studio MSBuild project to use the Clang/LLVM toolchain.
helpviewer_keywords:
- Clang support for C++ MSBuild projects
ms.openlocfilehash: 31f79280e51bcf277bd3a992c4d7d2e39e679f30
ms.sourcegitcommit: c0c9cdae79f19655e809a4979227c51bb19cff63
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2021
ms.locfileid: "102236621"
---
# <a name="clangllvm-support-in-visual-studio-projects"></a>Supporto Clang/LLVM nei progetti di Visual Studio

::: moniker range="<=msvc-150"

Il supporto Clang per i progetti CMake e MSBuild è disponibile in Visual Studio 2019.

::: moniker-end

::: moniker range="msvc-160"

È possibile usare Visual Studio 2019 versione 16,2 e successive con Clang per modificare, compilare ed eseguire il debug di progetti C++ Visual Studio (MSBuild) destinati a Windows o Linux.

## <a name="install"></a>Installazione

Per il migliore supporto dell'IDE in Visual Studio, è consigliabile usare gli strumenti del compilatore Clang più recenti per Windows. Se gli strumenti non sono già disponibili, è possibile installarli aprendo il Programma di installazione di Visual Studio e scegliendo **C++ Clang Tools for Windows** in **sviluppo per desktop con** i componenti facoltativi c++. Potrebbe essere preferibile usare un'installazione Clang esistente nel computer. in tal caso, scegliere gli **strumenti di compilazione C++ Clang-CL for V142.** componente facoltativo.

La libreria standard di Microsoft C++ richiede almeno 8.0.0 Clang.

![Screenshot del programma di installazione di Visual Studio con la scheda singoli componenti selezionata e i componenti C Plus Plus Clang visibili.](media/clang-install-vs2019.png)

Nelle versioni successive di Visual Studio sono disponibili versioni più recenti del set di strumenti Clang. La versione in bundle di Clang viene aggiornata automaticamente per rimanere aggiornati con gli aggiornamenti nell'implementazione Microsoft della libreria standard. Ad esempio, Visual Studio 2019 versione 16,9 include Clang V11.

## <a name="configure-a-windows-project-to-use-clang-tools"></a>Configurare un progetto Windows per l'uso di strumenti Clang

Per configurare un progetto di Visual Studio per l'uso di Clang, fare clic con il pulsante destro del mouse sul nodo del progetto in **Esplora soluzioni** e scegliere **Proprietà**. In genere, è necessario innanzitutto scegliere **tutte le configurazioni** nella parte superiore della finestra di dialogo. Quindi, in   >  **set di strumenti della piattaforma** generale, scegliere **LLVM (Clang-cl)** e quindi **OK**.

![Screenshot della finestra di dialogo Pagine delle proprietà con le proprietà di configurazione > opzioni Generale selezionate e il set di strumenti della piattaforma e L L V M (Clang c l) evidenziati.](media/clang-msbuild-prop-page.png)

Se si usano gli strumenti Clang forniti con Visual Studio, non sono necessari passaggi aggiuntivi. Per i progetti Windows, Visual Studio per impostazione predefinita richiama Clang in modalità [Clang-CL](https://llvm.org/devmtg/2014-04/PDFs/Talks/clang-cl.pdf) . Si collega all'implementazione Microsoft della libreria standard. Per impostazione predefinita, **clang-cl.exe** si trova in *% VCInstallDir% \\ Tools \\ LLVM \\ bin \\* e *% VCInstallDir% \\ Tools \\ LLVM \\ x64 \\ bin \\*.

Se si usa un'installazione di Clang personalizzata, è possibile modificare le proprietà di **progetto** directory  >    >  di **VC + +**  >  **proprietà di configurazione**  >  di directory **eseguibili** aggiungendo la radice di installazione di Clang personalizzata come prima directory o modificare il valore della `LLVMInstallDir` Proprietà. Per altre informazioni, vedere [impostare un percorso di LLVM personalizzato](#custom_llvm_location).

## <a name="configure-a-linux-project-to-use-clang-tools"></a>Configurare un progetto Linux per l'uso di strumenti Clang

Per i progetti Linux, Visual Studio usa il front-end compatibile con GCC Clang. Le proprietà del progetto e quasi tutti i flag del compilatore sono identici

Per configurare un progetto Linux di Visual Studio per l'uso di Clang:

1. Fare clic con il pulsante destro del mouse sul nodo del progetto in **Esplora soluzioni** e scegliere **Proprietà**.
1. In genere, è necessario innanzitutto scegliere **tutte le configurazioni** nella parte superiore della finestra di dialogo.
1. In   >  **set di strumenti della piattaforma** generale, scegliere **WSL_Clang_1_0** se si usa il sottosistema Windows per Linux (WSL). Scegliere **Remote_Clang_1_0** se si sta usando un computer remoto o una macchina virtuale.
1. Fare clic su **OK**.

![Screenshot della finestra di dialogo Pagine delle proprietà di Visual Studio 2019 per l'app console con proprietà di configurazione > opzioni Generale selezionate e il set di strumenti della piattaforma e L L V M (Clang c l) evidenziati.](media/clang-msbuild-prop-page.png)

In Linux, Visual Studio USA per impostazione predefinita il primo percorso Clang che trova nella proprietà dell'ambiente PATH. Se si usa un'installazione di Clang personalizzata, modificare il valore della `LLVMInstallDir` proprietà o immettere il percorso nelle **proprietà di** configurazione delle proprietà di  >    >  **configurazione** di  >  **VC + +** directory  >  **Executables**. Per altre informazioni, vedere [impostare un percorso di LLVM personalizzato](#custom_llvm_location).

## <a name="set-a-custom-llvm-location"></a><a name="custom_llvm_location"></a> Impostare un percorso di LLVM personalizzato

È possibile impostare un percorso personalizzato per LLVM per uno o più progetti creando un file *Directory. Build. props* . Aggiungere quindi il file alla cartella radice di qualsiasi progetto. È possibile aggiungerlo alla cartella della soluzione radice per applicarlo a tutti i progetti nella soluzione. Il file dovrebbe essere simile al seguente (ma usare il percorso LLVM effettivo):

```xml
<Project>
  <PropertyGroup>
    <LLVMInstallDir>C:\MyLLVMRootDir</LLVMInstallDir>
  </PropertyGroup>
</Project>
```

È possibile combinare questa proprietà con una versione personalizzata del set di strumenti LLVM. Per altre informazioni, vedere [impostare una versione personalizzata del set di strumenti LLVM](#custom_llvm_toolset).

## <a name="set-a-custom-llvm-toolset-version"></a><a name="custom_llvm_toolset"></a> Impostare una versione personalizzata del set di strumenti LLVM

A partire da Visual Studio 2019 versione 16,9, è possibile impostare una versione personalizzata del set di strumenti per LLVM. Per impostare questa proprietà in un progetto in Visual Studio:

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](./working-with-project-properties.md).

1. Selezionare la pagina delle proprietà **Proprietà di configurazione** > **Generale**.

1. Modificare la proprietà **set di strumenti della piattaforma** in *LLVM (Clang-cl)*, se non è già impostata.

1. Selezionare la  > pagina delle proprietà **Avanzate** proprietà di configurazione.

1. Modificare la proprietà della **versione del set di strumenti LLVM** nella versione preferita, quindi scegliere **OK** per salvare le modifiche.

La proprietà della **versione del set di strumenti LLVM** viene visualizzata solo quando è selezionato il set di strumenti della piattaforma LLVM.

È possibile impostare la versione del set di strumenti per uno o più progetti creando un file *Directory. Build. props* . Aggiungere quindi il file alla cartella radice di qualsiasi progetto. Aggiungerlo alla cartella della soluzione radice per applicarlo a tutti i progetti nella soluzione. Il file dovrebbe essere simile al seguente (ma usare il percorso LLVM effettivo):

```xml
<Project>
  <PropertyGroup>
    <LLVMToolsVersion>11.0.0</LLVMToolsVersion>
  </PropertyGroup>
</Project>
```

È anche possibile combinare questa proprietà con una posizione di LLVM personalizzata. Il file *Directory. Build. props* , ad esempio, potrebbe essere simile al seguente:

```xml
<Project>
  <PropertyGroup>
    <LLVMInstallDir>C:\MyLLVMRootDir</LLVMInstallDir>
    <LLVMToolsVersion>11.0.0</LLVMToolsVersion>
  </PropertyGroup>
</Project>
```

Quando si aggiunge un file *Directory. Build. props* , le impostazioni vengono visualizzate come predefinite nella finestra di dialogo Pagine delle proprietà del progetto. Tuttavia, le modifiche apportate a queste proprietà in Visual Studio eseguono l'override delle impostazioni nel file *Directory. Build. props* .

## <a name="set-additional-properties-edit-build-and-debug"></a>Imposta proprietà aggiuntive, modifica, compila ed Esegui il debug

Dopo aver configurato una configurazione Clang, fare di nuovo clic con il pulsante destro del mouse sul nodo del progetto e scegliere **Ricarica progetto**. È ora possibile compilare ed eseguire il debug del progetto usando gli strumenti Clang. Visual Studio rileva che si sta usando il compilatore Clang e fornisce IntelliSense, l'evidenziazione, la navigazione e altre funzionalità di modifica. Gli errori e gli avvisi vengono visualizzati nel **finestra di output**. Le pagine delle proprietà del progetto per una configurazione Clang sono simili a quelle per MSVC. Tuttavia, alcune funzionalità dipendenti dal compilatore, ad esempio modifica e continuazione, non sono disponibili per le configurazioni Clang. È possibile impostare un'opzione del compilatore Clang o del linker che non è disponibile nelle pagine delle proprietà. Aggiungerla manualmente nelle pagine delle proprietà in **proprietà di configurazione**  >  Opzioni aggiuntive della riga di comando **C/C++ (o linker)**  >    >  .

Quando si esegue il debug, è possibile usare punti di interruzione, la visualizzazione di memoria e dati e la maggior parte delle altre funzionalità di debug.  

![Debug Clang](media/clang-debug-msbuild.png)

::: moniker-end
