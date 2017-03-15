---
title: "Procedura dettagliata: utilizzo di MSBuild per la creazione di un progetto Visual C++ | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "msbuild.cpp.walkthrough.createproject"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "msbuild (c++), procedura dettagliata: creazione di un progetto"
ms.assetid: 52350d1c-c373-4868-923c-5e8be6f67adb
caps.latest.revision: 27
caps.handback.revision: 27
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Procedura dettagliata: utilizzo di MSBuild per la creazione di un progetto Visual C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questa procedura dettagliata viene mostrato come utilizzare [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)] per compilare un progetto [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] al prompt dei comandi.  Verrà illustrato come creare i file di origine C\+\+ e un file di progetto basato su XML per un'applicazione console [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)].  Dopo avere compilato il progetto, verrà descritto come personalizzare il processo di compilazione.  
  
 In questa procedura dettagliata vengono illustrate le attività seguenti:  
  
-   Creazione dei file di origine C\+\+ per il progetto.  
  
-   Creazione del file XML del progetto [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)].  
  
-   Utilizzo di [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)] per la compilazione del progetto.  
  
-   Utilizzo di [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)] per la personalizzazione del progetto.  
  
## Prerequisiti  
 Per completare questa procedura dettagliata, sono necessari i seguenti elementi:  
  
-   [!INCLUDE[vs_dev12](../atl-mfc-shared/includes/vs_dev12_md.md)]  
  
-   Conoscenza generale del sistema di [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)].  
  
## Creazione dei file di origine C\+\+  
 In questa procedura dettagliata viene mostrato come creare un progetto che dispone di un file di origine e di un file di intestazione.  Il file di origine main.cpp contiene la funzione principale per l'applicazione console.  Il file di intestazione main.h contiene il codice per l'inclusione del file di intestazione iostream.  È possibile creare questi file C\+\+ tramite [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] o un editor di testo.  
  
#### Per creare i file di origine C\+\+ per il progetto  
  
1.  Creare una directory per il progetto.  
  
2.  Creare un file denominato main.cpp e aggiungervi il codice seguente:  
  
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
  
3.  Creare un file denominato main.h e aggiungere al file il codice seguente:  
  
    ```hlsl  
    // main.h: the application header code.  
    /* Additional source code to include. */  
    ```  
  
## Creazione del file di progetto MSBuild XML  
 Un file di progetto [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)] è un file XML che contiene un elemento radice del progetto \(\<Project\>\).  Nell'esempio di progetto seguente, l'elemento \<Progetto\> contiene sette elementi figlio  
  
-   Tre tag di gruppi di elementi \(\<ItemGroup\>\) che specificano la configurazione e la piattaforma del progetto, il nome del file di origine e il nome del file di intestazione.  
  
-   Tre tag di importazione \(\<Import\>\) che specificano la posizione delle impostazioni di Microsoft [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)].  
  
-   Un tag del gruppo di proprietà \(\<PropertyGroup\>\) che specifica le impostazioni del progetto.  
  
#### Per creare il file di progetto MSBuild  
  
1.  Utilizzare un editor di testo per creare un file di progetto denominato `myproject.vcxproj`, quindi aggiungere l'elemento radice \<Project\> illustrato di seguito.  Inserire gli elementi nei passaggi della procedura seguente tra i tag radice \<Progetto\>:  
  
    ```xml  
    <Project DefaultTargets="Build" ToolsVersion="12.0" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">  
    </Project>  
    ```  
  
2.  In un elemento \<ItemGroup\> aggiungere i due elementi figlio \<ProjectConfiguration\> riportati di seguito.  L'elemento figlio specifica le configurazioni di debug e di rilascio per un sistema operativo Windows a 32 bit:  
  
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
  
3.  Aggiungere l'elemento \<Import\/\> seguente che specifica il percorso delle impostazioni C\+\+ predefinite per il progetto:  
  
    ```xml  
    <Import Project="$(VCTargetsPath)\Microsoft.Cpp.default.props" />  
  
    ```  
  
4.  Aggiungere l'elemento del gruppo di proprietà \(\<PropertyGroup\>\) seguente che specifica due proprietà del progetto:  
  
    ```xml  
    <PropertyGroup>  
      <ConfigurationType>Application</ConfigurationType>  
      <PlatformToolset>v120</PlatformToolset>  
    </PropertyGroup>  
    ```  
  
5.  Aggiungere l'elemento \<Import\/\> seguente che specifica il percorso delle impostazioni C\+\+ correnti per il progetto:  
  
    ```xml  
    <Import Project="$(VCTargetsPath)\Microsoft.Cpp.props" />  
    ```  
  
6.  Aggiungere il seguente elemento figlio \<ClCompile\> a un elemento \<ItemGroup\>.  L'elemento figlio specifica il nome del file di origine C\/C\+\+ da compilare:  
  
    ```xml  
    <ItemGroup>  
      <ClCompile Include="main.cpp" />  
    </ItemGroup>  
    ```  
  
7.  Aggiungere il seguente elemento figlio \<ClInclude\> in un elemento \<ItemGroup\>.  L'elemento figlio specifica il nome del file di intestazione per il file di origine C\/C\+\+:  
  
    ```xml  
    <ItemGroup>  
      <ClInclude Include="main.h" />  
    </ItemGroup>  
    ```  
  
8.  Aggiungere il seguente elemento \<Import\> che specifica il percorso del file che definisce la destinazione per il progetto:  
  
    ```xml  
    <Import Project="$(VCTargetsPath)\Microsoft.Cpp.Targets" />  
  
    ```  
  
### File di progetto completo  
 Nel codice seguente viene mostrato il file di progetto completo come creato nella procedura sopra illustrata.  
  
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
  
## Utilizzo di MSBuild per la compilazione del progetto  
 Per compilare l'applicazione console, al prompt dei comandi digitare il comando seguente:  
  
```  
msbuild myproject.vcxproj /p:configuration=debug  
```  
  
 [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)] crea una directory per i file di output, quindi compila e collega il progetto per generare il programma Myproject.exe.  Al termine del processo di compilazione, per eseguire l'applicazione utilizzare il comando seguente:  
  
```  
myproject  
```  
  
 L'applicazione dovrebbe visualizzare il messaggio "Hello, from MSBuild\!" nella finestra della console.  
  
## Personalizzazione del progetto  
 [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)] consente di eseguire destinazioni di compilazione predefinite, applicare proprietà definite dall'utente e utilizzare strumenti personalizzati, eventi e istruzioni di compilazione.  In questa sezione vengono illustrate le seguenti attività:  
  
-   Utilizzo di [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)] con destinazioni di compilazione.  
  
-   Utilizzo di [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)] con proprietà di compilazione.  
  
-   Utilizzo di [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)] con il compilatore e gli strumenti a 64 bit.  
  
-   Utilizzo di [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)] con set di strumenti diversi.  
  
-   Aggiunta di personalizzazioni [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)].  
  
### Utilizzo di MSBuild con destinazioni di compilazione  
 Una *destinazione di compilazione* è un set denominato di comandi predefiniti o definiti dall'utente che è possibile eseguire durante la compilazione.  Utilizzare l'opzione della riga di comando di destinazione \(**\/t**\) per specificare una destinazione di compilazione.  Nel caso del progetto di esempio `myproject`, la destinazione **clean** predefinita elimina tutti i file nella cartella di debug e crea un nuovo file di log.  
  
 Al prompt dei comandi digitare il seguente comando per eseguire la pulizia del progetto `myproject`.  
  
 `msbuild myproject.vcxproj /t:clean`  
  
### Utilizzo di MSBuild con proprietà di compilazione  
 L'opzione della riga di comando della proprietà \(**\/p**\) consente di eseguire l'override di una proprietà nel file di compilazione del progetto.  Nel progetto di esempio `myproject`, la configurazione della build di debug o di rilascio viene specificata dalla proprietà `Configuration`.  Il sistema operativo che deve eseguire l'applicazione compilata viene specificato dalla proprietà `Platform`.  
  
 Al prompt dei comandi, digitare il comando seguente per creare una build di debug dell'applicazione `myproject` che deve essere eseguita su Windows a 32 bit.  
  
 `msbuild myproject.vcxproj /p:configuration=debug /p:platform=win32`  
  
 Si presupponga che il progetto di esempio `myproject` definisca anche una configurazione per Windows a 64 bit e un'altra configurazione per un sistema operativo personalizzato denominato `myplatform`.  
  
 Al prompt dei comandi, digitare il comando seguente per creare una build di rilascio dell'applicazione che da eseguire su Windows a 64 bit.  
  
 `msbuild myproject.vcxproj /p:configuration=release /p:platform=x64`  
  
 Al prompt dei comandi, digitare il comando seguente per creare una build di rilascio per `myplatform`:  
  
 `msbuild myproject.vcxproj /p:configuration=release /p:platform=myplatform`  
  
### Utilizzo di MSBuild con il compilatore e gli strumenti a 64 bit  
 Se è stato installato [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] su Windows a 64 bit, per impostazione predefinita vengono installati gli strumenti nativi e incrociati x64 a 64 bit.  È possibile configurare [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)] per utilizzare il compilatore e degli strumenti a 64 bit per compilare l'applicazione impostando la proprietà `PreferredToolArchitecture`.  Questa proprietà non ha effetto sulla configurazione del progetto o sulle proprietà della piattaforma.  Per impostazione predefinita, viene utilizzata la versione a 32 bit dello strumento.  Per specificare la versione a 64 bit del compilatore e degli strumenti, aggiungere l'elemento del gruppo di proprietà seguente al file del progetto Myproject.vcxproj dopo l'elemento `Microsoft.Cpp.default.props` \<Import \/\>:  
  
```xml  
<PropertyGroup>  
    <PreferredToolArchitecture>x64</PreferredToolArchitecture>  
</PropertyGroup>  
```  
  
 Per utilizzare gli strumenti a 64 bit nella compilazione dell'applicazione, digitare il seguente comando nel prompt dei comandi.  
  
 `msbuild myproject.vcxproj /p:PreferredToolArchitecture=x64`  
  
### Utilizzo di MSBuild con set di strumenti diversi  
 Se sono installati i set di strumenti e le librerie per altre versioni di [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)], [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)] consente di compilare applicazioni per la versione corrente di [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] o per le altre versioni installate.  Ad esempio, se è stato installato [!INCLUDE[cpp_dev11_long](../build/includes/cpp_dev11_long_md.md)], per specificare il set di strumenti di [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] 11.0 per Windows XP, aggiungere l'elemento del gruppo di proprietà seguente al file di progetto Myproject.vcxproj dopo l'elemento `<Import />` di Microsoft.Cpp.props:  
  
```xml  
<PropertyGroup>  
    <PlatformToolset>v110_xp</PlatformToolset>  
</PropertyGroup>  
```  
  
 Per ricompilare il progetto con il set di strumenti di [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] 11.0 Windows XP, digitare uno dei comandi seguenti:  
  
 `msbuild myproject.vcxproj /p:PlatformToolset=v110_xp /t:rebuild`  
  
 `msbuild myproject.vcxproj /t:rebuild`  
  
### Aggiunta di personalizzazioni MSBuild  
 [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)] offre diverse modalità per la personalizzazione del processo di compilazione.  Negli argomenti seguenti viene mostrato come aggiungere al progetto [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)] istruzioni di compilazione personalizzate, strumenti ed eventi:  
  
-   [Procedura: aggiungere un'istruzione di compilazione personalizzata a progetti MSBuild](../build/how-to-add-a-custom-build-step-to-msbuild-projects.md)  
  
-   [Procedura: aggiungere uno strumento di compilazione personalizzato a progetti MSBuild](../build/how-to-add-custom-build-tools-to-msbuild-projects.md)  
  
-   [Procedura: utilizzo di eventi di compilazione in progetti MSBuild](../build/how-to-use-build-events-in-msbuild-projects.md)