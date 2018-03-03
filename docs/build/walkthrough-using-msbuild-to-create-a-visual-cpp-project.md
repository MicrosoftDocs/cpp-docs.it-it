---
title: 'Procedura dettagliata: Utilizzo di MSBuild per creare un progetto Visual C++ | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- msbuild.cpp.walkthrough.createproject
dev_langs:
- C++
helpviewer_keywords:
- 'msbuild (c++), walkthrough: create a project'
ms.assetid: 52350d1c-c373-4868-923c-5e8be6f67adb
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 92b954f334517adc22ca17f8324ec1a78819d9f1
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="walkthrough-using-msbuild-to-create-a-visual-c-project"></a>Procedura dettagliata: utilizzo di MSBuild per la creazione di un progetto Visual C++
Questa procedura dettagliata viene illustrato come utilizzare [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)] per compilare un progetto di Visual C++ a un prompt dei comandi. Si apprenderà come creare i file di origine C++ e un file di progetto basato su XML per un'applicazione console Visual C++. Dopo aver compilato il progetto, si apprenderà come personalizzare il processo di compilazione.  
  
 Questa procedura dettagliata illustra le attività seguenti:  
  
-   Creazione dei file di origine C++ per il progetto.  
  
-   Creazione di XML [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)] file di progetto.  
  
-   Utilizzando [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)] per compilare il progetto.  
  
-   Utilizzando [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)] per personalizzare il progetto.  
  
## <a name="prerequisites"></a>Prerequisiti  
 Per completare questa procedura dettagliata, sono necessari i seguenti elementi:  
  
-   [!INCLUDE[vs_dev12](../atl-mfc-shared/includes/vs_dev12_md.md)]  
  
-   Una conoscenza di base di [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)] sistema.  
  
## <a name="creating-the-c-source-files"></a>Creazione dei file di origine C++  
 In questa procedura dettagliata si creerà un progetto con un file di origine e un file di intestazione. Il file di origine main. cpp contiene la funzione principale per l'applicazione console. Il file di intestazione Main. h contiene il codice per includere il file di intestazione iostream. È possibile creare questi file C++ utilizzando [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] o un editor di testo.  
  
#### <a name="to-create-the-c-source-files-for-your-project"></a>Per creare i file di origine C++ per il progetto  
  
1.  Creare una directory per il progetto.  
  
2.  Creare un file denominato main.cpp e aggiungere il codice seguente al file:  
  
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
  
3.  Creare un file denominato Main. h e aggiungere il codice seguente al file:  
  
    ```hlsl  
    // main.h: the application header code.  
    /* Additional source code to include. */  
    ```  
  
## <a name="creating-the-xml-msbuild-project-file"></a>Creazione del File di progetto MSBuild XML  
 Un [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)] file di progetto è un file XML che contiene un elemento radice del progetto (\<progetto >). Nel progetto di esempio seguente, il \<progetto > elemento contiene sette elementi figlio:  
  
-   Tre elementi tag group (\<ItemGroup >) che consente di specificare la configurazione di progetto e piattaforma, nome file di origine e nome file di intestazione.  
  
-   Tre tag di importazione (\<importare >) che consente di specificare la posizione delle impostazioni di Microsoft Visual C++.  
  
-   Un tag del gruppo di proprietà (\<PropertyGroup >) che specifica le impostazioni del progetto.  
  
#### <a name="to-create-the-msbuild-project-file"></a>Per creare il file di progetto MSBuild  
  
1.  Utilizzare un editor di testo per creare un file di progetto denominato `myproject.vcxproj`, quindi aggiungere la seguente directory principale \<progetto > elemento. Inserire gli elementi nei passaggi della procedura seguente tra radice \<progetto > tag:  
  
    ```xml  
    <Project DefaultTargets="Build" ToolsVersion="12.0" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">  
    </Project>  
    ```  
  
2.  Aggiungere i seguenti due \<ProjectConfiguration > gli elementi figlio in un \<ItemGroup > elemento. L'elemento figlio specifica debug e rilascio di configurazioni per un sistema operativo di Windows a 32 bit:  
  
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
  
3.  Aggiungere il seguente \<importazione / > elemento che specifica il percorso delle impostazioni predefinite C++ per questo progetto:  
  
    ```xml  
    <Import Project="$(VCTargetsPath)\Microsoft.Cpp.default.props" />  
  
    ```  
  
4.  Aggiungere il seguente elemento di gruppo di proprietà (\<PropertyGroup >) che specifica due proprietà del progetto:  
  
    ```xml  
    <PropertyGroup>  
      <ConfigurationType>Application</ConfigurationType>  
      <PlatformToolset>v120</PlatformToolset>  
    </PropertyGroup>  
    ```  
  
5.  Aggiungere il seguente \<importazione / > elemento che specifica il percorso delle impostazioni C++ correnti per questo progetto:  
  
    ```xml  
    <Import Project="$(VCTargetsPath)\Microsoft.Cpp.props" />  
    ```  
  
6.  Aggiungere il seguente \<ClCompile > elemento figlio in un \<ItemGroup > elemento. L'elemento figlio specifica il nome del file di origine C/C++ da compilare:  
  
    ```xml  
    <ItemGroup>  
      <ClCompile Include="main.cpp" />  
    </ItemGroup>  
    ```  
  
7.  Aggiungere il seguente \<ClInclude > elemento figlio in un \<ItemGroup > elemento. L'elemento figlio specifica il nome del file di intestazione per il file di origine C/C++:  
  
    ```xml  
    <ItemGroup>  
      <ClInclude Include="main.h" />  
    </ItemGroup>  
    ```  
  
8.  Aggiungere il seguente \<importazione > elemento che specifica il percorso del file che definisce la destinazione per questo progetto:  
  
    ```xml  
    <Import Project="$(VCTargetsPath)\Microsoft.Cpp.Targets" />  
  
    ```  
  
### <a name="complete-project-file"></a>File di progetto completo  
 Il codice seguente viene illustrato il file di progetto completo creato nella procedura precedente.  
  
```xml  
<Project DefaultTargets="Build" ToolsVersion="12.0" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">  
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
    <PlatformToolset>v120</PlatformToolset>  
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
  
```  
msbuild myproject.vcxproj /p:configuration=debug  
```  
  
 [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)]Crea una directory per i file di output, quindi compila e collega il progetto per generare il programma Myproject.exe. Al termine del processo di compilazione, è possibile utilizzare il comando seguente per eseguire l'applicazione:  
  
```  
myproject  
```  
  
 L'applicazione dovrebbe visualizzare "Hello, da MSBuild!" nella finestra della console.  
  
## <a name="customizing-your-project"></a>Personalizzazione del progetto  
 [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)]Consente di eseguire le destinazioni di compilazione predefinite, applicare le proprietà definite dall'utente e utilizzare strumenti personalizzati, eventi e istruzioni di compilazione. In questa sezione vengono illustrate le attività seguenti:  
  
-   Utilizzando [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)] con destinazioni di compilazione.  
  
-   Utilizzando [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)] con proprietà di compilazione.  
  
-   Utilizzando [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)] con gli strumenti e il compilatore a 64 bit.  
  
-   Utilizzando [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)] con set di strumenti diversi.  
  
-   Aggiunta di [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)] le personalizzazioni.  
  
### <a name="using-msbuild-with-build-targets"></a>Utilizzo di MSBuild con destinazioni di compilazione  
 Oggetto *compilazione destinazione* è un set denominato di comandi predefiniti o definiti dall'utente che può essere eseguito durante la compilazione. Utilizzare l'opzione della riga di comando di destinazione (**/t**) per specificare una destinazione di compilazione. In caso del `myproject` progetto di esempio, predefiniti **pulita** Elimina tutti i file nella cartella di debug e crea un nuovo file di log di destinazione.  
  
 Al prompt dei comandi, digitare il comando seguente per eseguire la pulizia `myproject`.  
  
 `msbuild myproject.vcxproj /t:clean`  
  
### <a name="using-msbuild-with-build-properties"></a>Utilizzo di MSBuild con le proprietà di compilazione  
 L'opzione della riga di comando di proprietà (**/p**) consente di eseguire l'override di una proprietà nel file di compilazione del progetto. Nel `myproject` configurazione di compilazione progetto, il debug o di rilascio di esempio viene specificata la `Configuration` proprietà. Viene specificato il sistema operativo che deve eseguire l'applicazione compilata dal `Platform` proprietà.  
  
 Al prompt dei comandi, digitare il comando seguente per creare una build di debug di `myproject` applicazione che deve essere eseguito in Windows a 32 bit.  
  
 `msbuild myproject.vcxproj /p:configuration=debug /p:platform=win32`  
  
 Si supponga che il `myproject` esempio progetto definisce anche una configurazione per Windows a 64 bit e un'altra configurazione per un sistema operativo personalizzato denominato `myplatform`.  
  
 Al prompt dei comandi, il comando seguente per creare una versione di compilazione che di tipo viene eseguito in Windows a 64 bit.  
  
 `msbuild myproject.vcxproj /p:configuration=release /p:platform=x64`  
  
 Al prompt dei comandi, digitare il comando seguente per creare una build di rilascio per `myplatform`.  
  
 `msbuild myproject.vcxproj /p:configuration=release /p:platform=myplatform`  
  
### <a name="using-msbuild-with-the-64-bit-compiler-and-tools"></a>Utilizzo di MSBuild con gli strumenti e il compilatore a 64 bit  
 Se è installato Visual C++ per impostazione predefinita in Windows a 64 bit, x64 a 64 bit nativa e incrociata strumenti vengono installati. È possibile configurare [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)] per utilizzare gli strumenti e il compilatore a 64 bit per compilare l'applicazione impostando la `PreferredToolArchitecture` proprietà. Questa proprietà non influenza le proprietà di configurazione o piattaforma del progetto. Per impostazione predefinita, viene utilizzata la versione a 32 bit degli strumenti. Per specificare la versione a 64 bit degli strumenti e del compilatore, aggiungere l'elemento di gruppo di proprietà seguente al file di progetto MyProject. vcxproj dopo il `Microsoft.Cpp.default.props` \<importazione / > elemento:  
  
```xml  
<PropertyGroup>  
    <PreferredToolArchitecture>x64</PreferredToolArchitecture>  
</PropertyGroup>  
```  
  
 Al prompt dei comandi, digitare il comando seguente per utilizzare gli strumenti a 64 bit per compilare l'applicazione.  
  
 `msbuild myproject.vcxproj /p:PreferredToolArchitecture=x64`  
  
### <a name="using-msbuild-with-a-different-toolset"></a>Utilizzo di MSBuild con un diverso set di strumenti  
 Se si dispone di set di strumenti e librerie per le altre versioni di Visual C++ installato, [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)] possibile compilare applicazioni per la versione corrente di Visual C++ o per le altre versioni installate. Ad esempio, se è stato installato [!INCLUDE[cpp_dev11_long](../build/includes/cpp_dev11_long_md.md)], per specificare il set di strumenti di Visual C++ 11.0 per Windows XP, aggiungere l'elemento di gruppo di proprietà seguente al file di progetto MyProject. vcxproj dopo il Microsoft.cpp `<Import />` elemento:  
  
```xml  
<PropertyGroup>  
    <PlatformToolset>v110_xp</PlatformToolset>  
</PropertyGroup>  
```  
  
 Per ricompilare il progetto con il set di strumenti di Visual C++ 11.0 Windows XP, digitare uno dei seguenti comandi:  
  
 `msbuild myproject.vcxproj /p:PlatformToolset=v110_xp /t:rebuild`  
  
 `msbuild myproject.vcxproj /t:rebuild`  
  
### <a name="adding-msbuild-customizations"></a>Aggiunta di personalizzazioni di MSBuild  
 [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)]offre vari modi per personalizzare il processo di compilazione. Gli argomenti seguenti illustrano come aggiungere istruzioni di compilazione personalizzate, strumenti e gli eventi per il [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)] progetto:  
  
-   [Procedura: Aggiungere un'istruzione di compilazione personalizzata a progetti MSBuild](../build/how-to-add-a-custom-build-step-to-msbuild-projects.md)  
  
-   [Procedura: Aggiungere uno strumento di compilazione personalizzato a progetti MSBuild](../build/how-to-add-custom-build-tools-to-msbuild-projects.md)  
  
-   [Procedura: Uso di eventi di compilazione in progetti MSBuild](../build/how-to-use-build-events-in-msbuild-projects.md)