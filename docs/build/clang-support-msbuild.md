---
description: 'Altre informazioni su: supporto Clang/LLVM nei progetti di Visual Studio'
title: Supporto Clang/LLVM nei progetti Visual Studio Visual Studio
ms.date: 06/02/2020
ms.description: Configure a Visual Studio MSBuild project to use the Clang/LLVM toolchain.
helpviewer_keywords:
- Clang support for C++ MSBuild projects
ms.openlocfilehash: 0008eddf41da672a820be02adb723af0b8673285
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97163158"
---
# <a name="clangllvm-support-in-visual-studio-projects"></a>Supporto Clang/LLVM nei progetti di Visual Studio

::: moniker range="<=msvc-150"

Il supporto Clang per i progetti CMake e MSBuild è disponibile in Visual Studio 2019.

::: moniker-end

::: moniker range="msvc-160"

È possibile usare Visual Studio 2019 versione 16,2 con Clang per modificare, compilare ed eseguire il debug di progetti C++ Visual Studio (MSBuild) destinati a Windows o Linux.

## <a name="install"></a>Installazione

Per il migliore supporto dell'IDE in Visual Studio, è consigliabile usare gli strumenti del compilatore Clang più recenti per Windows. Se non sono già presenti, è possibile installarli aprendo il Programma di installazione di Visual Studio e scegliendo **C++ Clang Tools for Windows** in **sviluppo per desktop con** i componenti facoltativi c++. Se si preferisce usare un'installazione Clang esistente nel computer, scegliere gli **strumenti di compilazione C++ Clang-CL per V142.** componente facoltativo. Attualmente la libreria standard di Microsoft C++ richiede almeno 8.0.0 Clang; la versione in bundle di Clang verrà aggiornata automaticamente per rimanere aggiornati con gli aggiornamenti nell'implementazione Microsoft della libreria standard.

![Screenshot del programma di installazione di Visual Studio con la scheda singoli componenti selezionata e i componenti C Plus Plus Clang visibili.](media/clang-install-vs2019.png)

## <a name="configure-a-windows-project-to-use-clang-tools"></a>Configurare un progetto Windows per l'uso di strumenti Clang

Per configurare un progetto di Visual Studio per l'uso di Clang, fare clic con il pulsante destro del mouse sul nodo del progetto in **Esplora soluzioni** e scegliere **Proprietà**. In genere, è necessario innanzitutto scegliere **tutte le configurazioni** nella parte superiore della finestra di dialogo. Quindi, in   >  **set di strumenti della piattaforma** generale, scegliere **LLVM (Clang-cl)** e quindi **OK**.

![Screenshot della finestra di dialogo Pagine delle proprietà con le proprietà di configurazione > opzioni Generale selezionate e il set di strumenti della piattaforma e L L V M (Clang c l) evidenziati.](media/clang-msbuild-prop-page.png)

Se si usano gli strumenti Clang forniti con Visual Studio, non è necessario eseguire ulteriori passaggi. Per i progetti Windows, Visual Studio richiama per impostazione predefinita Clang in modalità [Clang-CL](https://llvm.org/devmtg/2014-04/PDFs/Talks/clang-cl.pdf) e si collega all'implementazione Microsoft della libreria standard. Per impostazione predefinita, **clang-cl.exe** si trova in *% VCInstallDir% \\ Tools \\ LLVM \\ bin \\* e *% VCInstallDir% \\ Tools \\ LLVM \\ x64 \\ bin \\*.

Se si usa un'installazione di Clang personalizzata, è possibile modificare le proprietà di **progetto** directory  >    >  di **VC + +**  >  **proprietà di configurazione**  >  di directory **eseguibili** aggiungendo la radice di installazione di Clang personalizzata come prima directory o modificare il valore della `LLVMInstallDir` Proprietà. Per ulteriori informazioni, vedere [impostare un percorso di LLVM personalizzato](#custom_llvm_location) .

## <a name="configure-a-linux-project-to-use-clang-tools"></a>Configurare un progetto Linux per l'uso di strumenti Clang

Per i progetti Linux, Visual Studio usa il front-end compatibile con GCC Clang. Le proprietà del progetto e quasi tutti i flag del compilatore sono identici

Per configurare un progetto Linux di Visual Studio per l'uso di Clang:

1. Fare clic con il pulsante destro del mouse sul nodo del progetto in **Esplora soluzioni** e scegliere **Proprietà**.
1. In genere, è necessario innanzitutto scegliere **tutte le configurazioni** nella parte superiore della finestra di dialogo.
1. In  > **set di strumenti della piattaforma** generale, scegliere **WSL_Clang_1_0** se si usa il sottosistema Windows per Linux o **Remote_Clang_1_0** se si usa un computer remoto o una macchina virtuale.
1. Fare clic su **OK**.

![Screenshot della finestra di dialogo Pagine delle proprietà di Visual Studio 2019 per l'app console con proprietà di configurazione > opzioni Generale selezionate e il set di strumenti della piattaforma e L L V M (Clang c l) evidenziati.](media/clang-msbuild-prop-page.png)

In Linux, Visual Studio USA per impostazione predefinita il primo percorso Clang rilevato nella proprietà di ambiente PATH. Se si usa un'installazione di Clang personalizzata, è necessario modificare il valore della `LLVMInstallDir` Proprietà oppure sostituire un percorso nelle proprietà del **progetto** directory di configurazione delle directory di  >    >  **VC + +**  >    >  . Per ulteriori informazioni, vedere [impostare un percorso di LLVM personalizzato](#custom_llvm_location) .

## <a name="set-a-custom-llvm-location"></a><a name="custom_llvm_location"></a> Impostare un percorso di LLVM personalizzato

È possibile impostare un percorso personalizzato per LLVM per uno o più progetti creando un file *Directory. Build. props* e aggiungendo il file alla cartella radice di qualsiasi progetto. È possibile aggiungerlo alla cartella della soluzione radice per applicarlo a tutti i progetti nella soluzione. Il file dovrebbe essere simile al seguente (ma sostituire il percorso effettivo):

```xml
<Project>
  <PropertyGroup>
    <LLVMInstallDir>c:\MyLLVMRootDir</LLVMInstallDir>
  </PropertyGroup>
</Project>
```

## <a name="set-additional-properties-edit-build-and-debug"></a>Imposta proprietà aggiuntive, modifica, compila ed Esegui il debug

Dopo aver configurato una configurazione Clang, fare di nuovo clic con il pulsante destro del mouse sul nodo del progetto e scegliere **Ricarica progetto**. È ora possibile compilare ed eseguire il debug del progetto usando gli strumenti Clang. Visual Studio rileva che si sta usando il compilatore Clang e fornisce IntelliSense, l'evidenziazione, la navigazione e altre funzionalità di modifica. Gli errori e gli avvisi vengono visualizzati nel **finestra di output**. Le pagine delle proprietà del progetto per una configurazione Clang sono molto simili a quelle per MSVC, anche se alcune funzionalità dipendenti dal compilatore, ad esempio modifica e continuazione, non sono disponibili per le configurazioni Clang. Per impostare un'opzione del compilatore Clang o del linker non disponibile nelle pagine delle proprietà, è possibile aggiungerla manualmente nelle pagine delle proprietà in **proprietà di configurazione**  >  Opzioni aggiuntive della riga di comando **C/C++ (o linker)**  >    >  .

Quando si esegue il debug, è possibile usare punti di interruzione, la visualizzazione di memoria e dati e la maggior parte delle altre funzionalità di debug.  

![Debug Clang](media/clang-debug-msbuild.png)

::: moniker-end
