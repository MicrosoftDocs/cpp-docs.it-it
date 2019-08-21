---
title: Errore irreversibile C1083
ms.date: 09/01/2017
f1_keywords:
- C1083
helpviewer_keywords:
- C1083
ms.assetid: 97e52df3-e79c-4f85-8f1e-bbd1057d55e7
ms.openlocfilehash: b982c3adf59789f6c48e7e0f54ed4e71539692ad
ms.sourcegitcommit: 9d4ffb8e6e0d70520a1e1a77805785878d445b8a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/20/2019
ms.locfileid: "69630781"
---
# <a name="fatal-error-c1083"></a>Errore irreversibile C1083

> Non è possibile aprire il file filetype:'*file*': *Message*

Il compilatore genera un errore C1083 quando non riesce a trovare un file necessario. Questo errore può essere dovuto a numerose cause. Un percorso di ricerca di inclusione non corretto o file di intestazione mancanti o non denominati sono le cause più comuni, ma anche altri tipi di file e problemi possono causare C1083. Di seguito sono riportati alcuni dei motivi comuni per cui il compilatore genera questo errore.

## <a name="the-specified-file-name-is-wrong"></a>Il nome file specificato non è corretto

Nome di un file digitato in modo non corretto. Ad esempio,

`#include <algorithm.h>`

potrebbe non trovare il file richiesto. La C++ maggior parte dei file di intestazione della libreria standard non dispone di un'estensione di file. h. L' \<algoritmo > intestazione non è stato trovato da questa `#include` direttiva. Per risolvere questo problema, verificare che sia stato immesso il nome file corretto, come nell'esempio seguente:

`#include <algorithm>`

Alcune intestazioni della libreria di runtime C risiedono in una sottodirectory della directory include standard. Ad esempio, per includere sys/types. h, è necessario includere il nome della sottodirectory sys nella `#include` direttiva:

`#include <sys/types.h>`

## <a name="the-file-is-not-included-in-the-include-search-path"></a>Il file non è incluso nel percorso di ricerca di inclusione

Il compilatore non trova il file utilizzando le regole di ricerca indicate da una direttiva `#include` o `#import`. Ad esempio, quando il nome di un file di intestazione è racchiuso tra virgolette,

`#include "myincludefile.h"`

in questo modo, il compilatore cerca il file nella stessa directory che contiene il file di origine e quindi Cerca in altri percorsi specificati dall'ambiente di compilazione. Se le virgolette contengono un percorso assoluto, il compilatore cerca il file solo in quel percorso. Se le virgolette contengono un percorso relativo, il compilatore cerca il file nella directory relativa alla directory di origine.

Se il nome è racchiuso tra parentesi angolari,

`#include <stdio.h>`

il compilatore segue un percorso di ricerca definito dall'ambiente di compilazione, l'opzione del compilatore **/i** , l'opzione del compilatore **/x** e la variabile di ambiente **include** . Per ulteriori informazioni, inclusi dettagli specifici sull'ordine di ricerca utilizzato per trovare un file, vedere [#include direttiva (C/C++)](../../preprocessor/hash-include-directive-c-cpp.md) e [#import direttiva](../../preprocessor/hash-import-directive-cpp.md).

Se i file di inclusione si trovano in un'altra directory rispetto alla directory di origine e si usa un percorso relativo nelle direttive include, è necessario usare le virgolette doppie anziché le parentesi angolari. Se, ad esempio, il file di intestazione MyFile. h si trova in una sottodirectory delle origini progetto denominate intestazioni, questo esempio non riesce a trovare il file e genera C1083:

`#include <headers\myheader.h>`

ma questo esempio funziona:

`#include "headers\myheader.h"`

I percorsi relativi possono essere usati anche con le directory nel percorso di ricerca di inclusione. Se si aggiunge una directory alla variabile di ambiente **include** o al percorso delle **directory** di inclusione in Visual Studio, non aggiungere anche parte del percorso alle direttive include. Ad esempio, se l'intestazione si trova in \path\example\headers\myheader.h e si aggiunge \path\example\headers\ al percorso delle **directory** di inclusione in Visual Studio, ma `#include` la direttiva fa riferimento al file come

`#include <headers\myheader.h>`

il file non viene trovato. Usare il percorso corretto rispetto alla directory specificata nel percorso di ricerca di inclusione. In questo esempio, è possibile modificare il percorso di ricerca di inclusione in \path\example\, o rimuovere il segmento Headers \ path `#include` dalla direttiva.

## <a name="third-party-library-issues-and-vcpkg"></a>Problemi relativi alla libreria di terze parti e vcpkg

Se questo errore viene visualizzato quando si tenta di configurare una libreria di terze parti come parte della compilazione, è consigliabile utilizzare [vcpkg](../../vcpkg.md), gestione pacchetti C++ visuale, per installare e compilare la libreria. Vcpkg supporta un [elenco di librerie di terze parti di](https://github.com/Microsoft/vcpkg/tree/master/ports)grandi dimensioni e in continua crescita e imposta tutte le proprietà di configurazione e le dipendenze necessarie per le compilazioni riuscite come parte del progetto. Per ulteriori informazioni, vedere il post [di C++ Blog visivo](https://blogs.msdn.microsoft.com/vcblog/2016/09/19/vcpkg-a-tool-to-acquire-and-build-c-open-source-libraries-on-windows/) correlato.

## <a name="the-file-is-in-your-project-but-not-the-include-search-path"></a>Il file si trova nel progetto, ma non nel percorso di ricerca di inclusione

Anche quando i file di intestazione sono elencati in **Esplora soluzioni** come parte di un progetto, i file vengono trovati solo dal compilatore quando vengono definiti da una `#include` direttiva o `#import` in un file di origine e si trovano in un percorso di ricerca di inclusione. Tipi diversi di compilazioni possono utilizzare percorsi di ricerca diversi. L'opzione del compilatore **/x** può essere usata per escludere le directory dal percorso di ricerca di inclusione. In questo modo, compilazioni diverse possono utilizzare file di inclusione diversi con lo stesso nome, ma archiviati in directory diverse. Si tratta di un'alternativa alla compilazione condizionale utilizzando i comandi del preprocessore. Per ulteriori informazioni sull'opzione del compilatore **/x** , vedere [/X (Ignora percorsi di inclusione standard)](../../build/reference/x-ignore-standard-include-paths.md).

Per risolvere il problema, correggere il percorso usato dal compilatore per trovare il file importato o incluso. Un nuovo progetto utilizza i percorsi di ricerca predefiniti. Potrebbe essere necessario modificare il percorso di ricerca di inclusione per aggiungere una directory per il progetto. Se si esegue la compilazione nella riga di comando, aggiungere il percorso della variabile di ambiente **include** o l'opzione del compilatore **/i** per specificare il percorso del file.

Per impostare il percorso della directory di inclusione in Visual Studio, aprire la finestra di dialogo **pagine delle proprietà** del progetto. Selezionare **directory di VC + +** in **proprietà di configurazione** nel riquadro a sinistra e quindi modificare la proprietà **directory** di inclusione. Per ulteriori informazioni sulle directory per singolo utente e per progetto cercate dal compilatore in Visual Studio, vedere la [pagina delle proprietà directory di VC + +](../../build/reference/vcpp-directories-property-page.md). Per ulteriori informazioni sull'opzione del compilatore **/i** , vedere [/i (directory di inclusione aggiuntive)](../../build/reference/i-additional-include-directories.md).

## <a name="the-command-line-include-or-lib-environment-is-not-set"></a>L'ambiente della riga di comando INCLUDE o LIB non è impostato

Quando il compilatore viene richiamato sulla riga di comando, vengono spesso utilizzate variabili di ambiente per specificare i percorsi di ricerca. Se il percorso di ricerca descritto dalla variabile di ambiente **include** o **lib** non è impostato correttamente, può essere generato un errore C1083. È consigliabile usare un collegamento del prompt dei comandi per gli sviluppatori per impostare l'ambiente di base per le compilazioni della riga di comando. Per ulteriori informazioni, vedere [la pagina relativaC++ alla compilazione di C/nella riga di comando](../../build/building-on-the-command-line.md). Per ulteriori informazioni sull'utilizzo delle variabili di ambiente, vedere [procedura: Usare le variabili di ambiente in](/visualstudio/msbuild/how-to-use-environment-variables-in-a-build)una compilazione.

## <a name="the-file-may-be-locked-or-in-use"></a>Il file potrebbe essere bloccato o in uso

Se si utilizza un altro programma per modificare o accedere al file, il file potrebbe essere bloccato. Provare a chiudere il file nell'altro programma. In alcuni casi l'altro programma può essere Visual Studio, se si usano opzioni di compilazione parallele. Se la disattivazione dell'opzione di compilazione parallela rende l'errore assente, questo è il problema. Questo problema può essere riscontrato anche in altri sistemi di compilazione paralleli. Prestare attenzione a impostare le dipendenze di file e progetti in modo che l'ordine di compilazione sia corretto. In alcuni casi, è consigliabile creare un progetto intermedio per forzare l'ordine delle dipendenze di compilazione per un file comune che può essere compilato da più progetti. A volte i programmi antivirus bloccano temporaneamente i file modificati di recente per l'analisi. Se possibile, è consigliabile escludere le directory di compilazione del progetto dallo scanner antivirus.

## <a name="the-wrong-version-of-a-file-name-is-included"></a>Inclusione di una versione non corretta di un nome file

L'errore C1083 può anche indicare che è stata inclusa la versione non corretta di un file. È ad esempio possibile che una compilazione includa la versione non corretta di un file contenente una direttiva `#include` per un file di intestazione non destinato a questa compilazione. Alcuni file, ad esempio, possono essere applicati solo alle compilazioni x86 o alle compilazioni di debug. Se il file di intestazione non viene trovato, viene generato l'errore C1083. La soluzione al problema consiste nell'utilizzare il file corretto e non nell'aggiungere il file di intestazione o la directory alla compilazione.

## <a name="the-precompiled-headers-are-not-yet-precompiled"></a>Le intestazioni precompilate non sono ancora precompilate

Quando un progetto è configurato per l'uso di intestazioni precompilate, è necessario creare i file pch corrispondenti in modo da poter compilare i file che usano il contenuto delle intestazioni. Ad esempio, il file *PCH. cpp* (*stdafx. cpp* in Visual Studio 2017 e versioni precedenti) viene creato automaticamente nella directory del progetto per i nuovi progetti. Compilare innanzitutto il file per creare i file di intestazione precompilati. Nella progettazione tipica del processo di compilazione questa operazione viene eseguita automaticamente. Per altre informazioni, vedere [creazione di file di intestazione](../../build/creating-precompiled-header-files.md)precompilata.

## <a name="additional-causes"></a>Cause aggiuntive

- È stato installato un SDK o una libreria di terze parti, ma non è stata aperta una nuova finestra del prompt dei comandi per gli sviluppatori dopo l'installazione dell'SDK o della libreria. Se l'SDK o la libreria aggiunge file al percorso di inclusione, potrebbe essere necessario aprire una nuova finestra del prompt dei comandi per gli sviluppatori per individuare le modifiche apportate alle variabili di ambiente.

- Il file usa codice gestito, ma l'opzione del compilatore **/CLR** non è specificata. Per altre informazioni, vedere [/clr (Compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md).

- Il file viene compilato usando un'impostazione di opzione del compilatore **/Analyze** diversa da quella usata per precompilare le intestazioni. Quando le intestazioni di un progetto sono precompilate, tutte devono usare le stesse impostazioni **/Analyze** . Per altre informazioni, vedere [/analyze (Analisi codice)](../../build/reference/analyze-code-analysis.md).

- Il file o la directory è stato creato dal sottosistema Windows per Linux, la distinzione tra maiuscole e minuscole per directory è abilitata e il case specificato di un percorso o di un file non corrisponde al caso del percorso o del file su disco.

- Il file, la directory o il disco è di sola lettura.

- Visual Studio o gli strumenti da riga di comando non dispongono di autorizzazioni sufficienti per la lettura del file o della directory. Questo problema può verificarsi, ad esempio, quando i file di progetto hanno una proprietà diversa da quella del processo che esegue Visual Studio o gli strumenti da riga di comando. A volte questo problema può essere risolto eseguendo Visual Studio o il prompt dei comandi per gli sviluppatori come amministratore.

- Gli handle di file non sono sufficienti. Chiudere alcune applicazioni e compilare nuovamente. Questa condizione è insolita in circostanze tipiche. Può tuttavia verificarsi quando vengono compilati progetti di grandi dimensioni in un computer con memoria fisica limitata.

## <a name="example"></a>Esempio

Nell'esempio seguente viene generato un errore C1083 quando il file `"test.h"` di intestazione non esiste nella directory di origine o nel percorso di ricerca di inclusione.

```cpp
// C1083.cpp
// compile with: /c
#include "test.h"   // C1083 test.h does not exist
#include "stdio.h"  // OK
```

Per informazioni su come compilare i progetti CC++ /nell'IDE o sulla riga di comando e informazioni sull'impostazione delle variabili di ambiente, vedere [progetti e sistemi di compilazione](../../build/projects-and-build-systems-cpp.md).

## <a name="see-also"></a>Vedere anche

- [Proprietà di MSBuild](/visualstudio/msbuild/msbuild-properties)
