---
title: Errore irreversibile C1083 | Documenti Microsoft
ms.custom: ''
ms.date: 09/01/2017
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1083
dev_langs:
- C++
helpviewer_keywords:
- C1083
ms.assetid: 97e52df3-e79c-4f85-8f1e-bbd1057d55e7
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2b014ccc46434fd0c3f13689e579ed4798ebcdb2
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/01/2018
ms.locfileid: "34569810"
---
# <a name="fatal-error-c1083"></a>Errore irreversibile C1083

> Non è possibile aprire *filetype* file: '*file*': *messaggio*

Il compilatore genera un errore C1083 quando non è possibile trovare un file che necessario. Esistono molte possibili cause di questo errore. Una ricerca di inclusione non corretto del file di intestazione mancante o nome non corretto o del percorso sono riportate le cause più comuni, ma altri tipi di file e i problemi possono causare C1083. Ecco alcuni dei motivi comuni per cui il compilatore genera questo errore.

## <a name="the-specified-file-name-is-wrong"></a>Il nome file specificato non è corretto

Nome di un file digitato in modo non corretto. Ad esempio,

`#include <algorithm.h>`

potrebbe non trovare il file richiesto. La maggior parte dei file di intestazione della libreria Standard C++ non sono un'estensione di file con estensione h. Il \<algoritmo > intestazione non viene trovata da questo `#include` direttiva. Per risolvere questo problema, verificare che sia stato immesso il nome corretto, come nel seguente esempio:

`#include <algorithm>`

Alcune intestazioni della libreria di runtime C risiedono in una sottodirectory della directory include standard. Per includere sys/Types, ad esempio, è necessario includere il nome della sottodirectory sys nella `#include` direttiva:

`#include <sys/types.h>`

## <a name="the-file-is-not-included-in-the-include-search-path"></a>Il file non è incluso nel percorso di ricerca di inclusione

Il compilatore non trova il file utilizzando le regole di ricerca indicate da una direttiva `#include` o `#import`. Ad esempio, quando un nome di file di intestazione è racchiuso tra virgolette,

`#include "myincludefile.h"`

Ciò indica al compilatore di cercare il file nella stessa directory che contiene il file di origine e quindi di cercarlo in altri percorsi specificati dall'ambiente di compilazione. Se le virgolette contengono un percorso assoluto, il compilatore cerca il file solo in quel percorso. Se le virgolette contengono un percorso relativo, il compilatore cerca il file nella directory relativa alla directory di origine.

Se il nome è racchiuso tra parentesi angolari,

`#include <stdio.h>`

il compilatore segue un percorso di ricerca definito dall'ambiente di compilazione, il **/I** opzione del compilatore di **/X** opzione del compilatore e **INCLUDE** variabile di ambiente. Per ulteriori informazioni, inclusi i dettagli specifici sull'ordine di ricerca utilizzato per trovare un file, vedere [#include (direttiva) (C/C++)](../../preprocessor/hash-include-directive-c-cpp.md) e [#import direttiva](../../preprocessor/hash-import-directive-cpp.md).

Se i file di inclusione si trovano in un'altra directory rispetto alla directory di origine e utilizzare un percorso relativo nell'inclusione, è necessario utilizzare le virgolette doppie anziché parentesi acute. Ad esempio, se il file di intestazione NomeIntestazione. h si trova in una sottodirectory denominata intestazioni le origini di progetto, quindi in questo esempio non riesce a trovare il file e causa C1083:

`#include <headers\myheader.h>`

ma in questo esempio funziona:

`#include "headers\myheader.h"`

Percorsi relativi possono essere usati anche con le directory nel percorso di ricerca di inclusione. Se si aggiunge una directory in cui il **INCLUDE** variabile di ambiente o la **directory di inclusione** percorso in Visual Studio, non aggiungere inoltre parte del percorso per le direttive di inclusione. Ad esempio, se l'intestazione si trova in \path\example\headers\myheader.h, e si aggiunge \path\example\headers\ per il **directory di inclusione** percorso in Visual Studio, ma il `#include` direttiva fa riferimento al file come

`#include <headers\myheader.h>`

quindi non è possibile trovare il file. Utilizzare il percorso corretto rispetto alla directory specificata nel percorso di ricerca di inclusione. In questo esempio, è possibile cambiare il percorso di ricerca a \path\example\, o rimuovere il segmento di percorso headers\ dal `#include` direttiva.

## <a name="third-party-library-issues-and-vcpkg"></a>Problemi di una libreria di terze parti e Vcpkg

Se viene visualizzato questo errore quando si sta tentando di configurare una libreria di terze parti come parte della compilazione, è consigliabile utilizzare [Vcpkg](../../vcpkg.md), gestione del pacchetto di Visual C++, per installare e compilare la libreria. Supporta Vcpkg un elevato e crescente [elenco delle librerie di terze parti](https://github.com/Microsoft/vcpkg/tree/master/ports)e imposta le proprietà di configurazione e le dipendenze necessarie per le compilazioni riuscite come parte del progetto. Per ulteriori informazioni, vedere correlata [Blog di Visual C++](https://blogs.msdn.microsoft.com/vcblog/2016/09/19/vcpkg-a-tool-to-acquire-and-build-c-open-source-libraries-on-windows/) post.

## <a name="the-file-is-in-your-project-but-not-the-include-search-path"></a>Il file è nel progetto, ma non il percorso di ricerca

Anche quando il file di intestazione sono elencati nel **Esplora** come parte di un progetto, i file vengono trovati solo dal compilatore quando vengono definite da un `#include` o `#import` direttiva in un'origine di file e si trovano un percorso di ricerca. Tipi diversi di compilazioni possono usare percorsi di ricerca diversi. Il **/X** possibile utilizzare l'opzione del compilatore per escludere directory dal percorso di ricerca di inclusione. In questo modo, compilazioni diverse possono utilizzare file di inclusione diversi con lo stesso nome, ma archiviati in directory diverse. Si tratta di un'alternativa alla compilazione condizionale utilizzando i comandi del preprocessore. Per ulteriori informazioni sul **/X** l'opzione del compilatore, vedere [/X (Ignora a percorsi di inclusione Standard)](../../build/reference/x-ignore-standard-include-paths.md).

Per risolvere il problema, correggere il percorso usato dal compilatore per trovare il file importato o incluso. Un nuovo valore predefinito di progetto Usa percorsi di ricerca. È possibile modificare il percorso di ricerca di inclusione per aggiungere una directory per il progetto. Se esegue la compilazione sulla riga di comando, aggiungere il percorso di **INCLUDE** variabile di ambiente o **/I** l'opzione del compilatore per specificare il percorso del file.

Per impostare il percorso di directory di inclusione in Visual Studio, aprire il progetto **pagine delle proprietà** la finestra di dialogo. Selezionare **directory di VC + +** in **le proprietà di configurazione** nel riquadro sinistro e quindi modificare il **directory di inclusione** proprietà. Per ulteriori informazioni sulle directory per ogni progetto e per utente eseguire la ricerca dal compilatore in Visual Studio, vedere [pagina delle proprietà directory di VC + +](../../ide/vcpp-directories-property-page.md). Per ulteriori informazioni sul **/I** l'opzione del compilatore, vedere [/I (directory di inclusione aggiuntive)](../../build/reference/i-additional-include-directories.md).

## <a name="the-command-line-include-or-lib-environment-is-not-set"></a>Riga di comando INCLUDE o ambiente LIB non è impostata.

Quando il compilatore viene richiamato sulla riga di comando, vengono spesso usate variabili di ambiente per specificare i percorsi di ricerca. Se il percorso di ricerca descritto dal **INCLUDE** o **LIB** variabile di ambiente non è impostata correttamente, può essere generato un errore C1083. È consigliabile l'utilizzo di un collegamento del prompt dei comandi per sviluppatori per impostare l'ambiente di base per la riga di comando Compila. Per ulteriori informazioni, vedere vedere [compilare C/C++ nella riga di comando](../../build/building-on-the-command-line.md). Per ulteriori informazioni su come usare le variabili di ambiente, vedere [procedura: utilizzare variabili di ambiente in una Build](/visualstudio/msbuild/how-to-use-environment-variables-in-a-build).

## <a name="the-file-may-be-locked-or-in-use"></a>Il file potrebbe essere bloccato o in uso

Se si utilizza un altro programma per modificare o accedere al file, è il file è bloccato. Provare a chiudere il file in un altro programma. In alcuni casi il programma può essere Visual Studio stesso, se si usano le opzioni di compilazione parallela. Se disattivazione dell'opzione di compilazione parallela rende l'errore risolversi, quindi questo è il problema. Altri sistemi di compilazione parallela possono anche avere questo problema. Assicurarsi di impostare le dipendenze di file e di progetto in modo che l'ordine di compilazione sia corretto. In alcuni casi, è consigliabile creare un progetto intermedi per forzare l'ordine di dipendenza di compilazione per un file comune che può essere compilato da più progetti. I programmi antivirus a volte bloccano temporaneamente i file modificati di recente per l'analisi. È consigliabile, se possibile, escludendo le directory di compilazione progetto il software antivirus in uso.

## <a name="the-wrong-version-of-a-file-name-is-included"></a>Inclusione di una versione non corretta di un nome file

L'errore C1083 può anche indicare che è stata inclusa la versione non corretta di un file. È ad esempio possibile che una compilazione includa la versione non corretta di un file contenente una direttiva `#include` per un file di intestazione non destinato a questa compilazione. Ad esempio, alcuni file potrebbero si applicano solo per x86 compila, o per le compilazioni di Debug. Se il file di intestazione non viene trovato, viene generato l'errore C1083. La soluzione al problema consiste nell'utilizzare il file corretto e non nell'aggiungere il file di intestazione o la directory alla compilazione.

## <a name="the-precompiled-headers-are-not-yet-precompiled"></a>Le intestazioni precompilate non sono ancora precompilate

Quando un progetto è configurato per l'utilizzo di intestazioni precompilate, è necessario creare i file pch corrispondenti in modo da poter compilare i file che utilizzano il contenuto dell'intestazione. Ad esempio, il file stdafx.cpp file viene creato automaticamente nella directory del progetto per i nuovi progetti. Compilare innanzitutto il file per creare i file di intestazione precompilata. La progettazione del processo di compilazione, questa operazione viene eseguita automaticamente. Per ulteriori informazioni, vedere [la creazione di file di intestazione precompilata](../../build/reference/creating-precompiled-header-files.md).

## <a name="additional-causes"></a>Cause aggiuntive

- È stato installato un SDK o libreria di terze parti, ma non è stato aperto una nuovo finestra prompt dei comandi per gli sviluppatori dopo il SDK o libreria viene installata. Se il SDK o la raccolta aggiunge file di **INCLUDE** percorso, potrebbe essere necessario aprire una nuova finestra del prompt dei comandi per sviluppatori per prelevare le modifiche di variabili di ambiente.

- Il file utilizza il codice gestito, ma l'opzione del compilatore **/clr** non è specificato. Per altre informazioni, vedere [/clr (Compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md).

- Il file viene compilato utilizzando un altro **/ANALYZE** impostazione dell'opzione del compilatore rispetto a quella utilizzata per precompilare le intestazioni. Quando le intestazioni per un progetto vengono precompilate, tutte utilizzano lo stesso **/ANALYZE** impostazioni. Per altre informazioni, vedere [/analyze (Analisi codice)](../../build/reference/analyze-code-analysis.md).

- Il file o la directory è stato creato dal sottosistema di Windows per Linux, è abilitato per ogni directory distinzione maiuscole/minuscole e gli specificati file o il percorso non corrispondono a quelli nel caso di percorso o file su disco.

- Il file, la directory o il disco è di sola lettura.

- Visual Studio o gli strumenti da riga di comando non dispone delle autorizzazioni sufficienti per leggere il file o directory. Ciò può verificarsi, ad esempio, quando i file di progetto dispongono della proprietà diversa rispetto al processo che esegue Visual Studio o gli strumenti da riga di comando. Talvolta questo problema può essere risolto eseguendo Visual Studio o il prompt dei comandi per sviluppatori come amministratore.

- Gli handle di file non sono sufficienti. Chiudere alcune applicazioni e compilare nuovamente. Questa condizione è insolita in circostanze tipiche. Può tuttavia verificarsi quando vengono compilati progetti di grandi dimensioni in un computer con memoria fisica limitata.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C1083 quando il file di intestazione `"test.h"` non esiste nella directory di origine o nel percorso di ricerca di inclusione.

```cpp
// C1083.cpp
// compile with: /c
#include "test.h"   // C1083 test.h does not exist
#include "stdio.h"  // OK
```

Per informazioni su come compilare progetti C/C++ nell'IDE o sulla riga di comando e informazioni sull'impostazione delle variabili di ambiente, vedere [compilazione di programmi C/C++](../../build/building-c-cpp-programs.md).

## <a name="see-also"></a>Vedere anche

- [Proprietà di MSBuild](/visualstudio/msbuild/msbuild-properties)
