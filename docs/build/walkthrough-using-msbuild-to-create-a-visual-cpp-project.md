---
title: 'Procedura dettagliata: Uso di MSBuild per creare un progetto Visual C++ | Microsoft Docs'
ms.custom: ''
ms.date: 09/24/2018
ms.technology:
- cpp-tools
ms.topic: conceptual
f1_keywords:
- msbuild.cpp.walkthrough.createproject
dev_langs:
- C++
helpviewer_keywords:
- 'msbuild (c++), walkthrough: create a project'
ms.assetid: 52350d1c-c373-4868-923c-5e8be6f67adb
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e8a1c45342cf1f5eb178764d6fd723950f52e7e0
ms.sourcegitcommit: a738519aa491a493a8f213971354356c0e6a5f3a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/05/2018
ms.locfileid: "48821240"
---
# <a name="walkthrough-using-msbuild-to-create-a-visual-c-project"></a>Procedura dettagliata: utilizzo di MSBuild per la creazione di un progetto Visual C++

Questa procedura dettagliata viene illustrato come utilizzare MSBuild per compilare un progetto di Visual C++ in un prompt dei comandi. Si apprenderà come creare i file di origine C++ e un file di progetto basato su XML per un'applicazione console Visual C++. Dopo aver compilato il progetto, si apprenderà come personalizzare il processo di compilazione.

Questa procedura dettagliata illustra le attività seguenti:

- Creazione di file di origine C++ per il progetto.

- Creazione del file di progetto MSBuild XML.

- Uso di MSBuild per compilare il progetto.

- Uso di MSBuild per personalizzare il progetto.

## <a name="prerequisites"></a>Prerequisiti

Per completare questa procedura dettagliata, sono necessari i seguenti elementi:

- Una copia di Visual Studio con il **sviluppo di applicazioni Desktop con C++** installato il carico di lavoro.

- Una conoscenza generale del sistema MSBuild.

> [!NOTE]
> Non utilizzare questo approccio se si prevede di modificare il file di progetto in un secondo momento usando l'IDE di Visual Studio. Se si crea un file con estensione vcxproj manualmente, l'IDE di Visual Studio potrebbe non essere in grado di modificare o caricarlo, soprattutto se il progetto usa i caratteri jolly negli elementi di progetto.

> [!NOTE]
> La maggior parte delle istruzioni di compilazione di basso livello sono contenuta nel **targets** e **props** i file che sono definiti nella directory VCTargets, archiviata nella proprietà `$(VCTargetsPath)`. Il percorso predefinito per questi file in Visual Studio 2017 Enterprise Edition è c:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Enterprise\\Common7\\IDE\\ VC\\VCTargets\\.

## <a name="creating-the-c-source-files"></a>Creazione dei file di origine C++

In questa procedura dettagliata, si creerà un progetto con un file di origine e un file di intestazione. Il file di origine main. cpp contiene la funzione principale per l'applicazione console. Il file di intestazione Main. h contiene il codice per includere il file di intestazione iostream. È possibile creare questi file C++ tramite Visual Studio o un testo dell'editor, ad esempio Visual Studio Code.

### <a name="to-create-the-c-source-files-for-your-project"></a>Per creare i file di origine C++ per il progetto

1. Creare una directory per il progetto.

1. Creare un file denominato Main. cpp e aggiungere il codice seguente al file:

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

1. Creare un file denominato Main. h e aggiungere il codice seguente al file:

    ```cpp
    // main.h: the application header code.
    /* Additional source code to include. */
    ```

## <a name="creating-the-xml-msbuild-project-file"></a>Creazione del File di progetto MSBuild XML

Un file di progetto MSBuild è un file XML che contiene un elemento radice del progetto (`<Project>`). Nel progetto di esempio seguente il `<Project>` elemento contiene sette elementi figlio:

- Tre tag dei gruppi di elemento (`<ItemGroup>`) che consente di specificare la configurazione di progetto e piattaforma, nome file di origine e nome file di intestazione.

- Tre tag di importazione (`<Import>`) che specificano la posizione delle impostazioni di Microsoft Visual C++.

- Un tag del gruppo di proprietà (`<PropertyGroup>`) che specifica le impostazioni del progetto.

### <a name="to-create-the-msbuild-project-file"></a>Per creare il file di progetto MSBuild

1. Usare un editor di testo per creare un file di progetto denominato `myproject.vcxproj`, quindi aggiungere la seguente directory principale `<Project>` elemento. Inserire gli elementi nei passaggi della procedura seguente tra la radice `<Project>` tag:

    ```xml
    <Project DefaultTargets="Build" ToolsVersion="15.0" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">
    </Project>
    ```

1. Aggiungere i seguenti due `<ProjectConfiguration>` gli elementi figlio in un `<ItemGroup>` elemento. L'elemento figlio specifica debug e rilascio delle configurazioni per un sistema operativo Windows a 32 bit:

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

1. Aggiungere il codice seguente `<Import>` elemento che specifica il percorso delle impostazioni C++ predefinite per questo progetto:

    ```xml
    <Import Project="$(VCTargetsPath)\Microsoft.Cpp.default.props" />
    ```

1. Aggiungere il seguente elemento di gruppo di proprietà (`<PropertyGroup>`) che specifica due proprietà del progetto:

    ```xml
    <PropertyGroup>
      <ConfigurationType>Application</ConfigurationType>
      <PlatformToolset>v141</PlatformToolset>
    </PropertyGroup>
    ```

1. Aggiungere il codice seguente `<Import>` elemento che specifica il percorso delle impostazioni C++ correnti per questo progetto:

    ```xml
    <Import Project="$(VCTargetsPath)\Microsoft.Cpp.props" />
    ```

1. Aggiungere il codice seguente `<ClCompile>` elemento figlio in un `<ItemGroup>` elemento. L'elemento figlio specifica il nome del file di origine C/C++ da compilare:

    ```xml
    <ItemGroup>
      <ClCompile Include="main.cpp" />
    </ItemGroup>
    ```

   > [!NOTE]
   > `<ClCompile>` è un *destinazione di compilazione* e viene definito nel **VCTargets** directory.

1. Aggiungere il codice seguente `<ClInclude>` elemento figlio in un `<ItemGroup>` elemento. L'elemento figlio specifica il nome del file di intestazione per il file di origine C/C++:

    ```xml
    <ItemGroup>
      <ClInclude Include="main.h" />
    </ItemGroup>
    ```

1. Aggiungere il codice seguente `<Import>` elemento che specifica il percorso del file che definisce la destinazione per questo progetto:

    ```xml
    <Import Project="$(VCTargetsPath)\Microsoft.Cpp.Targets" />
    ```

### <a name="complete-project-file"></a>File di progetto completo

Il codice seguente illustra il file di progetto completo creato nella procedura precedente.

```xml
<Project DefaultTargets="Build" ToolsVersion="15.0" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">
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
    <PlatformToolset>v141</PlatformToolset>
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

Digitare il comando seguente al prompt dei comandi per compilare l'applicazione console:

`msbuild myproject.vcxproj /p:configuration=debug`

MSBuild crea una directory per i file di output, quindi compila e collega il progetto per generare il programma Myproject.exe. Al termine del processo di compilazione, usare il comando seguente per eseguire l'applicazione dalla cartella di debug:

`myproject`

L'applicazione viene visualizzato "Hello, from MSBuild!" nella finestra della console.

## <a name="customizing-your-project"></a>Personalizzazione del progetto

MSBuild consente di eseguire le destinazioni di compilazione predefinite, applicare proprietà definite dall'utente e utilizzare strumenti personalizzati, eventi e istruzioni di compilazione. In questa sezione vengono illustrate le attività seguenti:

- Uso di MSBuild con destinazioni di compilazione.

- Uso di MSBuild con proprietà di compilazione.

- Uso di MSBuild con gli strumenti e compilatore a 64 bit.

- Utilizzo di MSBuild con set di strumenti diversi.

- Aggiunta di personalizzazioni MSBuild.

### <a name="using-msbuild-with-build-targets"></a>Utilizzo di MSBuild con destinazioni di compilazione

Oggetto *destinazione di compilazione* è un set denominato di comandi predefiniti o definiti dall'utente che possono essere eseguiti durante la compilazione. Usare l'opzione della riga di comando di destinazione (`/t`) per specificare una destinazione di compilazione. Per il `myproject` progetto di esempio, il predefiniti **pulita** Elimina tutti i file nella cartella di debug e crea un nuovo file di log di destinazione.

Al prompt dei comandi, digitare il comando seguente per pulire `myproject`.

`msbuild myproject.vcxproj /t:clean`

### <a name="using-msbuild-with-build-properties"></a>Uso di MSBuild con proprietà di compilazione

L'opzione della riga di comando property (`/p`) consente di eseguire l'override di una proprietà nel file di compilazione del progetto. Nel `myproject` configurazione di compilazione progetto, la release o debug esempio viene specificata la `Configuration` proprietà. Il sistema operativo che deve eseguire l'applicazione compilata viene specificato dal `Platform` proprietà.

Al prompt dei comandi, digitare il comando seguente per creare una build di debug di `myproject` applicazione che deve essere eseguita in Windows a 32 bit.

`msbuild myproject.vcxproj /p:configuration=debug /p:platform=win32`

Si supponga che il `myproject` esempio di progetto definisce anche una configurazione per Windows a 64 bit e un'altra configurazione per un sistema operativo personalizzato denominato `myplatform`.

Al prompt dei comandi, digitare il comando seguente per creare una versione compilata che viene eseguito in Windows a 64 bit.

`msbuild myproject.vcxproj /p:configuration=release /p:platform=x64`

Al prompt dei comandi, digitare il comando seguente per creare una build di rilascio per `myplatform`.

`msbuild myproject.vcxproj /p:configuration=release /p:platform=myplatform`

### <a name="using-msbuild-with-the-64-bit-compiler-and-tools"></a>Utilizzo di MSBuild con gli strumenti e compilatore a 64 bit

Se è stato installato Visual C++ in Windows a 64 bit, per impostazione predefinita, x64 a 64 bit nativi e incrociati strumenti vengono installati. È possibile configurare MSBuild per usare il compilatore a 64 bit e strumenti per compilare l'applicazione impostando il `PreferredToolArchitecture` proprietà. Questa proprietà non influisce sulla proprietà di configurazione o dalla piattaforma del progetto. Per impostazione predefinita, viene utilizzata la versione a 32 bit degli strumenti. Per specificare la versione a 64 bit del compilatore e gli strumenti, aggiungere l'elemento di gruppo di proprietà seguente al file di progetto MyProject. vcxproj dopo il `Microsoft.Cpp.default.props` \<Import / > elemento:

```xml
<PropertyGroup>
    <PreferredToolArchitecture>x64</PreferredToolArchitecture>
</PropertyGroup>
```

Al prompt dei comandi, digitare il comando seguente per usare gli strumenti a 64 bit per compilare l'applicazione.

`msbuild myproject.vcxproj /p:PreferredToolArchitecture=x64`

### <a name="using-msbuild-with-a-different-toolset"></a>Utilizzo di MSBuild con set di strumenti diversi

Se si dispone di set di strumenti e librerie per le altre versioni di Visual C++ installato, MSBuild possono compilare applicazioni per la versione Visual C++ corrente o per le altre versioni installate. Ad esempio, se è stato installato Visual Studio 2012, per specificare il set di strumenti di Visual C++ 11.0 per Windows XP, aggiungere l'elemento di gruppo di proprietà seguente al file di progetto MyProject. vcxproj dopo il `Microsoft.Cpp.props` \<Import / > elemento:

```xml
<PropertyGroup>
    <PlatformToolset>v110_xp</PlatformToolset>
</PropertyGroup>
```

Per ricompilare il progetto con il set di strumenti di Visual C++ 11.0 Windows XP, digitare i comandi seguenti:

`msbuild myproject.vcxproj /p:PlatformToolset=v110_xp /t:rebuild`

### <a name="adding-msbuild-customizations"></a>Aggiunta di personalizzazioni MSBuild

MSBuild offre vari modi per personalizzare il processo di compilazione. Gli argomenti seguenti illustrano come aggiungere istruzioni di compilazione personalizzate, strumenti e gli eventi per il progetto di MSBuild:

- [Procedura: Aggiungere un'istruzione di compilazione personalizzata a progetti MSBuild](../build/how-to-add-a-custom-build-step-to-msbuild-projects.md)

- [Procedura: Aggiungere uno strumento di compilazione personalizzato a progetti MSBuild](../build/how-to-add-custom-build-tools-to-msbuild-projects.md)

- [Procedura: Uso di eventi di compilazione in progetti MSBuild](../build/how-to-use-build-events-in-msbuild-projects.md)
