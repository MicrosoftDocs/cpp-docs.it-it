---
title: 'Procedura dettagliata: utilizzo di MSBuild per la creazione di un progetto Visual C++'
ms.date: 05/16/2019
helpviewer_keywords:
- 'msbuild (c++), walkthrough: create a project'
ms.assetid: 52350d1c-c373-4868-923c-5e8be6f67adb
ms.openlocfilehash: c93867f3be3b17f703c549aa5c05f3d327934c26
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79417187"
---
# <a name="walkthrough-using-msbuild-to-create-a-visual-c-project"></a>Procedura dettagliata: utilizzo di MSBuild per la creazione di un progetto Visual C++

Questa procedura dettagliata illustra come usare MSBuild per compilare un progetto Visual Studio C++ a un prompt dei comandi. Verrà descritto come creare i file di origine in C++ e un file di progetto basato su XML per un'applicazione console in Visual C++. Dopo aver compilato il progetto, verrà illustrato come personalizzare il processo di compilazione.

Vengono illustrate le attività seguenti:

- Creazione di file di origine in C++ per il progetto.

- Creazione del file di progetto MSBuild in XML.

- Uso di MSBuild per compilare il progetto.

- Uso di MSBuild per personalizzare il progetto.

## <a name="prerequisites"></a>Prerequisiti

Per completare questa procedura dettagliata, sono necessari i seguenti elementi:

- Una copia di Visual Studio, con il carico di lavoro **Sviluppo di applicazioni desktop con C++** installato.

- Conoscenza generale del sistema MSBuild.

> [!NOTE]
> Non usare questo approccio se si prevede di modificare il file di progetto in un secondo momento usando l'IDE di Visual Studio. Se si crea un file con estensione vcxproj manualmente, l'IDE di Visual Studio potrebbe non riuscire a modificarlo o caricarlo, soprattutto se il progetto usa i caratteri jolly negli elementi di progetto.

> [!NOTE]
> La maggior parte delle istruzioni di compilazione di basso livello sono contenute nei file con estensione **targets** e **props** che sono definiti nella directory VCTargets, archiviata nella proprietà `$(VCTargetsPath)`. Il percorso predefinito per questi file in Visual Studio 2019 Enterprise Edition è C:\Program Files (x86) \Microsoft Visual Studio\2019\Enterprise\MSBuild\Microsoft\VC\v160\Microsoft.Cpp.Common.props.

## <a name="creating-the-c-source-files"></a>Creazione dei file di origine in C++

In questa procedura dettagliata viene creato un progetto che ha un file di origine e un file di intestazione. Il file di origine main.cpp contiene la funzione principale per l'applicazione console. Il file di intestazione main.h contiene il codice per includere il file di intestazione iostream. È possibile creare questi file C++ usando Visual Studio o un editor di testo, come ad esempio Visual Studio Code.

### <a name="to-create-the-c-source-files-for-your-project"></a>Per creare i file di origine in C++ per il progetto

1. Creare una directory per il progetto.

1. Creare un file denominato main.cpp e aggiungere il codice seguente al file:

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

1. Creare un file denominato main.h e aggiungere il codice seguente al file:

    ```cpp
    // main.h: the application header code.
    /* Additional source code to include. */
    ```

## <a name="creating-the-xml-msbuild-project-file"></a>Creazione del file di progetto MSBuild in XML

Un file di progetto MSBuild è un file XML che contiene un elemento radice del progetto (`<Project>`). Nel progetto di esempio seguente l'elemento `<Project>` contiene sette elementi figlio:

- Tre tag gruppo di elementi (`<ItemGroup>`) che consentono di specificare la configurazione e la piattaforma del progetto, il nome file di origine e il nome file di intestazione.

- Tre tag importazione (`<Import>`) che specificano la posizione delle impostazioni di Microsoft Visual C++.

- Un tag gruppo di proprietà (`<PropertyGroup>`) che specifica le impostazioni del progetto.

### <a name="to-create-the-msbuild-project-file"></a>Per creare il file di progetto MSBuild

1. Usare un editor di testo per creare un file di progetto denominato `myproject.vcxproj` e aggiungere l'elemento radice `<Project>` seguente. Inserire gli elementi nei passaggi della procedura seguente tra i tag radice `<Project>`. Usare ToolsVersion="15.0" se si usa Visual Studio 2017 o ToolsVersion="16.0" se si usa Visual Studio 2019.

    ```xml
    <Project DefaultTargets="Build" ToolsVersion="16.0" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">
    </Project>
    ```

1. Aggiungere i due elementi figlio `<ProjectConfiguration>` seguenti in un elemento `<ItemGroup>`. L'elemento figlio specifica le configurazioni di debug e rilascio per un sistema operativo Windows a 32 bit:

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

1. Aggiungere l'elemento `<Import>` seguente che specifica il percorso delle impostazioni C++ predefinite per il progetto:

    ```xml
    <Import Project="$(VCTargetsPath)\Microsoft.Cpp.default.props" />
    ```

1. Aggiungere l'elemento gruppo di proprietà (`<PropertyGroup>`) seguente che specifica due proprietà del progetto. Usare v141 se si usa Visual Studio 2017 o v142 se si usa Visual Studio 2019.

    ```xml
    <PropertyGroup>
      <ConfigurationType>Application</ConfigurationType>
      <PlatformToolset>v142</PlatformToolset>
    </PropertyGroup>
    ```

1. Aggiungere l'elemento `<Import>` seguente che specifica il percorso delle impostazioni C++ correnti per il progetto:

    ```xml
    <Import Project="$(VCTargetsPath)\Microsoft.Cpp.props" />
    ```

1. Aggiungere l'elemento figlio `<ClCompile>` seguente in un elemento `<ItemGroup>`. L'elemento figlio specifica il nome del file di origine C/C++ da compilare:

    ```xml
    <ItemGroup>
      <ClCompile Include="main.cpp" />
    </ItemGroup>
    ```

   > [!NOTE]
   > `<ClCompile>` è una *destinazione di compilazione* definita nella directory **VCTargets**.

1. Aggiungere l'elemento figlio `<ClInclude>` seguente in un elemento `<ItemGroup>`. L'elemento figlio specifica il nome del file di intestazione per il file di origine C/C++:

    ```xml
    <ItemGroup>
      <ClInclude Include="main.h" />
    </ItemGroup>
    ```

1. Aggiungere l'elemento `<Import>` seguente che specifica il percorso del file che definisce la destinazione per il progetto:

    ```xml
    <Import Project="$(VCTargetsPath)\Microsoft.Cpp.Targets" />
    ```

### <a name="complete-project-file"></a>File di progetto completo

Il codice seguente illustra il file di progetto completo creato con la procedura precedente. Usare ToolsVersion="15.0" per Visual Studio 2017.

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

Al prompt dei comandi, digitare il comando seguente per compilare l'applicazione console:

`msbuild myproject.vcxproj /p:configuration=debug`

MSBuild crea una directory per i file di output e quindi compila e collega il progetto per generare il programma Myproject.exe. Al termine del processo di compilazione, usare il comando seguente per eseguire l'applicazione dalla cartella di debug:

`myproject`

L'applicazione dovrebbe visualizzare "Hello, from MSBuild!" nella finestra della console.

## <a name="customizing-your-project"></a>Personalizzazione del progetto

MSBuild consente di eseguire destinazioni di compilazione predefinite, applicare proprietà definite dall'utente e usare strumenti, eventi e istruzioni di compilazione personalizzati. In questa sezione vengono illustrate le attività seguenti:

- Uso di MSBuild con destinazioni di compilazione.

- Uso di MSBuild con proprietà di compilazione.

- Uso di MSBuild con gli strumenti e il compilatore a 64 bit.

- Uso di MSBuild con set di strumenti diversi.

- Aggiunta di personalizzazioni MSBuild.

### <a name="using-msbuild-with-build-targets"></a>Uso di MSBuild con destinazioni di compilazione

Una *destinazione di compilazione* è un set denominato di comandi predefiniti o definiti dall'utente che possono essere eseguiti durante la compilazione. Per specificare una destinazione di compilazione, usare l'opzione della riga di comando di destinazione (`/t`). Per il progetto di esempio `myproject`, la destinazione **pulita** predefinita elimina tutti i file nella cartella di debug e crea un nuovo file di log.

Al prompt dei comandi, digitare il comando seguente per eseguire la pulizia di `myproject`.

`msbuild myproject.vcxproj /t:clean`

### <a name="using-msbuild-with-build-properties"></a>Uso di MSBuild con proprietà di compilazione

L'opzione della riga di comando delle proprietà (`/p`) consente di eseguire l'override di una proprietà nel file di compilazione del progetto. Nel progetto di esempio `myproject` la configurazione di compilazione di rilascio o di debug viene specificata dalla proprietà `Configuration`. Il sistema operativo che deve eseguire l'applicazione compilata viene specificato dalla proprietà `Platform`.

Al prompt dei comandi, digitare il comando seguente per creare una compilazione di debug dell'applicazione `myproject` che deve essere eseguita in Windows a 32 bit.

`msbuild myproject.vcxproj /p:configuration=debug /p:platform=win32`

Si supponga che il progetto di esempio `myproject` definisca anche una configurazione per Windows a 64 bit e un'altra configurazione per un sistema operativo personalizzato denominato `myplatform`.

Al prompt dei comandi, digitare il comando seguente per creare una compilazione di rilascio in esecuzione in Windows a 64 bit.

`msbuild myproject.vcxproj /p:configuration=release /p:platform=x64`

Al prompt dei comandi digitare il comando seguente per creare una compilazione di rilascio per `myplatform`.

`msbuild myproject.vcxproj /p:configuration=release /p:platform=myplatform`

### <a name="using-msbuild-with-the-64-bit-compiler-and-tools"></a>Uso di MSBuild con gli strumenti e il compilatore a 64 bit

Se è stato installato Visual Studio su Windows a 64 bit, per impostazione predefinita vengono installati gli strumenti nativi x64 a 64 bit. È possibile configurare MSBuild per usare il compilatore e gli strumenti a 64 bit per compilare l'applicazione impostando la proprietà `PreferredToolArchitecture`. Questa proprietà non influisce sulle proprietà di configurazione del progetto o dalla piattaforma. Per impostazione predefinita, viene usata la versione a 32 bit degli strumenti. Per specificare la versione a 64 bit del compilatore e degli strumenti, aggiungere il seguente elemento del gruppo di proprietà al file di progetto MyProject. vcxproj dopo `Microsoft.Cpp.default.props` \<l'elemento Import/>:

```xml
<PropertyGroup>
    <PreferredToolArchitecture>x64</PreferredToolArchitecture>
</PropertyGroup>
```

Al prompt dei comandi, digitare il comando seguente per usare gli strumenti a 64 bit per compilare l'applicazione.

`msbuild myproject.vcxproj /p:PreferredToolArchitecture=x64`

### <a name="using-msbuild-with-a-different-toolset"></a>Uso di MSBuild con un set di strumenti diverso

Se sono stati installati set di strumenti e librerie per altre versioni di Visual C++, MSBuild può compilare applicazioni per la versione corrente di Visual C++ o per le altre versioni installate. Se, ad esempio, è stato installato Visual Studio 2012, per specificare il set di strumenti Visual C++ 11,0 per Windows XP, aggiungere il seguente elemento del gruppo di proprietà al file di progetto MyProject `Microsoft.Cpp.props` \<. vcxproj dopo l'elemento Import/>:

```xml
<PropertyGroup>
    <PlatformToolset>v110_xp</PlatformToolset>
</PropertyGroup>
```

Per ricompilare il progetto con il set di strumenti di Visual C++ 11.0 per Windows XP, digitare i comandi seguenti:

`msbuild myproject.vcxproj /p:PlatformToolset=v110_xp /t:rebuild`

### <a name="adding-msbuild-customizations"></a>Aggiunta di personalizzazioni MSBuild

MSBuild offre vari modi per personalizzare il processo di compilazione. Gli argomenti seguenti illustrano come aggiungere istruzioni di compilazione, strumenti ed eventi personalizzati al progetto MSBuild:

- [Procedura: aggiungere un'istruzione di compilazione personalizzata a progetti MSBuild](how-to-add-a-custom-build-step-to-msbuild-projects.md)

- [Procedura: aggiungere uno strumento di compilazione personalizzato a progetti MSBuild](how-to-add-custom-build-tools-to-msbuild-projects.md)

- [Procedura: utilizzo di eventi di compilazione in progetti MSBuild](how-to-use-build-events-in-msbuild-projects.md)
