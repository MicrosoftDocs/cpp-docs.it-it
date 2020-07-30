---
title: Uso dei correttori Linee guida di base di C++
description: Come configurare e utilizzare le regole di analisi del codice Microsoft C++ per Linee guida di base di C++.
ms.date: 07/27/2020
ms.topic: conceptual
dev_langs:
- CPP
ms.openlocfilehash: 8a9c09eba23e2db3c1929cf1e24163947cf015b9
ms.sourcegitcommit: 6e55aeb538b1c39af754f82d6f7738a18f5aa031
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/29/2020
ms.locfileid: "87389987"
---
# <a name="use-the-c-core-guidelines-checkers"></a>Usare i controlli delle Linee guida di base di C++

I Linee guida di base di C++ sono un set di linee guida, regole e procedure consigliate per la scrittura di codice in C++ creati da esperti e designer C++. Visual Studio supporta attualmente un sottoinsieme di queste regole come parte degli strumenti di analisi del codice per C++. I controlli delle linee guida di base vengono installati per impostazione predefinita in Visual Studio 2017 e Visual Studio 2019. Sono [disponibili come pacchetto NuGet per Visual Studio 2015](#vs2015_corecheck).

## <a name="the-c-core-guidelines-project"></a>Progetto Linee guida di base di C++

Creato da Bjarne Stroustrup e altri, il Linee guida di base di C++ è una guida all'uso di C++ moderno in modo sicuro ed efficace. Le linee guida enfatizzano l'indipendenza dai tipi statici e la sicurezza delle risorse. Consentono di individuare modi per eliminare o ridurre al minimo la maggior parte delle parti soggette a errori della lingua. Suggerisce inoltre come rendere il codice più semplice, più affidabile e con prestazioni migliori. Queste linee guida sono gestite dalla base C++ standard. Per altre informazioni, vedere la documentazione [linee guida di base di C++](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines)e accedere ai file di progetto della documentazione di linee guida di base di C++ su [GitHub](https://github.com/isocpp/CppCoreGuidelines).

## <a name="enable-the-c-core-check-guidelines-in-code-analysis"></a>Abilitare le linee guida Regole di base di C++ nell'analisi del codice

::: moniker range="<=vs-2017"

Un subset di regole di Regole di base di C++ è incluso nel set di regole consigliate da Microsoft Native. Si tratta del set di regole eseguito per impostazione predefinita quando l'analisi del codice è abilitata.

### <a name="to-enable-code-analysis-on-your-project"></a>Per abilitare l'analisi del codice nel progetto

1. Aprire la finestra di dialogo **pagine delle proprietà** per il progetto.

1. Selezionare la pagina delle proprietà di analisi del codice delle proprietà di **configurazione** > **Code Analysis** .

1. Selezionare la casella **di controllo Abilita analisi codice su compilazione** .

![Pagina delle proprietà per le impostazioni generali dell'analisi codice](media/cppcorecheck_codeanalysis_general.png)

Per abilitare le regole di controllo principali aggiuntive, aprire l'elenco a discesa e scegliere i set di regole che si desidera includere:

![Elenco a discesa per set di regole Regole di base di C++ aggiuntivi](media/cppcorecheck_codeanalysis_extensions.png)

::: moniker-end
::: moniker range=">=vs-2019"

Un subset di regole di Regole di base di C++ è incluso nel set di regole consigliate da Microsoft Native. Si tratta del set di regole eseguito per impostazione predefinita quando l'analisi codice Microsoft è abilitata.

### <a name="to-enable-code-analysis-on-your-project"></a>Per abilitare l'analisi del codice nel progetto:

1. Aprire la finestra di dialogo **pagine delle proprietà** per il progetto.

1. Selezionare la pagina delle proprietà di analisi del codice delle proprietà di **configurazione** > **Code Analysis** .

1. Impostare le proprietà **Abilita analisi codice per compilazione** e **Abilita Microsoft Code Analysis** .

È anche possibile scegliere di eseguire tutte le regole di Regole di base di C++ supportate oppure selezionare il proprio subset da eseguire:

### <a name="to-enable-additional-core-check-rules"></a>Per abilitare le regole aggiuntive per il controllo principale

1. Aprire la finestra di dialogo **pagine delle proprietà** per il progetto.

1. Selezionare la pagina delle proprietà **configurazione** > **analisi codice** proprietà > **Microsoft** .

1. Aprire l'elenco a discesa **regole attive** e selezionare **Scegli più set di regole**.

1. Nella finestra di dialogo **Aggiungi o Rimuovi set di regole** scegliere i set di regole che si desidera includere.

::: moniker-end

## <a name="examples"></a>Esempio

Ecco un esempio di alcuni dei problemi che le regole di Regole di base di C++ possono trovare:

```cpp
// CoreCheckExample.cpp
// Add CppCoreCheck package and enable code analysis in build for warnings.

int main()
{
    int arr[10];           // warning C26494
    int* p = arr;          // warning C26485

    [[gsl::suppress(bounds.1)]] // This attribute suppresses Bounds rule #1
    {
        int* q = p + 1;    // warning C26481 (suppressed)
        p = q++;           // warning C26481 (suppressed)
    }

    return 0;
}
```

In questo esempio vengono illustrati alcuni avvisi che le regole di Regole di base di C++ possono trovare:

- C26494 è il tipo di regola. 5: Inizializza sempre un oggetto.

- C26485 è associato alle regole. 3: nessun decadimento da matrice a puntatore.

- C26481 è associato alle regole. 1: non usare l'aritmetica dei puntatori. Usare invece `span`.

Installare e abilitare i set di regole di analisi del codice Regole di base di C++, quindi compilare il codice. L'analisi del codice restituisce i primi due avvisi ed evita la terza. Ecco l'output di compilazione del codice di esempio in Visual Studio 2015:

```Output
1>------ Build started: Project: CoreCheckExample, Configuration: Debug Win32 ------
1>  CoreCheckExample.cpp
1>  CoreCheckExample.vcxproj -> C:\Users\username\documents\visual studio 2015\Projects\CoreCheckExample\Debug\CoreCheckExample.exe
1>  CoreCheckExample.vcxproj -> C:\Users\username\documents\visual studio 2015\Projects\CoreCheckExample\Debug\CoreCheckExample.pdb (Full PDB)
c:\users\username\documents\visual studio 2015\projects\corecheckexample\corecheckexample\corecheckexample.cpp(6): warning C26494: Variable 'arr' is uninitialized. Always initialize an object. (type.5: http://go.microsoft.com/fwlink/p/?LinkID=620421)
c:\users\username\documents\visual studio 2015\projects\corecheckexample\corecheckexample\corecheckexample.cpp(7): warning C26485: Expression 'arr': No array to pointer decay. (bounds.3: http://go.microsoft.com/fwlink/p/?LinkID=620415)
========== Build: 1 succeeded, 0 failed, 0 up-to-date, 0 skipped ==========
```

I Linee guida di base di C++ sono utili per scrivere codice migliore e sicuro. Tuttavia, potrebbe essere presente un'istanza in cui non è necessario applicare una regola o un profilo. È facile eliminarla direttamente nel codice. È possibile utilizzare l' `[[gsl::suppress]]` attributo per impedire al regole di base di C++ di rilevare e segnalare eventuali violazioni di una regola nel blocco di codice seguente. È possibile contrassegnare singole istruzioni per l'eliminazione di regole specifiche. È anche possibile eliminare l'intero profilo dei limiti scrivendo `[[gsl::suppress(bounds)]]` senza includere un numero di regola specifico.

## <a name="supported-rule-sets"></a>Set di regole supportati

Quando vengono aggiunte nuove regole al controllo Linee guida di base di C++, il numero di avvisi generati per il codice preesistente può aumentare. È possibile utilizzare set di regole predefiniti per filtrare i tipi di regole da abilitare. Per la maggior parte delle regole in [Visual Studio regole di base di C++ riferimento](code-analysis-for-cpp-corecheck.md)sono disponibili articoli di riferimento.

- **Regole aritmetiche**: regole per rilevare l' [overflow](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Res-overflow)aritmetico, [le operazioni senza](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Res-unsigned)firma e la [manipolazione di bit](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Res-nonnegative). <sup>15,6</sup>

- **Bounds Rules**: applica il [profilo dei limiti della linee guida di base di C++](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#probounds-bounds-safety-profile). <sup>15,3</sup>

- **Regole di classe**: alcune regole che si concentrano sull'utilizzo corretto di funzioni membro speciali e specifiche virtuali. Si tratta di un subset dei controlli consigliati per [le classi e le gerarchie](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#S-class)di classi. <sup>15,5</sup>

- **Regole di concorrenza**: una singola regola, che rileva le dichiarazioni di oggetti di Guard non valido. Per altre informazioni, vedere [linee guida correlate alla concorrenza](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#S-concurrency). <sup>15,5</sup>

- **Regole const**: impone [controlli correlati a const dal linee guida di base di C++](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#con-constants-and-immutability). <sup>15,3</sup>

- **Regole di dichiarazione**: alcune regole delle [linee guida sulle interfacce](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#S-interfaces) che dedicano al modo in cui vengono dichiarate le variabili globali. <sup>15,5</sup>

- **Regole enum**: queste regole applicano [i controlli correlati a enum dal linee guida di base di C++](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#S-enum). <sup>16,3</sup>

- **Regole sperimentali** Si tratta di regole Regole di base di C++ sperimentali utili ma non pronte per l'uso quotidiano. Provarli e [fornire commenti e suggerimenti](https://developercommunity.visualstudio.com/content/idea/post.html?space=62). <sup>16,0</sup>

- **Regole di funzione**: due controlli che consentono di adottare l' **`noexcept`** identificatore. Sono parte delle linee guida per la [progettazione e l'implementazione di funzioni chiare](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#S-functions). <sup>15,5</sup>

- **Regole GSL**: queste regole applicano i controlli correlati alla [libreria di supporto delle linee guida dal linee guida di base di C++](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#S-gsl). <sup>15,7</sup>

- **Regole di durata**: queste regole applicano il [profilo di durata del linee guida di base di C++](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#prolifetime-lifetime-safety-profile). <sup>15,7</sup>

- **Regole del puntatore del proprietario**: applicare [i controlli di gestione risorse correlati al proprietario \<T> dal linee guida di base di C++](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#r-resource-management).<sup> 15,3</sup>

- **Regole del puntatore non elaborato**: applicare [i controlli di gestione risorse correlati a puntatori non elaborati dal linee guida di base di C++](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#r-resource-management). <sup>15,3</sup>

- **Regole del puntatore condiviso**: fa parte dell'applicazione delle linee guida per la [gestione delle risorse](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#S-resource) . <sup>15,5</sup> sono state aggiunte alcune regole specifiche per il modo in cui i puntatori condivisi vengono passati alle funzioni o utilizzati localmente.

- **Regole STL**: queste regole applicano i controlli correlati alla [libreria standard C++ (stl) dalla linee guida di base di C++](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#S-stdlib). <sup>15,7</sup>

- **Regole di stile**: un controllo semplice ma importante, che vieta l'uso di [goto](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Res-goto). <sup>15,5</sup> è il primo passaggio per migliorare lo stile di codifica e l'uso di espressioni e istruzioni in C++.

- **Regole di tipo**: imporre il [profilo del tipo di linee guida di base di C++](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#prosafety-type-safety-profile). <sup>15,3</sup>

- **Regole univoche del puntatore**: imporre [controlli di gestione risorse correlati a tipi con semantica dei puntatori univoca dal linee guida di base di C++](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#r-resource-management). <sup>15,3</sup>

- **Regole di regole di base di C++**: questo set di regole contiene tutti i controlli attualmente implementati dal [linee guida di base di C++](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#c-core-guidelines), ad eccezione delle regole sperimentali.

<sup>15,3</sup> queste regole sono state visualizzate per la prima volta in Visual Studio 2017 versione 15,3 \
<sup>15,5</sup> queste regole sono state visualizzate per la prima volta in Visual Studio 2017 versione 15,5 \
<sup>15,6</sup> queste regole sono state visualizzate per la prima volta in Visual Studio 2017 versione 15,6 \
<sup>15,7</sup> queste regole sono state visualizzate per la prima volta in Visual Studio 2017 versione 15,7 \
<sup>16,0</sup> queste regole sono state visualizzate per la prima volta in Visual Studio 2019 versione 16,0 \
<sup>16,3</sup> queste regole sono apparse per la prima volta in Visual Studio 2019 versione 16,3

È possibile scegliere di limitare gli avvisi solo a uno o pochi gruppi. I set di regole **consigliate** Native **minime** e native includono regole regole di base di C++ e altri controlli prerapidi.

::: moniker range="<=vs-2017"

Per visualizzare i set di regole disponibili, aprire la finestra di dialogo delle **proprietà del progetto** . Nella finestra di dialogo **pagine delle proprietà** selezionare la **Configuration Properties**  >  **Code Analysis**  >  pagina delle proprietà**generale** analisi del codice delle proprietà di configurazione. Quindi, aprire l'elenco a discesa nella casella combinata **set di regole** per visualizzare i set di regole disponibili. Per compilare una combinazione personalizzata di set di regole, selezionare **Scegli più set di regole**. Nella finestra di dialogo **Aggiungi o Rimuovi set** di regole sono elencate le regole tra cui è possibile scegliere. Per ulteriori informazioni sull'utilizzo dei set di regole in Visual Studio, vedere [utilizzare set di regole per specificare le regole C++ da eseguire](using-rule-sets-to-specify-the-cpp-rules-to-run.md).

::: moniker-end
::: moniker range=">=vs-2019"

Per visualizzare i set di regole disponibili, aprire la finestra di dialogo delle **proprietà del progetto** . Nella finestra di dialogo **pagine delle proprietà** selezionare la pagina delle proprietà **configurazione**  >  **analisi codice**proprietà  >  **Microsoft** . Quindi, aprire l'elenco a discesa nella casella combinata **regole attive** per visualizzare i set di regole disponibili. Per compilare una combinazione personalizzata di set di regole, selezionare **Scegli più set di regole**. Nella finestra di dialogo **Aggiungi o Rimuovi set** di regole sono elencate le regole tra cui è possibile scegliere. Per ulteriori informazioni sull'utilizzo dei set di regole in Visual Studio, vedere [utilizzare set di regole per specificare le regole C++ da eseguire](using-rule-sets-to-specify-the-cpp-rules-to-run.md).

::: moniker-end

## <a name="macros"></a>Macro

Il controllo Linee guida di base di C++ viene visualizzato con un file di intestazione che definisce le macro che semplificano l'eliminazione di intere categorie di avvisi nel codice:

```cpp
ALL_CPPCORECHECK_WARNINGS
CPPCORECHECK_TYPE_WARNINGS
CPPCORECHECK_RAW_POINTER_WARNINGS
CPPCORECHECK_CONST_WARNINGS
CPPCORECHECK_OWNER_POINTER_WARNINGS
CPPCORECHECK_UNIQUE_POINTER_WARNINGS
CPPCORECHECK_BOUNDS_WARNINGS
```

Queste macro corrispondono ai set di regole e si espandono in un elenco separato da spazi di numeri di avviso. Usando i costrutti pragma appropriati, è possibile configurare il set di regole valido interessante per un progetto o una sezione di codice. Nell'esempio seguente l'analisi del codice avverte solo i modificatori costanti mancanti:

```cpp
#include <CppCoreCheck\Warnings.h>
#pragma warning(disable: ALL_CPPCORECHECK_WARNINGS)
#pragma warning(default: CPPCORECHECK_CONST_WARNINGS)
```

## <a name="attributes"></a>Attributi

Il compilatore Microsoft C++ ha un supporto limitato per l' `[[gsl::suppress]]` attributo. Può essere usato per non visualizzare avvisi sulle istruzioni Expression e Block all'interno di funzioni.

```cpp
// Suppress only warnings from the 'r.11' rule in expression.
[[gsl::suppress(r.11)]] new int;

// Suppress all warnings from the 'r' rule group (resource management) in block.
[[gsl::suppress(r)]]
{
    new int;
}

// Suppress only one specific warning number.
// For declarations, you may need to use the surrounding block.
// Macros are not expanded inside of attributes.
// Use plain numbers instead of macros from the warnings.h.
[[gsl::suppress(26400)]]
{
    int *p = new int;
}
```

## <a name="suppress-analysis-by-using-command-line-options"></a>Elimina analisi tramite opzioni della riga di comando

Invece di #pragmas, è possibile utilizzare le opzioni della riga di comando nella pagina delle proprietà del file per non visualizzare gli avvisi relativi a un progetto o a un singolo file. Ad esempio, per disabilitare l'avviso C26400 per un file:

1. Fare clic con il pulsante destro del mouse sul file in **Esplora soluzioni** e scegliere **Proprietà**.

1. Nella finestra di dialogo **pagine delle proprietà** selezionare la pagina delle proprietà proprietà di **configurazione**  >  **C/C++**  >  **riga di comando** .

1. Nella casella di modifica **Opzioni aggiuntive** aggiungere *`/wd26400`* .

È possibile utilizzare l'opzione della riga di comando per disabilitare temporaneamente tutte le analisi del codice per un file specificando **`/analyze-`** . Verrà visualizzato l'avviso *D9025 che esegue l'override di '/analyze ' con '/analyze-'*, che ricorda di riabilitare l'analisi del codice in un secondo momento.

## <a name="enable-the-c-core-guidelines-checker-on-specific-project-files"></a><a name="corecheck_per_file"></a>Abilitare il controllo Linee guida di base di C++ in file di progetto specifici

A volte è utile eseguire analisi del codice mirate e continuare a usare l'IDE di Visual Studio. Provare lo scenario di esempio seguente per i progetti di grandi dimensioni. Consente di risparmiare tempo di compilazione e semplificare la filtrazione dei risultati:

1. Nella shell dei comandi impostare le `esp.extension` variabili di `esp.annotationbuildlevel` ambiente e.

1. Per ereditare queste variabili, aprire Visual Studio dalla shell dei comandi.

1. Caricare il progetto e aprirne le proprietà.

1. Abilitare l'analisi del codice, selezionare i set di regole appropriati, ma non abilitare le estensioni di analisi del codice.

1. Passare al file che si desidera analizzare con il controllo Linee guida di base di C++ e aprirne le proprietà.

1. Scegliere **proprietà di configurazione**  >  **C/C++**  >  **Command Line**  >  **Opzioni aggiuntive** della riga di comando di C/C++ e Aggiungi*`/analyze:plugin EspXEngine.dll`*

1. Disabilitare l'utilizzo dell'intestazione precompilata (**proprietà di configurazione**  >  **C/C++**  >  **intestazioni precompilate**). È necessario perché il motore delle estensioni può tentare di leggere le informazioni interne dall'intestazione precompilata (PCH). Se il PCH è stato compilato con le opzioni predefinite del progetto, non sarà compatibile.

1. Ricompilare il progetto. I controlli prerapidi comuni devono essere eseguiti in tutti i file. Poiché il controllo Linee guida di base di C++ non è abilitato per impostazione predefinita, deve essere eseguito solo nel file configurato per usarlo.

## <a name="how-to-use-the-c-core-guidelines-checker-outside-of-visual-studio"></a>Come usare il controllo Linee guida di base di C++ esterno a Visual Studio

È possibile usare i controlli Linee guida di base di C++ nelle compilazioni automatiche.

### <a name="msbuild"></a>MSBuild

Il controllo dell'analisi del codice nativo (PREfast) è integrato nell'ambiente MSBuild dai file di destinazioni personalizzate. Per abilitarla, è possibile usare le proprietà del progetto e aggiungere il controllo Linee guida di base di C++ (basato su PREfast):

```xml
  <PropertyGroup>
    <EnableCppCoreCheck>true</EnableCppCoreCheck>
    <CodeAnalysisRuleSet>CppCoreCheckRules.ruleset</CodeAnalysisRuleSet>
    <RunCodeAnalysis>true</RunCodeAnalysis>
  </PropertyGroup>
```

Assicurarsi di aggiungere queste proprietà prima dell'importazione del *`Microsoft.Cpp.targets`* file. È possibile scegliere set di regole specifici o creare un set di regole personalizzato. In alternativa, usare il set di regole predefinito che include altri controlli prerapidi.

È possibile eseguire il controllo di base C++ solo nei file specificati. Usare lo stesso approccio [descritto in precedenza](#corecheck_per_file), ma usare i file di MSBuild. Le variabili di ambiente possono essere impostate tramite l' `BuildMacro` elemento:

```xml
<ItemGroup>
    <BuildMacro Include="Esp_AnnotationBuildLevel">
      <EnvironmentVariable>true</EnvironmentVariable>
      <Value>Ignore</Value>
    </BuildMacro>
    <BuildMacro Include="Esp_Extensions">
      <EnvironmentVariable>true</EnvironmentVariable>
      <Value>CppCoreCheck.dll</Value>
    </BuildMacro>
</ItemGroup>
```

Se non si vuole modificare il file di progetto, è possibile passare le proprietà nella riga di comando:

```cmd
msbuild /p:EnableCppCoreCheck=true /p:RunCodeAnalysis=true /p:CodeAnalysisRuleSet=CppCoreCheckRules.ruleset ...
```

### <a name="non-msbuild-projects"></a>Progetti non MSBuild

Se si usa un sistema di compilazione che non si basa su MSBuild, è comunque possibile eseguire il controllo. Per usarlo, è necessario acquisire familiarità con alcuni elementi interni della configurazione del motore di analisi del codice. Non è garantito il supporto per questi elementi interni nelle versioni future di Visual Studio.

L'analisi del codice richiede alcune variabili di ambiente e le opzioni della riga di comando del compilatore. Si consiglia di usare l'ambiente del **prompt dei comandi degli strumenti nativi** , in modo da non dover cercare percorsi specifici per il compilatore, includere directory e così via.

- **Variabili di ambiente**
  - `set esp.extensions=cppcorecheck.dll`Indica al motore di caricare il modulo Linee guida di base di C++.
  - `set esp.annotationbuildlevel=ignore`In questo modo viene disabilitata la logica che elabora le annotazioni SAL. Le annotazioni non influiscono sull'analisi del codice nel controllo Linee guida di base di C++, ma la loro elaborazione richiede tempo (a volte molto tempo). Questa impostazione è facoltativa, ma altamente consigliata.
  - `set caexcludepath=%include%`Si consiglia vivamente di disabilitare gli avvisi generati sulle intestazioni standard. È possibile aggiungere altri percorsi, ad esempio il percorso delle intestazioni comuni nel progetto.

- **Opzioni della riga di comando**
  - **`/analyze`** Abilita l'analisi del codice (si consiglia anche **`/analyze:only`** di usare e **`/analyze:quiet`** ).
  - **`/analyze:plugin EspXEngine.dll`** Questa opzione consente di caricare il motore delle estensioni di analisi del codice in PREfast. Questo motore, a sua volta, carica il controllo Linee guida di base di C++.

## <a name="use-the-guideline-support-library"></a>Usare la libreria di supporto per le linee guida

La libreria di supporto delle linee guida (GSL) è progettata per consentire di seguire le linee guida di base. Il GSL include definizioni che consentono di sostituire costrutti soggetti a errori con alternative più sicure. È ad esempio possibile sostituire una `T*, length` coppia di parametri con il `span<T>` tipo. GSL è disponibile all'indirizzo [http://www.nuget.org/packages/Microsoft.Gsl](https://www.nuget.org/packages/Microsoft.Gsl) . La libreria è open source ed è quindi possibile visualizzare le origini, creare commenti o contribuire. Il progetto si trova in [https://github.com/Microsoft/GSL](https://github.com/Microsoft/GSL) .

::: moniker range="vs-2015"

## <a name="use-the-c-core-check-guidelines-in-visual-studio-2015-projects"></a><a name="vs2015_corecheck"></a>Usare le linee guida Regole di base di C++ nei progetti di Visual Studio 2015

Se si usa Visual Studio 2015, i set di regole di analisi del codice Regole di base di C++ non sono installati per impostazione predefinita. Per abilitare gli strumenti di analisi del codice Regole di base di C++ in Visual Studio 2015, sono necessari passaggi aggiuntivi. Microsoft fornisce supporto per i progetti Visual Studio 2015 usando un pacchetto NuGet. Il pacchetto è denominato Microsoft. CppCoreCheck ed è disponibile all'indirizzo [http://www.nuget.org/packages/Microsoft.CppCoreCheck](https://www.nuget.org/packages/Microsoft.CppCoreCheck) . Per questo pacchetto è necessario avere almeno Visual Studio 2015 con Update 1 installato.

Il pacchetto installa anche un altro pacchetto come dipendenza, la libreria di supporto per le linee guida solo intestazione (GSL). GSL è disponibile anche in GitHub all'indirizzo [https://github.com/Microsoft/GSL](https://github.com/Microsoft/GSL) .

A causa del modo in cui le regole di analisi del codice vengono caricate in Visual Studio 2015, è necessario installare il `Microsoft.CppCoreCheck` pacchetto NuGet in ogni progetto C++ che si desidera controllare.

### <a name="to-add-the-microsoftcppcorecheck-package-to-your-project-in-visual-studio-2015"></a>Per aggiungere il pacchetto Microsoft. CppCoreCheck al progetto in Visual Studio 2015

1. In **Esplora soluzioni**fare clic con il pulsante destro del mouse per aprire il menu di scelta rapida del progetto nella soluzione a cui si desidera aggiungere il pacchetto. Scegliere **Gestisci pacchetti NuGet** per aprire **Gestione pacchetti NuGet**.

1. Nella finestra **Gestione pacchetti NuGet** cercare Microsoft. CppCoreCheck.

    ![Finestra di gestione pacchetti NuGet che mostra il pacchetto CppCoreCheck](../code-quality/media/cppcorecheck_nuget_window.png)

1. Selezionare il pacchetto Microsoft. CppCoreCheck, quindi scegliere il pulsante **Installa** per aggiungere le regole al progetto.

   Il pacchetto NuGet aggiunge *`.targets`* al progetto un file MSBuild aggiuntivo che viene richiamato quando si Abilita l'analisi del codice nel progetto. Il *`.targets`* file aggiunge le regole di regole di base di C++ come estensione aggiuntiva allo strumento di analisi del codice di Visual Studio. Quando si installa il pacchetto, è possibile utilizzare la finestra di dialogo Pagine delle proprietà per abilitare o disabilitare le regole rilasciate e sperimentali.

::: moniker-end

## <a name="see-also"></a>Vedere anche

- [Riferimenti per Regole di base di C++ di Visual Studio](code-analysis-for-cpp-corecheck.md)
