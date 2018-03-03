---
title: "File delle regole di proprietà XML Page | Documenti Microsoft"
ms.custom: 
ms.date: 04/27/2017
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- property page XML files
ms.assetid: dd9d9734-4387-4098-8ba6-85b93507731d
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: b81e8965773c64144059fa433b54484c786159a5
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="property-page-xml-rule-files"></a>File delle regole di proprietà XML Page
File XML nella cartella VCTargets vengono configurate le pagine delle proprietà di progetto nell'IDE. Il percorso esatto dipende da quali edizioni di Visual Studio siano installati e la lingua del prodotto. Per Visual Studio 2017 Enterprise Edition in lingua inglese, il percorso è `%ProgramFiles%\Microsoft Visual Studio\2017\Enterprise\Common7\IDE\VC\VCTargets\1033`. I file XML vengono descritti i nomi delle regole, le categorie e le singole proprietà, tipo di dati, i valori predefiniti e come devono essere visualizzati. Quando si imposta una proprietà nell'IDE, il nuovo valore viene archiviato nel file di progetto.

Gli scenari soli in cui è necessario comprendere che il funzionamento interno di questi file e l'IDE di Visual Studio è (a) si desidera creare una pagina delle proprietà personalizzate o (b) che si desidera personalizzare le proprietà del progetto in modo diverso tramite l'IDE di Visual Studio. 

Prima di tutto, aprire le pagine delle proprietà per un progetto (fare clic con il pulsante destro sul nodo del progetto in **Esplora** , quindi scegliere Proprietà):
   
![Proprietà dei progetti di Visual C++](media/cpp-property-page-2017.png)

Ogni nodo nel **le proprietà di configurazione** viene chiamato una regola. Una regola talvolta rappresenta un singolo strumento come il compilatore, ma in generale il termine si riferisce a un elemento che dispone di proprietà, che viene eseguita e che può produrre un output. Ogni regola viene popolato da un file xml nella cartella VCTargets. Ad esempio, la regola di C/C++ visualizzato qui sopra viene popolata da 'cl.xml'.

Come illustrato in precedenza, ogni regola è un set di proprietà che sono organizzate in categorie. Ogni nodo secondario in una regola rappresenta una categoria. Ad esempio, il nodo di ottimizzazione in C/C++ contiene tutte le proprietà correlate di ottimizzazione dello strumento compilatore. Le proprietà e i relativi valori stessi vengono visualizzati in formato griglia nel riquadro destro.

È possibile aprire cl.xml in blocco note o qualsiasi editor XML (vedere di seguito di snapshot). Verrà visualizzato un nodo radice denominato regola con lo stesso elenco di proprietà definite in essa contenute, viene visualizzato nell'interfaccia utente, insieme ai metadati aggiuntivi.

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
...
``` 

È un file XML corrispondente a ogni nodo in proprietà di configurazione nelle pagine delle proprietà dell'interfaccia utente. È possibile aggiungere o rimuovere le regole nell'interfaccia utente includendo o rimozione di percorsi di file XML corrispondenti nel progetto. Ad esempio, ecco come Microsoft.CppBuild.targets (un livello dalla cartella 1033) include cl.xml:

```xml  
<PropertyPageSchema Condition="'$(ConfigurationType)' != 'Utility'" Include="$(VCTargetsPath)$(LangID)\cl.xml"/>

``` 
Se si rimuovono cl.xml di tutti i dati, si finirà con la struttura seguente:
```xml  
<?xml version="1.0" encoding="utf-8"?>
<Rule>
  <Rule.DataSource />
  <Rule.Categories>
    <Category />
        ...
  </Rule.Categories>
  <BoolProperty />
  <EnumProperty />
  <IntProperty />
  <StringProperty />
  <StringListProperty />
</Rule>
``` 

Nella sezione seguente viene descritto ogni elementi principali e alcuni dei metadati che possono essere collegato.

1. **Regola:** regola è in genere il nodo radice nel file xml; può avere molti attributi:

```xml    
<Rule Name="CL" PageTemplate="tool" SwitchPrefix="/" Order="10"
          xmlns="http://schemas.microsoft.com/build/2009/properties"
          xmlns:x="http://schemas.microsoft.com/winfx/2006/xaml"
          xmlns:sys="clr-namespace:System;assembly=mscorlib">
  <Rule.DisplayName>
    <sys:String>C/C++</sys:String>
  </Rule.DisplayName>
```  

   a. **Nome:** un id per la regola è l'attributo Name. Deve essere univoco tra tutti i file di xml pagina di proprietà per un progetto.

   b. **PageTemplate:** il valore di questo attributo viene utilizzato dall'interfaccia utente di scegliere da una raccolta di modelli di interfaccia utente. Il modello "strumento" esegue il rendering le proprietà in un formato griglia standard. Altri valori nella compilazione per questo attributo sono "debugger" e "generico". Vedere il nodo Debug e generale, rispettivamente, per visualizzare il formato dell'interfaccia utente risultante dall'impostazione di questi valori. L'interfaccia utente per il modello di pagina "debugger" utilizza una casella di riepilogo a discesa per passare tra le proprietà di un debugger differente, mentre il modello "generico" Visualizza le categorie di proprietà diverse in una pagina anziché più nodi secondari categoria sotto la regola nodo. Questo attributo è solo un suggerimento per l'interfaccia utente. il file xml è progettato per essere indipendente dell'interfaccia utente. Un'interfaccia utente diversa è possibile utilizzare questo attributo per scopi diversi.

  c. **SwitchPrefix:** questo è il prefisso utilizzato nella riga di comando per i parametri. Un valore di "/" darà origine a commutatori simili /ZI /nologo, /W3, e così via.

  d. **Ordine:** si tratta di un suggerimento per un potenziale client dell'interfaccia utente il relativo percorso di questa regola rispetto a tutte le altre regole nel sistema.

  e. **xmlns:** si tratta di un elemento XAML standard. È possibile visualizzare tre spazi dei nomi elencati. Questi corrispondono agli spazi dei nomi per la deserializzazione di XAML classi, nomi di sistema e dello schema XAML, rispettivamente.

  f. **DisplayName:** si tratta del nome che viene visualizzato nella pagina delle proprietà dell'interfaccia utente per il nodo di regola. Questo valore viene localizzato. È stato creato DisplayName come elemento figlio della regola anziché come un attributo (ad esempio nome o SwitchPrefix) a causa di localizzazione interno requisiti dello strumento. Dalla prospettiva di XAML, entrambi sono equivalenti. In tal caso, è possibile semplicemente renderlo un attributo per evitare confusione o rimane invariato.

  g. **Origine dati:** molto importante proprietà che indica al sistema di progetto, la posizione da cui il valore della proprietà deve leggere e scrivere e il raggruppamento (illustrato di seguito). Per cl.xml, questi valori sono:

```xml  
       <DataSource Persistence="ProjectFile" ItemType="ClCompile" Label="" HasConfigurationCondition="true" />
```  
   - `Persistence="ProjectFile`indica il sistema del progetto che tutte le proprietà per la regola devono essere scritta nel file di progetto o il file della finestra delle proprietà (a seconda di quale nodo è stato utilizzato per generare le pagine delle proprietà). L'altro valore possibile è "UserFile" che verrà scritto il valore per il file con estensione User.

   - `ItemType="ClCompile"`indica che le proprietà vengono archiviate come metadati ItemDefinition o metadati degli elementi (quest'ultimo solo se le pagine delle proprietà sono state generate da un nodo del file in Esplora soluzioni) di questo tipo di elemento. Se questo campo non è impostato, la proprietà viene scritta come una proprietà comune in un elemento PropertyGroup.

   - `Label=""`che indica se le proprietà sono scritte come `ItemDefinition` metadati, l'etichetta dell'elemento padre ItemDefinitionGroup sarà vuoto (ogni elemento MSBuild può avere un'etichetta). Visual Studio 2017 Usa i gruppi con etichettati per passare il file di progetto con estensione vcxproj. Si noti che i gruppi che contengono la maggior parte delle proprietà di regola dispongano di una stringa vuota come un'etichetta.

   - `HasConfigurationCondition="true"`indica al sistema di progetto di apporre una condizione di configurazione per il valore in modo che abbia effetto solo per la configurazione di progetto corrente (stato apposto la condizione per il gruppo padre o il valore stesso). Ad esempio, aprire le pagine delle proprietà dal nodo di progetto e impostare il valore della proprietà **considera gli avvisi come errori** in **le proprietà di configurazione > generali di C/C++** su "Sì". Il valore seguente viene scritto nel file di progetto. Si noti la condizione di configurazione associato al padre ItemDefinitionGroup.

```xml  
     <ItemDefinitionGroup Condition="‘$(Configuration)|$(Platform)’==’Debug|Win32’">
        <ClCompile>
           <TreatWarningAsError>true</TreatWarningAsError>
        </ClCompile>
     </ItemDefinitionGroup>
 ```
   Se questo valore sono stato impostato nella pagina delle proprietà per un file specifico, ad esempio stdafx.cpp, il valore della proprietà verrebbe scritto nell'elemento stdafx.cpp nel file di progetto, come illustrato di seguito. Si noti come la condizione di configurazione è direttamente collegata i metadati stessi.

 ```xml  
<ItemGroup>
   <ClCompile Include="stdafx.cpp">
      <TreatWarningAsError Condition="‘$(Configuration)|$(Platform)’==’Debug|Win32’">true</TreatWarningAsError>
   </ClCompile>
</ItemGroup>
 ```
   Un altro attributo di **DataSource** non elencate in precedenza è **PersistedName**. È possibile utilizzare questo attributo per rappresentare una proprietà nel file di progetto con un nome diverso. Per impostazione predefinita, questo attributo è impostato per la proprietà **nome**. 

   Una singola proprietà è possibile eseguire l'override DataSource del controllo padre regola. In tal caso, il percorso per il valore della proprietà è diverso dalle altre proprietà della regola.

   h. Esistono altri attributi di una regola, ad esempio descrizione SupportsFileBatching, e così via che non sono riportate di seguito. Esplorando la documentazione per questi tipi, è possibile ottenere il set completo di attributi applicabili a una regola o su qualsiasi altro elemento. In alternativa, è possibile esaminare le proprietà pubbliche nei tipi nel `Microsoft.Build.Framework.XamlTypes` spazio dei nomi nel `Microsoft.Build.Framework .dll` assembly.

   i. **DisplayName**, **PageTemplate**, e **ordine** sono in caso contrario le proprietà correlate all'interfaccia utente che sono presenti in questo modello di dati dell'interfaccia utente indipendente. Queste proprietà sono quasi sicuramente utilizzabile da qualsiasi interfaccia utente che consente di visualizzare le pagine delle proprietà. **DisplayName** e **descrizione** sono due proprietà che sono presenti in quasi tutti gli elementi nel file xml. E sono solo due proprietà che sono localizzate (localizzazione di queste stringhe descritto nel post di versioni successive).

2.  **Categoria:** una regola può avere più categorie. L'ordine in cui le categorie sono elencate nel file xml è un suggerimento per l'interfaccia utente per visualizzare le categorie nello stesso ordine. Ad esempio, l'ordine delle categorie nel nodo C/C++, come illustrato nell'interfaccia utente: generale, l'ottimizzazione, per il preprocessore,...  -corrisponde al tale cl.xml in. Una categoria di esempio è simile al seguente:

```xml  
 <Category Name="Optimization">
    <Category.DisplayName>
        <sys:String>Optimization</sys:String>
    </Category.DisplayName>
 </Category>
```
Illustrato nel frammento di codice precedente il **nome** e **DisplayName** gli attributi che sono state descritte prima. In questo caso, esistono altri attributi un **categoria** può avere che non vengono utilizzati in precedenza. È possibile capire su di essi leggendo la documentazione o esaminando l'assembly utilizzando ildasm.exe.

3. **Proprietà:** questo è l'elemento principale del file xml e contiene l'elenco di tutte le proprietà di questa regola. Ogni proprietà possono essere uno dei cinque tipi di possibili nella struttura XAML precedente. Naturalmente, è possibile usare solo alcuni di tali tipi nel file. Una proprietà ha un numero di attributi che consentono di descrivere RTF. Viene illustrato solo il **StringProperty** qui. Il resto sono molto simili.

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
La maggior parte degli attributi nel frammento di sono state descritte prima. I nuovi file vengono sottotipo, categoria e Switch.

   a. **Sottotipo** è disponibile solo per un attributo **StringProperty** e **StringListProperty**; fornisce informazioni contestuali. Ad esempio, il valore di "file" indica che la proprietà rappresenta un percorso di file. Tali informazioni contestuali viene utilizzate per migliorare l'esperienza di modifica, fornendo una finestra di esplorazione di Windows come editor della proprietà che consente all'utente di scegliere il file in modo visivo.

   b. **Categoria:** viene dichiarata la categoria in cui rientra questa proprietà. Provare a cercare di questa proprietà con il **i file di Output** categoria nell'interfaccia utente.

   c. **Opzione:** quando una regola rappresenta uno strumento,:, ad esempio lo strumento compilatore in questo caso, la maggior parte delle proprietà della regola vengono passate come parametri allo strumento eseguibile durante la fase di compilazione. Il valore di questo attributo indica il commutatore letterale da utilizzare. La proprietà precedente specifica che deve essere lo switch **Fo**. Combinato con il **SwitchPrefix** attributo nell'elemento padre, regole, questa proprietà viene passato per il file eseguibile come **/Fo "Debug\"**  (visibile nella riga di comando per C/C++ nella pagina delle proprietà dell'interfaccia utente).

   Altri attributi della proprietà includono:

   d. **Visible:** se per qualche motivo, non si desidera visualizzati nelle pagine delle proprietà (ma è comunque disponibile durante la fase di compilazione), impostare questo attributo su false la proprietà.

   e. **Sola lettura:** se si desidera fornire una visualizzazione di sola lettura del valore di questa proprietà nelle pagine delle proprietà, impostare questo attributo su true.

   f. **IncludeInCommandLine:** alcune proprietà non è necessario essere passato a uno strumento durante la fase di compilazione. Impostazione di questo attributo su false ne impedirà passati.


