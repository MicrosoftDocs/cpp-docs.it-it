---
title: file vcxproj. filters
ms.date: 09/25/2019
description: Usare i file di filtro nei C++ progetti di Visual Studio per definire cartelle logiche personalizzate per i file in Esplora soluzioni
helpviewer_keywords:
- vcxproj.filters
- filters file [C++]
ms.openlocfilehash: ee44bf3d1cbe06d6c007ed8976ec384a456efca5
ms.sourcegitcommit: 1e6386be9084f70def7b3b8b4bab319a117102b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/30/2019
ms.locfileid: "71686859"
---
# <a name="vcxprojfilters-files"></a>file vcxproj. filters

Il file dei *filtri* (\*. vcxproj. Filters) è un file XML in formato MSBuild che si trova nella cartella radice del progetto. Specifica quali tipi di file vengono inseriti nella cartella logica **Esplora soluzioni**. Nella figura seguente, i file con *estensione cpp* si trovano nel nodo **file di origine** . i file con *estensione h* si trovano nel nodo **file di intestazione** e i file con *estensione ico* e *RC* si trovano in **file di risorse**. Questa selezione host è controllata dal file dei filtri.

![Cartelle logiche in Esplora soluzioni](media/solution-explorer-filters.png)

## <a name="creating-a-custom-filters-file"></a>Creazione di un file di filtri personalizzati

Visual Studio crea automaticamente questo file. Per le applicazioni desktop, le cartelle logiche predefinite (filtri) sono: **file di origine**, **file di intestazione** e **file di risorse**. Altri tipi di progetto, ad esempio UWP, potrebbero avere un set diverso di cartelle predefinite. Visual Studio assegna automaticamente i tipi di file noti a ogni cartella. Se si desidera creare un filtro con un nome personalizzato o un filtro che contiene tipi di file personalizzati, è possibile creare un file di filtri personalizzato nella cartella radice del progetto o in un filtro esistente. I**riferimenti** e le **dipendenze esterne** sono cartelle speciali che non fanno parte del filtro.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato il file dei filtri per l'esempio illustrato in precedenza. Dispone di una gerarchia piatta; in altre parole, non sono presenti cartelle logiche nidificate. Il nodo `UniqueIdentifier` è facoltativo. Consente alle interfacce di automazione di Visual Studio di trovare il filtro. `Extensions` è anche facoltativo. Quando un nuovo file viene aggiunto a un progetto, viene aggiunto al filtro in primo piano con un'estensione di file corrispondente. Per aggiungere un file a un filtro specifico, fare clic con il pulsante destro del mouse sul filtro e scegliere **Aggiungi nuovo elemento**.

Quando il progetto viene avviato per la prima volta, il `ItemGroup` che contiene i nodi `ClInclude` viene creato. Se si generano file vcxproj personalizzati, assicurarsi che tutti gli elementi del progetto includano anche una voce nel file di filtro. I valori in un nodo `ClInclude` eseguono l'override dei filtri predefiniti in base alle estensioni di file. Quando si usa Visual Studio per aggiungere un nuovo elemento al progetto, l'IDE aggiunge una singola voce di file nel file di filtro. Il filtro non viene riassegnato automaticamente se si modifica l'estensione del file. 

```xml
<?xml version="1.0" encoding="utf-8"?>
<Project ToolsVersion="4.0" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">
  <ItemGroup>
    <Filter Include="Source Files">
      <UniqueIdentifier>{4FC737F1-C7A5-4376-A066-2A32D752A2FF}</UniqueIdentifier>
      <Extensions>cpp;c;cc;cxx;def;odl;idl;hpj;bat;asm;asmx</Extensions>
    </Filter>
    <Filter Include="Header Files">
      <UniqueIdentifier>{93995380-89BD-4b04-88EB-625FBE52EBFB}</UniqueIdentifier>
      <Extensions>h;hh;hpp;hxx;hm;inl;inc;ipp;xsd</Extensions>
    </Filter>
    <Filter Include="Resource Files">
      <UniqueIdentifier>{67DA6AB6-F800-4c08-8B7A-83BB121AAD01}</UniqueIdentifier>
      <Extensions>rc;ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe;resx;tiff;tif;png;wav;mfcribbon-ms</Extensions>
    </Filter>
  </ItemGroup>
  <ItemGroup>
    <ClInclude Include="MFCApplication1.h">
      <Filter>Header Files</Filter>
    </ClInclude>
    <ClInclude Include="MFCApplication1Dlg.h">
      <Filter>Header Files</Filter>
    </ClInclude>
    <ClInclude Include="stdafx.h">
      <Filter>Header Files</Filter>
    </ClInclude>
    <ClInclude Include="targetver.h">
      <Filter>Header Files</Filter>
    </ClInclude>
    <ClInclude Include="Resource.h">
      <Filter>Header Files</Filter>
    </ClInclude>
  </ItemGroup>
  <ItemGroup>
    <ClCompile Include="MFCApplication1.cpp">
      <Filter>Source Files</Filter>
    </ClCompile>
    <ClCompile Include="MFCApplication1Dlg.cpp">
      <Filter>Source Files</Filter>
    </ClCompile>
    <ClCompile Include="stdafx.cpp">
      <Filter>Source Files</Filter>
    </ClCompile>
  </ItemGroup>
  <ItemGroup>
    <ResourceCompile Include="MFCApplication1.rc">
      <Filter>Resource Files</Filter>
    </ResourceCompile>
  </ItemGroup>
  <ItemGroup>
    <None Include="res\MFCApplication1.rc2">
      <Filter>Resource Files</Filter>
    </None>
  </ItemGroup>
  <ItemGroup>
    <Image Include="res\MFCApplication1.ico">
      <Filter>Resource Files</Filter>
    </Image>
  </ItemGroup>
</Project>
```

Per creare cartelle logiche annidate, dichiarare tutti i nodi nei filtri `ItemGroup` come illustrato di seguito. Ogni nodo figlio deve dichiarare il percorso logico completo del padre superiore. Nell'esempio seguente è necessario dichiarare un `ParentFilter` vuoto perché vi viene fatto riferimento nei nodi successivi.

```xml
  <ItemGroup>
    <Filter Include="ParentFilter">
    </Filter>
    <Filter Include="ParentFilter\Source Files"> <!-- Full path to topmost parent.-->  
      <UniqueIdentifier>{4FC737F1-C7A5-4376-A066-2A32D752A2FF}</UniqueIdentifier> <!--  Optional-->
      <Extensions>cpp;c;cc;cxx;def;odl;idl;hpj;bat;asm;asmx</Extensions> <!-- Optional -->
    </Filter>
    <Filter Include="Header Files">
      <UniqueIdentifier>{93995380-89BD-4b04-88EB-625FBE52EBFB}</UniqueIdentifier>
      <Extensions>h;hh;hpp;hxx;hm;inl;inc;ipp;xsd</Extensions>
    </Filter>
  </ItemGroup>
```

