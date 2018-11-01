---
title: Errore degli strumenti del linker LNK2005
ms.date: 11/04/2016
f1_keywords:
- LNK2005
helpviewer_keywords:
- LNK2005
ms.assetid: d9587adc-68be-425c-8a30-15dbc86717a4
ms.openlocfilehash: 8b4f75b90254c702ecb2afb65108278a59df69ed
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50667285"
---
# <a name="linker-tools-error-lnk2005"></a>Errore degli strumenti del linker LNK2005

> *simbolo* già definito nell'oggetto

Il simbolo *simbolo* è stato definito più volte.

Questo errore è seguito dall'errore irreversibile [LNK1169](../../error-messages/tool-errors/linker-tools-error-lnk1169.md).

### <a name="possible-causes-and-solutions"></a>Possibili cause e soluzioni

In genere, questo errore indica che è stato interrotto il *regola di unica definizione*, che consente una sola definizione per qualsiasi modello scelto, funzione, tipo o oggetto in un file oggetto specificato e una sola definizione per l'intero eseguibile per oggetti visibili esternamente o funzioni.

Di seguito sono riportate alcune cause comuni per correggere l'errore.

- Questo errore può verificarsi quando un file di intestazione definisce una variabile. Ad esempio, se si include questo file di intestazione in più di un file di origine nel progetto, verrà generato un errore:

    ```h
    // LNK2005_global.h
    int global_int;  // LNK2005
    ```

   Tra le possibili soluzioni vi sono le seguenti:

   - Dichiarare la variabile `extern` nel file di intestazione: `extern int global_int;`, quindi definirlo e, facoltativamente, inizializzarlo in un unico file di origine: `int global_int = 17;`. Questa variabile è ora globale che è possibile usare qualsiasi file di origine dichiarandolo `extern`, ad esempio, includendo il file di intestazione. Si consiglia di questa soluzione per le variabili che devono essere globale, ma pratica di progettazione del software riduce al minimo le variabili globali.

   - Dichiarare la variabile [statici](../../cpp/storage-classes-cpp.md#static): `static int static_int = 17;`. Questo limita l'ambito della definizione del file oggetto corrente e consente a più file oggetto avere la propria copia della variabile. Non è consigliabile che definire le variabili statiche nei file di intestazione a causa la possibile confusione con le variabili globali. Preferisce spostarvi i file di origine che li utilizzano definizioni di variabili statiche.

   - Dichiarare la variabile [selectany](../../cpp/selectany.md): `__declspec(selectany) int global_int = 17;`. Ciò indica al linker per selezionare una definizione per l'utilizzo da tutti i riferimenti esterni e ignorare il resto. Questa soluzione è talvolta utile quando si combinano le librerie di importazione. In caso contrario, non è consigliabile come un modo per evitare gli errori del linker.

- Questo errore può verificarsi quando un file di intestazione definisce una funzione che non sia `inline`. Se si include questo file di intestazione in più di un file di origine, si ottengono più definizioni di funzione nel file eseguibile.

    ```h
    // LNK2005_func.h
    int sample_function(int k) { return 42 * (k % 167); }  // LNK2005
    ```

   Tra le possibili soluzioni vi sono le seguenti:

   - Aggiungere il `inline` parola chiave della funzione:

        ```h
        // LNK2005_func_inline.h
        inline int sample_function(int k) { return 42 * (k % 167); }
        ```

   - Rimuovere il corpo della funzione dal file di intestazione e lasciare solo la dichiarazione, quindi implementare la funzione in un unico file di origine:

        ```h
        // LNK2005_func_decl.h
        int sample_function(int);
        ```

        ```cpp
        // LNK2005_func_impl.cpp
        int sample_function(int k) { return 42 * (k % 167); }
        ```

- Questo errore può verificarsi anche se si definiscono le funzioni membro all'esterno della dichiarazione di classe in un file di intestazione:

    ```h
    // LNK2005_member_outside.h
    class Sample {
    public:
        int sample_function(int);
    };
    int Sample::sample_function(int k) { return 42 * (k % 167); }  // LNK2005
    ```

   Per risolvere questo problema, spostare le definizioni di funzione membro all'interno della classe. Le funzioni membro definite all'interno di una dichiarazione di classe vengono inserite in modo implicito.

    ```h
    // LNK2005_member_inline.h
    class Sample {
    public:
        int sample_function(int k) { return 42 * (k % 167); }
    };
    ```

- Questo errore può verificarsi se si collega più di una versione della libreria standard o CRT. Ad esempio, se si prova a collegare il file eseguibile sia della vendita al dettaglio e librerie di debug CRT o entrambe le versioni statiche e dinamiche di una libreria o due versioni diverse di una libreria standard, questo errore sono segnalato più volte. Per risolvere questo problema, rimuovere tutti tranne una copia di ogni libreria dal comando del collegamento. Non è consigliabile si combinano delle vendite al dettaglio ed eseguire il debug di librerie o versioni diverse di una libreria, nello stesso eseguibile.

   Per indicare al linker di utilizzare librerie diverse dalle impostazioni predefinite, nella riga di comando, specificare le librerie da usare e usare la [/NODEFAULTLIB](../../build/reference/nodefaultlib-ignore-libraries.md) possibilità di disabilitare le librerie predefinite. Nell'IDE, aggiungere i riferimenti al progetto specificare le librerie da usare e quindi aprire il **pagine delle proprietà** per il progetto e nella finestra di dialogo il **Linker**, **Input** proprietà pagina, impostare **ignorare tutte le librerie predefinite**, o **Ignora librerie predefinite specifiche** le proprietà per disabilitare le librerie predefinite.

- Questo errore può verificarsi se si combinazione l'uso di librerie statiche e dinamiche quando si usa la [/clr](../../build/reference/clr-common-language-runtime-compilation.md) opzione. Ad esempio, questo errore può verificarsi se si compila una DLL da utilizzare nell'eseguibile che si collega nella libreria CRT statica. Per risolvere questo problema, usare solo le librerie statiche o solo le raccolte dinamiche per l'intero eseguibile e per tutte le librerie create per l'utilizzo del file eseguibile.

- Questo errore può verificarsi se il simbolo è una funzione inclusa nel pacchetto (creati mediante la compilazione con [/Gy](../../build/reference/gy-enable-function-level-linking.md)) e è stato incluso in più di un file, ma è stato modificato tra compilazioni. Per risolvere questo problema, ricompilare tutti i file che includono la funzione inclusa nel pacchetto.

- Questo errore può verificarsi se il simbolo è definito in modo diverso in due oggetti membro in librerie diverse e vengono usati entrambi gli oggetti membro. Un modo per risolvere questo problema quando le librerie collegate staticamente è usare l'oggetto membro da sola libreria e includere tale libreria prima di tutto nella riga di comando del linker. Per usare entrambi i simboli, è necessario creare un modo per distinguerli. Ad esempio, se è possibile compilare le librerie di origine, è possibile eseguire il wrapping di ogni libreria in uno spazio dei nomi univoco. In alternativa, è possibile creare una nuova libreria di wrapper che Usa nomi univoci per eseguire il wrapping di riferimenti a una delle librerie di originale, collegare la nuova libreria per la libreria originale e quindi collegare il file eseguibile per la nuova libreria anziché la libreria originale.

- Questo errore può verificarsi se un `extern const` variabile è definito due volte e ha un valore diverso in ogni definizione. Per risolvere questo problema, definire la costante solo una volta oppure usare gli spazi dei nomi o `enum class` definizioni per distinguere le costanti.

- Questo errore può verificarsi se si usa UUID. lib in combinazione con altri file con estensione LIB che definiscono GUID (ad esempio, OLEDB e adsiid). Ad esempio:

    ```Output
    oledb.lib(oledb_i.obj) : error LNK2005: _IID_ITransactionObject
    already defined in uuid.lib(go7.obj)
    ```

   Per risolvere questo problema, aggiungere [/Force: multiple](../../build/reference/force-force-file-output.md) alle opzioni della riga di comando del linker e assicurarsi che UUID. lib è la prima libreria a cui viene fatto riferimento.
