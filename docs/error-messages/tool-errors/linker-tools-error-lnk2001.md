---
description: 'Altre informazioni su: errore degli strumenti del linker LNK2001'
title: Errore degli strumenti del linker LNK2001
ms.date: 12/19/2019
f1_keywords:
- LNK2001
helpviewer_keywords:
- LNK2001
ms.assetid: dc1cf267-c984-486c-abd2-fd07c799f7ef
ms.openlocfilehash: 790c75b290b49fe40362ad1bc4ee93e90cc2d018
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97338526"
---
# <a name="linker-tools-error-lnk2001"></a>Errore degli strumenti del linker LNK2001

> simbolo esterno "*Symbol*" non risolto

Il codice compilato esegue un riferimento o una chiamata a *Symbol*. Il simbolo non è definito in alcuna libreria o file oggetto ricercato dal linker.

Questo messaggio di errore è seguito da un errore irreversibile [LNK1120](../../error-messages/tool-errors/linker-tools-error-lnk1120.md). Per correggere l'errore LNK1120, è necessario innanzitutto correggere tutti gli errori LNK2001 e LNK2019.

Esistono diversi modi per ottenere gli errori di LNK2001. Tutti questi elementi coinvolgono un *riferimento* a una funzione o a una variabile che il linker non è in grado di *risolvere* o a cui viene trovata una definizione. Il compilatore è in grado di identificare quando il codice non *dichiara* un simbolo, ma non se ne *definisce* uno. Questo perché la definizione potrebbe trovarsi in un file di origine o in una raccolta diversa. Se il codice fa riferimento a un simbolo, ma non è mai definito, il linker genera un errore.

## <a name="what-is-an-unresolved-external-symbol"></a>Che cos'è un simbolo esterno non risolto?

Un *simbolo* è il nome interno di una funzione o di una variabile globale. È il formato del nome usato o definito in una libreria o un file oggetto compilato. Una variabile globale viene definita nel file oggetto a cui è allocata l'archiviazione. Una funzione viene definita nel file oggetto in cui viene inserito il codice compilato per il corpo della funzione. Un *simbolo esterno* è un oggetto a cui si fa riferimento in un file oggetto, ma definito in un file di libreria o oggetto diverso. Un *simbolo esportato* è quello reso disponibile pubblicamente dal file oggetto o dalla libreria che la definisce.

Per creare un'applicazione o una DLL, ogni simbolo usato deve avere una definizione. Il linker deve *risolvere* o trovare la definizione corrispondente per ogni simbolo esterno a cui fa riferimento ogni file oggetto. Il linker genera un errore quando non riesce a risolvere un simbolo esterno. Significa che il linker non è riuscito a trovare una definizione di simbolo esportata corrispondente in uno dei file collegati.

## <a name="compilation-and-link-issues"></a>Problemi di compilazione e collegamento

Questo errore può verificarsi:

- Quando nel progetto manca un riferimento a una libreria (. LIB) o Object (. File OBJ). Per risolvere questo problema, aggiungere un riferimento al file di libreria o oggetto necessario al progetto. Per altre informazioni, vedere [file lib come input del linker](../../build/reference/dot-lib-files-as-linker-input.md).

- Quando il progetto contiene un riferimento a una libreria (. LIB) o Object (. OBJ) che a sua volta richiede simboli da un'altra libreria. Può verificarsi anche se non si chiamano funzioni che provocano la dipendenza. Per risolvere questo problema, aggiungere un riferimento all'altra libreria al progetto. Per altre informazioni, vedere informazioni [sul modello classico per il collegamento: assunzione di simboli per la corsa](https://devblogs.microsoft.com/oldnewthing/20130108-00/?p=5623).

- Se si usano le opzioni [/NODEFAULTLIB](../../build/reference/nodefaultlib-ignore-libraries.md) o [/ZL](../../build/reference/zl-omit-default-library-name.md) . Quando si specificano queste opzioni, le librerie che contengono il codice richiesto non sono collegate al progetto a meno che non siano state incluse in modo esplicito. Per risolvere questo problema, includere in modo esplicito tutte le librerie usate nella riga di comando del collegamento. Se quando si usano queste opzioni vengono visualizzati molti nomi di funzione libreria standard o CRT mancanti, includere in modo esplicito le dll libreria standard e CRT nel collegamento.

- Se si esegue la compilazione con l'opzione **/CLR** . Potrebbe essere presente un riferimento mancante a `.cctor` . Per ulteriori informazioni su come risolvere questo problema, vedere [inizializzazione di assembly misti](../../dotnet/initialization-of-mixed-assemblies.md).

- Se si esegue il collegamento alle librerie della modalità di rilascio quando si compila una versione di debug di un'applicazione. Analogamente, se si usano le opzioni **/MTD** o **/MDD** oppure si definisce `_DEBUG` un collegamento alle librerie di versione, è necessario prevedere molti altri tipi di esterni non risolti, tra gli altri problemi. Il collegamento di una compilazione della modalità di rilascio con le librerie di debug causa anche problemi simili. Per risolvere questo problema, assicurarsi di usare le librerie di debug nelle compilazioni di debug e le librerie finali nelle compilazioni finali.

- Se il codice fa riferimento a un simbolo di una versione della libreria, ma si collega una versione diversa della libreria. In genere, non è possibile combinare file oggetto o librerie compilate per versioni diverse del compilatore. Le librerie fornite in una versione possono contenere simboli non disponibili nelle librerie incluse con altre versioni. Per risolvere questo problema, compilare tutti i file oggetto e le librerie con la stessa versione del compilatore prima di collegarli insieme. Per ulteriori informazioni, vedere [C++ Binary compatibility 2015-2019](../../porting/binary-compat-2015-2017.md).

- Se i percorsi della libreria non sono aggiornati. Gli **strumenti > opzioni > progetti > finestra di dialogo Directory di VC + +** , sotto la selezione dei **file di libreria** , consentono di modificare l'ordine di ricerca della libreria. La cartella linker nella finestra di dialogo Pagine delle proprietà del progetto può inoltre contenere percorsi che potrebbero non essere aggiornati.

- Quando viene installato un nuovo Windows SDK, ad esempio in un percorso diverso. L'ordine di ricerca della libreria deve essere aggiornato in modo che punti alla nuova posizione. In genere, è consigliabile inserire il percorso di New SDK include e le directory lib davanti al percorso predefinito Visual C++. Inoltre, un progetto contenente percorsi incorporati può ancora puntare a percorsi obsoleti validi, ma non aggiornati. Aggiornare i percorsi per le nuove funzionalità aggiunte dalla nuova versione installata in un percorso diverso.

- Se si compila dalla riga di comando e sono state create le proprie variabili di ambiente. Verificare che i percorsi di strumenti, librerie e file di intestazione vadano a una versione coerente. Per ulteriori informazioni, vedere [impostazione delle variabili di percorso e di ambiente per le compilazioni da riga di comando](../../build/setting-the-path-and-environment-variables-for-command-line-builds.md)

## <a name="coding-issues"></a>Problemi di codifica

Questo errore può dipendere dalle cause seguenti:

- Mancata corrispondenza tra maiuscole e minuscole nel codice sorgente o nel file di definizione moduli (con estensione def). Se ad esempio si assegna un nome a una variabile `var1` in un file di origine C++ e si tenta di accedervi come `VAR1` in un altro file, viene generato questo errore. Per risolvere questo problema, utilizzare nomi con ortografia e con maiuscole e minuscole.

- Progetto che utilizza l' [incorporamento della funzione](../../error-messages/tool-errors/function-inlining-problems.md). Può verificarsi quando si definiscono le funzioni come **`inline`** in un file di origine, anziché in un file di intestazione. Le funzioni inline non possono essere visualizzate all'esterno del file di origine che le definisce. Per risolvere questo problema, definire le funzioni inline nelle intestazioni in cui sono dichiarate.

- Chiamata di una funzione C da un programma C++ senza utilizzare una `extern "C"` dichiarazione per la funzione c. Il compilatore USA convenzioni di denominazione dei simboli interni diverse per il codice C e C++. Il nome del simbolo interno è quello che il linker cerca durante la risoluzione dei simboli. Per risolvere questo problema, usare un `extern "C"` wrapper per tutte le dichiarazioni di funzioni C usate nel codice C++, che fa sì che il compilatore usi la convenzione di denominazione interna c per tali simboli. Le opzioni del compilatore [/TP](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md) e [/TC](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md) fanno sì che il compilatore compilerà i file come C++ o C, a prescindere dall'estensione del nome file. Queste opzioni possono causare nomi di funzioni interni diversi da quelli previsti.

- Tentativo di fare riferimento a funzioni o dati che non dispongono di un collegamento esterno. In C++, le funzioni inline e **`const`** i dati hanno un collegamento interno a meno che non venga specificato in modo esplicito come **`extern`** . Per risolvere questo problema, utilizzare dichiarazioni esplicite **`extern`** sui simboli a cui viene fatto riferimento all'esterno del file di origine che lo definisce.

- Una definizione di [variabile o corpo della funzione mancante](../../error-messages/tool-errors/missing-function-body-or-variable.md) . Questo errore è comune quando si dichiara, ma non si definiscono, variabili, funzioni o classi nel codice. Il compilatore richiede solo un prototipo di funzione o una **`extern`** dichiarazione di variabile per generare un file oggetto senza errori, ma il linker non è in grado di risolvere una chiamata alla funzione o un riferimento alla variabile perché non è presente alcun codice della funzione o spazio variabile riservato. Per risolvere questo problema, assicurarsi di definire ogni funzione e variabile a cui si fa riferimento in un file di origine o in una libreria collegata.

- Una chiamata di funzione che usa i tipi restituiti e i tipi di parametro o le convenzioni di chiamata che non corrispondono a quelle nella definizione della funzione. Nei file oggetto C++, la [decorazione del nome](../../error-messages/tool-errors/name-decoration.md) codifica la convenzione di chiamata, l'ambito della classe o dello spazio dei nomi e i tipi di parametro e restituiti di una funzione. La stringa codificata diventa parte del nome della funzione decorata finale. Questo nome viene usato dal linker per risolvere, o trovare la corrispondenza, le chiamate alla funzione da altri file oggetto. Per risolvere questo problema, assicurarsi che la dichiarazione di funzione, la definizione e le chiamate usino tutti gli stessi ambiti, tipi e convenzioni di chiamata.

- Codice C++ chiamato, quando si include un prototipo di funzione in una definizione di classe, ma non si [include l'implementazione](../../error-messages/tool-errors/missing-function-body-or-variable.md) della funzione. Per risolvere questo problema, assicurarsi di specificare una definizione per tutti i membri della classe chiamati.

- Tentativo di chiamare una funzione virtuale pura da una classe base astratta. Una funzione virtuale pura non ha un'implementazione della classe di base. Per risolvere questo problema, assicurarsi che tutte le funzioni virtuali chiamate siano implementate.

- Tentativo di usare una variabile dichiarata all'interno di una funzione ([variabile locale](../../error-messages/tool-errors/automatic-function-scope-variables.md)) al di fuori dell'ambito di tale funzione. Per risolvere il problema, rimuovere il riferimento alla variabile che non rientra nell'ambito oppure spostare la variabile in un ambito superiore.

- Quando si compila una versione di rilascio di un progetto ATL, viene generato un messaggio che indica che il codice di avvio CRT è necessario. Per risolvere il problema, eseguire una delle operazioni seguenti:

  - Rimuovere `_ATL_MIN_CRT` dall'elenco di definizioni del preprocessore per consentire l'inclusione del codice di avvio CRT. Per ulteriori informazioni, vedere la [pagina delle proprietà generale (progetto)](../../build/reference/general-property-page-project.md).

  - Se possibile, rimuovere le chiamate alle funzioni CRT che richiedono il codice di avvio CRT. Usare invece gli equivalenti Win32. Usare, ad esempio, `lstrcmp` invece di `strcmp`. Le funzioni note che richiedono il codice di avvio CRT sono alcune delle funzioni stringa e virgola mobile.

## <a name="consistency-issues"></a>Problemi di coerenza

Attualmente non esiste uno standard per la [decorazione dei nomi C++](../../error-messages/tool-errors/name-decoration.md) tra i fornitori di compilatori o anche tra versioni diverse dello stesso compilatore. I file oggetto compilati con compilatori diversi non possono usare lo stesso schema di denominazione. Il collegamento può causare un errore LNK2001.

La [combinazione di opzioni di compilazione inline e non inline](../../error-messages/tool-errors/function-inlining-problems.md) in moduli diversi può causare LNK2001. Se viene creata una libreria C++ con l'incorporamento della funzione attivata (**/OB1** o **/Ob2**), ma nel file di intestazione corrispondente che descrive le funzioni è presente l'inlining disattivato (nessuna **`inline`** parola chiave), questo errore si verifica. Per risolvere questo problema, definire le funzioni **`inline`** nel file di intestazione incluso in altri file di origine.

Se si usa la `#pragma inline_depth` direttiva del compilatore, verificare di aver impostato un [valore di 2 o superiore](../../error-messages/tool-errors/function-inlining-problems.md)e assicurarsi di usare anche l'opzione del compilatore [/OB1](../../build/reference/ob-inline-function-expansion.md) o [/Ob2](../../build/reference/ob-inline-function-expansion.md) .

Questo errore può verificarsi se si omette l'opzione di collegamento/NOENTRY quando si crea una DLL di sole risorse. Per risolvere questo problema, aggiungere l'opzione/NOENTRY al comando di collegamento.

Questo errore può verificarsi se si usano impostazioni/SUBSYSTEM o/ENTRY non corrette nel progetto. Se, ad esempio, si scrive un'applicazione console e si specifica/SUBSYSTEM: WINDOWS, viene generato un errore esterno non risolto per `WinMain` . Per risolvere il problema, assicurarsi di associare le opzioni al tipo di progetto. Per ulteriori informazioni su queste opzioni e sui punti di ingresso, vedere le opzioni del linker [/Subsystem](../../build/reference/subsystem-specify-subsystem.md) e [/entry](../../build/reference/entry-entry-point-symbol.md) .

## <a name="exported-def-file-symbol-issues"></a>Problemi relativi ai simboli dei file con estensione def esportati

Questo errore si verifica quando non viene trovata un'esportazione elencata in un file def. La causa potrebbe essere che l'esportazione non esiste, è stata digitata in modo errato o usa nomi decorati in C++. Un file con estensione def non accetta nomi decorati. Per risolvere il problema, rimuovere le esportazioni non necessarie e usare le `extern "C"` dichiarazioni per i simboli esportati.

## <a name="use-the-decorated-name-to-find-the-error"></a>Usare il nome decorato per trovare l'errore

Il compilatore e il linker C++ utilizzano la [decorazione del nome](../../error-messages/tool-errors/name-decoration.md), nota anche come *alterazione dei nomi*. La decorazione del nome codifica informazioni aggiuntive sul tipo di una variabile nel nome del simbolo. Il nome del simbolo per una funzione codifica il tipo restituito, i tipi di parametro, l'ambito e la convenzione di chiamata. Questo nome decorato è il nome del simbolo cercato dal linker per risolvere i simboli esterni.

Se la dichiarazione di una funzione o di una variabile non corrisponde *esattamente* alla definizione della funzione o della variabile, può verificarsi un errore di collegamento. Ciò è dovuto al fatto che qualsiasi differenza diventa parte del nome del simbolo per la corrispondenza. L'errore può verificarsi anche se lo stesso file di intestazione viene usato sia nel codice chiamante che nel codice di definizione. Un modo in cui può verificarsi è se si compilano i file di origine usando flag del compilatore diversi. Ad esempio, se il codice viene compilato per utilizzare la **`__vectorcall`** convenzione di chiamata, ma si collega a una raccolta che prevede che i client la chiamino utilizzando **`__cdecl`** la **`__fastcall`** convenzione di chiamata o predefinita. In questo caso, i simboli non corrispondono perché le convenzioni di chiamata sono diverse.

Per individuare la ragione, nel messaggio di errore vengono visualizzate due versioni del nome. Mostra sia il nome descrittivo, il nome usato nel codice sorgente che il nome decorato (tra parentesi). Non è necessario saper interpretare il nome decorato. È comunque possibile cercarla e confrontarla con altri nomi decorati. Gli strumenti da riga di comando consentono di trovare e confrontare il nome del simbolo previsto e il nome effettivo del simbolo:

- Le opzioni [/exports.](../../build/reference/dash-exports.md) e [/symbols](../../build/reference/symbols.md) dello strumento da riga di comando DUMPBIN sono utili qui. Consentono di individuare i simboli definiti nei file con estensione dll e oggetto o libreria. È possibile usare l'elenco dei simboli per verificare che i nomi decorati esportati corrispondano ai nomi decorati cercati dal linker.

- In alcuni casi, il linker può segnalare solo il nome decorato per un simbolo. È possibile utilizzare lo strumento da riga di comando UNDNAME per ottenere il formato non decorato di un nome decorato.

## <a name="additional-resources"></a>Risorse aggiuntive

Per ulteriori informazioni, vedere la domanda Stack Overflow ["che cos'è un errore non definito di riferimento/simbolo esterno non risolto e come risolverlo?"](https://stackoverflow.com/q/12573816/2002113).
