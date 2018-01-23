---
title: struttura di file con estensione vcxproj e con estensione props | Documenti Microsoft
ms.custom: 
ms.date: 04/27/2017
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: .vcxproj file structure
ms.assetid: 14d0c552-29db-480e-80c1-7ea89d6d8e9c
caps.latest.revision: "1"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: d48b16d9a4250de8c8c3dfef62fdcfb5c1434960
ms.sourcegitcommit: 6f40bba1772a09ff0e3843d5f70b553e1a15ab50
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2018
---
# <a name="vcxproj-and-props-file-structure"></a>struttura dei file con estensione vcxproj e con estensione props

MSBuild è il sistema di progetto predefiniti in Visual Studio. Quando si sceglie **File | Nuovo progetto** in Visual C++ si sta creando un progetto MSBuild le cui impostazioni vengono archiviate in un file di progetto XML con estensione `.vcxproj`. Il file di progetto è inoltre possibile importare file con estensione props e targets in cui le impostazioni possono essere archiviate. Nella maggior parte dei casi, non è mai necessario modificare manualmente il file di progetto e in realtà non è consigliabile modificare il manualmente se non si dispone di una buona conoscenza di MSBuild. Ogni volta che è possibile utilizzare le pagine delle proprietà di Visual Studio per modificare le impostazioni di progetto (vedere [funziona con le proprietà del progetto](working-with-project-properties.md). Tuttavia, in alcuni casi potrebbe essere necessario modificare manualmente un foglio di file o una proprietà di progetto. Per gli scenari, in questo articolo contiene informazioni di base sulla struttura del file.

**Importante:**

Se si sceglie di modificare manualmente un file con estensione vcxproj, tenere presente questi fattori:

1. La struttura del file deve seguire un form prescritto, come descritto in questo articolo.

1. Il sistema di progetto Visual C++ attualmente non supporta i caratteri jolly negli elementi di progetto. Ad esempio, questo non è supportato:

   ```xml
   <ClCompile Include="*.cpp"/>
   ```

1. Il sistema di progetto Visual C++ attualmente non supporta le macro in percorsi di elementi di progetto. Ad esempio, questo non è supportato:

   ```xml
   <ClCompile Include="$(IntDir)\generated.cpp"/>
   ```

1. Per disporre le proprietà del progetto aggiunto, rimosso o modificato durante modifica in correttamente il **le proprietà del progetto** finestra di dialogo, il file deve contenere gruppi separati per ogni configurazione di progetto e le condizioni devono essere in questo formato:

   ```xml
   Condition="'$(Configuration)|$(Platform)'=='Debug|Win32'"
   ```

1. Nel gruppo con etichetta appropriata, come specificato nel file delle regole di proprietà, è necessario specificare ogni proprietà. Per ulteriori informazioni, vedere [file delle regole xml pagina proprietà](property-page-xml-files.md).

## <a name="vcxproj-file-elements"></a>elementi del file con estensione vcxproj

È possibile esaminare il contenuto di un file con estensione vcxproj utilizzando qualsiasi editor di testo o XML. È possibile visualizzare in Visual Studio facendo clic sul progetto in Esplora soluzioni, scegliendo **Scarica progetto** e scegliendo **Foo.vcxproj modifica**.

La prima cosa da notare è che gli elementi di livello superiore vengono visualizzati in un ordine particolare. Ad esempio:

- la maggior parte dei gruppi di proprietà e i gruppi di definizione si verificano dopo l'importazione di Microsoft.cpp.
- tutte le destinazioni vengono importate alla fine del file.
- sono presenti più gruppi di proprietà, ciascuno con un'etichetta univoca, e si verificano in un ordine particolare.

L'ordine degli elementi nel file di progetto è molto importante, perché MSBuild è basato su un modello di valutazione sequenziale.  Se il file di progetto, incluse tutte le importato con estensione props e targets, costituito da più definizioni di una proprietà, l'ultima definizione sostituisce quelli precedenti. Nell'esempio seguente, il valore "xyz" verrà impostato durante la compilazione perché rileva l'ultimo durante la valutazione del motore di MSBUild.

```xml
  <MyProperty>abc</MyProperty>
  <MyProperty>xyz</MyProperty>
```

Il frammento di codice seguente viene illustrato un file con estensione vcxproj minimo. Qualsiasi file con estensione vcxproj generato da Visual Studio conterrà questi elementi MSBuild principali e verranno visualizzati nell'ordine indicato (anche se contengono più copie di ciascun elemento principale). Si noti che `Label` gli attributi sono arbitrari tag che vengono utilizzate solo per Visual Studio come dei cartelli stradali per la modifica, non hanno alcuna altra funzione.

```xml
<Project DefaultTargets="Build" ToolsVersion="4.0" xmlns='http://schemas.microsoft.com/developer/msbuild/2003'>
   <ItemGroup Label="ProjectConfigurations" />
   <PropertyGroup Label="Globals" />
   <Import Project="$(VCTargetsPath)\Microsoft.Cpp.default.props" />
   <PropertyGroup Label="Configuration" />
   <Import Project="$(VCTargetsPath)\Microsoft.Cpp.props" />
   <ImportGroup Label="ExtensionSettings" />
   <ImportGroup Label="PropertySheets" />
   <PropertyGroup Label="UserMacros" />
   <PropertyGroup />
   <ItemDefinitionGroup />
   <ItemGroup />
   <Import Project="$(VCTargetsPath)\Microsoft.Cpp.targets" />
   <ImportGroup Label="ExtensionTargets" />
 </Project>
```

Le sezioni seguenti descrivono lo scopo di ciascuno di questi elementi e i motivi per cui vengono ordinati in questo modo:

### <a name="project-element"></a>Elemento di progetto

```xml
<Project DefaultTargets="Build" ToolsVersion="4.0" xmlns='http://schemas.microsoft.com/developer/msbuild/2003' >
```

`Project`è il nodo radice. Specifica la versione di MSBuild da usare e anche la destinazione predefinita da eseguire quando questo file viene passato a MSBuild.exe.

### <a name="projectconfigurations-itemgroup-element"></a>Elemento ProjectConfigurations ItemGroup

```xml
<ItemGroup Label="ProjectConfigurations" />
```

`ProjectConfigurations`contiene la descrizione di configurazione di progetto. Esempi sono Debug | Win32, versione | Win32, Debug | ARM e così via. Molte impostazioni di progetto sono specifiche di una determinata configurazione. Ad esempio, si verrà probabilmente si desidera impostare le proprietà di ottimizzazione di una build di rilascio, ma non una build di debug.

Il `ProjectConfigurations` gruppo di elementi non viene utilizzato in fase di compilazione. IDE di Visual Studio richiede per caricare il progetto. Questo gruppo di articoli possa essere spostato in un file con estensione props e importato in un file con estensione vcxproj. Tuttavia, in tal caso, se è necessario aggiungere o rimuovere le configurazioni, è necessario modificare manualmente il file con estensione props; non è possibile utilizzare l'IDE.

### <a name="projectconfiguration-elements"></a>Elementi di configurazione progetto

Il frammento di codice seguente viene illustrata una configurazione di progetto. In questo esempio "Debug | x 64' è il nome della configurazione. Il nome di configurazione di progetto deve essere in $(Configuration)|$(Platform). il formato Un nodo di configurazione di progetto può contenere due proprietà: configurazione e piattaforma. Tali proprietà verranno impostate automaticamente con i valori specificati in questo caso, quando è attiva la configurazione.

   ```xml
   <ProjectConfiguration Include="Debug|x64">
     <Configuration>Debug</Configuration>
     <Platform>x64</Platform>
   </ProjectConfiguration>
   ```

L'IDE prevede di trovare una configurazione di progetto per qualsiasi combinazione di valori di configurazione e piattaforma utilizzata in tutti gli elementi di configurazione progetto. Spesso questo significa che un progetto potrebbe avere le configurazioni di progetto non ha significato per soddisfare questo requisito. Ad esempio, se un progetto ha queste configurazioni:

- Debug|Win32
- Retail|Win32
- Ottimizzazione di 32 bit speciale | Win32

quindi è necessario che abbia queste configurazioni, anche se non è significativo per x64 "Ottimizzazione 32-bit speciale":

- Debug|x64
- Retail|x64
- Ottimizzazione di 32 bit speciale | x64

È possibile disabilitare la compilazione e distribuire i comandi per qualsiasi configurazione nel **Gestione configurazione di soluzione**.

### <a name="globals-propertygroup-element"></a>Elemento Globals PropertyGroup

```xml
 <PropertyGroup Label="Globals" />
```

`Globals`contiene le impostazioni a livello di progetto, ad esempio ProjectGuid RootNamespace e ApplicationType / ApplicationTypeRevision. Spesso, le ultime due definiscono la destinazione del sistema operativo. Un progetto può avere come destinazione solo un singolo del sistema operativo che i riferimenti ed elementi di progetto non possono avere attualmente le condizioni. Queste proprietà sono in genere non viene sottoposto a override in un' posizione nel file di progetto. Questo gruppo non è dipendente dalla configurazione e pertanto in genere è presente un solo gruppo di elementi globali nel file di progetto.

### <a name="microsoftcppdefaultprops-import-element"></a>Elemento di importazione di Microsoft.cpp

```xml
<Import Project="$(VCTargetsPath)\Microsoft.Cpp.default.props" />
```

Il **Microsoft.cpp** finestra delle proprietà viene fornito con Visual Studio e non può essere modificato. Contiene le impostazioni predefinite per il progetto. Le impostazioni predefinite potrebbero variare a seconda di ApplicationType.

### <a name="configuration-propertygroup-elements"></a>Elementi PropertyGroup di configurazione

```xml
<PropertyGroup Label="Configuration" />
```

Oggetto `Configuration` gruppo di proprietà ha una condizione di configurazione collegati (ad esempio `Condition=”'$(Configuration)|$(Platform)'=='Debug|Win32'”`) ed è disponibile in più copie, uno per ogni configurazione. Questo gruppo di proprietà contiene le proprietà impostate per una configurazione specifica. Proprietà di configurazione includono PlatformToolset e controllarne l'inclusione di finestre delle proprietà di sistema in **Microsoft.cpp**. Ad esempio, se si definisce la proprietà `<CharacterSet>Unicode</CharacterSet>`, quindi la finestra delle proprietà di sistema **microsoft. Cpp.unicodesupport.props** verrà incluso. Se si analizza **Microsoft.cpp**, verrà visualizzata la riga: `<Import Condition=”'$(CharacterSet)' == 'Unicode'”   Project=”$(VCTargetsPath)\microsoft.Cpp.unicodesupport.props”/>`.

### <a name="microsoftcppprops-import-element"></a>Elemento di importazione di Microsoft.cpp

```xml
<Import Project="$(VCTargetsPath)\Microsoft.Cpp.props" />
```

Il **Microsoft.cpp** finestra delle proprietà (direttamente o tramite le importazioni) definisce i valori predefiniti per molte proprietà specifici dello strumento quali ottimizzazione e l'avviso di livello le proprietà del compilatore TypeLibraryName dello strumento MIDL proprietà e così via. Importa anche diverse finestre delle proprietà di sistema in base alle quali le proprietà di configurazione sono definite nel gruppo di proprietà immediatamente precedente.

### <a name="extensionsettings-importgroup-element"></a>Elemento ExtensionSettings ImportGroup

```xml
<ImportGroup Label="ExtensionSettings" />
```

Il `ExtensionSettings` gruppo contiene le importazioni per le finestre delle proprietà che fanno parte delle personalizzazioni di compilazione. Una personalizzazione di compilazione è definita da un massimo di tre file: un file con estensione targets, un file con estensione props e un file XML. Questo gruppo di importazione contiene le importazioni per il file con estensione props.

### <a name="propertysheets-importgroup-elements"></a>Elementi PropertySheets ImportGroup

```xml
<ImportGroup Label="PropertySheets" />
```

Il `PropertySheets` gruppo contiene le importazioni relative finestre delle proprietà utente. Queste sono le finestre delle proprietà aggiunti tramite la visualizzazione di gestione di proprietà in Visual Studio. L'ordine in cui sono elencate le importazioni è importante e si riflette in Gestione proprietà. Il file di progetto contiene in genere più istanze di questo tipo di gruppo di importazione, uno per ogni configurazione di progetto.

### <a name="usermacros-propertygroup-element"></a>Elemento UserMacros PropertyGroup

```xml
<PropertyGroup Label="UserMacros" />
```

`UserMacros`contiene le proprietà create come variabili che vengono utilizzate per personalizzare il processo di compilazione. Ad esempio, è possibile definire una macro utente per definire il percorso di output personalizzato come $(CustomOutputPath) e utilizzarla per definire altre variabili. Questo gruppo di proprietà ospita tali proprietà. Si noti che in Visual Studio, questo gruppo è vuoto nel file di progetto perché Visual C++ non supporta le macro utente per le configurazioni. Le macro utente sono supportate nelle finestre delle proprietà.

### <a name="per-configuration-propertygroup-elements"></a>Elementi PropertyGroup di operazioni di configurazione

```xml
<PropertyGroup />
```

Sono presenti più istanze di questo gruppo di proprietà, uno per ogni configurazione per tutte le configurazioni di progetto. Ogni gruppo di proprietà deve avere una condizione di configurazione associata. Se sono presenti, tutte le configurazioni di **le proprietà del progetto** finestra di dialogo non funzionerà correttamente. A differenza dei gruppi di proprietà precedenti, questo non hanno un'etichetta. Questo gruppo contiene le impostazioni di configurazione a livello di progetto. Queste impostazioni si applicano a tutti i file che fanno parte del gruppo di elementi specificato. Definizione di elemento di personalizzazione di compilazione qui inizializzazione dei metadati.

Questo elemento PropertyGroup deve seguire `<Import Project="$(VCTargetsPath)\Microsoft.Cpp.props" />` e non deve essere presente alcun PropertyGroup altri senza un'etichetta prima di esso (in caso contrario la modifica della proprietà di progetto non funzionerà correttamente).

### <a name="per-configuration-itemdefinitiongroup-elements"></a>Elementi di configurazione-ItemDefinitionGroup

```xml
 <ItemDefinitionGroup />
```

Contiene le definizioni di elementi. Queste devono seguire le stesse regole condizioni gli elementi PropertyGroup senza etichetta per ogni configurazione.

### <a name="itemgroup-elements"></a>Elementi ItemGroup

```xml
<ItemGroup />
```

Contiene gli elementi del progetto (file di origine e così via). Le condizioni non sono supportate per gli elementi di progetto (ovvero, tipi di elemento che sono considerati elementi di progetto dalle definizioni di regole).

I metadati devono avere le condizioni di configurazione per ogni configurazione, anche se sono uguali. Ad esempio:

   ```xml
   <ItemGroup>
     <ClCompile Include="stdafx.cpp">
       <TreatWarningAsError Condition="‘$(Configuration)|$(Platform)’==’Debug|Win32’">true</TreatWarningAsError>
       <TreatWarningAsError Condition="‘$(Configuration)|$(Platform)’==’Debug|x64’">true</TreatWarningAsError>
     </ClCompile>
   </ItemGroup>
   ```

Il sistema di progetto Visual C++ attualmente non supporta i caratteri jolly negli elementi di progetto.

   ```xml
   <ItemGroup>
     <ClCompile Include="*.cpp"> <!--Error-->
   </ItemGroup>
   ```

Il sistema di progetto Visual C++ attualmente non supporta le macro negli elementi di progetto.

   ```xml
   <ItemGroup>
     <ClCompile Include="$(IntDir)\generated.cpp"> <!--not guaranteed to work in all scenarios-->
   </ItemGroup>
   ```

I riferimenti vengono specificati in un ItemGroup e hanno le seguenti limitazioni:

- I riferimenti non supportano le condizioni.
- Fa riferimento ai metadati non supportano le condizioni.

### <a name="microsoftcpptargets-import-element"></a>Elemento Microsoft.Cpp.targets Import

```xml
<Import Project="$(VCTargetsPath)\Microsoft.Cpp.targets" />
```

Definisce, direttamente o tramite le importazioni, destinazioni di Visual C++, ad esempio compilazione, pulitura e così via.

### <a name="extensiontargets-importgroup-element"></a>Elemento ExtensionTargets ImportGroup

```xml
<ImportGroup Label="ExtensionTargets" />
```

Questo gruppo contiene le importazioni per i file di destinazione della personalizzazione di compilazione.

## <a name="impact-of-incorrect-ordering"></a>Impatto di ordinamento non corretto

IDE di Visual Studio dipende il file di progetto con che l'ordine descritto in precedenza. Ad esempio, quando si definisce un valore di proprietà nelle pagine delle proprietà, l'IDE in genere inserire la definizione di proprietà nel gruppo di proprietà con l'etichetta vuota. In questo modo si garantisce che i valori predefiniti introdotti nelle finestre delle proprietà di sistema vengono sovrascritte dai valori definiti dall'utente. Allo stesso modo, vengono importati i file di destinazione alla fine poiché utilizzano le proprietà definite in precedenza e poiché in genere non definiscono alle stesse proprietà. Analogamente, le finestre delle proprietà utente vengono importate dopo le finestre delle proprietà di sistema (incluso tramite **Microsoft.cpp**). In questo modo si garantisce che l'utente può eseguire l'override di eventuali valori predefiniti introdotti dalla finestra delle proprietà del sistema.

Se un file con estensione vcxproj non seguire questo layout, i risultati della compilazione potrebbero non essere quello previsto. Ad esempio, se si importa erroneamente una finestra delle proprietà di sistema dopo le finestre delle proprietà definite dall'utente, le impostazioni utente verranno sovrascritte dalle finestre delle proprietà di sistema.

Anche l'IDE fase di progettazione dipende in parte corretto ordinamento degli elementi. Ad esempio, se il file con estensione vcxproj non dispone di `PropertySheets` potrebbe non essere in grado di determinare la posizione di una nuova finestra delle proprietà che l'utente ha creato nel gruppo di importazione, l'IDE **Gestione proprietà**. Ciò potrebbe causare una finestra dell'utente viene sottoposta a override da una finestra di sistema. Sebbene l'euristica utilizzata dall'IDE in grado di tollerare minori nel layout del file con estensione vcxproj, si consiglia di non deviare dalla struttura di cui è illustrata in precedenza in questo articolo.

## <a name="how-the-ide-uses-element-labels"></a>Utilizzo di etichette elemento IDE

Nell'IDE, quando si imposta la **UseOfAtl** proprietà nella pagina delle proprietà generale, che venga scritto nel gruppo di proprietà di configurazione nel file di progetto, mentre il **TargetName** proprietà nella stessa pagina delle proprietà viene scritto il gruppo di proprietà senza etichetta per ogni configurazione. Visual Studio esamina il file xml della pagina delle proprietà per le informazioni su come scrivere ogni proprietà. Per il **generale** pagina delle proprietà (se si dispone di una versione inglese di Visual Studio Enterprise Edition), se il file è `%ProgramFiles(x86)%\Microsoft Visual Studio\2017\Enterprise\Common7\IDE\VC\VCTargets\1033\general.xml`. Il file di regole XML pagina proprietà definisce le informazioni statiche su una regola e tutte le relative proprietà. Una tale informazione è la posizione preferita di una proprietà della regola nel file di destinazione (il file in cui verrà scritto il relativo valore). La posizione preferita è specificata dall'attributo etichetta sugli elementi di file di progetto.

## <a name="property-sheet-layout"></a>Layout di finestra delle proprietà

Il frammento XML seguente è un layout di un file (con estensione props) proprietà minimo. È simile a un file con estensione vcxproj, e la funzionalità degli elementi con estensione props può essere dedotto dalla discussione precedente.

```xml
<Project ToolsVersion="4.0" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">
  <ImportGroup Label="PropertySheets" />
  <PropertyGroup Label="UserMacros" />
  <PropertyGroup />
  <ItemDefinitionGroup />
  <ItemGroup />
</Project>
```

Per rendere la propria finestra delle proprietà, copiare un file con estensione props nella cartella VCTargets e modificarla in base alle proprie esigenze. Per Visual Studio 2017 Enterprise edition, il percorso di VCTargets predefinito è `%ProgramFiles%\Microsoft Visual Studio\2017\Enterprise\Common7\IDE\VC\VCTargets`.

## <a name="see-also"></a>Vedere anche

[Utilizzo di Proprietà del progetto](working-with-project-properties.md)  
[File XML delle pagine delle proprietà](property-page-xml-files.md)  
