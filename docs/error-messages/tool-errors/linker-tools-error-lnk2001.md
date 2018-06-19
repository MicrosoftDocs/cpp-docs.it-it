---
title: Strumenti del linker LNK2001 errore | Documenti Microsoft
ms.custom: ''
ms.date: 05/17/2017
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK2001
dev_langs:
- C++
helpviewer_keywords:
- LNK2001
ms.assetid: dc1cf267-c984-486c-abd2-fd07c799f7ef
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 78dc0c0a3a030ecb88d7138484e2c64e145f69ec
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33301782"
---
# <a name="linker-tools-error-lnk2001"></a>Errore degli strumenti del linker LNK2001
simbolo esterno non risolto "*simbolo*"  
  
Il codice compilato effettua un riferimento o una chiamata a *simbolo*, ma il simbolo non è definito in tutte le librerie o file oggetto specificati per il linker.  
  
Questo messaggio di errore è seguito dall'errore irreversibile [LNK1120](../../error-messages/tool-errors/linker-tools-error-lnk1120.md). È necessario correggere gli errori di tutti i LNK2001 e l'errore LNK2019 per correggere l'errore LNK1120.  
  
## <a name="possible-causes"></a>Possibili cause  
  
Esistono diversi modi per ottenere questo errore, ma tutti gli elementi coinvolti un riferimento a una funzione o variabile che il linker non *risolvere*, o trovare una definizione per. Il compilatore può identificare quando non è un simbolo *dichiarato*, ma non quando non è *definito*, perché la definizione può trovarsi in un altro file di origine o una raccolta. Se un simbolo viene definito ma mai definito, il linker genera un errore.  
  
### <a name="coding-issues"></a>Problemi di codifica  
  
Questo errore può essere causato dalle maiuscole o minuscole non corrispondenti nel codice sorgente o definizione moduli (def) file. Ad esempio, se si assegna il nome variabile `var1` in un C++ file di origine e si tenta di accedervi come `VAR1` in un altro, viene generato l'errore. Per risolvere questo problema, utilizzare in modo coerente digitato e i nomi in base alla.  
  
Questo errore può verificarsi in un progetto che utilizza [l'inline delle funzioni](../../error-messages/tool-errors/function-inlining-problems.md) se si definiscono le funzioni in un file di origine, invece che in un file di intestazione. Non è visibile all'esterno del file di origine che definisce le funzioni inline. Per risolvere questo problema, definire le funzioni inline nelle intestazioni in cui sono dichiarati.  
  
Questo errore può verificarsi quando si chiama una funzione C da un programma C++ senza utilizzare un `extern "C"` dichiarazione per la funzione C. Il compilatore utilizza le convenzioni di denominazione simbolo interni diversi per il codice C e C++ ed è il nome del simbolo interno che il linker cerca durante la risoluzione dei simboli. Per risolvere questo problema, utilizzare un `extern "C"` wrapper per tutte le dichiarazioni di funzioni C utilizzate nel codice C++, che indica al compilatore di utilizzare la convenzione di denominazione C interna per i simboli. Opzioni del compilatore [/Tp](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md) e [/Tc](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md) indica al compilatore di compilare i file in C++ o C, rispettivamente, indipendentemente dall'estensione di file. Queste opzioni possono causare i nomi di funzione interna diversi rispetto a quello previsto.  
  
Questo errore può essere causato da un tentativo di fare riferimento a funzioni o dati che non dispongono di collegamento esterno. In C++, le funzioni inline e `const` dati hanno il collegamento interno, a meno che non viene specificato in modo esplicito come `extern`. Per risolvere questo problema, utilizzare esplicita `extern` dichiarazioni simboli definito all'esterno del file di origine che definisce.  
  
Questo errore può essere causato da un [corpo della funzione o variabile mancante](../../error-messages/tool-errors/missing-function-body-or-variable.md) definizione. Questo errore è comune quando si dichiara, ma non sono definite, variabili, funzioni o classi nel codice. Il compilatore necessita solo di un prototipo di funzione o `extern` dichiarazione di variabile per generare un file oggetto senza errore, ma il linker non è possibile risolvere una chiamata alla funzione o un riferimento alla variabile perché non è disponibile spazio di codice o variabile (funzione) riservato. Per risolvere questo problema, assicurarsi che ogni funzione di cui viene fatto riferimento e la variabile è completamente definita in un file di origine o di una libreria inclusa nel collegamento.  
  
Questo errore può dipendere da una chiamata di funzione che usa tipi restituiti e parametri o convenzioni di chiamata che non corrispondono a quelle nella definizione di funzione. Nei file oggetto C++, [nome decorazione](../../error-messages/tool-errors/name-decoration.md) incorpora la convenzione di chiamata, l'ambito di classe o spazio dei nomi e tipi restituiti e parametri di una funzione nel nome di funzione decorato finale, che viene utilizzato come il simbolo per la corrispondenza quando le chiamate a la funzione da altri file oggetto vengono risolti. Per risolvere questo problema, assicurarsi che la dichiarazione, definizione e le chiamate alla funzione tutte utilizzano la stessi ambiti, tipi e le convenzioni di chiamata.  
  
Questo errore può verificarsi nel codice C++ quando include un prototipo di funzione in una definizione di classe ma non [includono l'implementazione](../../error-messages/tool-errors/missing-function-body-or-variable.md) della funzione e quindi chiamarlo. Per risolvere questo problema, assicurarsi di fornire una definizione per tutti chiamato dichiarati i membri di una classe.  
  
Questo errore può essere causato da un tentativo di chiamare una funzione virtuale pura da una classe base astratta. Una funzione virtuale pura non è Nessuna implementazione della classe base. Per risolvere questo problema, assicurarsi che tutti chiamato le funzioni virtuali vengono implementati.  
  
Questo errore può essere causato dal tentativo di utilizzare una variabile dichiarata all'interno di una funzione ([una variabile locale](../../error-messages/tool-errors/automatic-function-scope-variables.md)) all'esterno dell'ambito di tale funzione. Per risolvere questo problema, rimuovere il riferimento alla variabile che non è nell'ambito o spostare la variabile in un ambito più elevato.  
  
Questo errore può verificarsi quando si compila una versione di un progetto ATL, generare un messaggio che è necessario il codice di avvio CRT. Per risolvere questo problema, eseguire una delle operazioni seguenti,  
  
-   Rimuovere `_ATL_MIN_CRT` dall'elenco delle definizioni del preprocessore definisce per consentire il codice di avvio CRT da includere. Vedere [pagina delle proprietà Generale (progetto)](../../ide/general-property-page-project.md) per ulteriori informazioni.  
  
-   Se possibile, rimuovere le chiamate alle funzioni CRT che richiedono il codice di avvio di CRT. Utilizzare invece i rispettivi equivalenti di Win32. Ad esempio, utilizzare `lstrcmp` anziché `strcmp`. Note funzioni che richiedono il codice di avvio CRT sono alcune delle funzioni a virgola mobile e stringa.  
  
### <a name="compilation-and-link-issues"></a>Problemi di compilazione e collegamento  
  
Questo errore può verificarsi quando il progetto manca un riferimento a una libreria (. LIB) o un oggetto (. File OBJ). Per risolvere questo problema, aggiungere un riferimento alla libreria richiesta o al file oggetto per il progetto. Per ulteriori informazioni, vedere [file LIB come Input del Linker](../../build/reference/dot-lib-files-as-linker-input.md).  
  
Questo errore può verificarsi se si utilizza il [/NODEFAULTLIB](../../build/reference/nodefaultlib-ignore-libraries.md) o [/Zl](../../build/reference/zl-omit-default-library-name.md) opzioni. Quando si specificano queste opzioni, a meno che non sono stati inclusi in modo esplicito le librerie che contengono il codice necessari sono collegate non nel progetto. Per risolvere questo problema, includere tutte le raccolte che si utilizza nella riga di comando di collegamento in modo esplicito. Se vengono visualizzati molti mancante CRT o libreria Standard i nomi delle funzioni quando si usano queste opzioni, in modo esplicito includono i file di CRT e DLL della libreria Standard o una raccolta nel collegamento.  

Se si esegue la compilazione utilizzando il **/clr** opzione, può essere presente un riferimento a. cctor mancante. Per risolvere questo problema, vedere [inizializzazione di assembly misti](../../dotnet/initialization-of-mixed-assemblies.md) per ulteriori informazioni.  
  
Questo errore può verificarsi se si collega a librerie di modalità di rilascio durante la compilazione di una versione di debug di un'applicazione. Analogamente, se si utilizzano opzioni **/MTd** o **/MDd** o definire `_DEBUG` e quindi eseguire il collegamento alle librerie di rilascio, è necessario prevedere molti potenziali esterni non risolti, altri problemi. Il collegamento di una build di rilascio con le librerie di debug comporta problemi simili. Per risolvere questo problema, assicurarsi che si utilizzano le librerie di debug nelle build di debug e genera le librerie delle vendite al dettaglio il dettaglio.  
  
Questo errore può verificarsi se il codice fa riferimento a un simbolo da una versione di una raccolta, ma è fornire una versione diversa della libreria al linker. In genere, è possibile combinare file oggetto o delle librerie compilate per versioni diverse del compilatore. Le librerie fornite con una nuova versione possono contenere simboli trovato nelle librerie con le versioni precedenti e viceversa. Per risolvere questo problema, compilare tutti i file oggetto e librerie con la stessa versione del compilatore prima collegate insieme.  
  
-  Gli strumenti di &#124; opzioni &#124; i progetti &#124; finestra di dialogo Directory di VC + + in file di libreria, consente di modificare l'ordine di ricerca di libreria. Cartella Linker nella finestra di dialogo Pagine delle proprietà del progetto può contenere anche i percorsi che è stati aggiornati.  
  
-  Questo problema può verificarsi quando un nuovo SDK viene installato (ad esempio per un percorso diverso), e l'ordine di ricerca non viene aggiornato per puntare alla nuova posizione. In genere, è necessario inserire il percorso al nuovo SDK include e lib directory davanti a quella predefinita Visual C++. Inoltre, un progetto contenente percorsi incorporati continui a fare riferimento a percorsi precedenti validi, ma aggiornata alla nuova funzionalità aggiunta dalla nuova versione che viene installata in un percorso diverso.  
  
-   Se si compila dalla riga di comando e aver creato le proprie variabili di ambiente, verificare che i percorsi dei file di intestazione, librerie e strumenti per una versione coerente. Per altre informazioni, vedere [impostare il percorso e le variabili di ambiente per la compilazione dalla riga di comando](../../build/setting-the-path-and-environment-variables-for-command-line-builds.md)
  
Non è attualmente non standard per [denominazione C++](../../error-messages/tool-errors/name-decoration.md) tra i fornitori di compilatori o anche tra versioni diverse di un compilatore. Pertanto, si collegano file oggetto compilati con altri compilatori potrebbe non produrre lo stesso schema di denominazione e generare l'errore LNK2001.  
  
[Mixing inline e non inline compilare opzioni](../../error-messages/tool-errors/function-inlining-problems.md) in moduli diversi può causare l'errore LNK2001. Se si crea una libreria di C++ con attivata l'inline delle funzioni (**/Ob1** o **/Ob2**) ma il file di intestazione corrispondente che descrive le funzioni inline disattivata (Nessuna `inline` parola chiave), l'errore si verifica. Per risolvere questo problema, definire le funzioni `inline` nel file di intestazione è includere in altri file di origine.  
  
Se si utilizza il `#pragma inline_depth` verificare direttiva del compilatore che hanno un [valore 2 o superiore](../../error-messages/tool-errors/function-inlining-problems.md)e assicurarsi di usare anche il [/Ob1](../../build/reference/ob-inline-function-expansion.md) o [/Ob2](../../build/reference/ob-inline-function-expansion.md) l'opzione del compilatore.  
  
Questo errore può verificarsi se si omette il collegamento opzione /NOENTRY quando si crea una DLL di sole risorse. Per risolvere questo problema, aggiungere l'opzione /NOENTRY al comando del collegamento.  
  
Questo errore può verificarsi se si utilizza le impostazioni di /ENTRY o /SUBSYSTEM non corretto nel progetto. Ad esempio, se si scrive un'applicazione console e specificare /SUBSYSTEM: Windows, viene generato un errore esterno non risolto per `WinMain`. Per risolvere questo problema, assicurarsi che si corrisponde alle opzioni per il tipo di progetto. Per ulteriori informazioni su queste opzioni e i punti di ingresso, vedere il [/SUBSYSTEM](../../build/reference/subsystem-specify-subsystem.md) e [/ENTRY](../../build/reference/entry-entry-point-symbol.md) opzioni del linker.  
  
### <a name="exported-symbol-issues"></a>Problemi relativi al simbolo esportato  
  
Questo errore si verifica quando non viene trovata un'esportazione elencata in un file def. È possibile che non esiste, è stato digitato correttamente oppure vengono utilizzati nomi decorato di C++. Un file. def non accettano i nomi decorati. Per risolvere questo problema, rimuovere le esportazioni non necessari e utilizzare `extern "C"` dichiarazioni per simboli esportati.  
  
## <a name="what-is-an-unresolved-external-symbol"></a>Che cos'è un simbolo esterno non risolto?  
  
Oggetto *simbolo* è il nome di una funzione o variabile globale utilizzata internamente da un file oggetto compilato o una raccolta. È un simbolo *definito* nel file oggetto in cui l'archiviazione viene allocata per una variabile globale o per una funzione, in cui viene inserito il codice compilato per il corpo della funzione. Un *simbolo esterno* è un simbolo che *riferimento*, vale a dire, utilizzato o chiamato nel file di un oggetto, ma definito in un file di libreria o un oggetto diverso. Un *esportato simbolo* uno reso disponibile pubblicamente per il file oggetto o una libreria che lo definisce. Il linker deve *risolvere*, o trovare la definizione corrispondente per ogni simbolo esterno a cui fa riferimento un file oggetto quando è collegato in un'applicazione o DLL. Il linker genera un errore quando è in grado di risolvere un simbolo esterno mediante la ricerca di un corrispondente al simbolo esportato in uno dei file collegati.    
  
## <a name="use-the-decorated-name-to-find-the-error"></a>Utilizzare il nome decorato per individuare l'errore
  
L'utilizzo del compilatore e del linker di C++ [decorazione dei nomi](../../error-messages/tool-errors/name-decoration.md), nota anche come *alterazione dei nomi*, per codificare le informazioni aggiuntive sul tipo di una variabile o il tipo restituito, i tipi di parametro, ambito e la chiamata convenzione di una funzione nel nome del simbolo. Questo nome decorato è il nome del simbolo cercato dal linker per risolvere i simboli esterni.  
  
Poiché le informazioni aggiuntive diventano parte del nome del simbolo, può verificarsi un errore di collegamento se la dichiarazione di una funzione o una variabile corrisponde esattamente la definizione della funzione o variabile. Questa situazione può verificarsi anche se lo stesso file di intestazione viene utilizzato il codice chiamante sia il codice di definizione, se il flag del compilatore diverse viene utilizzato durante la compilazione dei file di origine. Ad esempio, è possibile ottenere questo errore se il codice viene compilato per l'utilizzo di `__vectorcall` convenzione di chiamata, ma si collega a una libreria che richiede ai client di chiamare usando il valore predefinito `__cdecl` o `__fastcall` la convenzione di chiamata. In questo caso, i simboli non corrispondono perché le convenzioni di chiamata sono diverse   
  
Per individuare la causa di questo tipo di errore, il messaggio di errore del linker Mostra sia il "nome descrittivo," il nome utilizzato nel codice sorgente e il nome decorato (tra parentesi) per il simbolo esterno non risolto. Non è necessario sapere come convertire il nome decorato per essere in grado di eseguire il confronto con altri nomi decorati. È possibile utilizzare gli strumenti da riga di comando inclusi con il compilatore per confrontare il nome del simbolo previsto e il nome del simbolo effettivo:  

-   Il [/ESPORTA](../../build/reference/dash-exports.md) e [/simboli](../../build/reference/symbols.md) opzioni dello strumento della riga di comando DUMPBIN consentono di individuare quali simboli sono definiti nei file con estensione dll e oggetto o di libreria. Ciò consente di verificare che i nomi decorati esportati corrispondano che ai nomi il linker Cerca.  
  
In alcuni casi, il linker può segnalare solo il nome decorato per un simbolo. È possibile utilizzare lo strumento da riga di comando UNDNAME per ottenere il formato non decorato di un nome decorato.  
  
## <a name="additional-resources"></a>Risorse aggiuntive  
  
Per ulteriori informazioni sulle possibili cause e soluzioni per l'errore LNK2001, vedere la domanda Stack Overflow [che cos'è un errore di simbolo esterno non definito non risolto riferimento e come si risolve?](http://stackoverflow.com/q/12573816/2002113).  

