---
title: Tipi di file creati per i C++ progetti di Visual Studio
ms.date: 04/08/2019
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
ms.openlocfilehash: 078c83a9c95c1b143af2037240d5cc0a16211827
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69492875"
---
# <a name="file-types-created-for-visual-studio-c-projects"></a>Tipi di file creati per i C++ progetti di Visual Studio

Molti tipi di file sono associati ai progetti di Visual Studio per le applicazioni desktop classiche. I file effettivamente inclusi nel progetto dipendono dal tipo di progetto e dalle opzioni selezionate nella procedura guidata.

- [File di soluzioni e di progetto](project-and-solution-files.md)

- [Progetti CLR](files-created-for-clr-projects.md)

- [File di intestazione e di origine di un controllo o programma ATL](atl-program-or-control-source-and-header-files.md)

- [File di intestazione e di origine di un controllo o di un programma MFC](mfc-program-or-control-source-and-header-files.md)

- [File di intestazione precompilata](../creating-precompiled-header-files.md)

- [File di risorse](resource-files-cpp.md)

- [File della Guida (WinHelp)](help-files-winhelp.md)

- [File dei suggerimenti](hint-files.md)

Quando si crea un progetto di Visual Studio, è possibile crearlo in una nuova soluzione oppure è possibile aggiungere un progetto a una soluzione esistente. Le applicazioni complesse vengono in genere sviluppate includendo più progetti in una soluzione.

I progetti di solito producono un file EXE o una DLL I progetti possono dipendere gli uni dagli altri. durante il processo di compilazione, l'ambiente di Visual Studio controlla le dipendenze sia all'interno che tra i progetti. Ogni progetto include in genere codice sorgente di base. A seconda del tipo di progetto, possono essere presenti molti altri file contenenti diversi aspetti del progetto. Il contenuto di questi file è indicato dalla relativa estensione. L'ambiente di sviluppo di Visual Studio usa le estensioni di file per determinare come gestire il contenuto dei file durante la compilazione.

La tabella seguente illustra i file comuni in un progetto di Visual Studio e li identifica con l'estensione di file.

|Estensione di file|Type|Sommario|
|--------------------|----------|--------------|
|asmx|Origine|File di distribuzione.|
|asp|Source|File Active Server Page.|
|atp|Progetto|File di progetto del modello di applicazione.|
|bmp, dib, gif, jpg, jpe, png|Risorsa|File di immagine generali.|
|bsc|Compilazione|File di codice del browser.|
|.cpp, .c|Source|File di codice sorgente principali per l'applicazione.|
|cur|Risorsa|File grafico bitmap di cursore.|
|dbp|Progetto|File di progetto di database.|
|disco|Source|File di documento di individuazione dinamica. Gestisce l'individuazione di servizi Web XML.|
|exe, dll|Progetto|File eseguibili o di libreria a collegamento dinamico.|
|h|Source|File di intestazione o di inclusione.|
|htm, html, xsp, asp, htc, hta, xml|Risorsa|File Web comuni.|
|HxC|Progetto|File di progetto della Guida.|
|ico|Risorsa|File grafico bitmap di icona.|
|idb|Compilazione|Il file di stato, contenente le informazioni sulle dipendenze tra i file di origine e le definizioni delle classi. Può essere usato dal compilatore durante la compilazione incrementale. Per specificare il nome del file con estensione idb, usare l'opzione [/Fd](fd-program-database-file-name.md) del compilatore.|
|idl|Compilazione|File del linguaggio di definizione dell'interfaccia. Per altre informazioni, vedere [Interface Definition (IDL) File](/windows/win32/Rpc/the-interface-definition-language-idl-file) (File di definizione dell'interfaccia (IDL)) in Windows SDK.|
|ilk|Collegamento|File di collegamento incrementale. Per ulteriori informazioni, vedere [/Incremental](incremental-link-incrementally.md).|
|map|Collegamento|File di testo contenente informazioni sul linker. Per denominare il file con estensione map, usare l'opzione [/Fm](fm-name-mapfile.md) del compilatore. Per ulteriori informazioni, vedere [/Map](map-generate-mapfile.md).|
|mfcribbon-ms|Risorsa|Un file di risorse che contiene il codice XML che definisce i pulsanti, i controlli e gli attributi MFC nella barra multifunzione. Per altre informazioni, vedere [Ribbon Designer](../../mfc/ribbon-designer-mfc.md).|
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
|.vcxitems|Progetto|Progetto elementi condivisi per condividere file tra più progetti di C++. Per ulteriori informazioni, vedere [file di progetto e di soluzione](project-and-solution-files.md).|
|vcxproj|Progetto|File di progetto di Visual Studio. Per ulteriori informazioni, vedere [file di progetto e di soluzione](project-and-solution-files.md).|
|vcxproj.filters|Progetto|Utilizzato quando si utilizza Esplora soluzioni per aggiungere un file a un progetto. Il file dei filtri definisce la posizione nella visualizzazione albero Esplora soluzioni per aggiungere il file, in base all'estensione del nome file.|
|vdproj|Progetto|File di progetto di distribuzione Visual Studio.|
|vmx|Progetto|File di progetto macro.|
|vup|Progetto|File di progetto di utilità.|

Per informazioni sugli altri file associati a Visual Studio, vedere [Tipi di file ed estensioni in Visual Studio .NET](/visualstudio/ide/reference/project-and-solution-file-types).

I file di progetto vengono organizzati in cartelle in Esplora soluzioni. Visual Studio crea una cartella per i file di origine, i file di intestazione e i file di risorse, ma è possibile riorganizzare queste cartelle o crearne di nuove. Le cartelle consentono di organizzare esplicitamente cluster logici di file all'interno della gerarchia di un progetto. Ad esempio, è possibile creare cartelle che contengano tutti i file di origine dell'interfaccia utente. Oppure, cartelle per specifiche, documentazione o gruppi di test. Tutti i nomi delle cartelle di file devono essere univoci.

Quando si aggiunge un elemento a un progetto, l'elemento viene aggiunto a tutte le configurazioni per il progetto. L'elemento viene aggiunto se è compilabile o meno. Se ad esempio si dispone di un progetto denominato Progetto, l'elemento viene aggiunto sia alla configurazione di debug del progetto che a quella di rilascio.

## <a name="see-also"></a>Vedere anche

[Creazione e gestione di progetti C++ di Visual Studio](../creating-and-managing-visual-cpp-projects.md)<br>
[Tipi di C++ progetto di Visual Studio](visual-cpp-project-types.md)<br>