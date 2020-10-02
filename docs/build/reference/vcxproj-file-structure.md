---
title: Struttura dei file con estensione vcxproj e props
description: Il modo in cui i file System. vcxproj e. props del progetto MSBuild nativo C++ archivia le informazioni sul progetto.
ms.date: 09/30/2020
helpviewer_keywords:
- .vcxproj file structure
ms.assetid: 14d0c552-29db-480e-80c1-7ea89d6d8e9c
ms.openlocfilehash: 562ef0c1b371d7212f31da1917d19c012e4cbb24
ms.sourcegitcommit: f7fbdc39d73e1fb3793c396fccf7a1602af7248b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/02/2020
ms.locfileid: "91662282"
---
# <a name="vcxproj-and-props-file-structure"></a>`.vcxproj` e `.props` struttura di file

[MSBuild](../msbuild-visual-cpp.md) è il sistema di progetto predefinito in Visual Studio. Quando si sceglie **file**  >  **nuovo progetto** in Visual C++ si sta creando un progetto MSBuild le cui impostazioni sono archiviate in un file di progetto XML con estensione *`.vcxproj`* . Il file di progetto può inoltre importare *`.props`* file e *`.targets`* file in cui è possibile archiviare le impostazioni.

Si consiglia di creare e modificare *`.vcxproj`* i progetti solo nell'IDE ed evitare il più possibile la modifica manuale. Nella maggior parte dei casi, non è mai necessario modificare manualmente il file di progetto. Quando possibile, è consigliabile usare le pagine delle proprietà di Visual Studio per modificare le impostazioni del progetto. Per altre informazioni, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

Se sono necessarie personalizzazioni non disponibili nell'IDE, è consigliabile aggiungere prop o destinazioni personalizzate. Per inserire le personalizzazioni sono disponibili i *`Directory.Build.props`* *`Directory.Build.targets`* file e, che vengono importati automaticamente in tutti i progetti basati su MSBuild.

In alcuni casi, potrebbe essere comunque necessario modificare manualmente un *`.vcxproj`* file di progetto o una finestra delle proprietà. Non è consigliabile modificarlo manualmente, a meno che non si abbia una conoscenza approfondita di MSBuild e attenersi alle linee guida riportate in questo articolo. Per consentire all'IDE di caricare e aggiornare *`.vcxproj`* automaticamente i file, questi file presentano diverse restrizioni che non si applicano ad altri file di progetto MSBuild. Non sono state progettate per la modifica manuale. Gli errori possono causare l'arresto anomalo o il comportamento dell'IDE in modi imprevisti.

Per gli scenari di modifica manuale, questo articolo contiene informazioni di base sulla struttura di *`.vcxproj`* e sui file correlati.

**Importante:**

Se si sceglie di modificare manualmente un *`.vcxproj`* file, tenere presente quanto segue:

- La struttura del file deve seguire una forma prescritta, come descritto in questo articolo.

- Il sistema del progetto C++ di Visual Studio attualmente non supporta i caratteri jolly o gli elenchi direttamente negli elementi del progetto. Ad esempio, questi moduli non sono supportati:

   ```xml
   <ItemGroup>
     <None Include="*.txt"/>
     <ClCompile Include="a.cpp;b.cpp"/>
   </ItemGroup>
   ```

   Per ulteriori informazioni sul supporto dei caratteri jolly nei progetti e sulle possibili soluzioni alternative, vedere [ `.vcxproj` file e caratteri jolly](vcxproj-files-and-wildcards.md).

- Il sistema del progetto C++ di Visual Studio attualmente non supporta le macro nei percorsi degli elementi del progetto. Questo modulo, ad esempio, non è supportato:

   ```xml
   <ItemGroup>
     <ClCompile Include="$(IntDir)\generated.cpp"/>
   </ItemGroup>
   ```

   "Non supportato" significa che non è garantito che le macro funzionino per tutte le operazioni nell'IDE. Le macro che non modificano il valore in configurazioni diverse dovrebbero funzionare, ma potrebbero non essere conservate se un elemento viene spostato in un filtro o in un progetto diverso. Le macro che modificano il valore per configurazioni diverse causeranno problemi. Questo perché l'IDE non prevede che i percorsi degli elementi di progetto siano diversi per le diverse configurazioni di progetto.

- Per aggiungere, rimuovere o modificare correttamente le proprietà del progetto quando vengono modificate nella finestra di dialogo delle **proprietà del progetto** , il file deve contenere gruppi distinti per ogni configurazione di progetto. Il formato delle condizioni deve essere il seguente:

   ```xml
   Condition="'$(Configuration)|$(Platform)'=='Debug|Win32'"
   ```

- Ogni proprietà deve essere specificata nel gruppo con la relativa etichetta corretta, come specificato nel file delle regole delle proprietà. Per altre informazioni, vedere [File delle regole XML della Pagina delle proprietà](property-page-xml-files.md).

## <a name="vcxproj-file-elements"></a>`.vcxproj` elementi file

È possibile esaminare il contenuto di un *`.vcxproj`* file utilizzando qualsiasi editor di testo o XML. Per visualizzare il file in Visual Studio, fare clic con il pulsante destro del mouse sul progetto in Esplora soluzioni, scegliere **Scarica progetto** e quindi **Modifica Foo.vcxproj**.

Il primo aspetto da notare è che gli elementi di primo livello sono visualizzati in un ordine particolare. Ad esempio:

- La maggior parte dei gruppi di proprietà e di definizioni elementi viene visualizzata dopo l'importazione per Microsoft.Cpp.Default.props.

- Tutte le destinazioni vengono importate alla fine del file.

- Sono presenti più gruppi di proprietà, ognuno con un'etichetta univoca, visualizzati in un ordine particolare.

L'ordine degli elementi nel file di progetto è estremamente importante, perché MSBuild è basato su un modello di valutazione sequenziale.  Se il file di progetto, inclusi tutti i *`.props`* file e importati *`.targets`* , è costituito da più definizioni di una proprietà, l'ultima definizione esegue l'override di quelle precedenti. Nell'esempio seguente viene impostato il valore "xyz" durante la compilazione perché il motore MSBUild rileva l'ultimo durante la relativa valutazione.

```xml
  <MyProperty>abc</MyProperty>
  <MyProperty>xyz</MyProperty>
```

Il frammento di codice seguente mostra un *`.vcxproj`* file minimo. Tutti i *`.vcxproj`* file generati da Visual Studio conterranno questi elementi MSBuild di primo livello. E verranno visualizzati in questo ordine, anche se possono contenere più copie di ogni elemento di livello superiore. Tutti `Label` gli attributi sono tag arbitrari usati solo da Visual Studio come indicazioni per la modifica e non hanno altre funzioni.

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

Le sezioni seguenti descrivono lo scopo di ognuno di questi elementi e perché sono ordinati in questo modo:

### <a name="project-element"></a>Elemento Project

```xml
<Project DefaultTargets="Build" ToolsVersion="4.0" xmlns='http://schemas.microsoft.com/developer/msbuild/2003' >
```

`Project` è il nodo radice. Specifica la versione di MSBuild da usare, nonché la destinazione predefinita da eseguire quando il file viene passato a MSBuild.exe.

### <a name="projectconfigurations-itemgroup-element"></a>Elemento ItemGroup ProjectConfigurations

```xml
<ItemGroup Label="ProjectConfigurations" />
```

`ProjectConfigurations` contiene la descrizione della configurazione del progetto. Ad esempio, Debug|Win32, Release|Win32, Debug|ARM e così via. Molte impostazioni di progetto sono specifiche di una determinata configurazione. È ad esempio possibile impostare le proprietà di ottimizzazione per una build di rilascio, ma non per una build di debug.

Il `ProjectConfigurations` gruppo di elementi non viene utilizzato in fase di compilazione. Per l'IDE di Visual Studio è necessario caricare il progetto. È possibile spostare questo gruppo di elementi in un *`.props`* file e importarlo nel *`.vcxproj`* file. In tal caso, tuttavia, se è necessario aggiungere o rimuovere le configurazioni, è necessario modificare manualmente il *`.props`* file. non è possibile usare l'IDE.

### <a name="projectconfiguration-elements"></a>Elementi ProjectConfiguration

Il frammento di codice seguente illustra la configurazione di un progetto. In questo esempio,' debug | x64' è il nome della configurazione. Il formato del nome della configurazione del progetto deve essere `$(Configuration)|$(Platform)` . Un `ProjectConfiguration` nodo può disporre di due proprietà: `Configuration` e `Platform` . Queste proprietà vengono impostate automaticamente con i valori specificati qui quando la configurazione è attiva.

```xml
<ProjectConfiguration Include="Debug|x64">
  <Configuration>Debug</Configuration>
  <Platform>x64</Platform>
</ProjectConfiguration>
```

L'IDE prevede di trovare una configurazione di progetto per qualsiasi combinazione di `Configuration` `Platform` valori e usati in tutti `ProjectConfiguration` gli elementi. Spesso, significa che un progetto potrebbe avere configurazioni di progetto significative per soddisfare questo requisito. Se, ad esempio, un progetto include queste configurazioni:

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

`Globals` contiene le impostazioni a livello di progetto, ad esempio `ProjectGuid` , `RootNamespace` e `ApplicationType` o `ApplicationTypeRevision` . Le ultime due spesso definiscono il sistema operativo di destinazione. Un progetto può essere destinato a un solo sistema operativo perché attualmente, i riferimenti e gli elementi di progetto non possono avere condizioni. Di queste proprietà non viene in genere eseguito l'override in altre posizioni nel file di progetto. Questo gruppo non è dipendente dalla configurazione e in genere esiste solo un `Globals` gruppo nel file di progetto.

### <a name="microsoftcppdefaultprops-import-element"></a>Elemento Import Microsoft.Cpp.default.props

```xml
<Import Project="$(VCTargetsPath)\Microsoft.Cpp.default.props" />
```

La finestra delle proprietà **Microsoft. cpp. default. props** viene fornita con Visual Studio e non può essere modificata. Contiene le impostazioni predefinite del progetto. Le impostazioni predefinite possono variare, a seconda di ApplicationType.

### <a name="configuration-propertygroup-elements"></a>Elementi PropertyGroup Configuration

```xml
<PropertyGroup Label="Configuration" />
```

Un gruppo di proprietà `Configuration` ha una condizione di configurazione associata (ad esempio, `Condition="'$(Configuration)|$(Platform)'=='Debug|Win32'"`) ed è disponibile in più copie, una per configurazione. Questo gruppo di proprietà ospita le proprietà impostate per una configurazione specifica. Le proprietà di configurazione includono PlatformToolset e controllano anche l'inclusione delle finestre delle proprietà di sistema in **Microsoft.Cpp.props**. Ad esempio, se si definisce la proprietà `<CharacterSet>Unicode</CharacterSet>`, verrà inclusa la finestra delle proprietà di sistema **microsoft.Cpp.unicodesupport.props**. Se si esamina **Microsoft. cpp. props**, verrà visualizzata la riga: `<Import Condition="'$(CharacterSet)' == 'Unicode'" Project="$(VCTargetsPath)\microsoft.Cpp.unicodesupport.props" />` .

### <a name="microsoftcppprops-import-element"></a>Elemento Import Microsoft.Cpp.props

```xml
<Import Project="$(VCTargetsPath)\Microsoft.Cpp.props" />
```

La finestra delle proprietà **Microsoft. cpp. props** (direttamente o tramite importazioni) definisce i valori predefiniti per molte proprietà specifiche degli strumenti. Gli esempi includono le proprietà di ottimizzazione e avviso del compilatore, la proprietà TypeLibraryName dello strumento MIDL e così via. Importa anche le varie finestre delle proprietà di sistema in base alle proprietà di configurazione definite nel gruppo di proprietà immediatamente prima.

### <a name="extensionsettings-importgroup-element"></a>Elemento ImportGroup ExtensionSettings

```xml
<ImportGroup Label="ExtensionSettings" />
```

Il gruppo `ExtensionSettings` contiene importazioni per le finestre delle proprietà che fanno parte delle personalizzazioni delle compilazioni. Una personalizzazione della compilazione è definita da un massimo di tre file: un *`.targets`* file, un file *`.props`* e un *`.xml`* file. Questo gruppo di importazione contiene le importazioni per il *`.props`* file.

### <a name="propertysheets-importgroup-elements"></a>Elementi ImportGroup PropertySheets

```xml
<ImportGroup Label="PropertySheets" />
```

Il gruppo `PropertySheets` contiene le importazioni per le finestre delle proprietà utente, Queste importazioni sono le finestre delle proprietà che si aggiungono tramite la visualizzazione Gestione proprietà in Visual Studio. L'ordine in cui sono elencate queste importazioni è importante ed è riportato in Gestione proprietà. Il file di progetto normalmente contiene più istanze di questo tipo di gruppo di importazioni, una per ogni configurazione di progetto.

### <a name="usermacros-propertygroup-element"></a>Elemento PropertyGroup UserMacros

```xml
<PropertyGroup Label="UserMacros" />
```

`UserMacros` contiene proprietà create come variabili che vengono usate per personalizzare il processo di compilazione. È possibile, ad esempio, definire una macro utente per definire un percorso di output personalizzato come $(CustomOutputPath) e usarla per definire altre variabili. Questo gruppo di proprietà ospita queste proprietà. In Visual Studio questo gruppo non viene popolato nel file di progetto perché Visual C++ non supporta le macro utente per le configurazioni. Le macro utente sono supportate nelle finestre delle proprietà.

### <a name="per-configuration-propertygroup-elements"></a>Elementi PropertyGroup a livello di singola configurazione

```xml
<PropertyGroup />
```

Esistono più istanze di questo gruppo di proprietà, una per configurazione per tutte le configurazioni di progetto. Ogni gruppo di proprietà deve avere una condizione di configurazione associata. Se una configurazione risulta mancante, la finestra di dialogo **Proprietà progetto** non funzionerà correttamente. A differenza dei gruppi di proprietà elencati in precedenza, questo non dispone di un'etichetta. Esso contiene le impostazioni a livello di configurazione di progetto. Queste impostazioni si applicano a tutti i file che fanno parte del gruppo di elementi specificato. I metadati delle definizioni degli elementi della personalizzazione compilazioni vengono inizializzati qui.

Questo PropertyGroup deve `<Import Project="$(VCTargetsPath)\Microsoft.Cpp.props" />` essere seguito da e non deve essere presente alcun altro PropertyGroup senza un'etichetta prima (in caso contrario, la modifica delle proprietà del progetto non funzionerà correttamente).

### <a name="per-configuration-itemdefinitiongroup-elements"></a>Elementi ItemDefinitionGroup a livello di singola configurazione

```xml
<ItemDefinitionGroup />
```

Contiene le definizioni degli elementi Queste definizioni devono rispettare le stesse regole di condizioni degli elementi per configurazione senza etichetta `PropertyGroup` .

### <a name="itemgroup-elements"></a>Elementi ItemGroup

```xml
<ItemGroup />
```

`ItemGroup` gli elementi contengono gli elementi (file di origine e così via) nel progetto. Le condizioni non sono supportate per gli elementi di progetto, ovvero i tipi di elemento considerati come elementi di progetto in base alle definizioni delle regole.

I metadati devono avere condizioni di configurazione per ogni configurazione, anche se sono tutti uguali. Ad esempio:

```xml
<ItemGroup>
  <ClCompile Include="stdafx.cpp">
    <TreatWarningAsError Condition="'$(Configuration)|$(Platform)'=='Debug|Win32'">true</TreatWarningAsError>
    <TreatWarningAsError Condition="'$(Configuration)|$(Platform)'=='Debug|x64'">true</TreatWarningAsError>
  </ClCompile>
</ItemGroup>
```

Il sistema del progetto C++ di Visual Studio attualmente non supporta i caratteri jolly negli elementi del progetto.

```xml
<ItemGroup>
  <ClCompile Include="*.cpp"> <!--Error-->
</ItemGroup>
```

Il sistema del progetto C++ di Visual Studio attualmente non supporta le macro negli elementi di progetto.

```xml
<ItemGroup>
  <ClCompile Include="$(IntDir)\generated.cpp"> <!--not guaranteed to work in all scenarios-->
</ItemGroup>
```

I riferimenti sono specificati in un elemento ItemGroup e prevedono le limitazioni seguenti:

- I riferimenti non supportano le condizioni.

- I metadati dei riferimenti non supportano le condizioni.

### <a name="microsoftcpptargets-import-element"></a>Elemento Import Microsoft.Cpp.targets

```xml
<Import Project="$(VCTargetsPath)\Microsoft.Cpp.targets" />
```

Definisce (direttamente o tramite importazioni) le destinazioni C++, ad esempio compilazione, Pulisci e così via.

### <a name="extensiontargets-importgroup-element"></a>Elemento ImportGroup ExtensionTargets

```xml
<ImportGroup Label="ExtensionTargets" />
```

Questo gruppo contiene le importazioni per i file di destinazione della personalizzazione compilazioni.

## <a name="impact-of-incorrect-ordering"></a>Impatto di un ordinamento non corretto

L'IDE di Visual Studio dipende dal file di progetto con l'ordinamento descritto in precedenza. Ad esempio, quando si definisce il valore di una proprietà nelle pagine delle proprietà, l'IDE inserisce in genere la definizione della proprietà nel gruppo di proprietà con l'etichetta vuota. Questo ordinamento garantisce che i valori predefiniti introdotti nelle finestre delle proprietà di sistema vengano sottoposti a override dai valori definiti dall'utente. Analogamente, i file di destinazione vengono importati alla fine poiché utilizzano le proprietà definite in precedenza e poiché in genere non definiscono le proprietà stesse. Analogamente, le finestre delle proprietà dell'utente vengono importate dopo le finestre delle proprietà di sistema (incluse in *`Microsoft.Cpp.props`* ). Questo ordine assicura che l'utente possa eseguire l'override delle impostazioni predefinite introdotte dalle finestre delle proprietà di sistema.

Se un *`.vcxproj`* file non segue questo layout, i risultati della compilazione potrebbero non essere quelli previsti. Se, ad esempio, si importa erroneamente una finestra delle proprietà di sistema dopo le finestre delle proprietà definite dall'utente, le impostazioni utente vengono sostituite dalle finestre delle proprietà di sistema.

Anche l'esperienza in fase di progettazione dell'IDE dipende da una certa quantità di ordinamento degli elementi corretti. Se, ad esempio, il *`.vcxproj`* file non `PropertySheets` include il gruppo di importazione, l'IDE potrebbe non essere in grado di determinare la posizione in cui inserire una nuova finestra delle proprietà creata dall'utente in **Gestione proprietà**. È possibile che un foglio utente venga sottoposto a override da un foglio di sistema. Sebbene l'euristica usata dall'IDE possa tollerare piccole incoerenze nel *`.vcxproj`* layout dei file, è consigliabile non deviare dalla struttura illustrata in precedenza in questo articolo.

## <a name="how-the-ide-uses-element-labels"></a>Uso delle etichette dell'elemento da parte dell'IDE

Nell'IDE, quando si imposta la proprietà **UseOfAtl** nella pagina delle proprietà generale, viene scritta nel gruppo di proprietà di configurazione nel file di progetto. La proprietà **TargetName** nella stessa pagina delle proprietà viene scritta nel gruppo di proprietà senza etichetta per configurazione. Visual Studio cerca le informazioni sulla posizione in cui scrivere ogni proprietà nel file XML della pagina delle proprietà. Per la pagina delle proprietà **generale** , supponendo di avere una versione in lingua inglese di Visual Studio 2019 Enterprise Edition, il file è `%ProgramFiles(x86)%\Microsoft Visual Studio\2019\Enterprise\Common7\IDE\VC\VCTargets\1033\general.xml` . Il file delle regole XML della pagina delle proprietà definisce le informazioni statiche su una regola e tutte le relative proprietà. Queste informazioni sono la posizione preferita di una proprietà Rule nel file di destinazione (il file in cui verrà scritto il relativo valore). La posizione preferita è specificata dall'attributo Label sugli elementi del file di progetto.

## <a name="property-sheet-layout"></a>Layout della finestra delle proprietà

Il frammento XML seguente è un layout minimo del file (con estensione props) di una finestra delle proprietà. È simile a un *`.vcxproj`* file e la funzionalità degli *`.props`* elementi può essere dedotta dalla discussione precedente.

```xml
<Project ToolsVersion="4.0" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">
  <ImportGroup Label="PropertySheets" />
  <PropertyGroup Label="UserMacros" />
  <PropertyGroup />
  <ItemDefinitionGroup />
  <ItemGroup />
</Project>
```

Per creare una finestra delle proprietà personalizzata, copiare uno dei *`.props`* file presenti nella *`VCTargets`* cartella e modificarlo in modo che sia necessario. Per Visual Studio 2019 Enterprise Edition, il *`VCTargets`* percorso predefinito è `%ProgramFiles%\Microsoft Visual Studio\2019\Enterprise\Common7\IDE\VC\VCTargets` .

## <a name="see-also"></a>Vedere anche

[Impostare le proprietà di compilazione e compilatore C++ in Visual Studio](../working-with-project-properties.md)\
[File XML della pagina delle proprietà](property-page-xml-files.md)\
[`.vcxproj` file e caratteri jolly](vcxproj-files-and-wildcards.md)
