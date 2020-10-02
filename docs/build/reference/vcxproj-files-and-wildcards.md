---
title: file con estensione vcxproj e caratteri jolly
description: Modalità di gestione dei caratteri jolly nei file System. vcxproj del progetto MSBuild nativi di C++.
ms.date: 09/30/2020
helpviewer_keywords:
- .vcxproj file structure
ms.assetid: 14d0c552-29db-480e-80c1-7ea89d6d8e9c
ms.openlocfilehash: 23d36a63f328e14cca59d1d57838173b4dcb0954
ms.sourcegitcommit: f7fbdc39d73e1fb3793c396fccf7a1602af7248b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/02/2020
ms.locfileid: "91662882"
---
# <a name="vcxproj-files-and-wildcards"></a>`.vcxproj` file e caratteri jolly

L'IDE di Visual Studio non supporta determinati costrutti negli elementi di progetto nei *`.vcxproj`* file. Questi costrutti non supportati includono caratteri jolly, elenchi delimitati da punti e virgola o macro MSBuild che si espandono in più file. Il `.vcxproj` sistema di progetto per le compilazioni C++ è più restrittivo di MSBuild. Per ogni elemento del progetto è necessario disporre di un proprio elemento MSBuild. Per ulteriori informazioni sul `.vcxproj` formato di file, vedere [ `.vcxproj` e `.props` struttura di file](vcxproj-file-structure.md).

Questi esempi di costrutti non sono supportati dall'IDE:

```xml
<ItemGroup>
  <None Include="*.txt">
  <ClCompile Include="a.cpp;b.cpp"/>
  <ClCompile Include="@(SomeItems)" />
</ItemGroup>
```

Se un `.vcxproj` file di progetto che include questi costrutti viene caricato nell'IDE, il progetto potrebbe sembrare funzionante inizialmente. Tuttavia, i problemi sono probabilmente non appena il progetto viene modificato da Visual Studio e quindi salvato su disco. È possibile che si verifichino arresti anomali casuali e un comportamento non definito.

In Visual Studio 2019 versione 16,7, quando Visual Studio carica un `.vcxproj` file di progetto, rileva automaticamente le voci non supportate negli elementi del progetto. Gli avvisi verranno visualizzati nella finestra di output durante il caricamento della soluzione.

Visual Studio 2019 versione 16,7 aggiunge anche il supporto per progetti di sola lettura. Il supporto di sola lettura consente all'IDE di usare progetti creati manualmente che non hanno limitazioni aggiuntive dei progetti modificabili dall'IDE.

Se si dispone di un `.vcxproj` file che usa uno o più costrutti non supportati, è possibile farlo caricare senza avvisi nell'IDE usando una di queste opzioni:

- Elencare tutti gli elementi in modo esplicito
- Contrassegnare il progetto come di sola lettura
- Spostare elementi con caratteri jolly in un corpo di destinazione

## <a name="list-all-items-explicitly"></a>Elencare tutti gli elementi in modo esplicito

Attualmente, non è possibile rendere visibili gli elementi di espansione con caratteri jolly nella finestra Esplora soluzioni in un progetto non di sola lettura. Esplora soluzioni prevede che i progetti elenchino tutti gli elementi in modo esplicito.

Per fare `.vcxproj` in modo che i progetti espandino automaticamente i caratteri jolly in Visual Studio 2019 versione 16,7 o successiva, impostare la `ReplaceWildcardsInProjectItems` proprietà su `true` . Si consiglia di creare un *`Directory.Build.props`* file in una directory radice e di usare questo contenuto:

```xml
<Project>
  <PropertyGroup>
    <ReplaceWildcardsInProjectItems>true</ReplaceWildcardsInProjectItems>
  </PropertyGroup>
</Project>
```

## <a name="mark-your-project-as-read-only"></a>Contrassegnare il progetto come di sola lettura

In Visual Studio 2019 versione 16,7 e successive, è possibile contrassegnare i progetti come di sola *lettura*. Per contrassegnare il progetto come di sola lettura, aggiungere la proprietà seguente al *`.vcxproj`* file o ai file che importa:

```xml
<PropertyGroup>
    <ReadOnlyProject>true</ReadOnlyProject>
</PropertyGroup>
```

L' `<ReadOnlyProject>` impostazione impedisce a Visual Studio di modificare e salvare il progetto, quindi è possibile usare qualsiasi costrutto MSBuild, inclusi i caratteri jolly.

È importante tenere presente che la cache del progetto non è disponibile se Visual Studio rileva caratteri jolly negli elementi di progetto nel *`.vcxproj`* file o in una qualsiasi delle relative importazioni. I tempi di caricamento delle soluzioni nell'IDE sono molto più lunghi se sono presenti molti progetti che usano caratteri jolly.

## <a name="move-wildcard-items-to-a-target-body"></a>Spostare elementi con caratteri jolly in un corpo di destinazione

È possibile utilizzare caratteri jolly per raccogliere risorse, aggiungere origini generate e così via. Se non sono necessarie elencate nella finestra di Esplora soluzioni, è possibile usare questa procedura:

1. Modificare il nome del gruppo di elementi per aggiungere caratteri jolly. Ad esempio, anziché:

   ```xml
   <Image Include="*.bmp" />
   <ClCompile Include="*.cpp" />
   ```

   modificarla in:

   ```xml
   <_WildCardImage Include="*.bmp" />
   <_WildCardClCompile Include="*.cpp" />
   ```

1. Aggiungere questo contenuto al  *`.vcxproj`* file.In alternativa, aggiungerlo a un *`Directory.Build.targets`* file in una directory radice per influire su tutti i progetti in tale radice:

   ```xml
   <Target Name="AddWildCardItems"
       AfterTargets="BuildGenerateSources">
     <ItemGroup>
       <Image Include="@(_WildCardImage)" />
       <ClCompile Include="@(_WildCardClCompile)" />
     </ItemGroup>
   </Target>
   ```

   Questa modifica consente alla compilazione di visualizzare gli elementi così come sono definiti nel  *`.vcxproj`* file. Ora, tuttavia, non sono visibili nella finestra Esplora soluzioni e non provocano problemi nell'IDE.

1. Per visualizzare la funzionalità IntelliSense corretta per  `_WildCardClCompile`   gli elementi quando si aprono i file nell'editor, aggiungere il contenuto seguente:

   ```xml
   <PropertyGroup>
     <ComputeCompileInputsTargets>
       AddWildCardItems
       $(ComputeCompileInputsTargets)
     </ComputeCompileInputsTargets>
   </PropertyGroup>
   ```

In effetti, è possibile usare caratteri jolly per tutti gli elementi all'interno di un corpo di destinazione. È anche possibile usare caratteri jolly in un oggetto  `ItemGroup`   che non è definito come elemento del progetto da un oggetto [`ProjectSchemaDefinition`](https://devblogs.microsoft.com/cppblog/vc-MSBuild-extensibility-example/) .

> [!NOTE]
> Se si spostano le inclusioni con caratteri jolly da un *`.vcxproj`* file a un file importato, non saranno visibili nella finestra Esplora soluzioni. Questa modifica consente anche il caricamento del progetto nell'IDE senza modifiche. Tuttavia, questo approccio non è consigliato perché Disabilita la cache del progetto.

## <a name="see-also"></a>Vedere anche

[Impostare il compilatore e le proprietà di compilazione C++ in Visual Studio](../working-with-project-properties.md)<br/>
[File XML della pagina delle proprietà](property-page-xml-files.md)
