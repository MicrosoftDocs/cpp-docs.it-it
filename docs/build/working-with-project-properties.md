---
title: Impostare il compilatore e le proprietà di compilazione C++ in Visual Studio
description: Usare l'IDE di Visual Studio per modificare le opzioni del compilatore e del linker C++ e altre impostazioni di compilazione.
ms.date: 07/17/2019
helpviewer_keywords:
- project properties [C++], modifying
- properties [C++]
- Visual C++ projects, properties
- projects [C++], properties
ms.assetid: 9b0d6f8b-7d4e-4e61-aa75-7d14944816cd
ms.openlocfilehash: 17b54311670f78cda78403c273cfbf57d43e84da
ms.sourcegitcommit: 6280a4c629de0f638ebc2edd446de2a9b11f0406
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2020
ms.locfileid: "90042186"
---
# <a name="set-compiler-and-build-properties"></a>Impostare il compilatore e le proprietà di compilazione

Nell'IDE tutte le informazioni necessarie per compilare un progetto vengono esposte come *proprietà*. Queste informazioni includono nome dell'applicazione, estensione (ad esempio DLL, LIB, EXE), opzioni del compilatore, opzioni del linker, impostazioni del debugger, istruzioni di compilazione personalizzate e molti altri elementi. In genere, è possibile utilizzare le *pagine delle proprietà* per visualizzare e modificare queste proprietà. Per accedere alle pagine delle proprietà, scegliere **Project**  >  **_NomeProgetto_ Properties** dal menu principale oppure fare clic con il pulsante destro del mouse sul nodo del progetto in **Esplora soluzioni** e scegliere **Proprietà**.

## <a name="default-properties"></a>Proprietà predefinite

Quando si crea un progetto, il sistema assegna i valori per varie proprietà. Le impostazioni predefinite variano leggermente a seconda del tipo di progetto e delle opzioni selezionate nella procedura guidata app. Ad esempio, un progetto ATL ha proprietà relative a file MIDL, ma questi sono assenti in un'applicazione console di base. Le proprietà predefinite vengono visualizzate nel riquadro Generale nelle Pagine delle proprietà:

![Impostazioni predefinite del progetto Visual C&#43;&#43; ](media/visual-c---project-defaults.png "Impostazioni predefinite del progetto Visual C++")

## <a name="applying-properties-to-build-configurations-and-target-platforms"></a>Applicazione delle proprietà per la compilazione di configurazioni e piattaforme di destinazione

Alcune proprietà, ad esempio il nome dell'applicazione, si applicano a tutte le variazioni della build, indipendentemente dalla piattaforma di destinazione o dal fatto che si tratti di una build di debug o di versione. La maggior parte delle proprietà sono tuttavia dipendenti dalla configurazione. In questo modo il compilatore deve sapere su quale piattaforma specifica verrà eseguito il programma e le opzioni del compilatore specifiche da usare per generare il codice corretto. Quando si imposta una proprietà è quindi importante prestare attenzione alla configurazione e piattaforma a cui viene applicato il nuovo valore. Si applica solo alle build di debug Win32 o anche al debug di dispositivi ARM e x64? Ad esempio, la proprietà **Ottimizzazione** viene impostata automaticamente su **Ottimizza velocità (/O2)** in una configurazione per la versione, ma è disabilitata nella configurazione per il debug.

Le pagine delle proprietà sono progettate in modo che sia sempre possibile visualizzare, e se necessario modificare, la piattaforma e la configurazione a cui applicare un valore della proprietà. Nella figura seguente vengono illustrate le pagine delle proprietà con le informazioni di configurazione e della piattaforma nelle caselle di riepilogo nella parte superiore. Quando la proprietà **Ottimizzazione** viene impostata in questo punto, verrà applicata solo per le build di debug Win32, ovvero la configurazione attiva, come indicato dalle frecce rosse.

![Pagine delle proprietà di Visual C&#43;&#43; che mostrano la configurazione attiva](media/visual-c---property-pages-showing-active-configuration.png "Visual C++ pagine delle proprietà che mostrano la configurazione attiva")

Nella figura seguente viene illustrata la pagina delle proprietà dello stesso progetto, ma la configurazione è stata modificata su Versione. Si noti il valore diverso della proprietà Ottimizzazione. Si noti anche che la configurazione attiva è ancora Debug. È possibile impostare proprietà per qualsiasi configurazione, non necessariamente per quella attiva.

![Pagine delle proprietà di Visual C&#43;&#43; che mostrano la configurazione della versione](media/visual-c---property-pages-showing-release-config.png "Visual C++ pagine delle proprietà che mostrano la configurazione della versione")

## <a name="target-platforms"></a>Piattaforme di destinazione

*Piattaforma di destinazione* fa riferimento al tipo di dispositivo e/o sistema operativo in cui verrà eseguito il file eseguibile. È possibile compilare un progetto per più piattaforme. Le piattaforme di destinazione disponibili per i progetti C++ dipendono dal tipo di progetto e includono, ma non sono limitate a, Win32, x64, ARM, Android e iOS.     La piattaforma di destinazione **x86** che si può incontrare in **Configuration Manager** è identica a **Win32** nei progetti C++ nativi. Win32 significa Windows a 32 bit e **x64** significa Windows a 64 bit. Per altre informazioni su queste due piattaforme, vedere [Running 32-bit applications](/windows/win32/WinProg64/running-32-bit-applications) (Esecuzione di applicazioni a 32 bit).

Il valore della piattaforma di destinazione **Qualsiasi CPU** che è possibile riscontrare in **Configuration Manager** non ha alcun effetto in progetti C++ nativi; è rilevante per C++/CLI e altri tipi di progetto .NET. Per altre informazioni, vedere [/CLRIMAGETYPE (Specifica il tipo di immagine CLR)](reference/clrimagetype-specify-type-of-clr-image.md).

Per ulteriori informazioni sull'impostazione delle proprietà per una compilazione di debug, vedere:

- [Impostazioni di progetto per una configurazione di debug C++](/visualstudio/debugger/project-settings-for-a-cpp-debug-configuration)
- [Impostazioni di debug e preparazione](/visualstudio/debugger/debugger-settings-and-preparation)
- [Preparazione al debug: tipi di progetto Visual C++](/visualstudio/debugger/debugging-preparation-visual-cpp-project-types)
- [Specificare file di simboli (PDB) e di origine nel debugger di Visual Studio](/visualstudio/debugger/specify-symbol-dot-pdb-and-source-files-in-the-visual-studio-debugger)

## <a name="c-compiler-and-linker-options"></a>Opzioni del compilatore e del linker C++

Le opzioni del compilatore e del linker C++ si trovano sotto i nodi **C/C++** e **linker** nel riquadro sinistro in **proprietà di configurazione**. Questi vengono convertiti direttamente in opzioni della riga di comando che verranno passate al compilatore. Per leggere la documentazione relativa a un'opzione specifica, selezionare l'opzione nel riquadro centrale e premere **F1**. In alternativa, è possibile esplorare la documentazione per tutte le opzioni disponibili in [Opzioni del compilatore MSVC](reference/compiler-options.md) e [Opzioni del linker MSVC](reference/linker-options.md).

La finestra di dialogo **pagine delle proprietà** Mostra solo le pagine delle proprietà rilevanti per il progetto corrente. Ad esempio, se il progetto non dispone di un file con estensione idl, la pagina delle proprietà MIDL non viene visualizzata. Per ulteriori informazioni sull'impostazione in ogni pagina delle proprietà, vedere [pagine delle proprietà (C++)](reference/property-pages-visual-cpp.md).

## <a name="directory-and-path-values"></a>Valori di directory e percorso

MSBuild supporta l'utilizzo di costanti in fase di compilazione denominate "macro" per determinati valori di stringa che includono directory e percorsi. Queste sono esposte nelle pagine delle proprietà, in cui è possibile fare riferimento e modificarle tramite l' [Editor delle proprietà](#property_editor).

La figura seguente mostra le pagine delle proprietà per un progetto Visual Studio C++. Nel riquadro sinistro è selezionata la **regola** *Directory di VC++* e nel riquadro destro vengono visualizzate le proprietà associate alla regola in questione. I `$(...)` valori sono denominati *macro*. Una *macro* è una costante in fase di compilazione che può fare riferimento a un valore definito da Visual Studio o dal sistema MSBuild o a un valore definito dall'utente. Usando le macro anziché i valori hardcoded come i percorsi di directory, è possibile condividere più facilmente le impostazioni delle proprietà tra i computer e tra le versioni di Visual Studio ed è possibile assicurarsi meglio che le impostazioni del progetto partecipino correttamente nell' [ereditarietà della proprietà](project-property-inheritance.md).

![Pagina delle proprietà del progetto](media/project_property_pages_vc.png "Project_Property_Pages_VC")

È possibile usare l'Editor proprietà per visualizzare i valori di tutte le macro disponibili.

### <a name="predefined-macros"></a>Macro predefinite

*macro globali*<br/>
Si applica a tutti gli elementi di una configurazione del progetto. Presenta la sintassi `$(name)`. Un esempio di macro globale è `$(VCInstallDir)`, che archivia la directory radice dell'installazione di Visual Studio. Una macro globale corrisponde a `PropertyGroup` in MSBuild.

*macro elemento*<br/>
Presenta la sintassi `%(name)`. Per un file una macro di elemento si applica solo a quel file. Ad esempio è possibile usare `%(AdditionalIncludeDirectories)` per specificare le directory di inclusione che si applicano solo a un determinato file. Questo tipo di macro di elemento corrisponde ai metadati `ItemGroup` in MSBuild. Quando viene usata nel contesto di una configurazione di progetto, una macro di elemento viene applicata a tutti i file di un certo tipo. Ad esempio, la proprietà di configurazione **definizioni preprocessore** di C/C++ può prendere una `%(PreprocessorDefinitions)` macro di elemento che si applica a tutti i file con estensione cpp nel progetto. Questo tipo di macro di elemento corrisponde ai metadati `ItemDefinitionGroup` in MSBuild. Per altre informazioni, vedere [definizioni di elementi](/visualstudio/msbuild/item-definitions).

### <a name="user-defined-macros"></a>Macro definite dall'utente

È possibile creare *macro definite dall'utente* da usare come variabili nelle compilazioni di progetto. Ad esempio, si potrebbe creare una macro definita dall'utente per fornire un valore a un'istruzione di compilazione personalizzata o a uno strumento di compilazione personalizzato. Una macro definita dall'utente è una coppia nome/valore. In un file di progetto usare la notazione **$(**<em>name</em>**)** per accedere al valore.

Una macro definita dall'utente viene archiviata in una finestra delle proprietà. Se il progetto non contiene già una finestra delle proprietà, è possibile crearne uno seguendo i passaggi in [condividere o riutilizzare le impostazioni di progetto di Visual Studio](create-reusable-property-configurations.md).

#### <a name="to-create-a-user-defined-macro"></a>Per creare una macro definita dall'utente

1. Aprire la finestra **Gestione proprietà** . Sulla barra dei menu scegliere Visualizza. **View**  >  **Gestione proprietà** o **visualizzare**  >  **altre**  >  **Gestione proprietà**Windows.) Aprire il menu di scelta rapida per una finestra delle proprietà (il nome termina con. User), quindi scegliere **Proprietà**. Verrà visualizzata la finestra di dialogo **pagine delle proprietà** per la finestra delle proprietà.

1. Nel riquadro sinistro della finestra di dialogo selezionare **macro utente**. Nel riquadro destro scegliere il pulsante **Aggiungi macro** per aprire la finestra di dialogo **Aggiungi macro utente** .

1. Nella finestra di dialogo specificare un nome e un valore per la macro. Facoltativamente, selezionare la casella **di controllo imposta questa macro come variabile di ambiente nell'ambiente di compilazione** .

## <a name=""></a><a name="property_editor">Editor proprietà</a>

È possibile usare l'Editor della proprietà per modificare alcune proprietà stringa e selezionare le macro come valori. Per accedere all'Editor proprietà, selezionare una proprietà in una pagina delle proprietà, quindi scegliere il pulsante freccia in giù a destra. Se l'elenco a discesa contiene **\<Edit>** , è possibile sceglierlo per visualizzare l'editor proprietà per la proprietà.

![Per accedere all'editor proprietà viene usato un controllo a discesa delle proprietà](media/property_editor_dropdown.png "Elenco a discesa editor proprietà")

Nell'editor delle proprietà è possibile scegliere il pulsante **macro** per visualizzare le macro disponibili e i relativi valori correnti. La figura seguente mostra l'editor di proprietà per la proprietà **directory di inclusione aggiuntive** dopo aver scelto il pulsante **macro** . Quando la casella di controllo **eredita da padre o da impostazioni predefinite progetto** è selezionata e si aggiunge un nuovo valore, questo viene aggiunto a tutti i valori attualmente ereditati. Se si deseleziona la casella di controllo, il nuovo valore sostituisce i valori ereditati. Nella maggior parte dei casi lasciare selezionata la casella di controllo.

![Finestra di dialogo dell'editor di proprietà per la proprietà directory di inclusione](media/propertyeditorvc.png "PropertyEditorVC")

## <a name="add-an-include-directory-to-the-set-of-default-directories"></a>Aggiungere una directory di inclusione al set di directory predefinite

Quando si aggiunge una directory di inclusione a un progetto, è importante non eseguire l'override di tutte le directory predefinite. Il modo corretto per aggiungere una directory consiste nell'aggiungere il nuovo percorso, ad esempio "C:\MyNewIncludeDir \" , e quindi aggiungere la macro **$ (IncludePath)** al valore della proprietà.

## <a name="quickly-browse-and-search-all-properties"></a>Sfoglia e cerca rapidamente tutte le proprietà

La pagina delle proprietà **Tutte le opzioni** (nel nodo **Proprietà di configurazione &#124; C/C++** nella finestra di dialogo **Pagine delle proprietà**) offre un modo rapido per esplorare e trovare le proprietà disponibili nel contesto corrente. Include una casella di ricerca speciale e una sintassi semplice per filtrare facilmente i risultati:

Nessun prefisso:<br/>
ricerca solo nei nomi delle proprietà (sottostringa senza distinzione tra maiuscole e minuscole).

'/' o '-':<br/>
Ricerca solo nelle opzioni del compilatore (prefisso senza distinzione tra maiuscole e minuscole)

v:<br/>
ricerca solo nei valori (sottostringa senza distinzione tra maiuscole e minuscole).

## <a name="set-environment-variables-for-a-build"></a>Impostare le variabili di ambiente per una compilazione

Il compilatore MSVC (cl.exe) riconosce alcune variabili di ambiente, in particolare LIB, LIBPATH, PATH e INCLUDE. Quando si esegue la compilazione con l'IDE, le proprietà impostate nella pagina delle proprietà [directory di VC + +](reference/vcpp-directories-property-page.md) vengono usate per impostare tali variabili di ambiente. Se i valori LIB, LIBPATH e INCLUDE sono già stati impostati, ad esempio da un prompt dei comandi dello sviluppatore, vengono sostituiti con i valori delle proprietà MSBuild corrispondenti. La compilazione antepone il valore della proprietà delle directory di file eseguibili Directory di VC++ a PATH. È possibile impostare una variabile di ambiente definita dall'utente creando una macro definita dall'utente e quindi selezionando la casella **imposta questa macro come variabile di ambiente nell'ambiente di compilazione**.

## <a name="set-environment-variables-for-a-debugging-session"></a>Impostare le variabili di ambiente per una sessione di debug

Nel riquadro sinistro della finestra di dialogo **pagine delle proprietà** del progetto espandere **proprietà di configurazione** , quindi selezionare **debug**.

Nel riquadro destro modificare le impostazioni del progetto **ambiente o** **Unisci ambiente** , quindi scegliere il pulsante **OK** .

## <a name="in-this-section"></a>Contenuto della sezione

[Condividere o riutilizzare le impostazioni di progetto di Visual Studio](create-reusable-property-configurations.md)<br/>
Come creare un file con estensione Props con impostazioni di compilazione personalizzate che possono essere condivise o riutilizzate.

[Ereditarietà delle proprietà del progetto](project-property-inheritance.md)<br/>
Descrive l'ordine di valutazione per i file. props,. targets,. vcxproj e le variabili di ambiente nel processo di compilazione.

[Modificare le proprietà e le destinazioni senza modificare il file di progetto](modify-project-properties-without-changing-project-file.md)<br/>
Come creare impostazioni di compilazione temporanee senza dover modificare un file di progetto.

## <a name="see-also"></a>Vedi anche

[Progetti di Visual Studio-C++](creating-and-managing-visual-cpp-projects.md)<br/>
[Struttura dei file con estensione vcxproj e props](reference/vcxproj-file-structure.md)<br/>
[File XML delle pagine delle proprietà](reference/property-page-xml-files.md)<br/>
