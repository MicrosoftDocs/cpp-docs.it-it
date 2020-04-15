---
title: Errore degli strumenti del linker LNK2005
ms.date: 11/04/2016
f1_keywords:
- LNK2005
helpviewer_keywords:
- LNK2005
ms.assetid: d9587adc-68be-425c-8a30-15dbc86717a4
ms.openlocfilehash: 6090478c3761c477250b6706a350e261b51f2a05
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81353232"
---
# <a name="linker-tools-error-lnk2005"></a>Errore degli strumenti del linker LNK2005

> *simbolo* già definito nell'oggetto

Il *simbolo* simbolo è stato definito più di una volta.

Questo errore è seguito dall'errore irreversibile [LNK1169](../../error-messages/tool-errors/linker-tools-error-lnk1169.md).

### <a name="possible-causes-and-solutions"></a>Possibili cause e soluzioni

In genere, questo errore indica che è stata interrotta la regola di *una definizione*, che consente una sola definizione per qualsiasi modello, funzione, tipo o oggetto utilizzato in un determinato file oggetto e una sola definizione nell'intero eseguibile per le funzioni o gli oggetti visibili esternamente.

Ecco alcune cause comuni per questo errore.

- Questo errore può verificarsi quando un file di intestazione definisce una variabile. Ad esempio, se si include questo file di intestazione in più di un file di origine nel progetto, viene generato un errore:For example, if you include this header file in more than one source file in your project, an error results:

    ```h
    // LNK2005_global.h
    int global_int;  // LNK2005
    ```

   Tra le possibili soluzioni vi sono le seguenti:

  - Dichiarare la `extern` variabile nel `extern int global_int;`file di intestazione: , quindi definirla `int global_int = 17;`e facoltativamente inizializzarla in un solo file di origine: . Questa variabile è ora globale che è possibile utilizzare `extern`in qualsiasi file di origine dichiarandola , ad esempio includendo il file di intestazione. Si consiglia questa soluzione per le variabili che devono essere globali, ma una buona pratica di progettazione del software riduce al minimo le variabili globali.

  - Dichiarare la [static](../../cpp/storage-classes-cpp.md#static)variabile `static int static_int = 17;`static : . In questo modo l'ambito della definizione viene limitato al file oggetto corrente e più file oggetto di disporre di una propria copia della variabile. Non è consigliabile definire variabili statiche nei file di intestazione a causa della potenziale confusione con le variabili globali. Preferire spostare le definizioni delle variabili statiche nei file di origine che le utilizzano.

  - Dichiarare la variabile `__declspec(selectany) int global_int = 17;` [selectany](../../cpp/selectany.md): . Ciò indica al linker di scegliere una definizione per l'utilizzo da parte di tutti i riferimenti esterni e di eliminare il resto. Questa soluzione è talvolta utile quando si combinano librerie di importazione. In caso contrario, non è consigliabile per evitare errori del linker.

- Questo errore può verificarsi quando un file di `inline`intestazione definisce una funzione che non è . Se si include questo file di intestazione in più di un file di origine, si ottengono più definizioni della funzione nell'eseguibile.

    ```h
    // LNK2005_func.h
    int sample_function(int k) { return 42 * (k % 167); }  // LNK2005
    ```

   Tra le possibili soluzioni vi sono le seguenti:

  - Aggiungere `inline` la parola chiave alla funzione:

    ```h
    // LNK2005_func_inline.h
    inline int sample_function(int k) { return 42 * (k % 167); }
    ```

  - Rimuovere il corpo della funzione dal file di intestazione e lasciare solo la dichiarazione, quindi implementare la funzione in un solo file di origine:Remove the function body from the header file and leave only the declaration, then implement the function in one and only one source file:

    ```h
    // LNK2005_func_decl.h
    int sample_function(int);
    ```

    ```cpp
    // LNK2005_func_impl.cpp
    int sample_function(int k) { return 42 * (k % 167); }
    ```

- Questo errore può verificarsi anche se si definiscono funzioni membro all'esterno della dichiarazione di classe in un file di intestazione:This error can also occur if you define member functions outside the class declaration in a header file:

    ```h
    // LNK2005_member_outside.h
    class Sample {
    public:
        int sample_function(int);
    };
    int Sample::sample_function(int k) { return 42 * (k % 167); }  // LNK2005
    ```

   Per risolvere questo problema, spostare le definizioni delle funzioni membro all'interno della classe. Le funzioni membro definite all'interno di una dichiarazione di classe sono implicitamente inline.

    ```h
    // LNK2005_member_inline.h
    class Sample {
    public:
        int sample_function(int k) { return 42 * (k % 167); }
    };
    ```

- Questo errore può verificarsi se si collega più di una versione della libreria standard o CRT. Ad esempio, se si tenta di collegare le librerie CRT di vendita al dettaglio e debug o entrambe le versioni statiche e dinamiche di una libreria o due versioni diverse di una libreria standard per l'eseguibile, questo errore potrebbe essere segnalato più volte. Per risolvere questo problema, rimuovere tutte le copie tranne una di ogni libreria dal comando link. Non è consigliabile combinare librerie di debug e di vendita al dettaglio o versioni diverse di una libreria nello stesso eseguibile.

   Per indicare al linker di utilizzare librerie diverse da quelle predefinite, nella riga di comando specificare le librerie da utilizzare e utilizzare l'opzione [/NODEFAULTLIB](../../build/reference/nodefaultlib-ignore-libraries.md) per disabilitare le librerie predefinite. Nell'IDE aggiungere riferimenti al progetto per specificare le librerie da utilizzare, quindi aprire la finestra di dialogo **Pagine delle proprietà** per il progetto e nella pagina delle proprietà **Linker**, **Input** impostare le proprietà Ignora tutte **le librerie predefinite**o Ignora **librerie predefinite specifiche** per disabilitare le librerie predefinite.

- Questo errore può verificarsi se si combina l'utilizzo di librerie statiche e dinamiche quando si utilizza l'opzione [/clr.](../../build/reference/clr-common-language-runtime-compilation.md) Ad esempio, questo errore può verificarsi se si compila una DLL da utilizzare nell'eseguibile che si collega nella libreria CRT statica. Per risolvere questo problema, utilizzare solo librerie statiche o solo librerie dinamiche per l'intero eseguibile e per tutte le librerie compilate per l'utilizzo nell'eseguibile.

- Questo errore può verificarsi se il simbolo è una funzione in pacchetto (creata mediante la compilazione con [/Gy](../../build/reference/gy-enable-function-level-linking.md)) ed è stato incluso in più di un file, ma è stato modificato tra le compilazioni. Per risolvere questo problema, ricompilare tutti i file che includono la funzione in pacchetto.

- Questo errore può verificarsi se il simbolo è definito in modo diverso in due oggetti membro in librerie diverse ed entrambi gli oggetti membro vengono utilizzati. Un modo per risolvere questo problema quando le librerie sono collegate in modo statico consiste nell'utilizzare l'oggetto membro da una sola libreria e includere tale libreria prima nella riga di comando del linker. Per utilizzare entrambi i simboli, è necessario creare un modo per distinguerli. Ad esempio, se è possibile compilare le librerie dall'origine, è possibile eseguire il wrapping di ogni libreria in uno spazio dei nomi univoco. In alternativa, è possibile creare una nuova libreria wrapper che utilizza nomi univoci per eseguire il wrapping dei riferimenti a una delle librerie originali, collegare la nuova libreria alla libreria originale, quindi collegare l'eseguibile alla nuova libreria anziché la libreria originale.

- Questo errore può `extern const` verificarsi se una variabile viene definita due volte e ha un valore diverso in ogni definizione. Per risolvere questo problema, definire la costante una `enum class` sola volta oppure utilizzare spazi dei nomi o definizioni per distinguere le costanti.

- Questo errore può verificarsi se si utilizza uuid.lib in combinazione con altri file lib che definiscono i GUID (ad esempio, oledb.lib e adsiid.lib). Ad esempio:

    ```Output
    oledb.lib(oledb_i.obj) : error LNK2005: _IID_ITransactionObject
    already defined in uuid.lib(go7.obj)
    ```

   Per risolvere questo problema, aggiungere [/FORCE:MULTIPLE](../../build/reference/force-force-file-output.md) alle opzioni della riga di comando del linker e assicurarsi che uuid.lib sia la prima libreria a cui si fa riferimento.
