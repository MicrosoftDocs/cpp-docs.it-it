---
title: Utilizzo di proprietà di progetto | Microsoft Docs
ms.custom: ''
ms.date: 08/27/2018
ms.technology:
- cpp-ide
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- project properties [C++], modifying
- properties [C++]
- Visual C++ projects, properties
- projects [C++], properties
ms.assetid: 9b0d6f8b-7d4e-4e61-aa75-7d14944816cd
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a9961eaa6529773e8d21d9c953242d1656a6a443
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43211663"
---
# <a name="working-with-project-properties"></a>Utilizzo di proprietà di progetto

Nell'IDE tutte le informazioni necessarie per compilare un progetto vengono esposte come *proprietà*. Queste informazioni includono nome dell'applicazione, estensione (ad esempio DLL, LIB, EXE), opzioni del compilatore, opzioni del linker, impostazioni del debugger, istruzioni di compilazione personalizzate e molti altri elementi. Per visualizzare e modificare queste proprietà si usano in genere le *Pagine delle proprietà* ( **Progetto &#124; Proprietà**).

Quando si crea un progetto, il sistema assegna i valori per varie proprietà. Le impostazioni predefinite variano leggermente a seconda del tipo di progetto e delle opzioni selezionate nella procedura guidata app. Ad esempio, un progetto ATL ha proprietà relative a file MIDL, ma questi sono assenti in un'applicazione console di base. Le proprietà predefinite vengono visualizzate nel riquadro Generale nelle Pagine delle proprietà:

![Visual C&#43;&#43; Impostazioni predefinite progetto](../ide/media/visual-c---project-defaults.png "Impostazioni predefinite progetto di Visual C++")

Alcune proprietà, ad esempio il nome dell'applicazione, si applicano a tutte le variazioni della build, indipendentemente dalla piattaforma di destinazione o dal fatto che si tratti di una build di debug o di versione. La maggior parte delle proprietà sono tuttavia dipendenti dalla configurazione. In questo modo il compilatore deve sapere su quale piattaforma specifica verrà eseguito il programma e le opzioni del compilatore specifiche da usare per generare il codice corretto. Quando si imposta una proprietà è quindi importante prestare attenzione alla configurazione e piattaforma a cui viene applicato il nuovo valore. Si applica solo alle build di debug Win32 o anche al debug di dispositivi ARM e x64? Ad esempio, la proprietà **Ottimizzazione** viene impostata automaticamente su **Ottimizza velocità (/O2)** in una configurazione per la versione, ma è disabilitata nella configurazione per il debug.

Le pagine delle proprietà sono progettate in modo che sia sempre possibile visualizzare, e se necessario modificare, la piattaforma e la configurazione a cui applicare un valore della proprietà. Nella figura seguente vengono illustrate le pagine delle proprietà con le informazioni di configurazione e della piattaforma nelle caselle di riepilogo nella parte superiore. Quando la proprietà **Ottimizzazione** viene impostata in questo punto, verrà applicata solo per le build di debug Win32, ovvero la configurazione attiva, come indicato dalle frecce rosse.

![Visual C&#43;&#43; Pagine delle proprietà con configurazione attiva](../ide/media/visual-c---property-pages-showing-active-configuration.png "Pagine delle proprietà di Visual C++ con configurazione attiva")

Nella figura seguente viene illustrata la pagina delle proprietà dello stesso progetto, ma la configurazione è stata modificata su Versione. Si noti il valore diverso della proprietà Ottimizzazione. Si noti anche che la configurazione attiva è ancora Debug. È possibile impostare proprietà per qualsiasi configurazione, non necessariamente per quella attiva.

![Visual C&#43;&#43; Pagine delle proprietà che visualizzano la configurazione per la versione](../ide/media/visual-c---property-pages-showing-release-config.png "Pagine delle proprietà di Visual C++ che visualizzano la configurazione per la versione")

Il sistema del progetto è basato su MSBuild, che definisce i formati di file e le regole per la compilazione di progetti di qualsiasi tipo. MSBuild consente di gestire la complessità della compilazione per più piattaforme e configurazioni, ma è necessario comprendere le basi del suo funzionamento. Questo è particolarmente importante se si vogliono definire configurazioni personalizzate o creare set riutilizzabili di proprietà che possono essere condivisi e importati in più progetti.

Le proprietà del progetto vengono archiviate direttamente nel file di progetto (*.vcxproj) o in altri file con estensione xml o props che il file di progetto importa e che specificano valori predefiniti. Come illustrato in precedenza, la stessa proprietà per la stessa configurazione può essere assegnata a un valore diverso in file diversi. Quando si compila un progetto, il motore MSBuild valuta il file di progetto e tutti i file importati in un ordine ben definito (descritto di seguito). Man mano che viene valutato ogni singolo file, i valori di proprietà definiti in quel file sostituiranno i valori esistenti. Tutti i valori che non sono stati specificati vengono ereditati dai file valutati in precedenza. Quando si imposta una proprietà con le pagine delle proprietà, è quindi importante prestare attenzione anche alla posizione in cui viene eseguita l'impostazione. Se si imposta una proprietà su "X" in un file con estensione props, ma la proprietà è impostata su "Y" nel file di progetto, il progetto verrà compilato con la proprietà impostata su "Y". Se la stessa proprietà è impostata su "Z" su un elemento di progetto, ad esempio un file con estensione cpp, il motore MSBuild userà il valore di "Z". Per altre informazioni, vedere [Ereditarietà delle proprietà](#bkmkPropertyInheritance) più avanti in questo articolo.

## <a name="build-configurations"></a>Configurazioni della build

Una configurazione è solo un gruppo arbitrario di proprietà a cui viene assegnato un nome. Visual Studio offre configurazioni di tipo Debug e Versione e imposta varie proprietà in modo appropriato per una build di debug o una build di versione. È possibile usare **Configuration Manager** per definire le configurazioni personalizzate come un modo pratico per raggruppare le proprietà di uno specifico gruppo di build. Gestione proprietà viene usata per il lavoro avanzato con le proprietà, ma viene presentata qui perché consente di visualizzare le configurazioni di proprietà. È possibile accedervi da **Visualizza &#124; Gestione proprietà** o **Visualizza &#124; Altre finestre &#124; Gestione proprietà** a seconda delle impostazioni. Presenta nodi per ogni coppia di configurazione/piattaforma nel progetto. In ognuno di questi nodi sono presenti nodi per le finestre delle proprietà (file con estensione props) che consentono di impostare alcune proprietà specifiche per la configurazione.

![Gestione proprietà](../ide/media/property-manager.png "Gestione proprietà")

Se si accede al riquadro Generale nelle Pagine delle proprietà (vedere la figura precedente) e si imposta la proprietà Set di caratteri su "Non impostata" anziché su "Use Unicode" (Usa Unicode) e si fa clic su **OK**, Gestione proprietà non visualizzerà alcuna finestra delle proprietà **Supporto per Unicode** per la configurazione corrente, ma sarà ancora disponibile per le altre configurazioni.

Per altre informazioni su Gestione proprietà e le finestre delle proprietà, vedere [Creazione di configurazioni di proprietà riutilizzabili](#bkmkPropertySheets) più avanti in questo articolo.

> [!TIP]
> Il file con estensione user è una funzionalità legacy ed è consigliabile eliminarlo per mantenere le proprietà raggruppate correttamente in base alla configurazione/piattaforma.

## <a name="target-platforms"></a>Piattaforme di destinazione

*Piattaforma di destinazione* fa riferimento al tipo di dispositivo e/o sistema operativo in cui verrà eseguito il file eseguibile. È possibile compilare un progetto per più piattaforme. Le piattaforme di destinazione disponibili per i progetti C++ dipendono dal tipo di progetto e includono, ma non sono limitate a, Win32, x64, ARM, Android e iOS.     La piattaforma di destinazione **x86** che si può incontrare in **Configuration Manager** è identica a **Win32** nei progetti C++ nativi. Win32 significa Windows a 32 bit e **x64** significa Windows a 64 bit. Per altre informazioni su queste due piattaforme, vedere [Running 32-bit applications](/windows/desktop/WinProg64/running-32-bit-applications) (Esecuzione di applicazioni a 32 bit).

Il valore della piattaforma di destinazione **Qualsiasi CPU** che è possibile riscontrare in **Configuration Manager** non ha alcun effetto in progetti C++ nativi; è rilevante per C++/CLI e altri tipi di progetto .NET. Per altre informazioni, vedere [/CLRIMAGETYPE (Specifica il tipo di immagine CLR)](../build/reference/clrimagetype-specify-type-of-clr-image.md).

## <a name="property-pages"></a>pagine delle proprietà

Come indicato in precedenza, il sistema di progetto Visual C++ si basa su [MSBuild](/visualstudio/msbuild/msbuild-properties) e i valori vengono archiviati nel file di progetto XML e nei file predefiniti con estensione props e targets. Per Visual Studio 2015, questi file si trovano in **\Programmi (x86)\MSBuild\Microsoft.Cpp\v4.0\V140**. Per Visual Studio 2017, questi file si trovano in **\\Programmi (x86)\\Microsoft Visual Studio\\2017\\_edizione_\\Common7\\IDE\\VC\\VCTargets**, dove _edizione_ è la versione di Visual Studio installata. Le proprietà vengono archiviate anche in qualsiasi file con estensione props personalizzato che è possibile aggiungere a un progetto. È consigliabile NON modificare manualmente i file e usare invece le pagine delle proprietà nell'IDE per modificare tutte le proprietà, specialmente quelle che partecipano all'ereditarietà, a meno che non si abbia una conoscenza approfondita di MSBuild.

La figura seguente mostra le pagine delle proprietà per un progetto Visual C++. Nel riquadro sinistro è selezionata la **regola** *Directory di VC++* e nel riquadro destro vengono visualizzate le proprietà associate alla regola in questione. I valori `$(...)` sono denominati *macro*. *Non* si tratta di macro di C/C++, ma semplicemente di costanti in fase di compilazione. Le macro vengono trattate nella sezione [Macro della pagina delle proprietà](#bkmkPropertiesVersusMacros) più avanti in questo articolo.

![Pagine delle proprietà del progetto](../ide/media/project_property_pages_vc.png "Project_Property_Pages_VC")

> [!WARNING]
> Le configurazioni di **Proprietà comuni** delle versioni precedenti di Visual Studio sono state rimosse. Per aggiungere un riferimento a un progetto, è ora necessario usare la finestra di dialogo **Aggiungi riferimento** allo stesso modo che per i linguaggi gestiti. Vedere [Gestire i riferimenti in un progetto](/visualstudio/ide/managing-references-in-a-project).

#### <a name="to-set-a-property-for-a-project"></a>Per impostare una proprietà per un progetto

1. Per la maggior parte degli scenari, è possibile impostare proprietà a livello di progetto senza creare una finestra delle proprietà personalizzata. Nel menu principale scegliere **Progetto &#124; Proprietà** o fare clic con il pulsante destro del mouse sul nodo del progetto in **Esplora soluzioni** e quindi scegliere **Proprietà**.

2. Usare le caselle di riepilogo **Configurazione** e **Piattaforma** nella parte superiore della finestra di dialogo per specificare i gruppi di proprietà ai quali applicare le modifiche. In molti casi **Tutte le piattaforme** e **Tutte le configurazioni** costituiscono la scelta corretta. Per impostare le proprietà solo per alcune configurazioni, eseguire una selezione multipla in **Gestione proprietà** e quindi aprire il menu di scelta rapida e scegliere **Proprietà**.

La finestra di dialogo **Pagine delle proprietà** visualizza solo le pagine delle proprietà che si applicano al progetto corrente. Ad esempio, se il progetto non dispone di un file con estensione idl, la pagina delle proprietà MIDL non viene visualizzata.

Quando si evidenzia una proprietà in una pagina delle proprietà, è possibile premere **F1** per passare all'argomento di riferimento per altre informazioni sull'opzione del compilatore o del linker corrispondente.

È possibile trovare altre informazioni su ogni pagina delle proprietà negli argomenti seguenti:

- [Pagina delle proprietà Generale (Progetto)](../ide/general-property-page-project.md)

- [Pagina delle proprietà Generale (File)](../ide/general-property-page-file.md)

- [Pagine delle proprietà Riga di comando](../ide/command-line-property-pages.md)

- [Impostazioni di progetto per una configurazione di debug C++](/visualstudio/debugger/project-settings-for-a-cpp-debug-configuration)

- [Pagina delle proprietà NMAKE](../ide/nmake-property-page.md)

- [Pagine delle proprietà Linker](../ide/linker-property-pages.md)

- [Pagine delle proprietà Risorse](../ide/resources-property-pages.md)

- [Pagine delle proprietà MIDL](../ide/midl-property-pages.md)

- [Pagina delle proprietà Riferimenti Web](../ide/web-references-property-page.md)

- [Pagina delle proprietà Strumento generatore di dati XML](../ide/xml-data-generator-tool-property-page.md)

## <a name="to-quickly-browse-and-search-all-properties"></a>Per cercare e trovare rapidamente tutte le proprietà

La pagina delle proprietà **Tutte le opzioni** (nel nodo **Proprietà di configurazione &#124; C/C++** nella finestra di dialogo **Pagine delle proprietà**) offre un modo rapido per esplorare e trovare le proprietà disponibili nel contesto corrente. Include una casella di ricerca speciale e una sintassi semplice per filtrare facilmente i risultati:

Nessun prefisso:<br/>
ricerca solo nei nomi delle proprietà (sottostringa senza distinzione tra maiuscole e minuscole).

'/' o '-':<br/>
ricerca solo nelle opzioni del compilatore (prefisso senza distinzione tra maiuscole e minuscole)

v:<br/>
ricerca solo nei valori (sottostringa senza distinzione tra maiuscole e minuscole).

##  <a name="bkmkPropertiesVersusMacros"></a> Macro della pagina delle proprietà

Una *macro* è una costante in fase di compilazione che può fare riferimento a un valore definito da Visual Studio o dal sistema MSBuild o a un valore definito dall'utente. Usando le macro anziché i valori hardcoded come i percorsi di directory, è possibile condividere con maggiore facilità le impostazioni delle proprietà tra i computer e tra le versioni di Visual Studio, nonché assicurarsi meglio che le impostazioni del progetto partecipino in modo appropriato all'ereditarietà della proprietà. È possibile usare l'Editor proprietà per visualizzare i valori di tutte le macro disponibili.

### <a name="predefined-macros"></a>Macro predefinite

*macro globali*<br/>
Si applica a tutti gli elementi di una configurazione del progetto. Presenta la sintassi `$(name)`. Un esempio di macro globale è `$(VCInstallDir)`, che archivia la directory radice dell'installazione di Visual Studio. Una macro globale corrisponde a `PropertyGroup` in MSBuild.

*macro elemento*<br/>
Presenta la sintassi `%(name)`. Per un file una macro di elemento si applica solo a quel file. Ad esempio è possibile utilizzare `%(AdditionalIncludeDirectories)` per specificare le directory di inclusione che si applicano solo a un determinato file. Questo tipo di macro di elemento corrisponde ai metadati `ItemGroup` in MSBuild. Quando viene usata nel contesto di una configurazione di progetto, una macro di elemento viene applicata a tutti i file di un certo tipo. Ad esempio, nella proprietà di configurazione **Definizioni preprocessore** di C/C++ può essere accettata una macro di elemento `%(PreprocessorDefinitions)` che si applica a tutti i file con estensione cpp nel progetto. Questo tipo di macro di elemento corrisponde ai metadati `ItemDefinitionGroup` in MSBuild. Per altre informazioni, vedere [Definizioni degli elementi](/visualstudio/msbuild/item-definitions).

### <a name="user-defined-macros"></a>Macro definite dall'utente

È possibile creare *macro definite dall'utente* da usare come variabili nelle build di progetto. Ad esempio, si potrebbe creare una macro definita dall'utente per fornire un valore a un'istruzione di compilazione personalizzata o a uno strumento di compilazione personalizzato. Una macro definita dall'utente è una coppia nome/valore. In un file di progetto usare la notazione **$(**<em>name</em>**)** per accedere al valore.

Una macro definita dall'utente viene archiviata in una finestra delle proprietà. Se il progetto non contiene già una finestra delle proprietà, è possibile crearne una seguendo i passaggi illustrati in [Creazione di configurazioni di proprietà riutilizzabili](#bkmkPropertySheets).

##### <a name="to-create-a-user-defined-macro"></a>Per creare una macro definita dall'utente

1.  Nella finestra **Gestione proprietà** (sulla barra dei menu scegliere **Visualizza**, **Gestione proprietà**) aprire il menu di scelta rapida per una finestra delle proprietà (il nome termina con l'estensione user) e quindi scegliere Proprietà. Viene aperta la finestra di dialogo **Pagine delle proprietà** per la finestra delle proprietà.

2.  Nel riquadro sinistro della finestra selezionare **Macro utente**. Nel riquadro destro scegliere il pulsante **Aggiungi macro** per aprire la finestra di dialogo **Aggiungi macro utente**.

3.  Nella finestra di dialogo specificare un nome e un valore per la macro. Se possibile, selezionare la casella di controllo **Imposta questa macro come variabile di ambiente nell'ambiente di compilazione**.

## <a name="property-editor"></a>Editor proprietà

È possibile usare l'Editor della proprietà per modificare alcune proprietà stringa e selezionare le macro come valori. Per accedere all'Editor proprietà, selezionare una proprietà in una pagina delle proprietà, quindi scegliere il pulsante freccia in giù a destra. Se nell'elenco a discesa è contenuto **\<Modifica>**, è possibile sceglierlo per visualizzare l'Editor proprietà per tale proprietà.

![Menu a discesa&#95;Editor&#95;proprietà](../ide/media/property_editor_dropdown.png "Property_Editor_Dropdown")

In Editor proprietà è possibile scegliere il pulsante **Macro** per visualizzare le macro disponibili e i relativi valori correnti. La figura seguente illustra l'Editor proprietà per la proprietà **Directory di inclusione aggiuntive** dopo aver scelto il pulsante **Macro**. Quando la casella di controllo **Eredita da padre o da impostazioni predefinite progetto** è selezionata e si aggiunge un nuovo valore, questo viene aggiunto a tutti i valori ereditati. Se si deseleziona la casella di controllo, il nuovo valore sostituisce i valori ereditati. Nella maggior parte dei casi lasciare selezionata la casella di controllo.

![Editor proprietà, Visual C&#43;&#43;](../ide/media/propertyeditorvc.png "PropertyEditorVC")

##  <a name="bkmkPropertySheets"></a> Creazione di configurazioni di proprietà riutilizzabili

Sebbene sia possibile impostare le proprietà "globali" per singolo utente e per computer, questo approccio non è più consigliabile. In alternativa, è consigliabile usare **Gestione proprietà** per creare una *finestra delle proprietà* per archiviare le impostazioni per ogni tipo di progetto che si vuole poter riutilizzare o condividere con altri utenti. Tramite le finestre delle proprietà è meno probabile che le impostazioni delle proprietà per altri tipi di progetto vengano modificate inavvertitamente. Le finestre delle proprietà vengono illustrate in dettaglio in [Creazione di configurazioni di proprietà riutilizzabili](#bkmkPropertySheets).

> [!IMPORTANT]
> **File con estensione user e per quale motivo sono problematici**
>
> Nelle versioni precedenti di Visual Studio vengono usate finestre delle proprietà globali con un'estensione di file user e sono disponibili nella cartella \<profiloutente>\AppData\Local\Microsoft\MSBuild\v4.0\. Questi file non sono più consigliabili perché impostano le proprietà per le configurazioni di progetto su una base per utente e per computer. Impostazioni globali di questo tipo possono interferire con le compilazioni, specialmente quando si intende usare più piattaforme nel computer di compilazione. Ad esempio, se si dispone sia di un progetto MFC sia di un progetto Windows Phone, le proprietà con estensione user non saranno valide per uno di essi. Le finestre delle proprietà riutilizzabile sono più flessibili e affidabili.
>
> Sebbene i file con estensione user vengano ancora installati da Visual Studio e partecipino all'ereditarietà delle proprietà, sono vuoti per impostazione predefinita. È consigliabile eliminare il riferimento a essi in **Gestione proprietà** per verificare che i progetti funzionino a prescindere dalle impostazioni per utente e per computer. Questo è importante per garantire il corretto funzionamento in un ambiente di controllo del codice sorgente.

Per visualizzare **Gestione proprietà**, sulla barra dei menu scegliere **Visualizza**, **Altre finestre**, **Gestione proprietà**.

Se si ha un set di proprietà comune usato di frequente da applicare a più progetti, è possibile usare **Gestione proprietà** per acquisirle in un file della *finestra delle proprietà* riutilizzabile la cui estensione di file è generalmente props. È possibile applicare il foglio (o i fogli) a nuovi progetti in modo da non dover impostare le relative proprietà da zero. Per accedere a **Gestione proprietà**, sulla barra dei menu scegliere **Visualizza**, **Gestione proprietà**.

![Menu di scelta rapida Gestione proprietà](../ide/media/sharingnew.png "SharingNew")

In ogni nodo di configurazione vengono visualizzati i nodi per ogni finestra delle proprietà che si applica a questa configurazione. Il sistema aggiunge finestre delle proprietà che impostano i valori in base alle opzioni selezionate nella procedura guidata app quando si crea il progetto. Fare clic con il pulsante destro del mouse su qualsiasi nodo e scegliere Proprietà per visualizzare le proprietà che si applicano a quel nodo. Tutte le finestre delle proprietà vengono importate automaticamente nella finestra delle proprietà "master" del progetto (ms.cpp.props) e vengono valutate nell'ordine in cui vengono visualizzate in Gestione proprietà. È possibile spostarle per modificare l'ordine di valutazione. Le finestre delle proprietà che vengono valutate in un secondo momento sostituiranno i valori nelle finestre valutate in precedenza.

Se si sceglie **Aggiungi nuova finestra delle proprietà del progetto** e successivamente si seleziona ad esempio la finestra delle proprietà MyProps.props, viene visualizzata una finestra di dialogo della pagina delle proprietà. Questa condizione è valida per la finestra delle proprietà MyProps. Le modifiche apportate vengono scritte nella finestra, non nel file di progetto (con estensione vcxproj).

Le proprietà in una finestra delle proprietà vengono sottoposte a override se la stessa proprietà viene impostata direttamente nel file con estensione vcxproj.

È possibile importare una finestra delle proprietà ogni volta che si rivela necessario. Più progetti in una soluzione possono ereditare le impostazioni dalla stessa finestra delle proprietà e in un progetto possono essere presenti più finestre. La stessa finestra delle proprietà può ereditare le impostazioni da un'altra finestra delle proprietà.

È inoltre possibile creare una finestra delle proprietà per più configurazioni. A tale scopo, creare una finestra delle proprietà per ogni configurazione, aprire il menu di scelta rapida per una di esse, scegliere **Aggiungi finestra delle proprietà esistente** e quindi aggiungere le altre finestre. Se tuttavia si usa una finestra delle proprietà comuni, si tenga presente che quando si imposta una proprietà, essa è valida per tutte le configurazioni a cui la finestra viene applicata. Inoltre, tramite l'IDE non vengono mostrati i progetti o le altre finestre delle proprietà tramite cui si sta ereditando da una finestra delle proprietà specificata.

In soluzioni di grandi dimensioni, in cui vengono usati numerosi progetti, può essere utile creare una finestra delle proprietà a livello di soluzione. Quando si aggiunge un progetto alla soluzione, usare **Gestione proprietà** per aggiungere tale finestra delle proprietà al progetto. Se richiesto a livello di progetto, è possibile aggiungere una nuova finestra delle proprietà per impostare i valori specifici del progetto.

> [!IMPORTANT]
> Un file props per impostazione predefinita non partecipa al controllo del codice sorgente, poiché non viene creato come elemento di progetto. È possibile aggiungere manualmente il file come elemento di soluzione se si desidera includerlo nel controllo del codice sorgente.

#### <a name="to-create-a-property-sheet"></a>Per creare una finestra delle proprietà

1. Sulla barra dei menu scegliere **Visualizza**, **Gestione proprietà**. Verrà aperto **Gestione proprietà**.

2. Per definire l'ambito della finestra delle proprietà, selezionare l'elemento a cui si applica. Può trattarsi di una configurazione specifica o di un'altra finestra delle proprietà. Aprire il menu di scelta rapida per questo elemento e quindi scegliere **Aggiungi nuova finestra delle proprietà del progetto**. Specificare un nome e un percorso.

3. In **Gestione proprietà** aprire la nuova finestra delle proprietà e successivamente impostare le proprietà da includere.

##  <a name="bkmkPropertyInheritance"></a> Ereditarietà delle proprietà

Le proprietà del progetto sono sovrapposte. Ogni livello eredita i valori del livello precedente, ma un valore ereditato può essere sottoposto a override impostando esplicitamente la proprietà. Di seguito è riportato l'albero di ereditarietà di base:

1. Impostazioni predefinite dal set di strumenti di MSBuild CPP (..\Programmi\MSBuild\Microsoft.Cpp\v4.0\Microsoft.Cpp.Default.props, importato dal file .vcxproj).

2. Finestre delle proprietà

3. File con estensione vcxproj È possibile ignorare l'impostazione predefinita e le impostazioni della finestra delle proprietà.

4. Metadati degli elementi

> [!TIP]
> In una pagina delle proprietà una proprietà in `bold` è definita nel contesto corrente. Viene ereditata una proprietà in caratteri normali.

Un file di progetto (.vcxproj) importa altre finestre delle proprietà in fase di compilazione. Una volta importate tutte le finestre delle proprietà, il file di progetto viene valutato e l'ultima definizione del valore di una proprietà è quella usata. Talvolta è utile visualizzare il file espanso per determinare come viene ereditato un valore di proprietà specificato. Per visualizzare la versione estesa, inserire il comando seguente a un prompt dei comandi di Visual Studio. Modificare i nomi dei file segnaposto in quello che si desidera usare.

**msbuild /pp:** *temp* **.txt** *myapp* **.vcxproj**

I file di progetto espansi possono essere di grandi dimensioni e difficili da comprendere a meno che l'utente non abbia familiarità con MSBuild. Di seguito è riportata la struttura di base di un file di progetto:

1. Proprietà di progetto di base che non sono esposte nell'IDE.

2. Importazione di Microsoft.cpp.default.props, tramite cui vengono definite alcune proprietà di base indipendenti dal set di strumenti.

3. Proprietà globali di configurazione (esposte come **PlatformToolset** e proprietà predefinite **Progetto** nella pagina **Informazioni generali configurazione**. Queste proprietà determinano quali set di strumenti e finestre delle proprietà di intrinseche vengono importati in Microsoft.cpp.props durante il passaggio successivo.

4. Importazione di Microsoft.cpp.props, tramite cui viene impostata la maggior parte delle impostazioni predefinite del progetto.

5. Importazione di tutte le finestre delle proprietà, inclusi i file con estensione user. Queste finestre delle proprietà possono ignorare tutto ad eccezione delle proprietà predefinite **PlatformToolset** e **Progetto**.

6. Il resto delle proprietà della configurazione del progetto. Questi valori possono ignorare le operazioni impostate nelle finestre delle proprietà.

7. Elementi (file) insieme ai relativi metadati. Queste sono sempre l'ultima parola delle regole di valutazione di MSBuild, anche se si verificano prima di altre proprietà e importazioni.

Per altre informazioni, vedere [MSBuild Properties](/visualstudio/msbuild/msbuild-properties) (Proprietà MSBuild).

## <a name="adding-an-include-directory-to-the-set-of-default-directories"></a>Aggiunta di una directory di inclusione al set di directory predefinite

Quando si aggiunge una directory di inclusione a un progetto, è importante non eseguire l'override di tutte le directory predefinite. Il modo corretto per aggiungere una directory consiste nell'aggiungere il nuovo percorso, ad esempio "C:\MyNewIncludeDir\\" e quindi aggiungere la macro **$(IncludePath)** al valore della proprietà.

## <a name="setting-environment-variables-for-a-build"></a>Impostazione delle variabili di ambiente di una compilazione

Il compilatore di Visual C++ (cl.exe) riconosce alcune variabili di ambiente, in particolare LIB, LIBPATH, PATH e INCLUDE. Quando si esegue una compilazione con l'IDE, le proprietà impostate nella [Pagina delle proprietà Directory di VC++](../ide/vcpp-directories-property-page.md) vengono usate per impostare tali variabili di ambiente. Se i valori LIB, LIBPATH e INCLUDE sono già stati impostati, ad esempio da un prompt dei comandi dello sviluppatore, vengono sostituiti con i valori delle proprietà MSBuild corrispondenti. La compilazione antepone il valore della proprietà delle directory di file eseguibili Directory di VC++ a PATH. È possibile impostare una variabile di ambiente definita dall'utente creando una macro definita dall'utente e selezionando la casella che riporta **Imposta questa macro come variabile di ambiente nell'ambiente di compilazione**.

## <a name="setting-environment-variables-for-a-debugging-session"></a>Impostazione delle variabili di ambiente di una sessione di debug

Nel riquadro sinistro della finestra di dialogo **Pagine delle proprietà** del progetto espandere il nodo **Proprietà di configurazione** e selezionare **Debug**.

Nel riquadro destro modificare le impostazioni del progetto **Ambiente** o **Unisci ambiente** e quindi scegliere **OK**.

## <a name="modifying-properties-and-targets-without-changing-the-project-file"></a>Modifica delle proprietà e delle destinazioni senza modificare il file di progetto

È possibile ignorare le proprietà e le destinazioni del progetto al prompt dei comandi di MSBuild senza modificare il file di progetto. Ciò è utile quando si intende applicare alcune proprietà in modo temporaneo o occasionalmente. Si presuppone una conoscenza di MSBuild. Per altre informazioni, vedere [MSBuild](https://docs.microsoft.com/en-us/visualstudio/msbuild/msbuild).

> [!IMPORTANT]
> È possibile usare l'Editor XML in Visual Studio o qualsiasi editor di testo per creare il file con estensione props o targets. Non usare **Gestione proprietà** in questo scenario perché aggiunge le proprietà del file di progetto.

*Per ignorare le proprietà del progetto:*

1. Creare un file con estensione props che specifica le proprietà da ignorare.

1. Al prompt dei comandi: impostare ForceImportBeforeCppTargets="C:\sources\my_props.props"

*Per ignorare le destinazioni del progetto:*

1. Creare un file con estensione targets con la relativa implementazione o una particolare destinazione

2. Al prompt dei comandi: impostare ForceImportAfterCppTargets ="C:\sources\my_target.targets"

È anche possibile impostare entrambe le opzioni nella riga di comando di msbuild con l'opzione /p::

```cmd
> msbuild myproject.sln /p:ForceImportBeforeCppTargets="C:\sources\my_props.props"
> msbuild myproject.sln /p:ForceImportAfterCppTargets="C:\sources\my_target.targets"
```

Ignorare le proprietà e le destinazioni in questo modo equivale ad aggiungere le importazioni seguenti a tutti i file con estensione vcxproj nella soluzione:

```cmd
<Import Project=="C:\sources\my_props.props" />
<Import Project="$(VCTargetsPath)\Microsoft.Cpp.targets" />
<Import Project==" C:\sources\my_target.targets"" />
```

## <a name="see-also"></a>Vedere anche

[Creazione e gestione di progetti Visual C++](../ide/creating-and-managing-visual-cpp-projects.md)<br/>
[Struttura dei file con estensione vcxproj e props](vcxproj-file-structure.md)<br/>
[File XML delle pagine delle proprietà](property-page-xml-files.md)<br/>
