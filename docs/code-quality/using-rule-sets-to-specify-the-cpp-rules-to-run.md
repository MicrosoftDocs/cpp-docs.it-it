---
title: Utilizzo di set di regole per specificare le regole C++ da eseguire
ms.date: 07/27/2020
ms.topic: conceptual
f1_keywords:
- vs.codeanalysis.rulesets.native
ms.openlocfilehash: 2f2b11d060b2f02c5fc5874ef135e1ee3550b840
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88845159"
---
# <a name="use-rule-sets-to-specify-the-c-rules-to-run"></a>Usare set di regole per specificare le regole C++ da eseguire

In Visual Studio è possibile creare e modificare un set di *regole* personalizzate per soddisfare specifiche esigenze di progetto associate all'analisi del codice. I set di regole predefiniti vengono archiviati in *`%VSINSTALLDIR%\Team Tools\Static Analysis Tools\Rule Sets`* .

**Visual Studio 2017 versione 15,7 e successive:** È possibile creare set di regole personalizzati utilizzando qualsiasi editor di testo e applicarli nelle compilazioni della riga di comando indipendentemente dal sistema di compilazione in uso. Per altre informazioni, vedere [`/analyze:ruleset`](/cpp/build/reference/analyze-code-analysis).

Per creare un set di regole C++ personalizzato in Visual Studio, è necessario aprire un progetto C/C++ nell'IDE di Visual Studio. Si apre quindi un set di regole standard nell'editor del set di regole e quindi si aggiungono o rimuovono regole specifiche e, facoltativamente, si modifica l'azione che si verifica quando l'analisi del codice determina che una regola è stata violata.

Per creare un nuovo set di regole personalizzate, salvarlo con un nuovo nome file. Il set di regole personalizzate viene assegnato automaticamente al progetto.

## <a name="to-create-a-custom-rule-from-a-single-existing-rule-set"></a>Per creare una regola personalizzata da un singolo set di regole esistente

::: moniker range="<=vs-2017"

1. In Esplora soluzioni aprire il menu di scelta rapida per il progetto, quindi scegliere **Proprietà**.

1. Nella finestra di dialogo **pagine delle proprietà** selezionare la **Configuration Properties** > **Code Analysis** > pagina delle proprietà **generale** analisi del codice delle proprietà di configurazione.

1. Nell'elenco a discesa **set di regole** effettuare una delle operazioni seguenti:

   - Scegliere il set di regole che si desidera personalizzare.

     \- - oppure -

   - Scegliere **\<Browse...>** di specificare un set di regole esistente non incluso nell'elenco.

1. Scegliere **Apri** per visualizzare le regole nell'Editor set di regole.

::: moniker-end
::: moniker range=">=vs-2019"

1. In Esplora soluzioni aprire il menu di scelta rapida per il progetto, quindi scegliere **Proprietà**.

1. Nella finestra di dialogo **pagine delle proprietà** selezionare la pagina delle proprietà **configurazione** > **analisi codice** proprietà > **Microsoft** .

1. Nell'elenco a discesa **regole attive** effettuare una delle operazioni seguenti:

   - Scegliere il set di regole che si desidera personalizzare.

     \- - oppure -

   - Scegliere **\<Browse...>** di specificare un set di regole esistente non incluso nell'elenco.

1. Scegliere **Apri** per visualizzare le regole nell'Editor set di regole.

::: moniker-end

## <a name="to-modify-a-rule-set-in-the-rule-set-editor"></a>Per modificare un set di regole nell'Editor set di regole

- Per modificare il nome visualizzato del set di regole, scegliere **finestra Proprietà**dal menu **Visualizza** . Immettere il nome visualizzato nella casella **nome** . Si noti che il nome visualizzato può essere diverso dal nome del file.

- Per aggiungere tutte le regole del gruppo a un set di regole personalizzate, selezionare la casella di controllo del gruppo. Per rimuovere tutte le regole del gruppo, deselezionare la casella di controllo.

- Per aggiungere una regola specifica al set di regole personalizzate, selezionare la casella di controllo relativa alla regola. Per rimuovere la regola dal set di regole, deselezionare la casella di controllo.

- Per modificare l'azione eseguita quando una regola viene violata in un'analisi del codice, scegliere il campo **azione** per la regola, quindi scegliere uno dei valori seguenti:

     **Avviso** : genera un avviso.

     **Errore** : genera un errore.

     **Info** : genera un messaggio.

     **None** : Disabilita la regola. Questa azione equivale a rimuovere la regola dal set di regole.

## <a name="to-group-filter-or-change-the-fields-in-the-rule-set-editor-by-using-the-rule-set-editor-toolbar"></a>Per raggruppare, filtrare o modificare i campi nell'editor del set di regole tramite la barra degli strumenti Editor set di regole

- Per espandere le regole in tutti i gruppi, scegliere **Espandi tutto**.

- Per comprimere le regole in tutti i gruppi, scegliere **Comprimi tutto**.

- Per modificare il campo in base al quale vengono raggruppate le regole, scegliere il campo dall'elenco **Raggruppa per** . Per visualizzare le regole non raggruppate, scegliere **\<None>** .

- Per aggiungere o rimuovere campi nelle colonne della regola, scegliere **Opzioni colonne**.

- Per nascondere le regole che non si applicano alla soluzione corrente, scegliere **Nascondi regole che non si applicano alla soluzione corrente**.

- Per passare tra le regole di visualizzazione e di occultamento a cui è stata assegnata l'azione di errore, scegliere **Mostra regole che possono generare errori di analisi del codice**.

- Per passare tra le regole di visualizzazione e di occultamento a cui è stata assegnata l'azione di avviso, scegliere **Mostra regole che possono generare avvisi di analisi del codice**.

- Per passare tra le regole di visualizzazione e di occultamento a cui è stata assegnata l'azione **Nessuna** , scegliere **Mostra regole non abilitate**.

- Per aggiungere o rimuovere set di regole predefinite di Microsoft sul set di regole corrente, scegliere **Aggiungi o Rimuovi set di regole figlio**.

## <a name="to-create-a-rule-set-in-a-text-editor"></a>Per creare un set di regole in un editor di testo

È possibile creare un set di regole personalizzato in un editor di testo, archiviarlo in qualsiasi posizione con un' *`.ruleset`* estensione e applicarlo con l' [`/analyze:ruleset`](/cpp/build/reference/analyze-code-analysis) opzione del compilatore.

Nell'esempio seguente viene illustrato un file di set di regole di base che è possibile utilizzare come punto di partenza:

```xml
<?xml version="1.0" encoding="utf-8"?>
<RuleSet Name="New Rule Set" Description="New rules to apply." ToolsVersion="10.0">
  <Rules AnalyzerId="Microsoft.Analyzers.NativeCodeAnalysis" RuleNamespace="Microsoft.Rules.Native">
    <Rule Id="C6001" Action="Warning" />
    <Rule Id="C26494" Action="Warning" />
  </Rules>
</RuleSet>
```

## <a name="ruleset-schema"></a>Schema RuleSet

Nello schema di RuleSet seguente viene descritta la XML Schema di un file di RuleSet. Lo schema di RuleSet viene archiviato in *`%VSINSTALLDIR%\Team Tools\Static Analysis Tools\Schemas\RuleSet.xsd`* . È possibile usarlo per creare RuleSet personalizzati a livello di codice o per verificare se i RuleSet personalizzati rispettano il formato corretto. Per ulteriori informazioni, vedere [procedura: creare un documento XML in base a uno schema XSD](/visualstudio/xml-tools/how-to-create-an-xml-document-based-on-an-xsd-schema).

```xml
<?xml version="1.0" encoding="utf-8"?>
<xs:schema xmlns:xs="http://www.w3.org/2001/XMLSchema">

  <xs:annotation>
    <xs:documentation xml:lang="en">
            Visual Studio Code Analysis Rule Set Schema Definition Language.
            Copyright (c) Microsoft Corporation. All rights reserved.
        </xs:documentation>
  </xs:annotation>

  <!-- Every time this file changes, be sure to change the Validate method for the corresponding object in the code -->

  <xs:element name="RuleSet" type="TRuleSet">
  </xs:element>

  <xs:complexType name="TLocalization">
    <xs:all>
      <xs:element name="Name" type="TName" minOccurs="0" maxOccurs="1" />
      <xs:element name="Description" type="TDescription" minOccurs="0" maxOccurs="1" />
    </xs:all>
    <xs:attribute name="ResourceAssembly" type="TNonEmptyString" use="required" />
    <xs:attribute name="ResourceBaseName" type="TNonEmptyString" use="required" />
  </xs:complexType>

  <xs:complexType name="TRuleHintPaths">
    <xs:sequence>
      <xs:element name="Path" type="TNonEmptyString" minOccurs="0" maxOccurs="unbounded" />
    </xs:sequence>
  </xs:complexType>
  
  <xs:complexType name="TName">
    <xs:attribute name="Resource" type="TNonEmptyString" use="required" />
  </xs:complexType>

  <xs:complexType name="TDescription">
    <xs:attribute name="Resource" type="TNonEmptyString" use="required" />
  </xs:complexType>

  <xs:complexType name="TInclude">
    <xs:attribute name="Path" type="TNonEmptyString" use="required" />
    <xs:attribute name="Action" type="TIncludeAction" use="required" />
  </xs:complexType>

  <xs:complexType name="TIncludeAll">
    <xs:attribute name="Action" type="TIncludeAllAction" use="required" />
  </xs:complexType>

  <xs:complexType name="TRule">
    <xs:attribute name="Id" type="TNonEmptyString" use="required" />
    <xs:attribute name="Action" type="TRuleAction" use="required" />
  </xs:complexType>

  <xs:complexType name="TRules">
    <xs:sequence>
      <xs:element name="Rule" type="TRule" minOccurs="0" maxOccurs="unbounded" />
    </xs:sequence>
    <xs:attribute name="AnalyzerId" type="TNonEmptyString" use="required" />
    <xs:attribute name="RuleNamespace" type="TNonEmptyString" use="required" />
  </xs:complexType>

  <xs:complexType name="TRuleSet">
    <xs:sequence minOccurs="0" maxOccurs="1">
      <xs:element name="Localization" type="TLocalization" minOccurs="0" maxOccurs="1" />
      <xs:element name="RuleHintPaths" type="TRuleHintPaths" minOccurs="0" maxOccurs="1" />
      <xs:element name="IncludeAll" type="TIncludeAll" minOccurs="0" maxOccurs="1" />
      <xs:choice minOccurs="0" maxOccurs="unbounded">
        <xs:element name="Include" type="TInclude" minOccurs="0" maxOccurs="unbounded" />
        <xs:element name="Rules" type="TRules" minOccurs="0" maxOccurs="unbounded">
          <xs:unique name="UniqueRuleName">
            <xs:selector xpath="Rule" />
            <xs:field xpath="@Id" />
          </xs:unique>
        </xs:element>
      </xs:choice>
    </xs:sequence>
    <xs:attribute name="Name" type="TNonEmptyString" use="required" />
    <xs:attribute name="Description" type="xs:string" use="optional" />
    <xs:attribute name="ToolsVersion" type="TNonEmptyString" use="required" />
  </xs:complexType>

  <xs:simpleType name="TRuleAction">
    <xs:restriction base="xs:string">
      <xs:enumeration value="Error"/>
      <xs:enumeration value="Warning"/>
      <xs:enumeration value="Info"/>
      <xs:enumeration value="Hidden"/>
      <xs:enumeration value="None"/>
    </xs:restriction>
  </xs:simpleType>

  <xs:simpleType name="TIncludeAction">
    <xs:restriction base="xs:string">
      <xs:enumeration value="Error"/>
      <xs:enumeration value="Warning"/>
      <xs:enumeration value="Info"/>
      <xs:enumeration value="Hidden"/>
      <xs:enumeration value="None"/>
      <xs:enumeration value="Default"/>
    </xs:restriction>
  </xs:simpleType>

  <xs:simpleType name="TIncludeAllAction">
    <xs:restriction base="xs:string">
      <xs:enumeration value="Error"/>
      <xs:enumeration value="Warning"/>
      <xs:enumeration value="Info"/>
      <xs:enumeration value="Hidden"/>
    </xs:restriction>
  </xs:simpleType>

  <xs:simpleType name="TNonEmptyString">
    <xs:restriction base="xs:string">
      <xs:minLength value="1" />
    </xs:restriction>
  </xs:simpleType>
  
</xs:schema>

```

Dettagli elemento schema:

| Schema - elemento | Descrizione |
|--------------------|--------------|
| `TLocalization` | Informazioni di localizzazione, incluso il nome del file di RuleSet, la descrizione del file di RuleSet, il nome dell'assembly di risorse che contiene la risorsa localizzata e il nome di base della risorsa localizzata. |
| `TRuleHintPaths` | Percorsi di file usati come hint per la ricerca di file di RuleSet |
| `TName` | Nome del file di RuleSet corrente |
| `TDescription` | Descrizione del file di RuleSet corrente |
| `TInclude` | Percorso di un set di regole incluso con azione regola |
| `TIncludeAll` | Azione regola per tutte le regole |
| `TRule` | ID regola con azione regola |
| `TRules` | Raccolta di una o più regole |
| `TRuleSet` | Formato del file di RuleSet costituito da informazioni di localizzazione, percorsi di hint di regola, inclusione di tutte le informazioni, informazioni, informazioni sulle regole, nome, descrizione e informazioni sulla versione degli strumenti |
| `TRuleAction` | Enumerazione che descrive un'azione della regola, ad esempio un errore, un avviso, informazioni, hidden o None |
| `TIncludeAction` | Enumerazione che descrive un'azione della regola, ad esempio un errore, un avviso, informazioni, hidden, None o default |
| `TIncludeAllAction` | Enumerazione che descrive un'azione della regola, ad esempio un errore, un avviso, informazioni o nascosto |

Per visualizzare un esempio di RuleSet, vedere [per creare un set di regole in un editor di testo](#to-create-a-rule-set-in-a-text-editor)o uno qualsiasi dei RuleSet predefiniti archiviati in `%VSINSTALLDIR%\Team Tools\Static Analysis Tools\Rule Sets` .
