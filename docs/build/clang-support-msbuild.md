---
title: Supporto Clang/LLVM nei progetti Visual Studio Visual Studio
ms.date: 08/30/2019
ms.description: Configure a Visual Studio MSBuild project to use the Clang/LLVM toolchain.
helpviewer_keywords:
- Clang support for C++ MSBuild projects
ms.openlocfilehash: 819f96bf2fd949f80ae72ca878ba7eb9cb1bffcc
ms.sourcegitcommit: c3283062ce4e382aec7f11626d358a37caf8cdbb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/13/2020
ms.locfileid: "75914347"
---
# <a name="clangllvm-support-in-visual-studio-projects"></a>Supporto Clang/LLVM nei progetti di Visual Studio

::: moniker range="<=vs-2017"

Il supporto Clang per i progetti CMake e MSBuild è disponibile in Visual Studio 2019.

::: moniker-end

::: moniker range="vs-2019"

È possibile usare Visual Studio 2019 versione 16,2 con Clang per modificare, compilare ed eseguire il C++ debug di progetti di Visual Studio (MSBuild) destinati a Windows o Linux.

## <a name="install"></a>Installazione di

Per il migliore supporto dell'IDE in Visual Studio, è consigliabile usare gli strumenti del compilatore Clang più recenti per Windows. Se non sono già presenti, è possibile installarli aprendo il programma di installazione di Visual Studio e scegliendo  **C++ strumenti Clang per Windows** in **sviluppo per desktop C++ con** componenti facoltativi. Se si preferisce usare un'installazione Clang esistente nel computer, scegliere gli  **C++ strumenti di compilazione Clang-CL for V142.** componente facoltativo. Attualmente la C++ libreria standard Microsoft richiede almeno 8.0.0 Clang; la versione in bundle di Clang verrà aggiornata automaticamente per rimanere aggiornati con gli aggiornamenti nell'implementazione Microsoft della libreria standard. 

![Installazione del componente Clang](media/clang-install-vs2019.png)

## <a name="configure-a-windows-project-to-use-clang-tools"></a>Configurare un progetto Windows per l'uso di strumenti Clang

Per configurare un progetto di Visual Studio per l'uso di Clang, fare clic con il pulsante destro del mouse sul nodo del progetto in **Esplora soluzioni** e scegliere **Proprietà**. In genere, è necessario innanzitutto scegliere **tutte le configurazioni** nella parte superiore della finestra di dialogo. Quindi, in **generale** > **set di strumenti della piattaforma**, scegliere **LLVM (Clang-cl)** e quindi **OK**.

![Installazione del componente Clang](media/clang-msbuild-prop-page.png)

Se si usano gli strumenti Clang forniti con Visual Studio, non è necessario eseguire ulteriori passaggi. Per i progetti Windows, Visual Studio richiama per impostazione predefinita Clang in modalità [Clang-CL](https://llvm.org/devmtg/2014-04/PDFs/Talks/clang-cl.pdf) e si collega all'implementazione Microsoft della libreria standard. Per impostazione predefinita, **Clang-cl. exe** si trova in `C:\Program Files (x86)\Microsoft Visual Studio\2019\Common7\IDE\CommonExtensions\Microsoft\Llvm\bin`.

Se si usa un'installazione di Clang personalizzata, è possibile modificare le **Proprietà** del **progetto** >  > le **directory di VC + +**  > le **proprietà di configurazione** > le **directory eseguibili** aggiungendo la radice di installazione di Clang personalizzata come prima directory o modificare il valore della proprietà `LLVMInstallDir`. Per ulteriori informazioni, vedere [impostare un percorso di LLVM personalizzato](#custom_llvm_location) .

## <a name="configure-a-linux-project-to-use-clang-tools"></a>Configurare un progetto Linux per l'uso di strumenti Clang

Per i progetti Linux, Visual Studio usa il front-end compatibile con GCC Clang. Le proprietà del progetto e quasi tutti i flag del compilatore sono identici

Per configurare un progetto Linux di Visual Studio per l'uso di Clang:

1. Fare clic con il pulsante destro del mouse sul nodo del progetto in **Esplora soluzioni** e scegliere **Proprietà**. 
1. In genere, è necessario innanzitutto scegliere **tutte le configurazioni** nella parte superiore della finestra di dialogo. 
1. In **generale** > **set di strumenti della piattaforma**, scegliere **WSL_Clang_1_0** se si usa il sottosistema Windows per Linux oppure **Remote_Clang_1_0** se si usa un computer remoto o una macchina virtuale.
1. Fare clic su **OK**.

![Installazione del componente Clang](media/clang-msbuild-prop-page.png)

In Linux, Visual Studio USA per impostazione predefinita il primo percorso Clang rilevato nella proprietà di ambiente PATH. Se si usa un'installazione di Clang personalizzata, è necessario modificare il valore della proprietà `LLVMInstallDir` oppure sostituire un percorso in **Project** > **Properties** > **directory di VC + +**  > le proprietà di **configurazione** > le **directory eseguibili**. Per ulteriori informazioni, vedere [impostare un percorso di LLVM personalizzato](#custom_llvm_location) .

## <a name="custom_llvm_location"></a>Impostare un percorso di LLVM personalizzato

È possibile impostare un percorso personalizzato per LLVM per uno o più progetti creando un file *Directory. Build. props* e aggiungendo il file alla cartella radice di qualsiasi progetto. È possibile aggiungerlo alla cartella della soluzione radice per applicarlo a tutti i progetti nella soluzione. Il file dovrebbe essere simile al seguente (ma sostituire il percorso effettivo):

```xml
<Project>
  <PropertyGroup>
    <LLVMInstallDir>c:\MyLLVMRootDir</LLVMInstallDir>
  </PropertyGroup>
</Project>
```

## <a name="set-additional-properties-edit-build-and-debug"></a>Imposta proprietà aggiuntive, modifica, compila ed Esegui il debug

Dopo aver configurato una configurazione Clang, fare di nuovo clic con il pulsante destro del mouse sul nodo del progetto e scegliere **Ricarica progetto**. È ora possibile compilare ed eseguire il debug del progetto usando gli strumenti Clang. Visual Studio rileva che si sta usando il compilatore Clang e fornisce IntelliSense, l'evidenziazione, la navigazione e altre funzionalità di modifica. Gli errori e gli avvisi vengono visualizzati nel **finestra di output**. Le pagine delle proprietà del progetto per una configurazione Clang sono molto simili a quelle per MSVC, anche se alcune funzionalità dipendenti dal compilatore, ad esempio modifica e continuazione, non sono disponibili per le configurazioni Clang. Per impostare un'opzione del compilatore o del linker Clang non disponibile nelle pagine delle proprietà, è possibile aggiungerla manualmente nelle pagine delle proprietà in **proprietà di configurazione** > **CC++ /(o linker)**  > **riga di comando** > **Opzioni aggiuntive**.

Quando si esegue il debug, è possibile usare punti di interruzione, la visualizzazione di memoria e dati e la maggior parte delle altre funzionalità di debug.  

![Debug Clang](media/clang-debug-msbuild.png)

::: moniker-end
