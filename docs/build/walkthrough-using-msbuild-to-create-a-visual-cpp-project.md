---
title: 'Procedura dettagliata: Utilizzo di MSBuild per creare un progetto Visual C++ | Documenti Microsoft'
ms.custom: ''
ms.date: 06/25/2018
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
ms.openlocfilehash: b2c5c3f7001a98572129baaf3ee35bb02b6458fd
ms.sourcegitcommit: f1b051abb1de3fe96350be0563aaf4e960da13c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/27/2018
ms.locfileid: "37041211"
---
# <a name="walkthrough-using-msbuild-to-create-a-visual-c-project"></a>Procedura dettagliata: utilizzo di MSBuild per la creazione di un progetto Visual C++

Questa procedura dettagliata viene illustrato come utilizzare MSBuild per compilare un progetto di Visual C++ in un prompt dei comandi. Si apprenderà come creare i file di origine C++ e un file di progetto basato su XML per un'applicazione console Visual C++. Dopo aver compilato il progetto, si apprenderà come personalizzare il processo di compilazione.

Questa procedura dettagliata illustra le attività seguenti:

- Creazione dei file di origine C++ per il progetto.

- Creazione del file di progetto MSBuild XML.

- Utilizzo di MSBuild per compilare il progetto.

- Utilizzo di MSBuild per personalizzare il progetto.

## <a name="prerequisites"></a>Prerequisiti

Per completare questa procedura dettagliata, sono necessari i seguenti elementi:

- Una copia di Visual Studio con il **lo sviluppo Desktop con C++** carico di lavoro installato.

- Una conoscenza generale del sistema MSBuild.

> [!NOTE]
> Non utilizzare questo approccio se si prevede di modificare il file di progetto in un secondo momento usando l'IDE di Visual Studio. Se si crea un file con estensione vcxproj manualmente, l'IDE di Visual Studio potrebbe non essere in grado di modificare o caricarlo, soprattutto se il progetto utilizza i caratteri jolly negli elementi di progetto.

> [!NOTE]
> La maggior parte delle istruzioni di compilazione di basso livello sono contenuta nel **targets** e **con estensione props** file che sono definiti nella directory VCTargets, archiviata nella proprietà `$(VCTargetsPath)`. Il percorso predefinito per questi file in Visual Studio 2017 Enterprise Edition è c:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Enterprise\\Common7\\IDE\\ VC\\VCTargets\\.

## <a name="creating-the-c-source-files"></a>Creazione dei file di origine C++

In questa procedura dettagliata si creerà un progetto con un file di origine e un file di intestazione. Il file di origine main. cpp contiene la funzione principale per l'applicazione console. Il file di intestazione Main. h contiene il codice per includere il file di intestazione iostream. È possibile creare questi file C++ tramite Visual Studio o un testo editor, ad esempio Visual Studio Code.

### <a name="to-create-the-c-source-files-for-your-project"></a>Per creare i file di origine C++ per il progetto

1. Creare una directory del progetto.

2. Creare un file denominato Main. cpp e aggiungere il codice seguente al file:

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

3. Creare un file denominato Main. h e aggiungere il codice seguente al file:

    ```cpp
    // main.h: the application header code.
    /* Additional source code to include. */
    ```

## <a name="creating-the-xml-msbuild-project-file"></a>Creazione del File di progetto MSBuild XML

Un file di progetto MSBuild è un file XML che contiene un elemento radice del progetto (\<progetto >). Nel progetto di esempio seguente, il \<progetto > elemento contiene sette elementi figlio:

- Tre elementi tag group (\<ItemGroup >) che consente di specificare configurazione di progetto e della piattaforma, nome file di origine e nome file di intestazione.

- Tre tag di importazione (\<importare >) che consente di specificare il percorso delle impostazioni di Microsoft Visual C++.

- Un tag del gruppo di proprietà (\<PropertyGroup >) che specifica le impostazioni del progetto.

### <a name="to-create-the-msbuild-project-file"></a>Per creare il file di progetto MSBuild

1. Utilizzare un editor di testo per creare un file di progetto denominato `myproject.vcxproj`, quindi aggiungere la seguente directory principale \<progetto > elemento. Inserire gli elementi nei passaggi della procedura seguente tra radice \<progetto > tag:

    ```xml
    <Project DefaultTargets="Build" ToolsVersion="15.0" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">
    </Project>
    ```

2. Aggiungere i seguenti due \<ProjectConfiguration > gli elementi figlio in un \<ItemGroup > elemento. L'elemento figlio specifica debug e rilascio delle configurazioni per un sistema operativo di Windows a 32 bit:

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

3. Aggiungere il seguente \<importazione / > elemento che specifica il percorso delle impostazioni di C++ predefinite per questo progetto:

    ```xml
    <Import Project="$(VCTargetsPath)\Microsoft.Cpp.default.props" />
    ```

4. Aggiungere il seguente elemento di gruppo di proprietà (\<PropertyGroup >) che specifica due proprietà del progetto:

    ```xml
    <PropertyGroup>
      <ConfigurationType>Application</ConfigurationType>
      <PlatformToolset>v141</PlatformToolset>
    </PropertyGroup>
    ```

5. Aggiungere il seguente \<importazione / > elemento che specifica il percorso delle impostazioni C++ correnti per questo progetto:

    ```xml
    <Import Project="$(VCTargetsPath)\Microsoft.Cpp.props" />
    ```

6. Aggiungere il seguente \<ClCompile > elemento figlio in un \<ItemGroup > elemento. L'elemento figlio specifica il nome del file di origine C/C++ da compilare:

    ```xml
    <ItemGroup>
      <ClCompile Include="main.cpp" />
    </ItemGroup>
    ```

   > [!NOTE]
   > \<ClCompile > è un *destinazione di compilazione* e viene definito nel **VCTargets** directory.

7. Aggiungere il seguente \<ClInclude > elemento figlio in un \<ItemGroup > elemento. L'elemento figlio specifica il nome del file di intestazione per il file di origine C/C++:

    ```xml
    <ItemGroup>
      <ClInclude Include="main.h" />
    </ItemGroup>
    ```

8. Aggiungere il seguente \<importazione > elemento che specifica il percorso del file che definisce la destinazione per questo progetto:

    ```xml
    <Import Project="$(VCTargetsPath)\Microsoft.Cpp.Targets" />
    ```

### <a name="complete-project-file"></a>File di progetto completo

Nel codice seguente viene illustrato il file di progetto completo creato nella procedura precedente.

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

## <a name="using-msbuild-to-build-your-project"></a>Utilizzo di MSBuild per compilare il progetto

Digitare il comando seguente al prompt dei comandi per compilare l'applicazione console:

`msbuild myproject.vcxproj /p:configuration=debug`

MSBuild crea una directory per i file di output, quindi compila e collega il progetto per generare il programma Myproject.exe. Una volta completato il processo di compilazione, utilizzare il comando seguente per eseguire l'applicazione:

`myproject`

L'applicazione deve essere visualizzato "Hello, da MSBuild!" nella finestra della console.

## <a name="customizing-your-project"></a>Personalizzazione del progetto

MSBuild consente di eseguire le destinazioni di compilazione predefinite, applicare le proprietà definite dall'utente e utilizzare strumenti personalizzati, eventi e istruzioni di compilazione. In questa sezione vengono illustrate le attività seguenti:

- Utilizzo di MSBuild con destinazioni di compilazione.

- Utilizzo di MSBuild con le proprietà di compilazione.

- Utilizzo di MSBuild con gli strumenti e il compilatore a 64 bit.

- Utilizzo di MSBuild con set di strumenti diversi.

- Aggiunta delle personalizzazioni di MSBuild.

### <a name="using-msbuild-with-build-targets"></a>Utilizzo di MSBuild con destinazioni di compilazione

Un *compilare destinazione* è un set denominato di comandi predefiniti o definiti dall'utente che può essere eseguito durante la compilazione. Utilizzare l'opzione della riga di comando di destinazione (**/t**) per specificare una destinazione di compilazione. Nel caso del `myproject` progetto di esempio, predefiniti **pulita** destinazione Elimina tutti i file nella cartella di debug e crea un nuovo file di log.

Al prompt dei comandi, digitare il comando seguente per pulire `myproject`.

`msbuild myproject.vcxproj /t:clean`

### <a name="using-msbuild-with-build-properties"></a>Utilizzo di MSBuild con le proprietà di compilazione

L'opzione della riga di comando di proprietà (**p**) consente di eseguire l'override di una proprietà nel file di compilazione del progetto. Nel `myproject` configurazione di compilazione progetto, il debug o di rilascio di esempio viene specificata la `Configuration` proprietà. E viene specificato il sistema operativo che deve eseguire l'applicazione compilata dal `Platform` proprietà.

Al prompt dei comandi, digitare il comando seguente per creare una build di debug di `myproject` applicazione che deve essere eseguito in Windows a 32 bit.

`msbuild myproject.vcxproj /p:configuration=debug /p:platform=win32`

Si supponga che il `myproject` esempio progetto definisce anche una configurazione per Windows a 64 bit e un'altra configurazione per un sistema operativo personalizzato denominato `myplatform`.

Al prompt dei comandi, tipo di compilare il comando seguente per creare una versione che viene eseguito in Windows a 64 bit.

`msbuild myproject.vcxproj /p:configuration=release /p:platform=x64`

Al prompt dei comandi, digitare il comando seguente per creare una build di rilascio per `myplatform`.

`msbuild myproject.vcxproj /p:configuration=release /p:platform=myplatform`

### <a name="using-msbuild-with-the-64-bit-compiler-and-tools"></a>Utilizzo di MSBuild con gli strumenti e il compilatore a 64 bit

Se è stato installato Visual C++ in Windows a 64 bit, per impostazione predefinita, x64 a 64 bit nativa e incrociata strumenti vengono installati. È possibile configurare MSBuild per usare gli strumenti e il compilatore a 64 bit per compilare l'applicazione impostando il `PreferredToolArchitecture` proprietà. Questa proprietà non influenza le proprietà di configurazione o della piattaforma del progetto. Per impostazione predefinita, viene utilizzata la versione a 32 bit degli strumenti. Per specificare la versione a 64 bit degli strumenti e del compilatore, aggiungere l'elemento di gruppo di proprietà seguente al file di progetto MyProject. vcxproj dopo il `Microsoft.Cpp.default.props` \<importazione / > elemento:

```xml
<PropertyGroup>
    <PreferredToolArchitecture>x64</PreferredToolArchitecture>
</PropertyGroup>
```

Al prompt dei comandi, digitare il comando seguente per utilizzare gli strumenti a 64 bit per compilare l'applicazione.

`msbuild myproject.vcxproj /p:PreferredToolArchitecture=x64`

### <a name="using-msbuild-with-a-different-toolset"></a>Utilizzo di MSBuild con un diverso set di strumenti

Se si dispone di set di strumenti e librerie per le altre versioni di Visual C++ installato, MSBuild sarà possibile compilare applicazioni per la versione Visual C++ corrente o per le altre versioni installate. Ad esempio, se è stato installato [!INCLUDE[cpp_dev11_long](../build/includes/cpp_dev11_long_md.md)], per specificare il set di strumenti di Visual C++ 11.0 per Windows XP, aggiungere l'elemento di gruppo di proprietà seguente al file di progetto MyProject. vcxproj dopo il props `<Import />` elemento:

```xml
<PropertyGroup>
    <PlatformToolset>v110_xp</PlatformToolset>
</PropertyGroup>
```

Per ricompilare il progetto con il set di strumenti di Visual C++ 11.0 Windows XP, digitare uno dei seguenti comandi:

`msbuild myproject.vcxproj /p:PlatformToolset=v110_xp /t:rebuild`

`msbuild myproject.vcxproj /t:rebuild`

### <a name="adding-msbuild-customizations"></a>Aggiunta di personalizzazioni di MSBuild

MSBuild fornisce vari modi per personalizzare il processo di compilazione. Gli argomenti seguenti viene illustrato come aggiungere istruzioni di compilazione personalizzate, strumenti e gli eventi al progetto MSBuild:

- [Procedura: Aggiungere un'istruzione di compilazione personalizzata a progetti MSBuild](../build/how-to-add-a-custom-build-step-to-msbuild-projects.md)

- [Procedura: Aggiungere uno strumento di compilazione personalizzato a progetti MSBuild](../build/how-to-add-custom-build-tools-to-msbuild-projects.md)

- [Procedura: Uso di eventi di compilazione in progetti MSBuild](../build/how-to-use-build-events-in-msbuild-projects.md)
