---
title: Tipi di file creati per i progetti di Visual C++
ms.date: 11/04/2016
helpviewer_keywords:
- header files [C++], Visual Studio projects
- ActiveX controls [C++], Help files
- def files
- project items [C++], files
- Visual Studio C++ projects, files and directories
- resource files, created by wizard
- files [C++], extensions
- Help files, for ActiveX controls
- Web projects [C++], adding items
- .def files
- licensing ActiveX controls
ms.assetid: 2b0ee2e0-ae81-4185-9bb9-11da3c99a283
ms.openlocfilehash: 7ef8127b829b60d84af72874292c33ae1c7c4636
ms.sourcegitcommit: c1f646c8b72f330fa8cf5ddb0f8f261ba10d16f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2019
ms.locfileid: "58327581"
---
# <a name="file-types-created-for-visual-studio-c-projects"></a>Tipi di file creati per i progetti C++ di Visual Studio

Questo argomento descrive tutti i tipi di file che sono associati i progetti di Visual Studio per le applicazioni desktop classiche. I file effettivamente inclusi nel progetto dipendono dal tipo di progetto e dalle opzioni selezionate nella procedura guidata.

- [File di soluzioni e di progetto](project-and-solution-files.md)

- [Progetti CLR](files-created-for-clr-projects.md)

- [File di intestazione e di origine di un controllo o programma ATL](atl-program-or-control-source-and-header-files.md)

- [File di intestazione e di origine di un controllo o di un programma MFC](mfc-program-or-control-source-and-header-files.md)

- [File di intestazione precompilata](../creating-precompiled-header-files.md)

- [File di risorse](resource-files-cpp.md)

- [File della Guida (WinHelp)](help-files-winhelp.md)

- [File dei suggerimenti](hint-files.md)

Quando si crea un progetto di Visual Studio, si potrebbe creare una nuova soluzione oppure si potrebbe aggiungere un progetto a una soluzione. Le applicazioni complesse vengono in genere sviluppate includendo più progetti in una soluzione.

I progetti di solito producono un file EXE o una DLL I progetti possono dipendere uno da altro. durante il processo di compilazione, l'ambiente di Visual Studio controlla le dipendenze all'interno e tra i progetti. Ogni progetto dispone di un codice sorgente di base e, a seconda del tipo, può comprendere numerosi altri file che ne contengono i vari aspetti. Il contenuto di questi file è indicato dalla relativa estensione. L'ambiente di sviluppo di Visual Studio usa le estensioni di file per determinare come gestire il contenuto dei file durante la compilazione.

Nella tabella seguente illustra i file comuni in un progetto di Visual Studio e identificandone l'estensione del file.

|Estensione di file|Tipo|Sommario|
|--------------------|----------|--------------|
|asmx|Origine|File di distribuzione.|
|asp|Origine|File Active Server Page.|
|atp|Progetto|File di progetto del modello di applicazione.|
|bmp, dib, gif, jpg, jpe, png|Risorsa|File di immagine generali.|
|bsc|Compilazione|File di codice del browser.|
|.cpp, .c|Origine|File di codice sorgente principali per l'applicazione.|
|cur|Risorsa|File grafico bitmap di cursore.|
|dbp|Progetto|File di progetto di database.|
|disco|Origine|File di documento di individuazione dinamica. Gestisce l'individuazione di servizi Web XML.|
|exe, dll|Progetto|File eseguibili o di libreria a collegamento dinamico.|
|h|Origine|File di intestazione o di inclusione.|
|htm, html, xsp, asp, htc, hta, xml|Risorsa|File Web comuni.|
|HxC|Progetto|File di progetto della Guida.|
|ico|Risorsa|File grafico bitmap di icona.|
|idb|Compilazione|File di stato, contenente le informazioni sulle dipendenze tra i file di origine e le definizioni delle classi, che può essere usato dal compilatore durante la ricompilazione minima e la compilazione incrementale. Per specificare il nome del file con estensione idb, usare l'opzione [/Fd](fd-program-database-file-name.md) del compilatore. Per altre informazioni, vedere [/Gm (Abilita ricompilazione minima)](gm-enable-minimal-rebuild.md) .|
|idl|Compilazione|File del linguaggio di definizione dell'interfaccia. Per altre informazioni, vedere [File di definizione dell'interfaccia (IDL)](/windows/desktop/Rpc/the-interface-definition-language-idl-file) in Windows SDK.|
|ilk|Collegamento|File di collegamento incrementale. Per altre informazioni, vedere [/INCREMENTAL](incremental-link-incrementally.md) .|
|map|Collegamento|File di testo contenente informazioni sul linker. Per denominare il file con estensione map, usare l'opzione [/Fm](fm-name-mapfile.md) del compilatore. Per altre informazioni, vedere [/MAP](map-generate-mapfile.md) .|
|mfcribbon-ms|Risorsa|File di risorse contenente il codice XML che definisce i pulsanti, i controlli e gli attributi della barra multifunzione. Per altre informazioni, vedere [Ribbon Designer (MFC)](../../mfc/ribbon-designer-mfc.md).|
|obj, o||File oggetto, compilati ma non collegati.|
|pch|Debug|File di intestazione precompilato.|
|rc, rc2|Risorsa|[File script di risorsa](../../windows/working-with-resource-files.md) per generare risorse.|
|sbr|Compilazione|File di origine intermedio del browser. File di input per [BSCMAKE](bscmake-options.md).|
|sln|Soluzione|File di [soluzione](/visualstudio/ide/solutions-and-projects-in-visual-studio) .|
|suo|Soluzione|File di opzioni di soluzione.|
|txt|Risorsa|File di testo, in genere il file Readme.|
|vap|Progetto|File di progetto di Visual Studio Analyzer.|
|vbg|Soluzione|File del gruppo di progetti compatibili.|
|vbp, vip, vbproj|Progetto|File di progetto Visual Basic.|
|.vcxitems|Progetto|Progetto elementi condivisi per condividere file tra più progetti di C++. Visualizzare [file di progetto e soluzione](project-and-solution-files.md) per altre informazioni.|
|vcxproj|Progetto|Il file di progetto di Visual Studio. Visualizzare [file di progetto e soluzione](project-and-solution-files.md) per altre informazioni.|
|vcxproj.filters|Progetto|Quando si usa Esplora soluzioni per aggiungere un file a un progetto, il file dei filtri definisce la posizione nella visualizzazione albero di Esplora soluzioni in cui viene aggiunto il file, in base alla relativa estensione.|
|vdproj|Progetto|File di progetto di distribuzione Visual Studio.|
|vmx|Progetto|File di progetto macro.|
|vup|Progetto|File di progetto di utilità.|

Per informazioni sugli altri file associati a Visual Studio, vedere [Tipi di file ed estensioni in Visual Studio .NET](/visualstudio/ide/reference/project-and-solution-file-types).

I file di progetto vengono organizzati in cartelle in Esplora soluzioni. Visual Studio crea una cartella per i file di origine, i file di intestazione e i file di risorse, ma è possibile riorganizzare queste cartelle o crearne uno nuovo. Le cartelle consentono di organizzare esplicitamente cluster logici di file all'interno della gerarchia di un progetto. Ad esempio, è possibile creare cartelle per tutti i file di origine dell'interfaccia utente oppure per gruppi di programmi di prova, specifiche o test. Tutti i nomi delle cartelle di file devono essere univoci.

Quando si aggiunge un elemento a un progetto, l'elemento viene aggiunto a tutte le configurazioni del progetto, indipendentemente dal fatto che l'elemento possa essere compilato. Se ad esempio si dispone di un progetto denominato Progetto, l'elemento viene aggiunto sia alla configurazione di debug del progetto che a quella di rilascio.

## <a name="see-also"></a>Vedere anche

[Creazione e gestione di progetti di Visual Studio C++](../creating-and-managing-visual-cpp-projects.md)<br>
[Tipi di progetto C++ di Visual Studio](visual-cpp-project-types.md)<br>