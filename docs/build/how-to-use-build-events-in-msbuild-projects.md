---
title: 'Procedura: usare eventi di compilazione in progetti MSBuild | Microsoft Docs'
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
ms.openlocfilehash: fd35ff136c0145e1c76a04d15052d426a7c90dcc
ms.sourcegitcommit: 8480f16893f09911f08a58caf684405404f7ac8e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/12/2018
ms.locfileid: "49161268"
---
# <a name="how-to-use-build-events-in-msbuild-projects"></a>Procedura: utilizzo di eventi di compilazione in progetti MSBuild

Un evento di compilazione è un comando che MSBuild esegue in una determinata fase del processo di compilazione. Il *pre-compilazione* evento si verifica prima dell'avvio della compilazione; gli *pre-collegamento* evento si verifica prima dell'inizio del collegamento; e il *post-compilazione* evento si verifica al termine della compilazione termina correttamente. Un evento di compilazione si verifica solo se viene eseguito il passaggio di compilazione associato. Ad esempio, l'evento di pre-collegamento non viene eseguito se non viene eseguito il passaggio di collegamento.

Ognuno dei tre eventi di compilazione è rappresentato in un gruppo di definizioni di elementi da un elemento di comando (`<Command>`) che viene eseguito e un elemento del messaggio (`<Message>`) che è visualizzato quando **MSBuild** esegue l'evento di compilazione. Ogni elemento è facoltativo e se si specifica lo stesso elemento più volte, l'ultima occorrenza ha la precedenza.

Facoltativo *Usa in compilazione* elemento (`<`*evento di compilazione*`UseInBuild>`) può essere specificato in un gruppo di proprietà per indicare se l'evento di compilazione viene eseguita. Il valore del contenuto di un *Usa in compilazione* elemento può essere **true** oppure **false**. Per impostazione predefinita, un evento di compilazione viene eseguito solo se il corrispondente *Usa in compilazione* elemento è impostato su `false`.

La tabella seguente elenca ogni elemento XML eventi di compilazione:

|Elemento XML|Descrizione|
|-----------------|-----------------|
|`PreBuildEvent`|Questo evento viene eseguito prima dell'inizio della compilazione.|
|`PreLinkEvent`|Questo evento viene eseguito prima che inizi il passaggio di collegamento.|
|`PostBuildEvent`|Questo evento viene eseguito al termine della compilazione.|

Nella tabella seguente sono elencati ognuna *Usa in compilazione* elemento:

|Elemento XML|Descrizione|
|-----------------|-----------------|
|`PreBuildEventUseInBuild`|Specifica se eseguire la *pre-compilazione* evento.|
|`PreLinkEventUseInBuild`|Specifica se eseguire la *pre-collegamento* evento.|
|`PostBuildEventUseInBuild`|Specifica se eseguire la *post-compilazione* evento.|

## <a name="example"></a>Esempio

Nell'esempio seguente può essere aggiunto all'interno dell'elemento di progetto del file MyProject. vcxproj creato nel [procedura dettagliata: uso di MSBuild per creare un progetto Visual C++](../build/walkthrough-using-msbuild-to-create-a-visual-cpp-project.md). Oggetto *pre-compilazione* eventi rende una copia di Main. cpp; un *pre-collegamento* eventi rende una copia di /all Main. obj; e un *post-compilazione* eventi crea una copia del myproject.exe. Se il progetto viene compilato con la configurazione rilascio, gli eventi di compilazione vengono eseguiti. Se il progetto viene compilato con una configurazione di debug, gli eventi di compilazione non vengono eseguiti.

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

[MSBuild (Visual C++)](../build/msbuild-visual-cpp.md)<br/>
[Procedura dettagliata: uso di MSBuild per la creazione di un progetto Visual C++](../build/walkthrough-using-msbuild-to-create-a-visual-cpp-project.md)