---
title: Struttura dei file con estensione vcxproj e props
ms.date: 09/18/2018
helpviewer_keywords:
- .vcxproj file structure
ms.assetid: 14d0c552-29db-480e-80c1-7ea89d6d8e9c
ms.openlocfilehash: 3b7c7bdad8848a3755db4ea565117459c72e939b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62317120"
---
# <a name="vcxproj-and-props-file-structure"></a>Struttura dei file con estensione vcxproj e props

[MSBuild](../msbuild-visual-cpp.md) è il sistema di progetto predefinito in Visual Studio. Quando si sceglie **File** > **Nuovo progetto** in Visual C++ viene creato un progetto MSBuild le cui impostazioni vengono archiviate in un file di progetto XML con estensione `.vcxproj`. Il file di progetto può anche importare file con estensione props e targets in cui è possibile archiviare le impostazioni. Nella maggior parte dei casi, non è necessario modificare manualmente il file di progetto e in realtà non è consigliabile farlo, a meno che non si abbia una buona conoscenza di MSBuild. Ogni volta che è possibile utilizzare le pagine delle proprietà di Visual Studio per modificare le impostazioni del progetto (vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md). In alcuni casi, tuttavia, può essere necessario modificare manualmente un file di progetto o una finestra delle proprietà. Per questi scenari, questo articolo contiene informazioni di base sulla struttura del file.

**Importante:**

Se si sceglie di modificare manualmente un file con estensione vcxproj, tenere presente quanto segue:

1. La struttura del file deve seguire una forma prescritta, come descritto in questo articolo.

1. Il sistema di progetto Visual C++ attualmente non supporta i caratteri jolly negli elementi del progetto. Non supporta ad esempio:

   ```xml
   <ClCompile Include="*.cpp"/>
   ```

1. Il sistema di progetto Visual C++ attualmente non supporta le macro nei percorsi degli elementi del progetto. Non supporta ad esempio:

   ```xml
   <ClCompile Include="$(IntDir)\generated.cpp"/>
   ```

   Se una macro "non è supportata", significa che non ne è garantito il funzionamento in tutte le operazioni nell'IDE. Le macro il cui valore non cambia in base alla configurazione funzionano correttamente, ma è possibile che non vengano mantenute se un elemento viene spostato in un progetto o un filtro diverso. Le macro i cui valori cambiano in base alla configurazione, invece, creano problemi perché l'IDE non prevede percorsi di elementi di progetto diversi per configurazioni di progetto diverse.

1. Per aggiungere, rimuovere o modificare correttamente le proprietà del progetto quando queste vengono modificate nella finestra di dialogo **Proprietà progetto**, il file deve contenere gruppi separati per ogni configurazione del progetto e le condizioni devono essere espresse in questa forma:

   ```xml
   Condition="'$(Configuration)|$(Platform)'=='Debug|Win32'"
   ```

1. È necessario specificare ogni proprietà nel gruppo con l'etichetta corretta, come specificato nel file delle regole delle proprietà. Per altre informazioni, vedere [File delle regole XML della Pagina delle proprietà](property-page-xml-files.md).

## <a name="vcxproj-file-elements"></a>Elementi del file con estensione vcxproj

È possibile ispezionare il contenuto di un file con estensione vcxproj usando qualsiasi editor di testo o XML. Per visualizzare il file in Visual Studio, fare clic con il pulsante destro del mouse sul progetto in Esplora soluzioni, scegliere **Scarica progetto** e quindi **Modifica Foo.vcxproj**.

Il primo aspetto da notare è che gli elementi di primo livello sono visualizzati in un ordine particolare. Ad esempio:

- La maggior parte dei gruppi di proprietà e di definizioni elementi viene visualizzata dopo l'importazione per Microsoft.Cpp.Default.props.

- Tutte le destinazioni vengono importate alla fine del file.

- Sono presenti più gruppi di proprietà, ognuno con un'etichetta univoca, visualizzati in un ordine particolare.

L'ordine degli elementi nel file di progetto è molto importante perché MSBuild si basa su un modello di valutazione sequenziale.  Se il file di progetto, inclusi tutti i file con estensione props e targets importati, è costituito da più definizioni di una proprietà, l'ultima definizione sostituisce quelle precedenti. Nell'esempio seguente verrà impostato il valore "xyz" durante la compilazione in quanto si tratta dell'ultimo valore rilevato dal motore MSBUild durante la valutazione.

```xml
  <MyProperty>abc</MyProperty>
  <MyProperty>xyz</MyProperty>
```

Il frammento di codice seguente illustra un semplice file con estensione vcxproj. I file con estensione vcxproj generati da Visual Studio conterranno questi elementi MSBuild di primo livello che verranno visualizzati in quest'ordine, anche se possono essere presenti più copie di ognuno di essi. Si noti che gli attributi `Label` sono tag arbitrari usati da Visual Studio soltanto come indicazioni per la modifica. Non hanno altre funzioni.

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

Le sezioni seguenti descrivono lo scopo di ognuno di questi elementi e i motivi per cui vengono ordinati in questo modo:

### <a name="project-element"></a>Elemento Project

```xml
<Project DefaultTargets="Build" ToolsVersion="4.0" xmlns='http://schemas.microsoft.com/developer/msbuild/2003' >
```

`Project` è il nodo radice. Specifica la versione di MSBuild da usare, nonché la destinazione predefinita da eseguire quando il file viene passato a MSBuild.exe.

### <a name="projectconfigurations-itemgroup-element"></a>Elemento ItemGroup ProjectConfigurations

```xml
<ItemGroup Label="ProjectConfigurations" />
```

`ProjectConfigurations` contiene la descrizione della configurazione del progetto. Ad esempio, Debug|Win32, Release|Win32, Debug|ARM e così via. Molte impostazioni di progetto sono specifiche di una determinata configurazione. Si imposteranno, ad esempio, proprietà di ottimizzazione per una build di versione, ma non per una build di debug.

Il gruppo di elementi `ProjectConfigurations` non viene usato in fase di compilazione. L'IDE di Visual Studio lo richiede per caricare il progetto. È possibile spostare questo gruppo di elementi in un file con estensione props e importarlo nel file con estensione vcxproj. Tuttavia, in questo caso, se occorre aggiungere o rimuovere configurazioni, sarà necessario modificare manualmente il file con estensione props. Non sarà possibile usare l'IDE.

### <a name="projectconfiguration-elements"></a>Elementi ProjectConfiguration

Il frammento di codice seguente illustra la configurazione di un progetto. In questo esempio "Debug|x64" è il nome della configurazione. Il nome della configurazione del progetto deve essere nel formato $(Configuration)|$(Platform). Un nodo di configurazione di progetto può avere due proprietà: Configurazione e piattaforma. Quando la configurazione è attiva, queste proprietà verranno automaticamente impostate sui valori specificati qui.

```xml
<ProjectConfiguration Include="Debug|x64">
  <Configuration>Debug</Configuration>
  <Platform>x64</Platform>
</ProjectConfiguration>
```

L'IDE presuppone di trovare una configurazione di progetto per qualsiasi combinazione di valori di configurazione e piattaforma usata in tutti gli elementi ProjectConfiguration. Ciò spesso comporta la possibilità che un progetto includa configurazioni di progetto non significative per soddisfare questo requisito. Se, ad esempio, un progetto include queste configurazioni:

- Debug|Win32

- Retail|Win32

- Special 32-bit Optimization|Win32

dovrà includere anche queste configurazioni, sebbene "Special 32-bit Optimization" non sia una configurazione significativa per x64:

- Debug|x64

- Retail|x64

- Special 32-bit Optimization|x64

È possibile disabilitare i comandi di compilazione e distribuzione per qualsiasi configurazione in **Gestione configurazione della soluzione**.

### <a name="globals-propertygroup-element"></a>Elemento PropertyGroup Globals

```xml
<PropertyGroup Label="Globals" />
```

`Globals` contiene impostazioni a livello di progetto quali ProjectGuid, RootNamespace e ApplicationType/ApplicationTypeRevision. Le ultime due spesso definiscono il sistema operativo di destinazione. Un progetto può avere come destinazione un solo sistema operativo poiché attualmente riferimenti ed elementi di progetto non possono includere condizioni. Di queste proprietà non viene in genere eseguito l'override in altre posizioni nel file di progetto. Questo gruppo non dipende dalla configurazione. Pertanto, il file di progetto contiene in genere un solo gruppo Globals.

### <a name="microsoftcppdefaultprops-import-element"></a>Elemento Import Microsoft.Cpp.default.props

```xml
<Import Project="$(VCTargetsPath)\Microsoft.Cpp.default.props" />
```

La finestra delle proprietà **Microsoft.Cpp.default.props** è inclusa in Visual Studio e non può essere modificata. Contiene le impostazioni predefinite del progetto. Le impostazioni predefinite possono variare, a seconda di ApplicationType.

### <a name="configuration-propertygroup-elements"></a>Elementi PropertyGroup Configuration

```xml
<PropertyGroup Label="Configuration" />
```

Un gruppo di proprietà `Configuration` ha una condizione di configurazione associata (ad esempio, `Condition=”'$(Configuration)|$(Platform)'=='Debug|Win32'”`) ed è disponibile in più copie, una per configurazione. Questo gruppo di proprietà ospita le proprietà impostate per una configurazione specifica. Le proprietà di configurazione includono PlatformToolset e controllano anche l'inclusione delle finestre delle proprietà di sistema in **Microsoft.Cpp.props**. Ad esempio, se si definisce la proprietà `<CharacterSet>Unicode</CharacterSet>`, verrà inclusa la finestra delle proprietà di sistema **microsoft.Cpp.unicodesupport.props**. Se si esamina **Microsoft.Cpp.props**, si noterà la riga: `<Import Condition=”'$(CharacterSet)' == 'Unicode'”   Project=”$(VCTargetsPath)\microsoft.Cpp.unicodesupport.props”/>`.

### <a name="microsoftcppprops-import-element"></a>Elemento Import Microsoft.Cpp.props

```xml
<Import Project="$(VCTargetsPath)\Microsoft.Cpp.props" />
```

La finestra delle proprietà **Microsoft.Cpp.props** definisce, direttamente o tramite le importazioni, i valori predefiniti di molte proprietà specifiche di alcuni strumenti, ad esempio le proprietà del livello di avviso e di ottimizzazione del compilatore, la proprietà TypeLibraryName dello strumento MIDL e così via. Importa anche diverse finestre delle proprietà di sistema in base alle proprietà di configurazione definite nel gruppo di proprietà immediatamente precedente.

### <a name="extensionsettings-importgroup-element"></a>Elemento ImportGroup ExtensionSettings

```xml
<ImportGroup Label="ExtensionSettings" />
```

Il gruppo `ExtensionSettings` contiene importazioni per le finestre delle proprietà che fanno parte delle personalizzazioni delle compilazioni. Una personalizzazione compilazioni è definita da un massimo di tre file: un file con estensione targets, uno con estensione props e un altro con estensione xml. Questo gruppo di importazioni contiene le importazioni per il file con estensione props.

### <a name="propertysheets-importgroup-elements"></a>Elementi ImportGroup PropertySheets

```xml
<ImportGroup Label="PropertySheets" />
```

Il gruppo `PropertySheets` contiene le importazioni per le finestre delle proprietà utente, ovvero quelle che vengono aggiunte tramite la visualizzazione Gestione proprietà in Visual Studio. L'ordine in cui sono elencate queste importazioni è importante ed è riportato in Gestione proprietà. Il file di progetto normalmente contiene più istanze di questo tipo di gruppo di importazioni, una per ogni configurazione di progetto.

### <a name="usermacros-propertygroup-element"></a>Elemento PropertyGroup UserMacros

```xml
<PropertyGroup Label="UserMacros" />
```

`UserMacros` contiene proprietà create come variabili che vengono usate per personalizzare il processo di compilazione. È possibile, ad esempio, definire una macro utente per definire un percorso di output personalizzato come $(CustomOutputPath) e usarla per definire altre variabili. Questo gruppo di proprietà ospita queste proprietà. Si noti che in Visual Studio questo gruppo non è popolato nel file di progetto perché Visual C++ non supporta le macro utente per le configurazioni. Le macro utente sono supportate nelle finestre delle proprietà.

### <a name="per-configuration-propertygroup-elements"></a>Elementi PropertyGroup a livello di singola configurazione

```xml
<PropertyGroup />
```

Esistono più istanze di questo gruppo di proprietà, una per configurazione per tutte le configurazioni di progetto. Ogni gruppo di proprietà deve avere una condizione di configurazione associata. Se una configurazione risulta mancante, la finestra di dialogo **Proprietà progetto** non funzionerà correttamente. A differenza dei gruppi di proprietà precedenti, questo gruppo non ha un'etichetta. Esso contiene le impostazioni a livello di configurazione di progetto. Queste impostazioni si applicano a tutti i file che fanno parte del gruppo di elementi specificato. I metadati delle definizioni degli elementi della personalizzazione compilazioni vengono inizializzati qui.

Questo elemento PropertyGroup deve seguire `<Import Project="$(VCTargetsPath)\Microsoft.Cpp.props" />` e non deve essere preceduto da altri elementi PropertyGroup senza etichetta. In caso contrario, non sarà possibile modificare in modo corretto le proprietà di progetto.

### <a name="per-configuration-itemdefinitiongroup-elements"></a>Elementi ItemDefinitionGroup a livello di singola configurazione

```xml
<ItemDefinitionGroup />
```

Contiene le definizioni degli elementi che devono seguire le stesse regole di condizioni degli elementi PropertyGroup a livello di singola configurazione senza etichetta.

### <a name="itemgroup-elements"></a>Elementi ItemGroup

```xml
<ItemGroup />
```

Contiene gli elementi (file di origine e altro) del progetto. Per gli elementi del progetto, ovvero i tipi di elemento considerati come elementi del progetto dalle definizioni delle regole, non sono supportate condizioni.

I metadata devono includere le condizioni di configurazione per ogni configurazione, anche se sono le stesse. Ad esempio:

```xml
<ItemGroup>
  <ClCompile Include="stdafx.cpp">
    <TreatWarningAsError Condition="‘$(Configuration)|$(Platform)’==’Debug|Win32’">true</TreatWarningAsError>
    <TreatWarningAsError Condition="‘$(Configuration)|$(Platform)’==’Debug|x64’">true</TreatWarningAsError>
  </ClCompile>
</ItemGroup>
```

Il sistema di progetto Visual C++ attualmente non supporta i caratteri jolly negli elementi del progetto.

```xml
<ItemGroup>
  <ClCompile Include="*.cpp"> <!--Error-->
</ItemGroup>
```

Il sistema di progetto Visual C++ attualmente non supporta le macro negli elementi del progetto.

```xml
<ItemGroup>
  <ClCompile Include="$(IntDir)\generated.cpp"> <!--not guaranteed to work in all scenarios-->
</ItemGroup>
```

I riferimenti sono specificati in un elemento ItemGroup e prevedono le limitazioni seguenti:

- I riferimenti non supportano condizioni.

- I metadati dei riferimenti non supportano condizioni.

### <a name="microsoftcpptargets-import-element"></a>Elemento Import Microsoft.Cpp.targets

```xml
<Import Project="$(VCTargetsPath)\Microsoft.Cpp.targets" />
```

Definisce, direttamente o tramite le importazioni, le destinazioni di Visual C++, ad esempio quelle di compilazione, pulizia e così via.

### <a name="extensiontargets-importgroup-element"></a>Elemento ImportGroup ExtensionTargets

```xml
<ImportGroup Label="ExtensionTargets" />
```

Questo gruppo contiene le importazioni per i file di destinazione della personalizzazione compilazioni.

## <a name="impact-of-incorrect-ordering"></a>Impatto di un ordinamento non corretto

L'IDE di Visual Studio dipende dal file di progetto con l'ordinamento descritto in precedenza. Ad esempio, quando si definisce il valore di una proprietà nelle pagine delle proprietà, l'IDE inserisce in genere la definizione della proprietà nel gruppo di proprietà con l'etichetta vuota. In questo modo si garantisce che i valori predefiniti introdotti nelle finestre delle proprietà di sistema vengano sovrascritti dai valori definiti dall'utente. In modo analogo, i file di destinazione vengono importati alla fine poiché usano le proprietà definite in precedenza e in genere non definiscono essi stessi le proprietà. Allo stesso modo, le finestre delle proprietà utente vengono importate dopo le finestre delle proprietà di sistema (incluse tramite **Microsoft.Cpp.props**). Ciò assicura all'utente la possibilità di sostituire le impostazioni predefinite introdotte dalla finestra delle proprietà di sistema.

Se un file con estensione vcxproj non segue questo layout, i risultati della compilazione potrebbero non essere quelli previsti. Se, ad esempio, si importa erroneamente una finestra delle proprietà di sistema dopo le finestre delle proprietà definite dall'utente, le impostazioni utente verranno sostituite dalle finestre delle proprietà di sistema.

Anche l'esperienza della fase di progettazione in ambiente IDE dipende in qualche modo dal corretto ordinamento degli elementi. Ad esempio, se il file con estensione vcxproj non include il gruppo di importazioni `PropertySheets`, l'IDE potrebbe non essere in grado di determinare la posizione in cui inserire una nuova finestra delle proprietà creata dall'utente in **Gestione proprietà**. Ciò potrebbe determinare la sostituzione di una finestra utente con una finestra di sistema. Sebbene l'euristica usata dall'IDE sia in grado di tollerare piccole incoerenze nel layout del file con estensione vcxproj, è consigliabile non deviare dalla struttura illustrata in precedenza in questo articolo.

## <a name="how-the-ide-uses-element-labels"></a>Uso delle etichette dell'elemento da parte dell'IDE

Nell'IDE, quando viene impostata la proprietà **UseOfAtl** nella pagina delle proprietà Generale, questa viene scritta nel gruppo delle proprietà di configurazione nel file di progetto, mentre la proprietà **TargetName** nella stessa pagina delle proprietà viene scritta nel gruppo di proprietà a livello di singola configurazione senza etichetta. Visual Studio cerca le informazioni sulla posizione in cui scrivere ogni proprietà nel file XML della pagina delle proprietà. Per la pagina delle proprietà **Generale**, presupponendo che quella in uso sia una versione in lingua inglese di Visual Studio Enterprise Edition, questo file è `%ProgramFiles(x86)%\Microsoft Visual Studio\2017\Enterprise\Common7\IDE\VC\VCTargets\1033\general.xml`. Il file delle regole XML della pagina delle proprietà definisce le informazioni statiche su una regola e tutte le relative proprietà. Queste informazioni sono la posizione preferita di una proprietà Rule nel file di destinazione (il file in cui verrà scritto il relativo valore). La posizione preferita è specificata dall'attributo Label sugli elementi del file di progetto.

## <a name="property-sheet-layout"></a>Layout della finestra delle proprietà

Il frammento XML seguente è un layout minimo del file (con estensione props) di una finestra delle proprietà. È simile a un file con estensione vcxproj e la funzionalità degli elementi con estensione props può essere dedotta dalla discussione precedente.

```xml
<Project ToolsVersion="4.0" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">
  <ImportGroup Label="PropertySheets" />
  <PropertyGroup Label="UserMacros" />
  <PropertyGroup />
  <ItemDefinitionGroup />
  <ItemGroup />
</Project>
```

Per creare una finestra delle proprietà, copiare uno dei file con estensione props nella cartella VCTargets e modificarlo in base alle proprie esigenze. Per Visual Studio 2017 Enterprise Edition, il percorso predefinito di VCTargets è `%ProgramFiles%\Microsoft Visual Studio\2017\Enterprise\Common7\IDE\VC\VCTargets`.

## <a name="see-also"></a>Vedere anche

[Impostare le proprietà del compilatore e di compilazione C++ in Visual Studio](../working-with-project-properties.md)<br/>
[File XML delle pagine delle proprietà](property-page-xml-files.md)
