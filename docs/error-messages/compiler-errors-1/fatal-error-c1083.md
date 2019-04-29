---
title: Errore irreversibile C1083
ms.date: 09/01/2017
f1_keywords:
- C1083
helpviewer_keywords:
- C1083
ms.assetid: 97e52df3-e79c-4f85-8f1e-bbd1057d55e7
ms.openlocfilehash: 522bc4a36be59d4e2c9425e50b1238eb9f4aba61
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62368058"
---
# <a name="fatal-error-c1083"></a>Errore irreversibile C1083

> Non è possibile aprire *filetype* file: '*file*': *messaggio*

Il compilatore genera un errore C1083 quando non riesce a trovare un file che necessario. Esistono molte possibili cause di questo errore. Una ricerca di inclusione non corretto percorso o un file di intestazione mancante o nome non corretto sono riportate le cause più comuni, ma altri tipi di file e i problemi possono anche causare C1083. Ecco alcuni dei motivi comuni per cui il compilatore genera questo errore.

## <a name="the-specified-file-name-is-wrong"></a>Il nome file specificato non è corretto

Nome di un file digitato in modo non corretto. Ad esempio,

`#include <algorithm.h>`

potrebbe non trovare il file richiesto. La maggior parte dei file di intestazione libreria Standard C++ non è un'estensione di file con estensione h. Il \<algoritmo > dell'intestazione non viene trovato da questo `#include` direttiva. Per risolvere questo problema, verificare che il nome corretto del file sia stato immesso, come nel seguente esempio:

`#include <algorithm>`

Alcune intestazioni della libreria di runtime C risiedono in una sottodirectory della directory include standard. Ad esempio, per includere h, è necessario includere il nome della sottodirectory sys nella `#include` direttiva:

`#include <sys/types.h>`

## <a name="the-file-is-not-included-in-the-include-search-path"></a>Il file non è incluso nel percorso di ricerca di inclusione

Il compilatore non trova il file utilizzando le regole di ricerca indicate da una direttiva `#include` o `#import`. Ad esempio, quando un nome di file di intestazione è delimitato da virgolette,

`#include "myincludefile.h"`

Ciò indica al compilatore per cercare il file nella stessa directory che contiene il file di origine prima di tutto, quindi cercare in altre posizioni specificate dall'ambiente di compilazione. Se le virgolette contengono un percorso assoluto, il compilatore cerca il file solo in quel percorso. Se le virgolette contengono un percorso relativo, il compilatore cerca il file nella directory relativa alla directory di origine.

Se il nome è racchiuso tra parentesi quadre,

`#include <stdio.h>`

il compilatore segue un percorso di ricerca definita dall'ambiente di compilazione, il **/I** l'opzione del compilatore, il **/X** opzione del compilatore e il **inclusione** variabile di ambiente. Per altre informazioni, inclusi dettagli specifici sull'ordine di ricerca usato per trovare un file, vedere [#include (direttiva) (C/C++)](../../preprocessor/hash-include-directive-c-cpp.md) e [#import direttiva](../../preprocessor/hash-import-directive-cpp.md).

Se i file di inclusione si trovano in un'altra directory relativo alla directory di origine e si utilizza un percorso relativo in di includere le direttive, è necessario usare le virgolette doppie invece di parentesi angolari. Ad esempio, se NomeIntestazione di file di intestazione in una sottodirectory delle origini del progetto denominato intestazioni, quindi in questo esempio non riesce a trovare il file e fa sì che C1083:

`#include <headers\myheader.h>`

ma questo esempio funziona:

`#include "headers\myheader.h"`

I percorsi relativi sono anche utilizzabile con le directory nel percorso di ricerca di inclusione. Se si aggiunge una directory in cui il **inclusione** variabile di ambiente o alle **directory di inclusione** percorso in Visual Studio, non aggiungere anche parte del percorso per le direttive di inclusione. Ad esempio, se l'intestazione è disponibile all'indirizzo \path\example\headers\myheader.h, e si aggiungono \path\example\headers\ per i **directory di inclusione** tracciato in Visual Studio, ma il `#include` direttiva fa riferimento al file come

`#include <headers\myheader.h>`

quindi il file non viene trovato. Usare il percorso corretto rispetto alla directory specificata nel percorso di ricerca di inclusione. In questo esempio, è possibile cambiare il percorso di ricerca a \path\example\, o rimuovere il segmento di percorso headers\ dal `#include` direttiva.

## <a name="third-party-library-issues-and-vcpkg"></a>Problemi di una libreria di terze parti e Vcpkg

Se viene visualizzato questo errore quando si tenta di configurare una libreria di terze parti come parte della compilazione, è consigliabile usare [Vcpkg](../../vcpkg.md), installare e compilare la libreria di gestione pacchetti Visual C++. Vcpkg supporta un elevato e continuamente crescente [elenco delle librerie di terze parti](https://github.com/Microsoft/vcpkg/tree/master/ports)e imposta tutte le proprietà di configurazione e le dipendenze necessarie per la riuscita della compilazione come parte del progetto. Per altre informazioni, vedere i relativi [Blog di Visual C++](https://blogs.msdn.microsoft.com/vcblog/2016/09/19/vcpkg-a-tool-to-acquire-and-build-c-open-source-libraries-on-windows/) post.

## <a name="the-file-is-in-your-project-but-not-the-include-search-path"></a>Il file è nel progetto, ma non il percorso di ricerca

Anche quando i file di intestazione sono elencati nel **Esplora soluzioni** come parte di un progetto, si trovano i file solo dal compilatore quando si fa riferimento un' `#include` o `#import` direttiva in un'origine di file e si trovano in un includere il percorso di ricerca. Tipi diversi di compilazioni possono utilizzare percorsi di ricerca diversi. Il **/X** opzione del compilatore può essere usata per escludere directory dal percorso di ricerca di inclusione. In questo modo, compilazioni diverse possono utilizzare file di inclusione diversi con lo stesso nome, ma archiviati in directory diverse. Si tratta di un'alternativa alla compilazione condizionale utilizzando i comandi del preprocessore. Per altre informazioni sul **/X** l'opzione del compilatore, vedere [/X (Ignora a percorsi di inclusione Standard)](../../build/reference/x-ignore-standard-include-paths.md).

Per risolvere il problema, correggere il percorso usato dal compilatore per trovare il file importato o incluso. Nuovo progetto Usa predefinito includono i percorsi di ricerca. È possibile modificare il percorso di ricerca di inclusione per aggiungere una directory per il progetto. Se si esegue la compilazione dalla riga di comando, aggiungere il percorso per il **inclusione** variabile di ambiente o il **/I** opzione del compilatore per specificare il percorso del file.

Per impostare il percorso di directory di inclusione in Visual Studio, aprire il progetto **pagine delle proprietà** nella finestra di dialogo. Selezionare **directory di VC + +** sotto **delle proprietà di configurazione** nel riquadro a sinistra e quindi modificare il **directory di inclusione** proprietà. Per altre informazioni sulle directory per ogni utente e al progetto cercati dal compilatore in Visual Studio, vedere [VC + + Directories Property Page](../../build/reference/vcpp-directories-property-page.md). Per altre informazioni sul **/I** l'opzione del compilatore, vedere [/I (directory di inclusione aggiuntive)](../../build/reference/i-additional-include-directories.md).

## <a name="the-command-line-include-or-lib-environment-is-not-set"></a>La riga di comando di inclusione o l'ambiente LIB non è impostato

Quando il compilatore viene richiamato sulla riga di comando, vengono spesso utilizzate variabili di ambiente per specificare i percorsi di ricerca. Se il percorso di ricerca descritto dal **inclusione** oppure **LIB** variabile di ambiente non è impostata correttamente, può essere generato un errore C1083. Si consiglia di compilazioni usando un collegamento prompt dei comandi per gli sviluppatori per impostare l'ambiente di base per la riga di comando. Per altre informazioni, vedere [compilare C/C++ nella riga di comando](../../build/building-on-the-command-line.md). Per altre informazioni su come usare le variabili di ambiente, vedere [come: Usare le variabili di ambiente in una compilazione](/visualstudio/msbuild/how-to-use-environment-variables-in-a-build).

## <a name="the-file-may-be-locked-or-in-use"></a>Il file potrebbe essere bloccato o in uso

Se si usa un altro programma per modificare o accedere al file, che abbiano bloccato il file. Provare a chiudere il file in un altro programma. In alcuni casi l'altro programma può essere Visual Studio stesso, se si usano le opzioni di compilazione in parallelo. Se disattivare l'opzione di compilazione parallela rende l'errore risolversi, quindi questo è il problema. Altri sistemi di compilazione paralleli possono avere anche il problema. Prestare attenzione a impostare le dipendenze di file e al progetto in modo che l'ordine di compilazione sia corretta. In alcuni casi, è consigliabile creare un progetto intermedi per forzare l'ordine di dipendenza di compilazione per un file più comune che può essere compilato da più progetti. I programmi antivirus a volte bloccano temporaneamente i file modificati di recente per l'analisi. Se possibile, provare a escludere le directory di compilazione progetto dallo scanner antivirus.

## <a name="the-wrong-version-of-a-file-name-is-included"></a>Inclusione di una versione non corretta di un nome file

L'errore C1083 può anche indicare che è stata inclusa la versione non corretta di un file. È ad esempio possibile che una compilazione includa la versione non corretta di un file contenente una direttiva `#include` per un file di intestazione non destinato a questa compilazione. Ad esempio, alcuni file potrebbe essere applicabile solo su x86 generazioni, o per le compilazioni di Debug. Se il file di intestazione non viene trovato, viene generato l'errore C1083. La soluzione al problema consiste nell'utilizzare il file corretto e non nell'aggiungere il file di intestazione o la directory alla compilazione.

## <a name="the-precompiled-headers-are-not-yet-precompiled"></a>Le intestazioni precompilate non sono ancora precompilate

Quando un progetto è configurato per l'uso di intestazioni precompilate, è necessario creare i file pch corrispondenti in modo da poter compilare i file che usano il contenuto delle intestazioni. Ad esempio, il file stdafx. cpp viene creato automaticamente nella directory del progetto per i nuovi progetti. Compilare innanzitutto il file per creare i file di intestazione precompilati. La progettazione del processo di compilazione, questa operazione viene eseguita automaticamente. Per altre informazioni, vedere [creazione di file di intestazione precompilato](../../build/creating-precompiled-header-files.md).

## <a name="additional-causes"></a>Cause aggiuntive

- È stato installato un SDK o libreria di terze parti, ma non è stata aperta una nuova finestra del prompt dei comandi per sviluppatori dopo il SDK o libreria viene installata. Se il SDK o la libreria vengono aggiunti file per il **inclusione** percorso, si potrebbe essere necessario aprire una nuova finestra del prompt dei comandi per gli sviluppatori per rendere effettive queste modifiche variabile di ambiente.

- Il file utilizza il codice gestito, ma l'opzione del compilatore **/clr** non è specificato. Per altre informazioni, vedere [/clr (Compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md).

- Il file viene compilato usando un diverso **/ANALYZE** impostazione dell'opzione del compilatore rispetto a quello utilizzato per precompilare le intestazioni. Quando le intestazioni per un progetto vengono precompilate, tutte dovrebbero utilizzare le stesse **/ANALYZE** impostazioni. Per altre informazioni, vedere [/analyze (Analisi codice)](../../build/reference/analyze-code-analysis.md).

- Il file o la directory è stato creato dal sottosistema Windows per Linux, è abilitato per ogni directory distinzione maiuscole/minuscole e gli specificato un file o percorso non corrispondono a quelli nel caso di percorso o file su disco.

- Il file, la directory o il disco è di sola lettura.

- Visual Studio o gli strumenti da riga di comando non si hanno autorizzazioni sufficienti per leggere il file o directory. Ciò può verificarsi, ad esempio, quando i file di progetto dispongono della proprietà diversa rispetto al processo che esegue Visual Studio o gli strumenti da riga di comando. In alcuni casi questo problema può essere risolto eseguendo Visual Studio o il prompt dei comandi per gli sviluppatori come amministratore.

- Gli handle di file non sono sufficienti. Chiudere alcune applicazioni e compilare nuovamente. Questa condizione è insolita in circostanze tipiche. Può tuttavia verificarsi quando vengono compilati progetti di grandi dimensioni in un computer con memoria fisica limitata.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C1083 quando il file di intestazione `"test.h"` non esiste nella directory di origine o nel percorso di ricerca di inclusione.

```cpp
// C1083.cpp
// compile with: /c
#include "test.h"   // C1083 test.h does not exist
#include "stdio.h"  // OK
```

Per informazioni su come compilare progetti C/C++ nell'IDE o sulla riga di comando e le informazioni sull'impostazione delle variabili di ambiente, vedere [progetti e i sistemi di compilazione](../../build/projects-and-build-systems-cpp.md).

## <a name="see-also"></a>Vedere anche

- [Proprietà di MSBuild](/visualstudio/msbuild/msbuild-properties)
