---
title: File delle regole XML delle pagine delle proprietà| Microsoft Docs
ms.custom: ''
ms.date: 04/27/2017
ms.technology:
- cpp-ide
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- property page XML files
ms.assetid: dd9d9734-4387-4098-8ba6-85b93507731d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: fcee2c416fba6a959785826781aefd96b0d06d75
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33339644"
---
# <a name="property-page-xml-rule-files"></a>File XML delle pagine delle proprietà
Le pagine delle proprietà del progetto nell'IDE vengono configurate da file XML nella cartella VCTargets. Il percorso esatto dipende dall'edizione di Visual Studio installata e dalla lingua del prodotto. Per Visual Studio 2017 Enterprise Edition in lingua inglese, il percorso è `%ProgramFiles%\Microsoft Visual Studio\2017\Enterprise\Common7\IDE\VC\VCTargets\1033`. I file XML descrivono i nomi delle regole, le categorie, le singole proprietà, il relativo tipo di dati, i valori predefiniti e la loro visualizzazione. Quando si imposta una proprietà nell'IDE, il nuovo valore viene archiviato nel file di progetto.

Gli unici scenari in cui è necessario sapere come funzionano internamente questi file e l'IDE di Visual Studio sono (a) si vuole creare una pagina delle proprietà personalizzata o (b) si vogliono personalizzare le proprietà del progetto usando strumenti diversi dall'IDE di Visual Studio. 

Per prima cosa, aprire le pagine delle proprietà di un progetto. Fare clic con il pulsante destro del mouse sul nodo del progetto in **Esplora soluzioni** e scegliere Proprietà:
   
![Proprietà di un progetto Visual C++](media/cpp-property-page-2017.png)

Ogni nodo in **Proprietà di configurazione** viene denominato regola. A volte una regola è costituita da un singolo strumento, ad esempio il compilatore. In generale però il termine si riferisce a un elemento che dispone di proprietà, che viene eseguito e che può generare un output. Ogni regola viene popolata da un file XML nella cartella VCTargets. Ad esempio, la regola C/C++ illustrata sopra viene popolata da "cl.xml".

Come detto in precedenza, ogni regola dispone di un set di proprietà organizzate in categorie. Ogni sottonodo di una regola rappresenta una categoria. Ad esempio, il nodo Ottimizzazione in C/C++ contiene tutte le proprietà che si riferiscono all'ottimizzazione dello strumento Compilatore. Le proprietà e i relativi valori vengono visualizzati sotto forma di griglia nel riquadro destro.

È possibile aprire il file cl.xml nel Blocco note o in un qualsiasi editor XML (vedere lo snapshot seguente). Saranno visualizzati un nodo radice denominato Rule insieme allo stesso elenco di proprietà definite nella regola, come visualizzato nell'interfaccia utente, e metadati aggiuntivi.

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

Per ogni nodo in Proprietà di configurazione nell'interfaccia utente delle pagine delle proprietà, esiste un file XML corrispondente. È possibile aggiungere o rimuovere le regole nell'interfaccia utente includendo o rimuovendo i percorsi dei file XML corrispondenti nel progetto. Ecco come, ad esempio, Microsoft.CppBuild.targets (un livello sopra la cartella 1033) include cl.xml:

```xml  
<PropertyPageSchema Condition="'$(ConfigurationType)' != 'Utility'" Include="$(VCTargetsPath)$(LangID)\cl.xml"/>

``` 
Se da cl.xml si eliminano tutti i dati, si otterrà la struttura seguente:
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

Nella sezione seguente vengono descritti tutti gli elementi principali e alcuni dei metadati che possono essere associati.

1. **Rule:** è generalmente il nodo radice nel file XML. Può avere molti attributi:

```xml    
<Rule Name="CL" PageTemplate="tool" SwitchPrefix="/" Order="10"
          xmlns="http://schemas.microsoft.com/build/2009/properties"
          xmlns:x="http://schemas.microsoft.com/winfx/2006/xaml"
          xmlns:sys="clr-namespace:System;assembly=mscorlib">
  <Rule.DisplayName>
    <sys:String>C/C++</sys:String>
  </Rule.DisplayName>
```  

   a. **Name:** questo attributo è un ID della regola. Deve essere univoco tra tutti i file XML delle pagine delle proprietà di un progetto.

   b. **PageTemplate:** l'interfaccia utente usa il valore di questo attributo per scegliere da una raccolta di modelli di interfaccia utente. Il modello "tool" esegue il rendering delle proprietà sotto forma di griglia standard. Altri valori predefiniti per questo attributo sono "debugger" e "generic". Vedere rispettivamente il nodo Debug e Generale per visualizzare il formato dell'interfaccia utente risultante dall'impostazione di questi valori. L'interfaccia utente per il modello di pagina "debugger" usa una casella di riepilogo a discesa per scegliere tra le proprietà di debugger diversi, mentre il modello "generic" visualizza tutte le diverse categorie della proprietà in una sola pagina anziché usare più sottonodi di categoria nel nodo Rule. Questo attributo viene usato solo come suggerimento per l'interfaccia utente. Il file XML è progettato per essere indipendente dell'interfaccia utente. Un'altra interfaccia utente potrebbe usare questo attributo per scopi diversi.

  c. **SwitchPrefix:** il prefisso usato nella riga di comando per le opzioni. Un valore "/" restituirà opzioni simili a /ZI, /nologo, /W3 e così via.

  d. **Order:** un suggerimento a un potenziale client dell'interfaccia utente nel percorso relativo di questa regola rispetto a tutte le altre regole nel sistema.

  e. **xmlns:** un elemento XAML standard. È possibile visualizzare tre spazi dei nomi elencati, che corrispondono rispettivamente agli spazi dei nomi per le classe di deserializzazione XAML, allo spazio dei nomi per lo schema XML e il sistema.

  f. **DisplayName:** il nome visualizzato nell'interfaccia utente della pagina delle proprietà per il nodo Rule. Questo valore non è localizzato. DisplayName è stato creato come elemento figlio di Rule e non come attributo (come ad esempio Name o SwitchPrefix) per via dei requisiti interni dello strumento di localizzazione. Dal punto di vista di XAML, sono entrambi equivalenti. È quindi possibile trasformarlo in attributo per evitare confusione o lasciarlo invariato.

  g. **DataSource:** una proprietà molto importante che indica al sistema del progetto il percorso da cui leggere o in cui scrivere il valore della proprietà e il relativo raggruppamento (spiegato di seguito). Per cl.xml, i valori sono i seguenti:

```xml  
       <DataSource Persistence="ProjectFile" ItemType="ClCompile" Label="" HasConfigurationCondition="true" />
```  
   - `Persistence="ProjectFile`: indica al sistema del progetto che tutte le proprietà di Rule devono essere scritte nel file di progetto o nel file della finestra delle proprietà, a seconda di quale nodo è stato usato per generare le pagine delle proprietà. L'altro valore possibile è "UserFile" che scrive il valore nel file con estensione user.

   - `ItemType="ClCompile"`: indica che le proprietà saranno archiviate come metadati ItemDefinition o metadati degli elementi di questo tipo di elemento. Questo caso si verifica solo se le pagine delle proprietà sono state generate da un nodo del file in Esplora soluzioni. Se questo campo non è impostato, la proprietà viene scritta come proprietà comune in un elemento PropertyGroup.

   - `Label=""`: quando le proprietà sono scritte come metadati `ItemDefinition`, indica che l'etichetta dell'elemento padre ItemDefinitionGroup sarà vuota. Tutti gli elementi MSBuild possono avere un'etichetta. Visual Studio 2017 usa gruppi con etichette per esplorare il file di progetto con estensione vcxproj. Si noti che i gruppi che contengono la maggior parte delle proprietà di Rule usano una stringa vuota come etichetta.

   - `HasConfigurationCondition="true"`: indica al sistema del progetto di aggiungere una condizione di configurazione al valore in modo che sia applicato solo alla configurazione di progetto corrente. La condizione può essere aggiunta al gruppo padre o al valore stesso. Ad esempio, aprire le pagine delle proprietà dal nodo di progetto e impostare il valore della proprietà **Considera avviso come errore** in **Proprietà di configurazione > C/C++ Generale**  su "Sì". Il valore seguente viene scritto nel file di progetto. Si noti la condizione di configurazione associata all'elemento padre ItemDefinitionGroup.

```xml  
     <ItemDefinitionGroup Condition="‘$(Configuration)|$(Platform)’==’Debug|Win32’">
        <ClCompile>
           <TreatWarningAsError>true</TreatWarningAsError>
        </ClCompile>
     </ItemDefinitionGroup>
 ```
   Se questo valore fosse stato impostato nella pagina delle proprietà per un file specifico, ad esempio stdafx.cpp, il valore della proprietà sarebbe stato scritto nell'elemento stdafx.cpp del file di progetto, come illustrato di seguito. Si noti come la condizione di configurazione viene associata direttamente ai metadati stessi.

 ```xml  
<ItemGroup>
   <ClCompile Include="stdafx.cpp">
      <TreatWarningAsError Condition="‘$(Configuration)|$(Platform)’==’Debug|Win32’">true</TreatWarningAsError>
   </ClCompile>
</ItemGroup>
 ```
   Un altro attributo di **DataSource** non elencato in precedenza è **PersistedName**. È possibile usare questo attributo per rappresentare una proprietà nel file di progetto usando un nome diverso. Per impostazione predefinita, questo attributo è impostato sull'elemento **Name** della proprietà. 

   Una singola proprietà può eseguire l'override dell'elemento padre DataSource di Rule. In questo caso il percorso per tale valore della proprietà sarà diverso dalle altre proprietà di Rule.

   h. Esistono altri attributi di Rule, ad esempio Description, SupportsFileBatching, che non sono illustrati in questo articolo. È possibile ottenere informazioni su tutti gli attributi applicabili a Rule o a un qualsiasi altro elemento esplorando la documentazione per questi tipi di elemento. In alternativa, è possibile esaminare le proprietà pubbliche nei tipi dello spazio dei nomi `Microsoft.Build.Framework.XamlTypes` nell'assembly `Microsoft.Build.Framework .dll`.

   i. **DisplayName**, **PageTemplate** e **Order** sono proprietà relative all'interfaccia utente, presenti in questo modello di dati indipendente dall'interfaccia utente. Queste sono quasi sicuramente le proprietà di tutte le interfacce utente usate per visualizzare le pagine delle proprietà. **DisplayName** e **Description** sono due proprietà presenti in quasi tutti gli elementi del file XML. Sono anche le uniche due proprietà localizzate. La localizzazione di queste stringhe sarà descritta in un post successivo.

2.  **Category:** l'elemento Rule può avere più elementi Category. L'ordine in cui le categorie sono elencate nel file XML indica all'interfaccia utente di visualizzare le categorie nello stesso ordine. Ad esempio, l'ordine delle categorie nel nodo C/C++ dell'interfaccia utente, Generale, Ottimizzazione, Preprocessore e così via,  è uguale a quello specificato nel file cl.xml. Di seguito un esempio di categoria:

```xml  
 <Category Name="Optimization">
    <Category.DisplayName>
        <sys:String>Optimization</sys:String>
    </Category.DisplayName>
 </Category>
```
Il frammento di codice illustrato sopra contiene gli attributi **Name** e **DisplayName** descritti in precedenza. Ancora una volta, un elemento **Category** può avere altri attributi che non sono stati tuttavia usati nell'esempio sopra. Leggere la documentazione o esaminare gli assembly che usano ildasm.exe per ottenere informazioni su questi attributi.

3. **Properties:** è l'elemento principale del file XML e contiene l'elenco di tutte le proprietà di questa regola. Ogni proprietà può essere uno dei cinque tipi possibili illustrati nella struttura XAML precedente. Naturalmente, è possibile usare solo alcuni di questi tipi nel file. Una proprietà ha un numero di attributi che la descrivono in modo completo. Qui viene illustrato solo l'attributo **StringProperty**. Gli altri attributi sono molto simili.

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
La maggior parte degli attributi nel frammento di codice è stata descritta in precedenza. I nuovi attributi sono Subtype, Category e Switch.

   a. **Subtype** è un attributo disponibile solo per **StringProperty** e **StringListProperty**. Offre informazioni contestuali. Ad esempio, il valore di "file" indica che la proprietà rappresenta un percorso di file. Queste informazioni contestuali migliorano le funzioni di modifica, offrendo una finestra di Esplora risorse come editor della proprietà in cui l'utente può visivamente scegliere il file.

   b. **Category:** dichiara la categoria in cui rientra questa proprietà. Provare a cercare questa proprietà nella categoria **File di output** nell'interfaccia utente.

   c. **Switch:** quando una regola è rappresentata da uno strumento, ad esempio lo strumento Compilatore come in questo caso, la maggior parte delle proprietà della regola viene passata come opzioni all'eseguibile dello strumento durante la fase di compilazione. Il valore di questo attributo indica il valore letterale dell'opzione da usare. La proprietà precedente indica che l'opzione deve essere **Fo**. Insieme all'attributo **SwitchPrefix** nell'elemento padre Rule, questa proprietà viene passata all'eseguibile come **/Fo "Debug\"**  (visibile nella riga di comando per C/C++ nell'interfaccia utente della pagina delle proprietà).

   Altri attributi della proprietà includono:

   d. **Visible:** se per qualche motivo non si vuole che la proprietà sia visualizzata nelle pagine delle proprietà, ma possa comunque essere disponibile durante la fase di compilazione, impostare questo attributo su False.

   e. **ReadOnly:** se si vuole che la visualizzazione del valore di questa proprietà sia di sola lettura nelle pagine delle proprietà, impostare questo attributo su True.

   f. **IncludeInCommandLine:** è possibile che alcune proprietà non debbano essere passate a uno strumento durante la fase di compilazione. Impostare questo attributo su False per impedire che siano passate.


