---
description: 'Altre informazioni su: procedura: usare gli eventi di compilazione nei progetti MSBuild'
title: 'Procedura: utilizzo di eventi di compilazione in progetti MSBuild'
ms.date: 11/04/2016
helpviewer_keywords:
- 'msbuild (c++), howto: use build events in projects'
ms.assetid: 2a58dc9d-3d50-4e49-97c1-86c5a05ce218
ms.openlocfilehash: 0c94f02851df3fa41791542841f8ed84305cc9e5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97156203"
---
# <a name="how-to-use-build-events-in-msbuild-projects"></a>Procedura: utilizzo di eventi di compilazione in progetti MSBuild

Un evento di compilazione è un comando eseguito da MSBuild in una determinata fase del processo di compilazione. L'evento di *pre-compilazione* si verifica prima dell'avvio della compilazione. l'evento di *pre-collegamento* si verifica prima dell'avvio del passaggio del collegamento. e l'evento di *post-compilazione* si verifica dopo che la compilazione termina correttamente. Un evento di compilazione si verifica solo se viene eseguito il passaggio di compilazione associato. L'evento di pre-collegamento, ad esempio, non si verifica se il passaggio del collegamento non viene eseguito.

Ognuno dei tre eventi di compilazione viene rappresentato in un gruppo di definizioni di elemento da un elemento Command ( `<Command>` ) eseguito e da un elemento Message ( `<Message>` ) che viene visualizzato quando **MSBuild** esegue l'evento di compilazione. Ogni elemento è facoltativo e se si specifica più volte lo stesso elemento, l'ultima occorrenza avrà la precedenza.

Un elemento *use-in-Build* facoltativo ( `<` *evento di compilazione* `UseInBuild>` ) può essere specificato in un gruppo di proprietà per indicare se l'evento di compilazione viene eseguito. Il valore del contenuto di un elemento *use-in-Build* è **`true`** o **`false`** . Per impostazione predefinita, viene eseguito un evento di compilazione, a meno che l'elemento *use-in-Build* corrispondente non sia impostato su **`false`** .

Nella tabella seguente sono elencati tutti gli elementi XML dell'evento di compilazione:

|Elemento XML|Descrizione|
|-----------------|-----------------|
|`PreBuildEvent`|Questo evento viene eseguito prima dell'inizio della compilazione.|
|`PreLinkEvent`|Questo evento viene eseguito prima dell'inizio del passaggio del collegamento.|
|`PostBuildEvent`|Questo evento viene eseguito al termine della compilazione.|

La tabella seguente elenca ogni elemento *use-in-Build* :

|Elemento XML|Descrizione|
|-----------------|-----------------|
|`PreBuildEventUseInBuild`|Specifica se eseguire l'evento di *pre-compilazione* .|
|`PreLinkEventUseInBuild`|Specifica se eseguire l'evento di *pre-collegamento* .|
|`PostBuildEventUseInBuild`|Specifica se eseguire l'evento di *post-compilazione* .|

## <a name="example"></a>Esempio

L'esempio seguente può essere aggiunto all'interno dell'elemento Project del file MyProject. vcxproj creato in [procedura dettagliata: uso di MSBuild per creare un progetto C++](walkthrough-using-msbuild-to-create-a-visual-cpp-project.md). Un evento di *pre-compilazione* crea una copia di Main. cpp; un evento di *pre-collegamento* crea una copia di Main. obj; un evento di *post-compilazione* crea una copia del myproject.exe. Se il progetto viene compilato utilizzando una configurazione di rilascio, verranno eseguiti gli eventi di compilazione. Se il progetto viene compilato utilizzando una configurazione di debug, gli eventi di compilazione non vengono eseguiti.

``` xml
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

## <a name="see-also"></a>Vedi anche

[MSBuild nella riga di comando-C++](msbuild-visual-cpp.md)<br/>
[Procedura dettagliata: uso di MSBuild per la creazione di un progetto C++](walkthrough-using-msbuild-to-create-a-visual-cpp-project.md)
