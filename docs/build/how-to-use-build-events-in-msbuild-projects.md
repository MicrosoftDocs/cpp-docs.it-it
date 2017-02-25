---
title: "Procedura: utilizzo di eventi di compilazione in progetti MSBuild | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "msbuild.cpp.howto.usebuildevents"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "msbuild (c++), procedura: utilizzo di eventi di compilazione in progetti"
ms.assetid: 2a58dc9d-3d50-4e49-97c1-86c5a05ce218
caps.latest.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 23
---
# Procedura: utilizzo di eventi di compilazione in progetti MSBuild
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un evento di compilazione è un comando che [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)] esegue in una fase particolare del processo di compilazione.  L'evento *pre\-compilazione* si verifica prima che la compilazione venga avviata; l'evento *pre\-collegamento* si verifica prima che il passaggio di collegamento venga avviato; e l'evento *post\-compilazione* si verifica dopo che la compilazione termina correttamente.  Un evento di compilazione si verifica solo se il passo di compilazione collegato si verifica.  Ad esempio, l'evento Pre\-collegamento non si verifica se il passaggio di collegamento non viene eseguito.  
  
 Ognuno dei tre eventi di compilazione viene rappresentato in un gruppo di definizioni di elementi da un elemento di comando \(`<Command>`\) che viene eseguito e da un elemento di messaggio \(`<Message>`\) che viene visualizzato quando **MSBuild** esegue l'evento di compilazione.  Ogni elemento è facoltativo e se si specifica lo stesso elemento più volte, l'ultima occorrenza ha la precedenza.  
  
 In un gruppo di proprietà è possibile specificare un elemento facoltativo *Usa in compilazione* \(`<`*build\-event***UseInBuild**`>`\) per indicare se viene eseguito l'evento di compilazione.  Il valore del contenuto di un elemento *Usa in compilazione* può essere `true` o `false`.  Per impostazione predefinita, un evento di compilazione viene eseguito eccetto nei casi in cui l'elemento *Usa in compilazione* corrispondente è impostato su `false`.  
  
 Nella tabella seguente sono elencati tutti gli elementi XML dell'evento di compilazione.  
  
|Elemento XML|Descrizione|  
|------------------|-----------------|  
|`PreBuildEvent`|Questo evento viene eseguito prima dell'inizio della compilazione.|  
|`PreLinkEvent`|Questo evento viene eseguito prima dell'inizio del passaggio di collegamento.|  
|`PostBuildEvent`|Questo evento viene eseguito dopo la fine della compilazione.|  
  
 Nella tabella seguente sono elencati tutti gli elementi *Usa in compilazione*.  
  
|Elemento XML|Descrizione|  
|------------------|-----------------|  
|`PreBuildEventUseInBuild`|Specifica se eseguire l'evento *Pre\-compilazione*.|  
|`PreLinkEventUseInBuild`|Specifica se eseguire l'evento *Pre\-collegamento*.|  
|`PostBuildEventUseInBuild`|Specifica se eseguire l'evento *Post\-compilazione*.|  
  
## Esempio  
 L'esempio seguente può essere aggiunto all'interno dell'elemento di progetto del file myproject.vcxproj creato in [Procedura dettagliata: utilizzo di MSBuild per la creazione di un progetto Visual C\+\+](../build/walkthrough-using-msbuild-to-create-a-visual-cpp-project.md).  Un evento *Pre\-compilazione* crea una copia di main.cpp, un evento *Pre\-collegamento* crea una copia di main.obj, infine un evento *Post\-compilazione* crea una copia di myproject.exe.  Se il progetto viene compilato utilizzando una configurazione di rilascio, gli eventi di compilazione verranno eseguiti.  Se il progetto viene compilato utilizzando una configurazione di debug, gli eventi di compilazione non verranno eseguiti.  
  
```  
<ItemDefinitionGroup>  
  <PreBuildEvent>  
    <Command>copy $(ProjectDir)main.cpp $(ProjectDir)copyOfMain.cpp</Command>  
    <Message>Making a copy of main.cpp </Message>  
  </PreBuildEvent>  
  <PreLinkEvent>  
 <Command>copy $(ProjectDir)$(Configuration)\main.obj $(ProjectDir)$(Configuration)\copyOfMain.obj</Command>  
    <Message>Making a copy of main.obj</Message>  
  </PreLinkEvent>  
  <PostBuildEvent>  
 <Command>copy $(ProjectDir)$(Configuration)\$(TargetFileName) $(ProjectDir)$(Configuration)\copyOfMyproject.exe</Command>  
    <Message>Making a copy of myproject.exe</Message>  
  </PostBuildEvent>  
</ItemDefinitionGroup>  
  
<PropertyGroup Condition="'$(Configuration)|$(Platform)'=='Release|Win32'">  
  <PreBuildEventUseInBuild>true</PreBuildEventUseInBuild>  
  <PreLinkEventUseInBuild>true</PreLinkEventUseInBuild>  
  <PostBuildEventUseInBuild>true</PostBuildEventUseInBuild>  
</PropertyGroup>  
  
<PropertyGroup Condition="'$(Configuration)|$(Platform)'=='Debug|Win32'">  
  <PreBuildEventUseInBuild>false</PreBuildEventUseInBuild>  
  <PreLinkEventUseInBuild>false</PreLinkEventUseInBuild>  
  <PostBuildEventUseInBuild>false</PostBuildEventUseInBuild>  
</PropertyGroup>  
```  
  
## Vedere anche  
 [MSBuild \(Visual C\+\+\)](../build/msbuild-visual-cpp.md)   
 [Procedura dettagliata: utilizzo di MSBuild per la creazione di un progetto Visual C\+\+](../build/walkthrough-using-msbuild-to-create-a-visual-cpp-project.md)