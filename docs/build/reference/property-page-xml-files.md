---
title: File XML delle pagine delle proprietà
description: Descrizione della pagina delle proprietà C++ dell'IDE di Visual Studio file e contenuto della regola XML.
ms.date: 10/14/2020
helpviewer_keywords:
- property page XML files
ms.openlocfilehash: f8aa893fa2b062da2f1d0784e5a9b1a6f2b30c95
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92921399"
---
# <a name="property-page-xml-rule-files"></a>File XML delle pagine delle proprietà

Le pagine delle proprietà del progetto nell'IDE sono configurate da file XML nella cartella regole predefinite. I file XML descrivono i nomi delle regole, le categorie e le singole proprietà, il tipo di dati, i valori predefiniti e come visualizzarli. Quando si imposta una proprietà nell'IDE, il nuovo valore viene archiviato nel file di progetto.

::: moniker range="msvc-140"

Il percorso della cartella delle regole predefinite dipende dalle impostazioni locali e dalla versione di Visual Studio in uso. In un prompt dei comandi per gli sviluppatori di Visual Studio 2015 o versione precedente la cartella Rules è *`%ProgramFiles(x86)%\MSBuild\Microsoft.Cpp\v4.0\<version>\<locale>`* . Il `<version>` valore è *`v140`* in Visual Studio 2015. `<locale>`È un LCID, ad esempio, `1033` per l'inglese. Si userà un percorso diverso per ogni edizione di Visual Studio installata e per ciascuna lingua. Ad esempio, il percorso predefinito della cartella Rules per Visual Studio 2015 Community Edition in inglese potrebbe essere *`C:\Program Files (x86)\MSBuild\Microsoft.Cpp\v4.0\v140\1033\`* .

::: moniker-end

::: moniker range="msvc-150"

Il percorso della cartella delle regole predefinite dipende dalle impostazioni locali e dalla versione di Visual Studio in uso. In un prompt dei comandi per gli sviluppatori di Visual Studio 2017 la cartella Rules è *`%VSINSTALLDIR%Common7\IDE\VC\VCTargets\<locale>\`* . `<locale>`È un LCID, ad esempio, `1033` per l'inglese. In un prompt dei comandi per gli sviluppatori di Visual Studio 2015 o versione precedente la cartella Rules è *`%ProgramFiles(x86)%\MSBuild\Microsoft.Cpp\v4.0\<version>\<locale>\`* , dove il `<version>` valore è *`v140`* in Visual Studio 2015. Si userà un percorso diverso per ogni edizione di Visual Studio installata e per ciascuna lingua. Ad esempio, il percorso predefinito della cartella Rules per Visual Studio 2017 Community Edition in inglese potrebbe essere *`C:\Program Files (x86)\Microsoft Visual Studio\2017\Enterprise\Common7\IDE\VC\VCTargets\1033\`* .

::: moniker-end

::: moniker range=">=msvc-160"

Il percorso della cartella delle regole predefinite dipende dalle impostazioni locali e dalla versione di Visual Studio in uso. In un prompt dei comandi per gli sviluppatori di Visual Studio 2019 o versioni successive la cartella Rules è *`%VSINSTALLDIR%MSBuild\Microsoft\VC\<version>\<locale>\`* , dove il `<version>` valore è *`v160`* in Visual Studio 2019. `<locale>`È un LCID, ad esempio, `1033` per l'inglese. In Visual Studio 2017 la cartella Rules è *`%VSINSTALLDIR%Common7\IDE\VC\VCTargets\<locale>\`* . In un prompt dei comandi per gli sviluppatori di Visual Studio 2015 o versione precedente la cartella Rules è *`%ProgramFiles(x86)%\MSBuild\Microsoft.Cpp\v4.0\<version>\<locale>\`* . Si userà un percorso diverso per ogni edizione di Visual Studio installata e per ciascuna lingua. Ad esempio, il percorso predefinito della cartella Rules per Visual Studio 2019 Community Edition in inglese potrebbe essere *`C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Microsoft\VC\v160\1033\`* .

::: moniker-end

È sufficiente comprendere i meccanismi interni di questi file e l'IDE di Visual Studio in un paio di scenari:

- Si desidera creare una pagina delle proprietà personalizzata oppure
- Si vuole personalizzare le proprietà del progetto senza usare l'IDE di Visual Studio.

## <a name="contents-of-rule-files"></a>Contenuto dei file delle regole

Prima di tutto, aprire le pagine delle proprietà per un progetto. Fare clic con il pulsante destro del mouse sul nodo del progetto in **Esplora soluzioni** e scegliere **Proprietà** :

![Mostra la finestra di dialogo delle proprietà del progetto Visual Studio C++](../media/cpp-property-page-2017.png)

Ogni nodo sotto **proprietà di configurazione** viene chiamato *regola* . Una regola talvolta rappresenta un singolo strumento come il compilatore. In generale, il termine si riferisce a un elemento con proprietà, che viene eseguito e che può produrre un output. Ogni regola viene popolata da un file XML nella cartella regole predefinite. Ad esempio, la regola C/C++ riportata qui viene popolata da *"cl.xml"* .

Ogni regola dispone di un set di proprietà, organizzate in *categorie* . Ogni sottonodo sotto una regola rappresenta una categoria. Ad esempio, il nodo **ottimizzazione** in **C/C++** contiene tutte le proprietà correlate all'ottimizzazione dello strumento del compilatore. Le proprietà e i relativi valori vengono sottoposti a rendering in un formato griglia nel riquadro di destra.

È possibile aprire *`cl.xml`* in blocco note o in qualsiasi editor XML. Verrà visualizzato un nodo radice denominato `Rule` . Definisce lo stesso elenco di proprietà che vengono visualizzate nell'interfaccia utente, insieme a metadati aggiuntivi.

```xml
<?xml version="1.0" encoding="utf-8"?>
<!--Copyright, Microsoft Corporation, All rights reserved.-->
<Rule Name="CL" PageTemplate="tool" DisplayName="C/C++" SwitchPrefix="/" Order="10" xmlns="http://schemas.microsoft.com/build/2009/properties" xmlns:x="http://schemas.microsoft.com/winfx/2006/xaml" xmlns:sys="clr-namespace:System;assembly=mscorlib">
  <Rule.Categories>
    <Category Name="General" DisplayName="General" />
    <Category Name="Optimization" DisplayName="Optimization" />
    <Category Name="Preprocessor" DisplayName="Preprocessor" />
    <Category Name="Code Generation" DisplayName="Code Generation" />
    <Category Name="Language" DisplayName="Language" />
    <Category Name="Precompiled Headers" DisplayName="Precompiled Headers" />
    <Category Name="Output Files" DisplayName="Output Files" />
    <Category Name="Browse Information" DisplayName="Browse Information" />
    <Category Name="Advanced" DisplayName="Advanced" />
    <Category Name="All Options" DisplayName="All Options" Subtype="Search" />
    <Category Name="Command Line" DisplayName="Command Line" Subtype="CommandLine" />
  </Rule.Categories>
  <!-- . . . -->
</Rule>
```

È presente un file XML per ogni nodo sotto **proprietà di configurazione** nell'interfaccia utente delle pagine delle proprietà. È possibile aggiungere o rimuovere regole nell'interfaccia utente: questa operazione viene eseguita includendo o rimuovendo i percorsi nei file XML corrispondenti nel progetto. Ad esempio, il modo in cui *`Microsoft.CppBuild.targets`* (trovato un livello superiore alla cartella 1033) include *`cl.xml`* :

```xml
<PropertyPageSchema Condition="'$(ConfigurationType)' != 'Utility'" Include="$(VCTargetsPath)$(LangID)\cl.xml"/>
```

Se si esegue lo striping *`cl.xml`* di tutti i dati, il Framework di base è il seguente:

```xml
<?xml version="1.0" encoding="utf-8"?>
<Rule>
  <Rule.DataSource />
  <Rule.Categories>
    <Category />
    <!-- . . . -->
  </Rule.Categories>
  <BoolProperty />
  <EnumProperty />
  <IntProperty />
  <StringProperty />
  <StringListProperty />
</Rule>
```

Nella sezione successiva vengono descritti ogni elemento principale e alcuni dei metadati che è possibile aggiungere.

### <a name="rule-attributes"></a>Attributi delle regole

Un **`<Rule>`** elemento è il nodo radice del file XML. Può avere molti attributi:

```xml
<Rule Name="CL" PageTemplate="tool" SwitchPrefix="/" Order="10"
          xmlns="http://schemas.microsoft.com/build/2009/properties"
          xmlns:x="http://schemas.microsoft.com/winfx/2006/xaml"
          xmlns:sys="clr-namespace:System;assembly=mscorlib">
  <Rule.DisplayName>
    <sys:String>C/C++</sys:String>
  </Rule.DisplayName>
```

- **`Name`** : L'attributo name è un ID per l'oggetto `Rule` . Deve essere univoco tra tutti i file XML della pagina delle proprietà per un progetto.

- **`PageTemplate`** : Il valore di questo attributo viene usato dall'interfaccia utente per scegliere da una raccolta di modelli di interfaccia utente. Il modello "tool" esegue il rendering delle proprietà sotto forma di griglia standard. Altri valori predefiniti per questo attributo sono "debugger" e "generic". Vedere rispettivamente il nodo Debug e Generale per visualizzare il formato dell'interfaccia utente risultante dall'impostazione di questi valori. L'interfaccia utente per il modello di pagina "debugger" utilizza una casella di riepilogo a discesa per spostarsi tra le proprietà di diversi debugger. Il modello "generico" Visualizza diverse categorie di proprietà in un'unica pagina, anziché avere più nodi secondari di categoria nel `Rule` nodo. Questo attributo è semplicemente un suggerimento per l'interfaccia utente. Il file XML è progettato per essere indipendente dall'interfaccia utente. Un'altra interfaccia utente potrebbe usare questo attributo per scopi diversi.

- **`SwitchPrefix`** : Prefisso utilizzato nella riga di comando per le opzioni. Il valore comporterebbe `"/"` commutazioni simili a **`/ZI`** , **`/nologo`** , **`/W3`** e così via.

- **`Order`** : Un suggerimento per un potenziale client dell'interfaccia utente nella posizione relativa di questo `Rule` rispetto a tutte le altre regole nel sistema.

- **`xmlns`** : Elemento XML standard. È possibile visualizzare tre spazi dei nomi elencati, Questi attributi corrispondono agli spazi dei nomi per le classi di deserializzazione XML, XML Schema e lo spazio dei nomi System, rispettivamente.

- **`DisplayName`** : Nome visualizzato nell'interfaccia utente della pagina delle proprietà per il `Rule` nodo. Questo valore non è localizzato. È stato creato `DisplayName` come elemento figlio di `Rule` anziché come attributo, ad esempio `Name` o, a `SwitchPrefix` causa dei requisiti dello strumento di localizzazione interna. Da una prospettiva XML, entrambi sono equivalenti. È quindi possibile trasformarlo in attributo per evitare confusione o lasciarlo invariato.

- **`DataSource`** : Questa proprietà importante indica al sistema del progetto il percorso per la lettura e la scrittura del valore della proprietà e il relativo raggruppamento (descritto più avanti). Per *`cl.xml`* , questi valori sono:

    ```xml
    <DataSource Persistence="ProjectFile" ItemType="ClCompile" Label="" HasConfigurationCondition="true" />
    ```

  - `Persistence="ProjectFile"` indica al sistema del progetto che tutte le proprietà di `Rule` devono essere scritte nel file di progetto o nel file della finestra delle proprietà, a seconda del nodo utilizzato per generare le pagine delle proprietà. L'altro valore possibile è `"UserFile"` , che consente di scrivere il valore nel *`.user`* file.

  - `ItemType="ClCompile"`: indica che le proprietà saranno archiviate come metadati ItemDefinition o metadati degli elementi di questo tipo di elemento. Questo caso si verifica solo se le pagine delle proprietà sono state generate da un nodo del file in Esplora soluzioni. Se questo campo non è impostato, la proprietà viene scritta come proprietà comune in un PropertyGroup.

  - `Label=""`: quando le proprietà sono scritte come metadati `ItemDefinition`, indica che l'etichetta dell'elemento padre ItemDefinitionGroup sarà vuota. Tutti gli elementi MSBuild possono avere un'etichetta. Visual Studio 2017 e versioni successive usano gruppi con etichette per esplorare il file di progetto con estensione vcxproj. I gruppi che contengono la maggior parte delle `Rule` proprietà hanno una stringa vuota come etichetta.

  - `HasConfigurationCondition="true"`: indica al sistema del progetto di aggiungere una condizione di configurazione al valore in modo che sia applicato solo alla configurazione di progetto corrente. La condizione può essere aggiunta al gruppo padre o al valore stesso. Ad esempio, aprire le pagine delle proprietà dal nodo di progetto e impostare il valore della proprietà **Considera avviso come errore** in **Proprietà di configurazione > C/C++ Generale** su "Sì". Il valore seguente viene scritto nel file di progetto. Si noti la condizione di configurazione associata all'elemento padre ItemDefinitionGroup.

    ```xml
    <ItemDefinitionGroup Condition="'$(Configuration)|$(Platform)'=='Debug|Win32'">
      <ClCompile>
        <TreatWarningAsError>true</TreatWarningAsError>
      </ClCompile>
    </ItemDefinitionGroup>
    ```

     Se questo valore è impostato nella pagina delle proprietà per un file specifico, ad esempio *`stdafx.cpp`* , il valore della proprietà deve essere scritto sotto l' `stdafx.cpp` elemento nel file di progetto, come illustrato di seguito. Si noti come la condizione di configurazione è collegata direttamente ai metadati stessi:

    ```xml
    <ItemGroup>
      <ClCompile Include="stdafx.cpp">
        <TreatWarningAsError Condition="'$(Configuration)|$(Platform)'=='Debug|Win32'">true</TreatWarningAsError>
      </ClCompile>
    </ItemGroup>
    ```

  Un altro attributo di `DataSource` non elencato qui è `PersistedName` . È possibile usare questo attributo per rappresentare una proprietà nel file di progetto usando un nome diverso. Per impostazione predefinita, questo attributo è impostato sulla proprietà `Name` .

  Una singola proprietà può eseguire l'override dell'oggetto `DataSource` dell'elemento padre `Rule` . In tal caso, il percorso del valore della proprietà sarà diverso da quello delle altre proprietà in `Rule` .

- Sono presenti altri attributi di un oggetto `Rule` , tra cui `Description` e `SupportsFileBatching` , che non sono visualizzati qui. Il set completo di attributi applicabile a un oggetto `Rule` o su qualsiasi altro elemento può essere ottenuto esplorando la documentazione per questi tipi. In alternativa, è possibile esaminare le proprietà pubbliche nei tipi dello spazio dei nomi `Microsoft.Build.Framework.XamlTypes` nell'assembly `Microsoft.Build.Framework.dll`.

- **`DisplayName`** , **`PageTemplate`** e **`Order`** sono proprietà correlate all'interfaccia utente presenti in questo modello di dati altrimenti indipendente dall'interfaccia utente. Queste sono quasi sicuramente le proprietà di tutte le interfacce utente usate per visualizzare le pagine delle proprietà. `DisplayName` e `Description` sono due proprietà presenti in quasi tutti gli elementi del file XML. Queste due proprietà sono le uniche localizzate.

### <a name="category-elements"></a>Elementi Category

Un oggetto `Rule` può avere più `Category` elementi. L'ordine in cui le categorie sono elencate nel file XML è un suggerimento per l'interfaccia utente di visualizzare le categorie nello stesso ordine. Ad esempio, l'ordine delle categorie nel nodo **C/C++** visualizzato nell'interfaccia utente corrisponde all'ordine in *`cl.xml`* . Di seguito un esempio di categoria:

```xml
<Category Name="Optimization">
  <Category.DisplayName>
    <sys:String>Optimization</sys:String>
  </Category.DisplayName>
</Category>
```

Questo frammento di codice Mostra gli `Name` `DisplayName` attributi e che sono stati descritti in precedenza. Ancora una volta, è possibile che esistano altri attributi `Category` che non sono mostrati nell'esempio. Per informazioni su questi elementi, leggere la documentazione o esaminare gli assembly usando *`ildasm.exe`* .

### <a name="property-elements"></a>Elementi Property

La maggior parte del file di regola è costituita da `Property` elementi. Contengono l'elenco di tutte le proprietà in un oggetto `Rule` . Ogni proprietà può essere uno dei cinque tipi possibili indicati nel Framework di base: `BoolProperty` , `EnumProperty` , `IntProperty` , `StringProperty` e `StringListProperty` . È possibile che nel file siano presenti solo alcuni di questi tipi. Una proprietà ha diversi attributi che ne consentono la descrizione dettagliata. `StringProperty`Viene descritto qui. Il resto è simile.

```xml
<StringProperty Subtype="file" Name="ObjectFileName" Category="Output Files" Switch="Fo">
  <StringProperty.DisplayName>
    <sys:String>Object File Name</sys:String>
  </StringProperty.DisplayName>
  <StringProperty.Description>
    <sys:String>Specifies a name to override the default object file name; can be file or directory name.(/Fo[name])</sys:String>
  </StringProperty.Description>
</StringProperty>
```

La maggior parte degli attributi nel frammento di codice è stata descritta in precedenza. Le nuove sono `Subtype` , `Category` e `Switch` .

- **`Subtype`** è un attributo disponibile solo per `StringProperty` `StringListProperty` gli elementi e. Fornisce informazioni contestuali. Ad esempio, il valore `file` indica che la proprietà rappresenta un percorso di file. Visual Studio utilizza tali informazioni contestuali per migliorare l'esperienza di modifica. Ad esempio, può fornire una finestra di Esplora risorse che consente all'utente di scegliere visivamente il file come editor della proprietà.

- **`Category`** : La categoria in cui si trova questa proprietà. Provare a cercare questa proprietà nella categoria **File di output** nell'interfaccia utente.

- **`Switch`** : Quando una regola rappresenta uno strumento come lo strumento del compilatore, la maggior parte delle `Rule` proprietà viene passata come passa al file eseguibile dello strumento in fase di compilazione. Il valore di questo attributo indica quale valore letterale del parametro utilizzare. Nell' `<StringProperty>` esempio viene specificato che l'opzione deve essere **`Fo`** . In combinazione con l' `SwitchPrefix` attributo nell'elemento padre `Rule` , questa proprietà viene passata all'eseguibile come  **`/Fo"Debug\"`** . È visibile nella riga di comando di C/C++ nell'interfaccia utente della pagina delle proprietà.

   Altri attributi della proprietà includono:

- **`Visible`** : Se non si desidera che la proprietà venga visualizzata nelle pagine delle proprietà, ma si desidera che sia disponibile in fase di compilazione, impostare questo attributo su `false` .

- **`ReadOnly`** : Se si desidera fornire una visualizzazione di sola lettura del valore di questa proprietà nelle pagine delle proprietà, impostare questo attributo su `true` .

- **`IncludeInCommandLine`** : In fase di compilazione, uno strumento potrebbe non avere bisogno di alcune proprietà. Impostare questo attributo su `false` per impedire che una particolare proprietà venga passata.
