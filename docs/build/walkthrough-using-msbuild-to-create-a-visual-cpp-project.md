---
title: 'Procedura dettagliata: uso di MSBuild per la creazione di un progetto Visual Studio C++'
description: Procedura dettagliata in cui viene illustrato come creare da zero un progetto C++. vcxproj da riga di comando.
ms.date: 10/08/2020
helpviewer_keywords:
- 'MSBuild (C++), walkthrough: create a project'
ms.openlocfilehash: b3d4e8881f926e80e95832a27f7a5106ce876265
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92924339"
---
# <a name="walkthrough-using-msbuild-to-create-a-visual-c-project"></a>Procedura dettagliata: utilizzo di MSBuild per la creazione di un progetto Visual C++

In questa procedura dettagliata viene illustrato come utilizzare MSBuild in un prompt dei comandi per compilare un progetto Visual Studio C++. Si apprenderà come creare un *`.vcxproj`* file di progetto basato su XML per un Visual C++ applicazione console. Dopo aver compilato il progetto, verrà illustrato come personalizzare il processo di compilazione.

> [!IMPORTANT]
> Non usare questo approccio se si intende modificare il file di progetto in un secondo momento usando l'IDE di Visual Studio. Se si crea un *`.vcxproj`* file manualmente, l'IDE di Visual Studio potrebbe non essere in grado di modificarlo o caricarlo, soprattutto se il progetto usa caratteri jolly negli elementi del progetto. Per ulteriori informazioni, vedere [ `.vcxproj` e `.props` struttura di file](./reference/vcxproj-file-structure.md) e [ `.vcxproj` file e caratteri jolly](./reference/vcxproj-files-and-wildcards.md).

In questa procedura dettagliata vengono illustrate le attività seguenti:

- Creazione di file di origine in C++ per il progetto.

- Creazione del file di progetto MSBuild in XML.

- Uso di MSBuild per compilare il progetto.

- Uso di MSBuild per personalizzare il progetto.

## <a name="prerequisites"></a>Prerequisites

Per completare questa procedura dettagliata, sono necessari i prerequisiti seguenti:

- Una copia di Visual Studio, con il carico di lavoro **Sviluppo di applicazioni desktop con C++** installato.

- Conoscenza generale del sistema MSBuild.

::: moniker range="msvc-140"

> [!NOTE]
> La maggior parte delle istruzioni di compilazione di basso livello sono contenute *`.targets`* nei *`.props`* file e definiti nella cartella destinazioni predefinite, archiviati nella proprietà `$(VCTargetsPath)` . Sono disponibili file come *`Microsoft.Cpp.Common.props`* . Il percorso predefinito per questi file in Visual Studio 2015 e nelle versioni precedenti è in *`%ProgramFiles(x86)%\MSBuild\Microsoft.Cpp\v4.0\<version>\`* .

::: moniker-end

::: moniker range="msvc-150"

> [!NOTE]
> La maggior parte delle istruzioni di compilazione di basso livello sono contenute *`.targets`* nei *`.props`* file e definiti nella cartella destinazioni predefinite, archiviati nella proprietà `$(VCTargetsPath)` . Sono disponibili file come *`Microsoft.Cpp.Common.props`* . Il percorso predefinito per questi file in Visual Studio 2017 è in *`%VSINSTALLDIR%Common7\IDE\VC\VCTargets\`* . Visual Studio 2015 e versioni precedenti sono stati archiviati in *`%ProgramFiles(x86)%\MSBuild\Microsoft.Cpp\v4.0\<version>\`* .

::: moniker-end

::: moniker range=">=msvc-160"

> [!NOTE]
> La maggior parte delle istruzioni di compilazione di basso livello sono contenute *`.targets`* nei *`.props`* file e definiti nella cartella destinazioni predefinite, archiviati nella proprietà `$(VCTargetsPath)` . Sono disponibili file come *`Microsoft.Cpp.Common.props`* . Il percorso predefinito per questi file è in *`%VSINSTALLDIR%MSBuild\Microsoft\VC\<version>\`* . L' `<version>` elemento Path è specifico per la versione di Visual Studio. È *`v160`* per Visual Studio 2019. Visual Studio 2017 ha archiviato questi file in *`%VSINSTALLDIR%Common7\IDE\VC\VCTargets\`* . Visual Studio 2015 e versioni precedenti sono stati archiviati in *`%ProgramFiles(x86)%\MSBuild\Microsoft.Cpp\v4.0\<version>\`* .

::: moniker-end

## <a name="create-the-c-source-files"></a>Creazione dei file di origine C++

In questa procedura dettagliata viene creato un progetto che ha un file di origine e un file di intestazione. Il file *`main.cpp`* di origine contiene la `main` funzione per l'applicazione console. Il file *`main.h`* di intestazione contiene il codice per includere il *`<iostream>`* file di intestazione. È possibile creare questi file C++ usando Visual Studio o un editor di testo, come ad esempio Visual Studio Code.

### <a name="to-create-the-c-source-files-for-your-project"></a>Per creare i file di origine in C++ per il progetto

1. Creare una cartella per il progetto.

1. Creare un file denominato *`main.cpp`* e aggiungere il codice seguente al file:

    ```cpp
    // main.cpp : the application source code.
    #include <iostream>
    #include "main.h"
    int main()
    {
       std::cout << "Hello, from MSBuild!\n";
       return 0;
    }
    ```

1. Creare un file denominato *`main.h`* e aggiungere il codice seguente al file:

    ```cpp
    // main.h: the application header code.
    /* Additional source code to include. */
    ```

## <a name="creating-the-xml-msbuild-project-file"></a>Creazione del file di progetto MSBuild in XML

Un file di progetto MSBuild è un file XML che contiene un elemento radice del progetto (`<Project>`). Nel progetto di esempio che verrà compilato, l' `<Project>` elemento contiene sette elementi figlio:

- Tre tag gruppo di elementi (`<ItemGroup>`) che consentono di specificare la configurazione e la piattaforma del progetto, il nome file di origine e il nome file di intestazione.

- Tre tag importazione (`<Import>`) che specificano la posizione delle impostazioni di Microsoft Visual C++.

- Un tag gruppo di proprietà (`<PropertyGroup>`) che specifica le impostazioni del progetto.

### <a name="to-create-the-msbuild-project-file"></a>Per creare il file di progetto MSBuild

1. Usare un editor di testo per creare un file di progetto denominato *`myproject.vcxproj`* , quindi aggiungere l'elemento radice `<Project>` illustrato qui. (Usare `ToolsVersion="14.0"` se si usa Visual studio 2015, `ToolsVersion="15.0"` se si usa visual studio 2017 o `ToolsVersion="16.0"` se si usa Visual Studio 2019).

    ```xml
    <Project DefaultTargets="Build" ToolsVersion="16.0" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">
    </Project>
    ```

   Inserire gli elementi nei passaggi della procedura successiva tra i `<Project>` tag radice.

1. Aggiungere questi due `<ProjectConfiguration>` elementi figlio in un `<ItemGroup>` elemento. L'elemento figlio specifica le configurazioni di debug e rilascio per un sistema operativo Windows a 32 bit:

    ```xml
    <ItemGroup>
      <ProjectConfiguration Include="Debug|Win32">
        <Configuration>Debug</Configuration>
        <Platform>Win32</Platform>
      </ProjectConfiguration>
      <ProjectConfiguration Include="Release|Win32">
        <Configuration>Release</Configuration>
        <Platform>Win32</Platform>
      </ProjectConfiguration>
    </ItemGroup>
    ```

1. Aggiungere un `<Import>` elemento che specifica il percorso delle impostazioni C++ predefinite per il progetto:

    ```xml
    <Import Project="$(VCTargetsPath)\Microsoft.Cpp.default.props" />
    ```

1. Aggiungere un elemento del gruppo di proprietà ( `<PropertyGroup>` ) che specifichi due proprietà del progetto, `<ConfigurationType>` e `<PlatformToolset>` . (Usare `v140` come `<PlatformToolset>` valore se si usa visual studio 2015, `v141` se si usa Visual Studio 2017 o `v142` se si usa Visual Studio 2019).

    ```xml
    <PropertyGroup>
      <ConfigurationType>Application</ConfigurationType>
      <PlatformToolset>v142</PlatformToolset>
    </PropertyGroup>
    ```

1. Aggiungere un `<Import>` elemento che specifica il percorso delle impostazioni C++ correnti per il progetto:

    ```xml
    <Import Project="$(VCTargetsPath)\Microsoft.Cpp.props" />
    ```

1. Aggiungere un `<ClCompile>` elemento figlio in un `<ItemGroup>` elemento. L'elemento figlio specifica il nome del file di origine C/C++ da compilare:

    ```xml
    <ItemGroup>
      <ClCompile Include="main.cpp" />
    </ItemGroup>
    ```

   > [!NOTE]
   > `<ClCompile>` è una *destinazione di compilazione* e viene definita nella cartella di destinazione predefinita.

1. Aggiungere un `<ClInclude>` elemento figlio in un `<ItemGroup>` elemento. L'elemento figlio specifica il nome del file di intestazione per il file di origine C/C++:

    ```xml
    <ItemGroup>
      <ClInclude Include="main.h" />
    </ItemGroup>
    ```

1. Aggiungere un `<Import>` elemento che specifica il percorso del file che definisce la destinazione per il progetto:

    ```xml
    <Import Project="$(VCTargetsPath)\Microsoft.Cpp.Targets" />
    ```

### <a name="complete-project-file"></a>File di progetto completo

Questo codice mostra il file di progetto completo creato nella procedura precedente. (Usare `ToolsVersion="15.0"` per Visual studio 2017 o `ToolsVersion="14.0"` per visual studio 2015).

```xml
<Project DefaultTargets="Build" ToolsVersion="16.0" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">
  <ItemGroup>
    <ProjectConfiguration Include="Debug|Win32">
      <Configuration>Debug</Configuration>
      <Platform>Win32</Platform>
    </ProjectConfiguration>
    <ProjectConfiguration Include="Release|Win32">
      <Configuration>Release</Configuration>
      <Platform>Win32</Platform>
    </ProjectConfiguration>
  </ItemGroup>
  <Import Project="$(VCTargetsPath)\Microsoft.Cpp.default.props" />
  <PropertyGroup>
    <ConfigurationType>Application</ConfigurationType>
    <PlatformToolset>v142</PlatformToolset>
  </PropertyGroup>
  <Import Project="$(VCTargetsPath)\Microsoft.Cpp.props" />
  <ItemGroup>
    <ClCompile Include="main.cpp" />
  </ItemGroup>
  <ItemGroup>
    <ClInclude Include="main.h" />
  </ItemGroup>
  <Import Project="$(VCTargetsPath)\Microsoft.Cpp.Targets" />
</Project>
```

## <a name="using-msbuild-to-build-your-project"></a>Uso di MSBuild per compilare il progetto

Immettere questo comando al prompt dei comandi per compilare l'applicazione console:

> `msbuild myproject.vcxproj /p:configuration=debug`

MSBuild crea una cartella per i file di output e quindi compila e collega il progetto per generare il *`Myproject.exe`* programma. Al termine del processo di compilazione, utilizzare questo comando per eseguire l'applicazione dalla cartella debug:

> `myproject`

L'applicazione dovrebbe visualizzare "Hello, from MSBuild!" nella finestra della console.

## <a name="customizing-your-project"></a>Personalizzazione del progetto

MSBuild consente di eseguire destinazioni di compilazione predefinite, applicare proprietà definite dall'utente e usare strumenti, eventi e istruzioni di compilazione personalizzati. In questa sezione vengono illustrate queste attività:

- Uso di MSBuild con destinazioni di compilazione.

- Uso di MSBuild con proprietà di compilazione.

- Uso di MSBuild con gli strumenti e il compilatore a 64 bit.

- Uso di MSBuild con set di strumenti diversi.

- Aggiunta di personalizzazioni MSBuild.

### <a name="using-msbuild-with-build-targets"></a>Uso di MSBuild con destinazioni di compilazione

Una *destinazione di compilazione* è un set denominato di comandi predefiniti o definiti dall'utente che possono essere eseguiti durante la compilazione. Usare l'opzione della riga di comando di destinazione ( **`/t`** ) per specificare una destinazione di compilazione. Per il `myproject` progetto di esempio, la **`clean`** destinazione predefinita Elimina tutti i file nella cartella di debug e crea un nuovo file di log.

Al prompt dei comandi, immettere il comando seguente per pulire `myproject` :

> `msbuild myproject.vcxproj /t:clean`

### <a name="using-msbuild-with-build-properties"></a>Uso di MSBuild con proprietà di compilazione

L'opzione della riga di comando delle proprietà (`/p`) consente di eseguire l'override di una proprietà nel file di compilazione del progetto. Nel progetto di esempio `myproject` la configurazione di compilazione di rilascio o di debug viene specificata dalla proprietà `Configuration`. Il sistema operativo che verrà utilizzato per eseguire l'applicazione compilata viene specificato dalla `Platform` Proprietà.

Al prompt dei comandi, immettere questo comando per creare una build di debug dell' `myproject` applicazione da eseguire su Windows a 32 bit:

> `msbuild myproject.vcxproj /p:configuration=debug /p:platform=win32`

Si supponga che il progetto di esempio `myproject` definisca anche una configurazione per Windows a 64 bit e un'altra configurazione per un sistema operativo personalizzato denominato `myplatform`.

Al prompt dei comandi, immettere questo comando per creare una build di rilascio eseguita in Windows a 64 bit:

> `msbuild myproject.vcxproj /p:configuration=release /p:platform=x64`

Al prompt dei comandi, immettere questo comando per creare una build di rilascio per `myplatform` :

> `msbuild myproject.vcxproj /p:configuration=release /p:platform=myplatform`

### <a name="using-msbuild-with-the-64-bit-compiler-and-tools"></a>Uso di MSBuild con gli strumenti e il compilatore a 64 bit

Se Visual Studio è stato installato in Windows a 64 bit, per impostazione predefinita vengono installati gli strumenti nativi e incrociati a 64 bit x64. È possibile configurare MSBuild per usare il compilatore e gli strumenti a 64 bit per compilare l'applicazione impostando la proprietà `PreferredToolArchitecture`. Questa proprietà non influisce sulle proprietà di configurazione del progetto o dalla piattaforma. Per impostazione predefinita, viene usata la versione a 32 bit degli strumenti. Per specificare la versione a 64 bit del compilatore e degli strumenti, aggiungere questo elemento del gruppo di proprietà al *`Myproject.vcxproj`* file di progetto dopo l' *`Microsoft.Cpp.default.props`* `<Import />` elemento file:

```xml
<PropertyGroup>
    <PreferredToolArchitecture>x64</PreferredToolArchitecture>
</PropertyGroup>
```

Al prompt dei comandi, immettere questo comando per usare gli strumenti a 64 bit per compilare l'applicazione:

> `msbuild myproject.vcxproj /p:PreferredToolArchitecture=x64`

### <a name="using-msbuild-with-a-different-toolset"></a>Uso di MSBuild con un set di strumenti diverso

Se sono stati installati set di strumenti e librerie per altre versioni di Visual C++, MSBuild può compilare applicazioni per la versione corrente di Visual C++ o per le altre versioni installate. Se, ad esempio, è stato installato Visual Studio 2012, per specificare il set di strumenti Visual C++ 11,0 per Windows XP, aggiungere questo elemento del gruppo di proprietà al *`Myproject.vcxproj`* file di progetto dopo l' *`Microsoft.Cpp.props`* `<Import />` elemento file:

```xml
<PropertyGroup>
    <PlatformToolset>v110_xp</PlatformToolset>
</PropertyGroup>
```

Per ricompilare il progetto con il set di strumenti Visual C++ 11,0 di Windows XP, immettere questo comando:

> `msbuild myproject.vcxproj /p:PlatformToolset=v110_xp /t:rebuild`

### <a name="adding-msbuild-customizations"></a>Aggiunta di personalizzazioni MSBuild

MSBuild offre vari modi per personalizzare il processo di compilazione. Questi articoli illustrano come aggiungere istruzioni, strumenti ed eventi di compilazione personalizzati al progetto MSBuild:

- [Procedura: aggiungere un'istruzione di compilazione personalizzata a progetti MSBuild](how-to-add-a-custom-build-step-to-msbuild-projects.md)

- [Procedura: aggiungere strumenti di compilazione personalizzati ai progetti MSBuild](how-to-add-custom-build-tools-to-msbuild-projects.md)

- [Procedura: usare eventi di compilazione in progetti MSBuild](how-to-use-build-events-in-msbuild-projects.md)
