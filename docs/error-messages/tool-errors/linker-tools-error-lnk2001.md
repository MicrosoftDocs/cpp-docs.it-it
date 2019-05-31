---
title: Errore degli strumenti del linker LNK2001
ms.date: 05/17/2017
f1_keywords:
- LNK2001
helpviewer_keywords:
- LNK2001
ms.assetid: dc1cf267-c984-486c-abd2-fd07c799f7ef
ms.openlocfilehash: 916c37e3283f40ff5ded865a573ff45839de6e2a
ms.sourcegitcommit: 28eae422049ac3381c6b1206664455dbb56cbfb6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/31/2019
ms.locfileid: "66449628"
---
# <a name="linker-tools-error-lnk2001"></a>Errore degli strumenti del linker LNK2001

simbolo esterno non risolto "*simbolo*"

Il codice compilato rende un riferimento o una chiamata a *simbolo*, ma tale simbolo non è definito in tutte le librerie o file oggetto specificati per il linker.

Questo messaggio di errore è seguito dall'errore irreversibile [LNK1120](../../error-messages/tool-errors/linker-tools-error-lnk1120.md). È necessario correggere gli errori di tutti i LNK2001 e l'errore LNK2019 per correggere l'errore LNK1120.

## <a name="possible-causes"></a>Possibili cause

Esistono molti modi per visualizzare questo errore, ma tutti gli elementi comportano un riferimento a una funzione o variabile che il linker non può *risolvere*, o trovare una definizione per. Il compilatore può identificare quando non è un simbolo *dichiarato*, ma non quando non è *definiti*, perché la definizione potrebbe trovarsi in un file di origine differente o una raccolta. Se un simbolo viene definito ma mai definito, il linker genera un errore.

### <a name="coding-issues"></a>Problemi relativi alla codifica

Questo errore può essere causato da un case non corrispondente nel codice sorgente o definizione moduli (def) file. Ad esempio, se si assegna una variabile `var1` in un C++ file di origine e si tenta di accedervi come `VAR1` in un'altra, viene generato questo errore. Per risolvere questo problema, utilizzare in modo coerente digitato e nomi le maiuscole/minuscole.

Questo errore può dipendere in un progetto che usa [l'inline delle funzioni](../../error-messages/tool-errors/function-inlining-problems.md) se si definiscono le funzioni in un file di origine invece che in un file di intestazione. Le funzioni rese inline non possono essere visualizzate all'esterno del file di origine che li definisce. Per risolvere questo problema, definire le funzioni rese inline nelle intestazioni in cui sono dichiarate.

Questo errore può verificarsi se si chiama una funzione C da un programma C++ senza usare un `extern "C"` dichiarazione della funzione C. Il compilatore Usa le convenzioni di denominazione diverse simbolo interno per il codice C e C++ ed è il nome del simbolo interno che il linker esegue la ricerca per la risoluzione dei simboli. Per risolvere questo problema, usare un `extern "C"` wrapper per tutte le dichiarazioni di funzioni C utilizzate nel codice C++, che indica al compilatore di usare la convenzione di denominazione C interna per quei simboli. Opzioni del compilatore [/Tp](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md) e [/Tc](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md) determinano la compilazione dei file in C++ o C, rispettivamente, indipendentemente dall'estensione di file. Queste opzioni possono causare i nomi di funzione interna diversi rispetto a quello previsto.

Questo errore può essere causato da un tentativo di fare riferimento a funzioni o dati che non hanno un collegamento esterno. In C++, le funzioni inline e `const` dati hanno un collegamento interno a meno che non specificato in modo esplicito come `extern`. Per risolvere questo problema, usare esplicita `extern` dichiarazioni sui simboli definito all'esterno del file di origine definizione.

Questo errore può essere causato da un [corpo della funzione o variabile mancante](../../error-messages/tool-errors/missing-function-body-or-variable.md) definizione. Questo errore è comune quando si dichiara, ma non definire, variabili, funzioni o classi nel codice. Il compilatore necessita solo di un prototipo di funzione o `extern` dichiarazione di variabile per generare un file oggetto senza errori, ma il linker non è possibile risolvere una chiamata alla funzione o un riferimento alla variabile perché non è disponibile spazio di codice o una variabile (funzione) riservato. Per risolvere questo problema, assicurarsi che ogni funzione di cui viene fatto riferimento e la variabile è completamente definita in un file di origine o libreria inclusa nel collegamento.

Questo errore può essere causato da una chiamata di funzione che usa tipi restituiti e parametri o le convenzioni di chiamata che non corrispondono a quelli nella definizione di funzione. Nei file di oggetto C++, [denominare decoration](../../error-messages/tool-errors/name-decoration.md) incorpora la convenzione di chiamata, ambito di classe o dello spazio dei nomi e tipi restituiti e parametri di una funzione nel nome funzionale decorato finale, che viene usato come simbolo in modo che corrispondano quando le chiamate a la funzione da altri file oggetto vengono risolti. Per risolvere questo problema, assicurarsi che la dichiarazione, definizione e le chiamate alla funzione tutte usano ambiti stesso, tipi e le convenzioni di chiamata.

Questo errore può verificarsi nel codice C++ quando si include un prototipo di funzione in una definizione di classe ma non è possibile [includono l'implementazione](../../error-messages/tool-errors/missing-function-body-or-variable.md) della funzione e chiamarlo successivamente. Per risolvere questo problema, assicurarsi di fornire una definizione per tutti i chiamati dichiarati i membri di una classe.

Questo errore può essere causato da un tentativo di chiamare una funzione virtuale pura da una classe base astratta. Una funzione virtuale pura non è Nessuna implementazione della classe base. Per risolvere questo problema, assicurarsi che tutte le funzioni virtuali chiamate vengono implementate.

Questo errore può essere causato dal tentativo di utilizzare una variabile dichiarata all'interno di una funzione ([una variabile locale](../../error-messages/tool-errors/automatic-function-scope-variables.md)) all'esterno dell'ambito di tale funzione. Per risolvere questo problema, rimuovere il riferimento alla variabile che non è nell'ambito, o spostare la variabile in un ambito più elevato.

Questo errore può verificarsi quando si compila una versione di un progetto ATL, producendo un messaggio che è necessario il codice di avvio di CRT. Per risolvere questo problema, eseguire una delle operazioni seguenti,

- Rimuovere `_ATL_MIN_CRT` nell'elenco delle definizioni del preprocessore definisce per consentire al codice di avvio di CRT da includere. Visualizzare [General Property Page (Project)](../../build/reference/general-property-page-project.md) per altre informazioni.

- Se possibile, rimuovere le chiamate alle funzioni CRT che richiedono il codice di avvio di CRT. Usare invece i rispettivi equivalenti di Win32. Ad esempio, usare `lstrcmp` invece di `strcmp`. Note funzioni che richiedono il codice di avvio di CRT sono alcune delle stringhe e funzioni a virgola mobile.

### <a name="compilation-and-link-issues"></a>Problemi di compilazione e collegamento

Questo errore può verificarsi quando il progetto non include un riferimento a una libreria (. LIB) o un oggetto (. File OBJ). Per risolvere questo problema, aggiungere un riferimento alla libreria richiesta o al file oggetto per il progetto. Per altre informazioni, vedere [file con estensione LIB come Input del Linker](../../build/reference/dot-lib-files-as-linker-input.md).

Questo errore può verificarsi se si usa la [/NODEFAULTLIB](../../build/reference/nodefaultlib-ignore-libraries.md) oppure [/Zl](../../build/reference/zl-omit-default-library-name.md) opzioni. Quando si specificano queste opzioni, le librerie che contengono codice richiesto non collegate nel progetto, a meno che si sono incluse in modo esplicito. Per risolvere questo problema, includere in modo esplicito tutte le librerie che è utilizzare nella riga di comando di collegamento. Se vengono visualizzati molti mancante CRT o della libreria Standard i nomi delle funzioni quando si usano queste opzioni, includono in modo esplicito i file CRT e DLL della libreria Standard o libreria nel collegamento.

Se si esegue la compilazione usando il **/clr** opzione, può essere presente un riferimento mancante al costrutto. cctor. Per risolvere questo problema, vedere [Initialization of Mixed Assemblies](../../dotnet/initialization-of-mixed-assemblies.md) per altre informazioni.

Questo errore può verificarsi se si collegano alle librerie di modalità di rilascio durante la creazione di una versione di debug di un'applicazione. Analogamente, se si usano le opzioni **/MTd** oppure **/MDd** o definire `_DEBUG` e collegarlo alle librerie di rilascio, è necessario prevedere che molti potenziali esterni non risolti, tra altri problemi. Il collegamento di una build di rilascio con le librerie di debug provoca anche problemi simili. Per risolvere questo problema, assicurarsi che si usano le librerie di debug nelle build di debug e compila librerie delle vendite al dettaglio nel retail.

Questo errore può verificarsi se il codice fa riferimento a un simbolo da una versione di una libreria, ma è fornire una versione diversa della libreria del linker. In generale, è possibile combinare file oggetto o le librerie che vengono compilate per versioni diverse del compilatore. Librerie fornite in una nuova versione possono contenere i simboli che non sono stati trovati nelle librerie incluse con le versioni precedenti e viceversa. Per risolvere questo problema, compilare tutti i file oggetto e librerie con la stessa versione del compilatore prima collegandole insieme.

- Gli strumenti di &#124; opzioni &#124; progetti &#124; finestra di dialogo Directory di VC + + in file di libreria, consente di modificare l'ordine di ricerca della libreria. Cartella Linker nella finestra di dialogo Pagine delle proprietà del progetto può contenere anche i percorsi che possono essere aggiornati.

- Questo problema può verificarsi quando un nuovo SDK è installato (ad esempio per un percorso diverso) e l'ordine di ricerca non viene aggiornato per puntare alla nuova posizione. In genere, è necessario inserire il percorso al nuovo SDK include e lib directory davanti a quello predefintio Visual C++. Inoltre, un progetto che contiene i percorsi di embedded ancora può puntare a percorsi precedenti che sono valide, ma aggiornata alla nuova funzionalità aggiunta dalla nuova versione che viene installata in un percorso diverso.

- Se si compila dalla riga di comando e aver creato le proprie variabili di ambiente, verificare che i percorsi dei file di intestazione, librerie e strumenti passare a una versione coerente. Per altre informazioni, vedere [impostare il percorso e le variabili di ambiente per compilazioni da riga di comando](../../build/setting-the-path-and-environment-variables-for-command-line-builds.md)

Non è attualmente non standard per [denominazione C++](../../error-messages/tool-errors/name-decoration.md) tra i fornitori di compilatori o anche tra versioni diverse di un compilatore. Pertanto, collegano file oggetto compilati con altri compilatori potrà non produrre lo stesso schema di denominazione e generare l'errore LNK2001.

[Opzioni di compilazione mixing inline e non inline](../../error-messages/tool-errors/function-inlining-problems.md) in moduli diversi può causare l'errore LNK2001. Se si crea una libreria di C++ con attivata l'inline delle funzioni ( **/Ob1** o **/Ob2**) ma il file di intestazione corrispondente che descrive le funzioni inline disattivata (Nessuna `inline` parola chiave), questo errore si verifica. Per risolvere questo problema, definire le funzioni `inline` nel file di intestazione si include in altri file di origine.

Se si usa la `#pragma inline_depth` del compilatore direttiva, assicurarsi di avere un [valore del set 2 o versioni successive](../../error-messages/tool-errors/function-inlining-problems.md)e assicurarsi che è anche possibile usare i [/Ob1](../../build/reference/ob-inline-function-expansion.md) o [/Ob2](../../build/reference/ob-inline-function-expansion.md) opzione del compilatore.

Questo errore può verificarsi se si omette il collegamento opzione /NOENTRY quando si crea una DLL di sole risorse. Per risolvere questo problema, aggiungere l'opzione /NOENTRY al comando del collegamento.

Questo errore può verificarsi se si Usa impostazioni /ENTRY o /SUBSYSTEM non corretto nel progetto. Ad esempio, se si scrive un'applicazione console e specificare /SUBSYSTEM: Windows, viene generato un errore esterno non risolto per `WinMain`. Per risolvere questo problema, assicurarsi che è far corrispondere le opzioni per il tipo di progetto. Per altre informazioni su queste opzioni e i punti di ingresso, vedere la [/SUBSYSTEM](../../build/reference/subsystem-specify-subsystem.md) e [/ENTRY](../../build/reference/entry-entry-point-symbol.md) opzioni del linker.

### <a name="exported-symbol-issues"></a>Problemi relativi al simbolo esportato

Questo errore si verifica quando non viene trovata un'esportazione elencata in un file con estensione def. Potrebbe trattarsi di perché non esiste, è stato digitato correttamente o vengono utilizzati nomi decorato di C++. Un file con estensione def non accetta i nomi decorati. Per risolvere questo problema, rimuovere le esportazioni non necessari e usare `extern "C"` dichiarazioni per simboli esportati.

## <a name="what-is-an-unresolved-external-symbol"></a>Che cos'è un simbolo esterno non risolto?

Oggetto *simbolo* è il nome di una funzione o variabile globale usata internamente da un file oggetto compilato o una raccolta. È un simbolo *definiti* nel file oggetto in cui archiviazione viene allocata per una variabile globale o per una funzione, in cui si trova il codice compilato per il corpo della funzione. Un' *simbolo esterno* è un simbolo che *riferimento*, vale a dire, utilizzato o chiamato nel file di un oggetto, ma definito in un file di libreria o un oggetto diverso. Un' *esportati simbolo* è quello che viene reso disponibile pubblicamente per il file oggetto o una raccolta che lo definisce. Il linker deve *risolvere*, o trovare la definizione corrispondente, per ogni simbolo esterno fa riferimento un file oggetto quando è collegato in un'applicazione o DLL. Il linker genera un errore quando è in grado di risolvere un simbolo esterno mediante la ricerca di un simbolo esportato corrisponda in uno dei file collegati.

## <a name="use-the-decorated-name-to-find-the-error"></a>Usare il nome decorato per individuare l'errore

L'uso del compilatore e linker C++ [decorazione](../../error-messages/tool-errors/name-decoration.md), noto anche come *alterazione*per codificare le informazioni aggiuntive sul tipo di una variabile o il tipo restituito, i tipi di parametro, ambito e chiamare il metodo convenzione di una funzione nel nome del simbolo. Questo nome decorato è il nome del simbolo cercato dal linker per risolvere i simboli esterni.

Poiché le informazioni aggiuntive diventano parte del nome del simbolo, se la dichiarazione di una funzione o variabile corrisponde esattamente la definizione della funzione o variabile può verificarsi un errore di collegamento. Questa situazione può verificarsi anche se lo stesso file di intestazione viene utilizzato sia il codice chiamante e il codice di definizione, se i flag del compilatore diverse vengono utilizzati quando si compila i file di origine. Ad esempio, è possibile ottenere questo errore se il codice viene compilato per usare la `__vectorcall` convenzione di chiamata, ma si collega a una libreria che si aspetta che i client per la chiamata usando il valore predefinito `__cdecl` o `__fastcall` convenzione di chiamata. In questo caso, i simboli non corrispondono perché le convenzioni di chiamata sono diverse

Per aiutarti a individuare la causa di questo tipo di errore, il messaggio di errore del linker Mostra sia il "nome descrittivo," il nome usato nel codice sorgente e il nome decorato (tra parentesi) per il simbolo esterno non risolto. Non è necessario sapere come convertire il nome decorato per poter confrontarlo con altri nomi decorati. È possibile usare strumenti da riga di comando che sono inclusi con il compilatore per confrontare il nome del simbolo previsto e il nome del simbolo effettivo:

- Il [/EXPORTS](../../build/reference/dash-exports.md) e [/simboli](../../build/reference/symbols.md) opzioni dello strumento della riga di comando DUMPBIN consentono di individuare quali simboli sono definiti nei file con estensione dll e oggetto o di libreria. È possibile utilizzare questo per verificare che decorati esportati i nomi corrispondano ai nomi il linker Cerca.

In alcuni casi, il linker può segnalare solo il nome decorato per un simbolo. È possibile utilizzare lo strumento da riga di comando UNDNAME per ottenere il formato non decorato di un nome decorato.

## <a name="additional-resources"></a>Risorse aggiuntive

Per altre informazioni sulle possibili cause e soluzioni per LNK2001, vedere la domanda in Stack Overflow [che cos'è un errore di simbolo esterno non definito o non risolti con riferimento e come correggerlo?](https://stackoverflow.com/q/12573816/2002113).

