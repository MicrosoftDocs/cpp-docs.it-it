---
title: 'Procedura: utilizzare gli eventi di compilazione in progetti MSBuild | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
f1_keywords:
- msbuild.cpp.howto.usebuildevents
dev_langs:
- C++
helpviewer_keywords:
- 'msbuild (c++), howto: use build events in projects'
ms.assetid: 2a58dc9d-3d50-4e49-97c1-86c5a05ce218
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2367c85dbd4a4ef7b10d927592c0fb10a417f0e6
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32369773"
---
# <a name="how-to-use-build-events-in-msbuild-projects"></a>Procedura: utilizzo di eventi di compilazione in progetti MSBuild
Un evento di compilazione è un comando che [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)] esegue in una determinata fase nel processo di compilazione. Il *pre-compilazione* evento si verifica prima dell'avvio della compilazione; *pre-collegamento* evento si verifica prima dell'inizio del collegamento; e *post-compilazione* evento si verifica al termine della compilazione termina correttamente. Un evento di compilazione si verifica solo se viene eseguito il passaggio di compilazione associato. Ad esempio, l'evento di pre-collegamento non si verifica se il passaggio di collegamento non eseguito.  
  
 Ciascuno dei tre eventi di compilazione è rappresentato in un gruppo di definizione di elemento da un elemento di comando (`<Command>`) che viene eseguito e un elemento del messaggio (`<Message>`) che è visualizzato quando **MSBuild** esegue l'evento di compilazione. Ogni elemento è facoltativo e, se si specifica lo stesso elemento più volte, l'ultima occorrenza ha la precedenza.  
  
 Un parametro facoltativo *Usa in compilazione* elemento (`<`* compilare-evento ***UseInBuild**`>`) può essere specificato in un gruppo di proprietà per indicare se l'evento di compilazione viene eseguita. Il valore del contenuto di un *Usa in compilazione* è `true` o `false`. Per impostazione predefinita, un evento di compilazione viene eseguito se non corrispondente *Usa in compilazione* è impostato su `false`.  
  
 La tabella seguente elenca ogni elemento XML eventi di compilazione:  
  
|Elemento XML|Descrizione|  
|-----------------|-----------------|  
|`PreBuildEvent`|Questo evento viene eseguito prima dell'inizio della compilazione.|  
|`PreLinkEvent`|Questo evento viene eseguito prima che inizi il passaggio di collegamento.|  
|`PostBuildEvent`|Questo evento viene eseguito al termine della compilazione.|  
  
 Nella tabella seguente elenca ogni *Usa in compilazione* elemento:  
  
|Elemento XML|Descrizione|  
|-----------------|-----------------|  
|`PreBuildEventUseInBuild`|Specifica se eseguire il *pre-compilazione* evento.|  
|`PreLinkEventUseInBuild`|Specifica se eseguire il *pre-collegamento* evento.|  
|`PostBuildEventUseInBuild`|Specifica se eseguire il *post-compilazione* evento.|  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente può essere aggiunto all'interno dell'elemento di progetto del file MyProject. vcxproj creato [procedura dettagliata: uso di MSBuild per creare un progetto Visual C++](../build/walkthrough-using-msbuild-to-create-a-visual-cpp-project.md). Oggetto *pre-compilazione* evento effettua una copia di main.cpp; un *pre-collegamento* evento effettua una copia di Main. obj; e un *post-compilazione* evento crea una copia di myproject.exe. Se il progetto viene compilato utilizzando una configurazione di rilascio, gli eventi di compilazione vengono eseguiti. Se il progetto viene compilato utilizzando una configurazione di debug, è possibile che gli eventi di compilazione non vengono eseguiti.  
  
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
  
## <a name="see-also"></a>Vedere anche  
 [MSBuild (Visual C++)](../build/msbuild-visual-cpp.md)   
 [Procedura dettagliata: uso di MSBuild per la creazione di un progetto Visual C++](../build/walkthrough-using-msbuild-to-create-a-visual-cpp-project.md)