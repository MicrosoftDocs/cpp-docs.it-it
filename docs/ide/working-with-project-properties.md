---
title: Utilizzo di proprietà del progetto | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
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
ms.openlocfilehash: 3c33a18ff0d492ef3a870a342c9d8ff292007748
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="working-with-project-properties"></a>Utilizzo di proprietà di progetto
Nell'IDE, tutte le informazioni necessarie per compilare un progetto viene esposto come *proprietà*. Queste informazioni includono il nome dell'applicazione, l'estensione (ad esempio DLL, LIB, EXE), opzioni del compilatore, opzioni del linker, le impostazioni del debugger, istruzioni di compilazione personalizzate e numerosi altri elementi. In genere, si usa *pagine delle proprietà* ( **progetto &#124; proprietà**) per visualizzare e modificare queste proprietà. 
  
 Quando si crea un progetto, il sistema assegna i valori per varie proprietà. Le impostazioni predefinite sono leggermente a seconda del tipo di progetto e le opzioni selezionate nella procedura guidata app. Ad esempio, un progetto ATL con le proprietà relative a file MIDL, ma questi sono assenti in un'applicazione console di base. Le proprietà predefinite vengono visualizzate nel riquadro generale nelle pagine delle proprietà:  
  
 ![Visual C&#43; &#43; le impostazioni predefinite del progetto](../ide/media/visual-c---project-defaults.png "impostazioni predefinite progetto di Visual C++")  
  
 Alcune proprietà, ad esempio il nome dell'applicazione, si applicano a tutte le variazioni di compilazione, indipendentemente dalla piattaforma di destinazione sia in una build di debug o rilascio. Ma la maggior parte delle proprietà sono dipendenti dalla configurazione. In questo modo il compilatore deve conoscere quali piattaforma specifica, in cui verrà eseguito il programma e le opzioni del compilatore quali specifico da utilizzare per generare il codice corretto. Pertanto, quando si imposta una proprietà, è importante prestare attenzione alla quale applica il nuovo valore per piattaforma e configurazione. Deve applicare solo per le compilazioni di Debug Win32 o vale anche per eseguire il Debug ARM e x64 di Debug? Ad esempio, il **ottimizzazione** , per impostazione predefinita, viene impostata su **Ottimizza velocità (/ O2)** in una configurazione di rilascio, ma è disabilitato nella configurazione di Debug.  
  
 Le pagine delle proprietà sono progettati in modo che è possibile individuare, e se è necessario modificarla, quale piattaforma e configurazione di un valore di proprietà dovrà essere applicata. Nella figura seguente mostra le pagine delle proprietà con le informazioni di configurazione e piattaforma nelle caselle di riepilogo nella parte superiore. Quando il **ottimizzazione** è impostata in questo caso, verrà applicato solo per le compilazioni di Debug Win32, ovvero la configurazione attiva, come indicato dalle frecce rosse.  
  
 ![Visual C&#43; &#43; configurazione attiva che mostra le pagine delle proprietà](../ide/media/visual-c---property-pages-showing-active-configuration.png "configurazione attiva visualizzazione di pagine delle proprietà di Visual C++")  
  
 Nella figura seguente mostra la pagina delle proprietà progetto stesso, ma la configurazione è stata modificata alla versione. Si noti il valore della proprietà di ottimizzazione diversi. Si noti inoltre che la configurazione attiva è ancora Debug. È possibile impostare proprietà per qualsiasi configurazione. non deve necessariamente essere quello attivo.  
  
 ![Visual C&#43; &#43; configurazione di versione che mostra le pagine delle proprietà](../ide/media/visual-c---property-pages-showing-release-config.png "configurazione di rilascio con pagine delle proprietà di Visual C++")  
  
 Il sistema del progetto è basato su MSBuild, che definisce i formati di file e le regole per la compilazione di progetti di qualsiasi tipo. MSBuild consente di gestire la complessità della compilazione per più piattaforme e configurazioni, ma è necessario comprendere un po' sul suo funzionamento. Questo è particolarmente importante se si desidera definire le configurazioni personalizzate o creare il set riutilizzabile di proprietà che è possibile condividere e importare in più progetti.  
  
 Le proprietà del progetto vengono archiviate direttamente nel file di progetto (*. vcxproj) o in altri file con estensione XML o con estensione props che il file di progetto Importa e che forniscono valori predefiniti. Come illustrato in precedenza, la stessa proprietà per la stessa configurazione può assegnare un valore diverso in file diversi. Quando si compila un progetto, il motore MSBuild valuta il file di progetto e tutti i file importati in un ordine ben definito (descritte di seguito). Come viene valutato ogni file, i valori di proprietà definiti in tale file sostituirà i valori esistenti. Tutti i valori che non sono specificati vengono ereditati da file che sono stati valutati in precedenza. Pertanto, quando si imposta una proprietà con le pagine delle proprietà, è anche importante prestare attenzione a cui è stato impostato. Se si impostare una proprietà su "X" in un file con estensione props, ma la proprietà è impostata su "Y" nel file di progetto, il progetto verrà compilato con la proprietà impostata su "Y". Se la stessa proprietà è impostata su "Z" su un elemento di progetto, ad esempio un file con estensione cpp, il motore MSBuild utilizzerà il valore di "Z". Per ulteriori informazioni, vedere [ereditarietà della proprietà](#bkmkPropertyInheritance) più avanti in questo articolo.  
  
## <a name="build-configurations"></a>Configurazioni di compilazione  
 Una configurazione è solo un gruppo arbitrario di proprietà che viene assegnato un nome. Visual Studio fornisce configurazioni Debug e rilascio e ogni imposta varie proprietà in modo appropriato per una build di debug o di una build di rilascio. È possibile utilizzare il **Configuration Manager** per definire le configurazioni personalizzate come un modo pratico per le proprietà di gruppo per una versione specifica di compilazione. La gestione di proprietà viene utilizzata per il lavoro con le proprietà avanzato, ma si introduce il qui perché consente di visualizzare le configurazioni di proprietà. È accedervi dal **View &#124; Gestione proprietà** o **visualizzazione &#124; altre finestre &#124; Gestione proprietà** a seconda delle impostazioni. Dispone di nodi per ogni coppia di configurazione/piattaforma nel progetto. In ognuno di questi nodi sono nodi per finestre delle proprietà (file con estensione props) impostare alcune proprietà specifiche per la configurazione.  
  
 ![Gestione proprietà](../ide/media/property-manager.png "Gestione proprietà")  
  
 Se nel riquadro generale nelle pagine delle proprietà (vedere la figura precedente) e impostare la proprietà del Set di caratteri "Non impostata" anziché "Utilizza Unicode" e fare clic su **OK**, proprietà di gestione visualizzerà alcun **supporto Unicode** finestra delle proprietà per la configurazione corrente, ma sarà ancora disponibile per le altre configurazioni.  
  
 Per ulteriori informazioni sulla gestione di proprietà e finestre delle proprietà, vedere [la creazione di configurazioni di proprietà riutilizzabili](#bkmkPropertySheets) più avanti in questo articolo.  
  
> [!TIP]
>  Il file con estensione User è una funzionalità legacy e si consiglia di eliminarlo per mantenere le proprietà raggruppate correttamente in base alla configurazione/piattaforma.  
  
## <a name="target-platforms"></a>Piattaforme di destinazione  
 *Piattaforma di destinazione* fa riferimento al tipo di dispositivo e/o sistema operativo in cui verrà eseguito il file eseguibile. È possibile compilare un progetto per più piattaforme. Le piattaforme di destinazione disponibili per i progetti C++ dipendono dal tipo di progetto. includere, ma non sono limitati a Win32, x64, ARM, Android e iOS.     Il **x86** piattaforma di destinazione che è possibile riscontrare in **Configuration Manager** è identico a **Win32** in progetti C++ nativi. Win32 significa Windows a 32 bit e **x64** significa Windows a 64 bit. Per ulteriori informazioni su queste due piattaforme, vedere [applicazioni in esecuzione a 32 bit](https://msdn.microsoft.com/library/windows/desktop/aa384249\(v=vs.85\).aspx).  
  
 Il **qualsiasi CPU** valore piattaforma che è possibile riscontrare in target **Configuration Manager** non ha alcun effetto in progetti C++ nativi; è rilevante per C + + CLI e altri .NET i tipi di progetto. Per altre informazioni, vedere [/CLRIMAGETYPE (Specifica il tipo di immagine CLR)](../build/reference/clrimagetype-specify-type-of-clr-image.md).  
  
## <a name="property-pages"></a>pagine delle proprietà  
 Come indicato in precedenza, il sistema di progetto Visual C++ si basa sul [MSBuild](/visualstudio/msbuild/msbuild-properties) e i valori vengono archiviati nel file di progetto XML predefinito con estensione props e targets. Per Visual Studio 2015, questi file si trovano **file \Programmi (x86)\MSBuild\Microsoft.Cpp\v4.0\V140**. Per Visual Studio 2017, questi file si trovano  **\\programmi (x86)\\Microsoft Visual Studio\\2017\\_edition_\\Common7\\ IDE\\VC\\VCTargets**, dove _edition_ è l'edizione di Visual Studio installato. Le proprietà vengono archiviate anche in qualsiasi file con estensione props personalizzati che è possibile aggiungere a un progetto. È consigliabile non modificare manualmente i file di utilizzare le pagine delle proprietà nell'IDE per modificare tutte le proprietà, specialmente quelle che fanno parte di ereditarietà, a meno che non si conoscono molto di MSBuild.  
  
 La figura seguente mostra le pagine delle proprietà per un progetto Visual C++. Nel riquadro sinistro, il **directory di VC + + * * * regola* è selezionata, e il riquadro destro sono elencate le proprietà associate a tale regola. Il `$(...)` valori sono denominati Purtroppo *macro*. Si tratta di *non* macro di C/C++, ma semplicemente in fase di compilazione costanti. Le macro vengono discussi nel [macro pagina proprietà](#bkmkPropertiesVersusMacros) sezione più avanti in questo articolo.)  
  
 ![Pagine delle proprietà del progetto](../ide/media/project_property_pages_vc.png "Project_Property_Pages_VC")  
  
> [!WARNING]
>  Il **proprietà comuni** configurazioni nelle versioni precedenti di Visual Studio sono state rimosse. Per aggiungere un riferimento a un progetto, è ora utilizzare il **Aggiungi riferimento** finestra di dialogo nello stesso modo per i linguaggi gestiti. Vedere [gestione dei riferimenti in un progetto](/visualstudio/ide/managing-references-in-a-project).  
  
#### <a name="to-set-a-property-for-a-project"></a>Per impostare una proprietà per un progetto  
  
1.  Per la maggior parte degli scenari, è possibile impostare proprietà a livello di progetto senza creare una finestra delle proprietà personalizzate. Nel menu principale scegliere **progetto &#124; proprietà**, oppure fare clic sul nodo del progetto in **Esplora** e scegliere **proprietà**.  
  
2.  Utilizzare il **configurazione** e **piattaforma** elenco caselle nella parte superiore della finestra di dialogo per specificare i gruppi di proprietà, applicare le modifiche. In molti casi **tutte le piattaforme** e **tutte le configurazioni** costituiscono la scelta corretta. Per impostare le proprietà per solo alcune configurazioni, la selezione multipla nel **Gestione proprietà**, quindi aprire il menu di scelta rapida e scegliere **proprietà**.  
  
 Il **pagine delle proprietà** la finestra di dialogo Visualizza solo le pagine di proprietà che si applicano al progetto corrente. Ad esempio, se il progetto non dispone di un file con estensione idl, la pagina delle proprietà MIDL non viene visualizzata.  
  
 Quando si evidenzia una proprietà in una pagina delle proprietà, è possibile premere **F1** per passare all'argomento di riferimento per ulteriori informazioni sull'opzione del compilatore o del linker corrispondente.  
  
 È possibile trovare ulteriori informazioni su ogni pagina delle proprietà in questi argomenti:  
  
-   [Pagina delle proprietà Generale (Progetto)](../ide/general-property-page-project.md)  
  
-   [Pagina delle proprietà Generale (File)](../ide/general-property-page-file.md)  
  
-   [Pagine delle proprietà Riga di comando](../ide/command-line-property-pages.md)  
  
-   [Impostazioni di progetto per una configurazione di debug C++](/visualstudio/debugger/project-settings-for-a-cpp-debug-configuration)  
  
-   [Pagina delle proprietà NMAKE](../ide/nmake-property-page.md)  
  
-   [Pagine delle proprietà Linker](../ide/linker-property-pages.md)  
  
-   [Pagine delle proprietà Risorse](../ide/resources-property-pages.md)  
  
-   [Pagine delle proprietà MIDL](../ide/midl-property-pages.md)  
  
-   [Pagina delle proprietà Riferimenti Web](../ide/web-references-property-page.md)  
  
-   [Pagina delle proprietà Strumento generatore di dati XML](../ide/xml-data-generator-tool-property-page.md)  
  
## <a name="to-quickly-browse-and-search-all-properties"></a>Per cercare e trovare tutte le proprietà rapidamente  
 Il **tutte le opzioni** pagina delle proprietà (sotto il **le proprietà di configurazione &#124; C/C++** nodo il **pagine delle proprietà** finestra di dialogo) fornisce un modo rapido per esplorare e trovare le proprietà disponibili nel contesto corrente. Include una casella di ricerca speciale e una sintassi semplice per filtrare facilmente i risultati:  
  
 Nessun prefisso:  
 ricerca solo nei nomi delle proprietà (sottostringa senza distinzione tra maiuscole e minuscole).  
  
 '/' o '-':  
 ricerca solo nelle opzioni del compilatore (prefisso senza distinzione tra maiuscole e minuscole)  
  
 v:  
 ricerca solo nei valori (sottostringa senza distinzione tra maiuscole e minuscole).  
  
##  <a name="bkmkPropertiesVersusMacros"></a> Macro di pagina di proprietà  
 Oggetto *macro* è una costante in fase di compilazione che può fare riferimento a un valore definito da Visual Studio o dal sistema MSBuild o a un valore definito dall'utente. Usando le macro anziché i valori hardcoded come i percorsi di directory, è possibile condividere con maggiore facilità le impostazioni delle proprietà tra i computer e tra le versioni di Visual Studio, nonché assicurarsi meglio che le impostazioni del progetto partecipino in modo appropriato all'ereditarietà della proprietà. È possibile utilizzare l'Editor di proprietà per visualizzare i valori di tutte le macro disponibili.  
  
### <a name="predefined-macros"></a>Macro predefinite  
 macro globali  
 Si applica a tutti gli elementi di una configurazione del progetto. Presenta la sintassi `$(name)`. Un esempio di macro globale è `$(VCInstallDir)`, che archivia la directory radice dell'installazione di Visual Studio. Una macro globale corrisponde a `PropertyGroup` in MSBuild.  
  
 macro elemento  
 Presenta la sintassi `%(name)`. Per un file una macro di elemento si applica solo a quel file. Ad esempio è possibile utilizzare `%(AdditionalIncludeDirectories)` per specificare le directory di inclusione che si applicano solo a un determinato file. Questo tipo di macro di elemento corrisponde ai metadati `ItemGroup` in MSBuild. Quando viene usata nel contesto di una configurazione di progetto, una macro di elemento viene applicata a tutti i file di un certo tipo. Ad esempio, C/C++ **definizioni preprocessore** proprietà di configurazione può richiedere un `%(PreprocessorDefinitions)` macro di elemento che si applica a tutti i file con estensione cpp nel progetto. Questo tipo di macro di elemento corrisponde ai metadati `ItemDefinitionGroup` in MSBuild. Per altre informazioni, vedere [Definizioni degli elementi](/visualstudio/msbuild/item-definitions).  
  
### <a name="user-defined-macros"></a>Macro definite dall'utente  
 È possibile creare *macro definite dall'utente* da utilizzare come variabili nelle compilazioni di progetto. Ad esempio, si potrebbe creare una macro definita dall'utente per fornire un valore a un'istruzione di compilazione personalizzata o a uno strumento di compilazione personalizzato. Una macro definita dall'utente è una coppia nome/valore. In un file di progetto, usare il **$(***nome***)** notazione per accedere al valore.  
  
 Una macro definita dall'utente viene archiviata in una finestra delle proprietà. Se il progetto non contiene già una finestra delle proprietà, è possibile creare una seguendo i passaggi descritti in [la creazione di configurazioni di proprietà riutilizzabili](#bkmkPropertySheets).  
  
##### <a name="to-create-a-user-defined-macro"></a>Per creare una macro definita dall'utente  
  
1.  Nel **Gestione proprietà** finestra (sulla barra dei menu, scegliere **vista**, **Gestione proprietà**), aprire il menu di scelta rapida per una finestra delle proprietà (il nome termina con. User) e quindi scegliere Proprietà. Il **pagine delle proprietà** verrà visualizzata la finestra di dialogo per la finestra delle proprietà.  
  
2.  Nel riquadro sinistro della finestra di dialogo, selezionare **macro utente**. Nel riquadro di destra, scegliere il **Aggiungi Macro** pulsante per aprire la **Aggiungi Macro utente** la finestra di dialogo.  
  
3.  Nella finestra di dialogo specificare un nome e un valore per la macro. Facoltativamente, selezionare il **imposta questa macro come variabile di ambiente nell'ambiente di compilazione** casella di controllo.  
  
## <a name="property-editor"></a>Editor proprietà  
 È possibile usare l'Editor della proprietà per modificare alcune proprietà stringa e selezionare le macro come valori. Per accedere all'Editor proprietà, selezionare una proprietà in una pagina delle proprietà, quindi scegliere il pulsante freccia in giù a destra. Se l'elenco a discesa contiene  **\<Modifica >**, è possibile sceglierlo per visualizzare l'Editor di proprietà per tale proprietà.  
  
 ![Proprietà&#95;Editor&#95;elenco a discesa](../ide/media/property_editor_dropdown.png "Property_Editor_Dropdown")  
  
 Nell'Editor di proprietà, è possibile scegliere di **macro** pulsante per visualizzare le macro disponibili e i relativi valori correnti. Nella figura seguente mostra l'Editor di proprietà per il **directory di inclusione aggiuntive** proprietà dopo il **macro** è stato scelto il pulsante. Quando il **eredita da padre o progetto predefinite** casella di controllo è selezionata e si aggiunge un nuovo valore, viene aggiunto a tutti i valori ereditati. Se si deseleziona la casella di controllo, il nuovo valore sostituisce i valori ereditati. Nella maggior parte dei casi lasciare selezionata la casella di controllo.  
  
 ![Editor delle proprietà, Visual C&#43;&#43;](../ide/media/propertyeditorvc.png "PropertyEditorVC")  
  
##  <a name="bkmkPropertySheets"></a> Creazione di configurazioni di proprietà riutilizzabili  
 Sebbene sia possibile impostare le proprietà "globali" per singolo utente e per computer, questo approccio non è più consigliabile. È invece consigliabile utilizzare **Gestione proprietà** per creare un *finestra delle proprietà* per archiviare le impostazioni per ogni tipo di progetto che si desidera poter riutilizzare o condividere con altri utenti. Tramite le finestre delle proprietà è meno probabile che le impostazioni delle proprietà per altri tipi di progetto vengano modificate inavvertitamente. Finestre delle proprietà vengono illustrate in dettaglio [la creazione di configurazioni di proprietà riutilizzabili](#bkmkPropertySheets).  
  
> [!IMPORTANT]
>  **file con estensione User e motivo sono problematici**  
>   
>  Le versioni precedenti di Visual Studio vengono usate finestre delle proprietà globali con un'estensione di file con estensione User e sono disponibili nel \<userprofile > cartella \AppData\Local\Microsoft\MSBuild\v4.0\. Questi file non sono più consigliabili perché impostano le proprietà per le configurazioni di progetto su una base per utente e per computer. Impostazioni globali di questo tipo possono interferire con le compilazioni, specialmente quando si intende usare più piattaforme nel computer di compilazione. Ad esempio, se si dispone sia di un progetto MFC sia di un progetto Windows Phone, le proprietà con estensione user non saranno valide per uno di essi. Le finestre delle proprietà riutilizzabile sono più flessibili e affidabili.  
>   
>  Sebbene i file con estensione user vengano ancora installati da Visual Studio e partecipino all'ereditarietà delle proprietà, sono vuoti per impostazione predefinita. La procedura consigliata consiste nell'eliminare il riferimento a essi in **Gestione proprietà** per garantire che i progetti funzionino in modo indipendente da qualsiasi utente, le impostazioni per ogni computer è importante per assicurare il corretto funzionamento in un controllo configurazione sistema (codice sorgente ambiente di controllo).  
  
 Per visualizzare **Gestione proprietà**, sulla barra dei menu, scegliere **vista**, **altre finestre**, **Gestione proprietà**.  
  
 Se si dispone di un set di proprietà che si desidera applicare a più progetti comune usato di frequente, è possibile utilizzare **Gestione proprietà** per acquisirle in un riutilizzabile *finestra delle proprietà* file, per convenzione con estensione di file con estensione props. È possibile applicare il foglio (o i fogli) a nuovi progetti in modo da non dover impostare le relative proprietà da zero. Per accedere a **Gestione proprietà**, sulla barra dei menu, scegliere **vista**, **Gestione proprietà**.  
  
 ![Menu di scelta rapida Gestione proprietà](../ide/media/sharingnew.png "SharingNew")  
  
 In ogni nodo di configurazione, viene visualizzato per ogni finestra delle proprietà che si applica a questa configurazione i nodi. Il sistema aggiunge finestre delle proprietà che impostano i valori in base alle opzioni selezionate nella procedura guidata app quando si crea il progetto. Fare doppio clic su qualsiasi nodo e scegliere Proprietà per visualizzare le proprietà che si applicano a tale nodo. Tutte le finestre delle proprietà vengono importati automaticamente nella finestra delle proprietà "master" del progetto (ms.cpp.props) e vengono valutati nell'ordine che vengono visualizzati in Gestione proprietà. È possibile spostarli per modificare l'ordine di valutazione. Finestre delle proprietà che vengono valutate in un secondo momento sostituirà i valori nei fogli di valutate in precedenza.  
  
 Se si sceglie **Aggiungi nuova finestra delle proprietà del progetto** e successivamente si seleziona ad esempio, la finestra delle proprietà myProps, una finestra di dialogo viene visualizzata. Questa condizione è valida per la finestra delle proprietà MyProps. Le modifiche apportate vengono scritte nella finestra, non nel file di progetto (con estensione vcxproj).  
  
 Le proprietà in una finestra delle proprietà vengono sottoposte a override se la stessa proprietà viene impostata direttamente nel file con estensione vcxproj.  
  
 È possibile importare una finestra delle proprietà ogni volta che si rivela necessario. Più progetti in una soluzione possono ereditare le impostazioni dalla stessa finestra delle proprietà e in un progetto possono essere presenti più finestre. La stessa finestra delle proprietà può ereditare le impostazioni da un'altra finestra delle proprietà.  
  
 È inoltre possibile creare una finestra delle proprietà per più configurazioni. A tale scopo, creare una finestra delle proprietà per ogni configurazione, aprire il menu di scelta rapida per uno di essi, scegliere **Aggiungi finestra delle proprietà esistente**, quindi aggiungere gli altri fogli. Se tuttavia si usa una finestra delle proprietà comuni, si tenga presente che quando si imposta una proprietà, essa è valida per tutte le configurazioni a cui la finestra viene applicata. Inoltre, tramite l'IDE non vengono mostrati i progetti o le altre finestre delle proprietà tramite cui si sta ereditando da una finestra delle proprietà specificata.  
  
 In soluzioni di grandi dimensioni, in cui vengono usati numerosi progetti, può essere utile creare una finestra delle proprietà a livello di soluzione. Quando si aggiunge un progetto alla soluzione, utilizzare **Gestione proprietà** per aggiungere tale finestra delle proprietà al progetto. Se richiesto a livello di progetto, è possibile aggiungere una nuova finestra delle proprietà per impostare i valori specifici del progetto.  
  
> [!IMPORTANT]
>  Un file props per impostazione predefinita non partecipa al controllo del codice sorgente, poiché non viene creato come elemento di progetto. È possibile aggiungere manualmente il file come elemento di soluzione se si desidera includerlo nel controllo del codice sorgente.  
  
#### <a name="to-create-a-property-sheet"></a>Per creare una finestra delle proprietà  
  
1.  Nella barra dei menu, scegliere **vista**, **Gestione proprietà**. Il **Gestione proprietà** apre.  
  
2.  Per definire l'ambito della finestra delle proprietà, selezionare l'elemento a cui si applica. Può trattarsi di una configurazione specifica o di un'altra finestra delle proprietà. Aprire il menu di scelta rapida per questo elemento e quindi scegliere **Aggiungi nuova finestra delle proprietà del progetto**. Specificare un nome e un percorso.  
  
3.  In **Gestione proprietà**, aprire una nuova finestra delle proprietà e quindi impostare le proprietà che si desidera includere.  
  
##  <a name="bkmkPropertyInheritance"></a> Ereditarietà della proprietà  
 Le proprietà del progetto sono sovrapposte. Ogni livello eredita i valori del livello precedente, ma un valore ereditato può essere sottoposto a override impostando esplicitamente la proprietà. Di seguito è riportato l'albero di ereditarietà di base:  
  
1.  Impostazioni predefinite dal set di strumenti di MSBuild CPP (..\Programmi\MSBuild\Microsoft.Cpp\v4.0\Microsoft.Cpp.Default.props, importato dal file .vcxproj).  
  
2.  Finestre delle proprietà  
  
3.  File con estensione vcxproj È possibile ignorare l'impostazione predefinita e le impostazioni della finestra delle proprietà.  
  
4.  Metadati degli elementi  
  
> [!TIP]
>  Nella pagina delle proprietà, una proprietà in `bold` è definita nel contesto corrente. Viene ereditata una proprietà in caratteri normali.  
  
 Un file di progetto (.vcxproj) importa altre finestre delle proprietà in fase di compilazione. Una volta importate tutte le finestre delle proprietà, il file di progetto viene valutato e l'ultima definizione del valore di una proprietà è quella usata. Talvolta è utile visualizzare il file espanso per determinare come viene ereditato un valore di proprietà specificato. Per visualizzare la versione estesa, inserire il comando seguente a un prompt dei comandi di Visual Studio. Modificare i nomi dei file segnaposto in quello che si desidera usare.  
  
 **msbuild /pp:** *temp* **.txt** *myapp* **.vcxproj**  
  
 I file di progetto espansi possono essere di grandi dimensioni e difficili da comprendere a meno che l'utente non abbia familiarità con MSBuild. Di seguito è riportata la struttura di base di un file di progetto:  
  
1.  Proprietà di progetto di base che non sono esposte nell'IDE.  
  
2.  Importazione di Microsoft.cpp.default.props, tramite cui vengono definite alcune proprietà di base indipendenti dal set di strumenti.  
  
3.  Proprietà globali di configurazione (esposte come **PlatformToolset** e **progetto** proprietà predefinite nel **generali configurazione** pagina. Queste proprietà determinano quali set di strumenti e finestre delle proprietà di intrinseche vengono importati in Microsoft.cpp.props durante il passaggio successivo.  
  
4.  Importazione di Microsoft.cpp.props, tramite cui viene impostata la maggior parte delle impostazioni predefinite del progetto.  
  
5.  Importazione di tutte le finestre delle proprietà, inclusi i file con estensione user. Queste finestre delle proprietà possono ignorare tutto ad eccezione di **PlatformToolset** e **progetto** le proprietà predefinite.  
  
6.  Il resto delle proprietà della configurazione del progetto. Questi valori possono ignorare le operazioni impostate nelle finestre delle proprietà.  
  
7.  Elementi (file) insieme ai relativi metadati. Queste sono sempre l'ultima parola delle regole di valutazione di MSBuild, anche se si verificano prima di altre proprietà e importazioni.  
  
 Per altre informazioni, vedere [MSBuild Properties](/visualstudio/msbuild/msbuild-properties) (Proprietà MSBuild).  
  
## <a name="adding-an-include-directory-to-the-set-of-default-directories"></a>Aggiunta di una directory di inclusione al set di directory predefinite  
 Quando si aggiunge una directory di inclusione a un progetto, è importante non eseguire l'override di tutte le directory predefinite. Il modo corretto per aggiungere una directory consiste nell'aggiungere il nuovo percorso, ad esempio "C:\MyNewIncludeDir\"e quindi aggiunge la **$ (IncludePath)** (macro) al valore della proprietà.  
  
## <a name="setting-environment-variables-for-a-build"></a>Impostazione delle variabili di ambiente di una compilazione  
 Il compilatore di Visual C++ (cl.exe) riconosce alcune variabili di ambiente, in particolare LIB, LIBPATH, PATH e INCLUDE. Quando si compila con l'IDE, le proprietà impostate nel [pagina delle proprietà directory di VC + +](../ide/vcpp-directories-property-page.md) pagina delle proprietà vengono utilizzate per impostare tali variabili di ambiente. Se i valori LIB, LIBPATH e INCLUDE sono già stati impostati, ad esempio da un prompt dei comandi dello sviluppatore, vengono sostituiti con i valori delle proprietà MSBuild corrispondenti. La compilazione antepone il valore della proprietà delle directory di file eseguibili Directory di VC++ a PATH. È possibile impostare una variabile di ambiente definita dall'utente creare una macro definita dall'utente e quindi deselezionando la casella che riporta **imposta questa macro come variabile di ambiente nell'ambiente di compilazione**.  
  
## <a name="setting-environment-variables-for-a-debugging-session"></a>Impostazione delle variabili di ambiente di una sessione di debug  
 Nel riquadro sinistro della finestra del progetto **pagine delle proprietà** finestra di dialogo espandere **le proprietà di configurazione** e quindi selezionare **debug**. 
  
 Nel riquadro di destra, modificare il **ambiente** o **Esegui Merge ambiente** le impostazioni del progetto e quindi scegliere il **OK** pulsante.  

## <a name="modifying-properties-and-targets-without-changing-the-project-file"></a>Modifica le proprietà e le destinazioni senza modificare il file di progetto
È possibile ignorare le proprietà del progetto e le destinazioni dal prompt dei comandi di MSBuild senza modificare il file di progetto. Ciò è utile quando si desidera applicare alcune proprietà in modo temporaneo o occasionalmente. Si presuppone una conoscenza di MSBuild. Per ulteriori informazioni, vedere [MSBUild](https://docs.microsoft.com/en-us/visualstudio/msbuild/msbuild).

> [!IMPORTANT]
> È possibile utilizzare l'Editor XML in Visual Studio o qualsiasi editor di testo, per creare il file con estensione props o con estensione targets. Non utilizzare il **Gestione proprietà** in questo scenario perché consente di aggiungere le proprietà del file di progetto.

*Per eseguire l'override di proprietà del progetto:*
- Creare un file con estensione props che specifica le proprietà che si desidera eseguire l'override. 
- Dal prompt dei comandi: impostare ForceImportBeforeCppTargets="C:\sources\my_props.props"
 
*Per eseguire l'override di progetto è destinato a:*
1) Creare un file con estensione targets con la relativa implementazione o di una particolare destinazione
2) Dal prompt dei comandi: impostare ForceImportAfterCppTargets = "C:\sources\my_target.targets"
 
È inoltre possibile impostare entrambe le opzioni nella riga di comando di msbuild con l'opzione /p::

```cmd
> msbuild myproject.sln /p:ForceImportBeforeCppTargets="C:\sources\my_props.props" 
> msbuild myproject.sln /p:ForceImportAfterCppTargets="C:\sources\my_target.targets" 
```  

Override di proprietà e le destinazioni in questo modo è equivalente all'aggiunta di seguito Importa per tutti i file con estensione vcxproj nella soluzione:

```cmd 
<Import Project=="C:\sources\my_props.props" />
<Import Project="$(VCTargetsPath)\Microsoft.Cpp.targets" />
<Import Project==" C:\sources\my_target.targets"" />
```  

## <a name="see-also"></a>Vedere anche  
 [La creazione e la gestione dei progetti di Visual C++](../ide/creating-and-managing-visual-cpp-projects.md) [struttura di file con estensione vcxproj e con estensione props](vcxproj-file-structure.md) [i file XML pagina delle proprietà](property-page-xml-files.md)