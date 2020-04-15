---
title: Supporto Clang/LLVM nei progetti di Visual Studio
ms.date: 08/30/2019
ms.description: Configure a Visual Studio MSBuild project to use the Clang/LLVM toolchain.
helpviewer_keywords:
- Clang support for C++ MSBuild projects
ms.openlocfilehash: 8d7d7fec979d3e7b8f665e56094ee1c309e3b686
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81323114"
---
# <a name="clangllvm-support-in-visual-studio-projects"></a>Supporto Clang/LLVM nei progetti di Visual Studio

::: moniker range="<=vs-2017"

Il supporto di Clang per i progetti CMake e MSBuild è disponibile in Visual Studio 2019.

::: moniker-end

::: moniker range="vs-2019"

È possibile usare Visual Studio 2019 versione 16.2 con Clang per modificare, compilare ed eseguire il debug di progetti di Visual Studio (MSBuild) destinati a Windows o Linux.You can use Visual Studio 2019 version 16.2 with Clang to edit, build, and debug C'è Visual Studio projects (MSBuild) that target Windows or Linux.

## <a name="install"></a>Installazione

For best IDE support in Visual Studio, we recommend using the latest Clang compiler tools for Windows. Se non si dispone già di tali strumenti, è possibile installarli aprendo il programma di installazione di Visual Studio e scegliendo gli **strumenti di Clang per Windows** in Sviluppo desktop con i componenti facoltativi di **C.** Se si preferisce utilizzare un'installazione di Clang esistente nel computer, scegliere il **cl C-Clang per gli strumenti di compilazione v142.** componente opzionale. Attualmente la libreria standard di Microsoft C'è necessaria almeno Clang 8.0.0; la versione integrata di Clang verrà aggiornata automaticamente per rimanere aggiornata con gli aggiornamenti nell'implementazione Microsoft della Libreria Standard.

![Installazione dei componenti Clang](media/clang-install-vs2019.png)

## <a name="configure-a-windows-project-to-use-clang-tools"></a>Configurare un progetto Windows per l'utilizzo degli strumenti ClangConfigure a Windows project to use Clang tools

Per configurare un progetto di Visual Studio per l'utilizzo di Clang, fare clic con il pulsante destro del mouse sul nodo del progetto in **Esplora soluzioni** e scegliere **Proprietà**. In genere, è necessario prima scegliere **Tutte le configurazioni** nella parte superiore della finestra di dialogo. Quindi, in Set di**strumenti della piattaforma** **generale** > , scegliere **LLVM (clang-cl)** e quindi **OK**.

![Installazione dei componenti Clang](media/clang-msbuild-prop-page.png)

Se si utilizzano gli strumenti Clang inclusi in Visual Studio, non sono necessari passaggi aggiuntivi. Per i progetti Windows, Visual Studio richiama per impostazione predefinita Clang in modalità [clang-cl](https://llvm.org/devmtg/2014-04/PDFs/Talks/clang-cl.pdf) e si collega all'implementazione Microsoft della libreria standard. Per impostazione predefinita, **clang-cl.exe** si trova in `C:\Program Files (x86)\Microsoft Visual Studio\2019\Common7\IDE\CommonExtensions\Microsoft\Llvm\bin`.

Se si utilizza un'installazione personalizzata di Clang, è possibile modificare**le directory** > **eseguibili** delle**proprietà** > di **configurazione** > di Project VC e `LLVMInstallDir` **DIrectories** > aggiungendo la radice di installazione di Clang personalizzata come prima directory oppure modificare il valore della proprietà. Per altre informazioni, vedere [Impostare una posizione LLVM personalizzata.](#custom_llvm_location)

## <a name="configure-a-linux-project-to-use-clang-tools"></a>Configurare un progetto Linux per l'utilizzo degli strumenti ClangConfigure a Linux project to use Clang tools

Per i progetti Linux, Visual Studio usa il frontend compatibile con Clang GCC. Le proprietà del progetto e quasi tutti i flag del compilatore sono identici

Per configurare un progetto Linux di Visual Studio per l'utilizzo di Clang:

1. Fare clic con il pulsante destro del mouse sul nodo del progetto in **Esplora soluzioni** e scegliere **Proprietà**.
1. In genere, è necessario prima scegliere **Tutte le configurazioni** nella parte superiore della finestra di dialogo.
1. In Set di strumenti **della piattaforma** **generale** > scegliere **WSL_Clang_1_0** se si usa Il sottosistema Windows per Linux o **Remote_Clang_1_0** se si utilizza un computer remoto o una macchina virtuale.
1. Fare clic su **OK**.

![Installazione dei componenti Clang](media/clang-msbuild-prop-page.png)

In Linux, Visual Studio per impostazione predefinita utilizza il primo percorso di Clang che incontra nella proprietà dell'ambiente PATH. Se si utilizza un'installazione personalizzata di Clang, `LLVMInstallDir` è necessario modificare il valore della proprietà oppure sostituire un percorso in**Proprietà** >  **progetto** > **VC , DIrectories** > **Configuration Properties** > **Executable Directories**. Per altre informazioni, vedere [Impostare una posizione LLVM personalizzata.](#custom_llvm_location)

## <a name="set-a-custom-llvm-location"></a><a name="custom_llvm_location"></a>Impostare una posizione LLVM personalizzata

È possibile impostare un percorso personalizzato per LLVM per uno o più progetti creando un file *Directory.build.props* e aggiungendo tale file alla cartella radice di qualsiasi progetto. È possibile aggiungerlo alla cartella della soluzione radice per applicarlo a tutti i progetti nella soluzione. Il file dovrebbe essere simile al seguente (ma sostituire il percorso effettivo):

```xml
<Project>
  <PropertyGroup>
    <LLVMInstallDir>c:\MyLLVMRootDir</LLVMInstallDir>
  </PropertyGroup>
</Project>
```

## <a name="set-additional-properties-edit-build-and-debug"></a>Impostare proprietà aggiuntive, modificare, compilare e eseguire il debug

Dopo aver impostato una configurazione di Clang, fare di nuovo clic con il pulsante destro del mouse sul nodo del progetto e scegliere **Ricarica progetto**. È ora possibile compilare ed eseguire il debug del progetto utilizzando gli strumenti Clang.You can now build and debug the project using the Clang tools. Visual Studio rileva che si sta utilizzando il compilatore Clang e fornisce IntelliSense, evidenziazione, navigazione e altre funzionalità di modifica. Gli errori e gli avvisi vengono visualizzati nella **finestra di output**. Le pagine delle proprietà del progetto per una configurazione di Clang sono molto simili a quelle per MSVC, anche se alcune funzionalità dipendenti dal compilatore, ad esempio Modifica e continuazione, non sono disponibili per le configurazioni Di Lang. Per impostare un'opzione del compilatore o del linker Clang che non è disponibile nelle pagine delle proprietà, è possibile aggiungerla manualmente nelle pagine delle proprietà in **Proprietà** > di configurazione**C/C.** > **Command Line** > **Additional Options**

Durante il debug, è possibile utilizzare punti di interruzione, memoria e visualizzazione dei dati e la maggior parte delle altre funzionalità di debug.  

![Debug di Clang](media/clang-debug-msbuild.png)

::: moniker-end
