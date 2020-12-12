---
description: 'Altre informazioni su: errore degli strumenti del linker LNK2005'
title: Errore degli strumenti del linker LNK2005
ms.date: 11/04/2016
f1_keywords:
- LNK2005
helpviewer_keywords:
- LNK2005
ms.assetid: d9587adc-68be-425c-8a30-15dbc86717a4
ms.openlocfilehash: c6de300bc731104f51056911515d0cc7a95e05f8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97338503"
---
# <a name="linker-tools-error-lnk2005"></a>Errore degli strumenti del linker LNK2005

> *simbolo* già definito nell'oggetto

Il *simbolo* del simbolo è stato definito più di una volta.

Questo errore è seguito da un errore irreversibile [LNK1169](../../error-messages/tool-errors/linker-tools-error-lnk1169.md).

### <a name="possible-causes-and-solutions"></a>Possibili cause e soluzioni

In genere, questo errore indica che è stata interruppe la *regola di una definizione*, che consente solo una definizione per qualsiasi modello, funzione, tipo o oggetto utilizzato in un file oggetto specificato e una sola definizione nell'intero eseguibile per oggetti o funzioni visibili esternamente.

Di seguito sono riportate alcune cause comuni di questo errore.

- Questo errore può verificarsi quando un file di intestazione definisce una variabile. Se, ad esempio, si include questo file di intestazione in più di un file di origine nel progetto, viene restituito un errore:

    ```h
    // LNK2005_global.h
    int global_int;  // LNK2005
    ```

   Tra le possibili soluzioni vi sono le seguenti:

  - Dichiarare la variabile **`extern`** nel file di intestazione: `extern int global_int;` , quindi definirla e, facoltativamente, inizializzarla in un solo file di origine: `int global_int = 17;` . Questa variabile è ora una variabile globale che è possibile usare in qualsiasi file di origine dichiarando **`extern`** , ad esempio, includendo il file di intestazione. Questa soluzione è consigliata per le variabili che devono essere globali, ma la pratica di ingegneria del software riduce al minimo le variabili globali.

  - Dichiarare la variabile [static](../../cpp/storage-classes-cpp.md#static): `static int static_int = 17;` . Questo limita l'ambito della definizione al file oggetto corrente e consente a più file oggetto di avere una propria copia della variabile. Non è consigliabile definire variabili statiche nei file di intestazione a causa della possibilità di confusione con le variabili globali. Preferisce spostare le definizioni delle variabili statiche nei file di origine che le utilizzano.

  - Dichiarare la variabile [selectany](../../cpp/selectany.md): `__declspec(selectany) int global_int = 17;` . Indica al linker di selezionare una definizione per l'uso da parte di tutti i riferimenti esterni e di rimuovere il resto. Questa soluzione è talvolta utile quando si combinano le librerie di importazione. In caso contrario, non è consigliabile usarlo come metodo per evitare errori del linker.

- Questo errore può verificarsi quando un file di intestazione definisce una funzione che non lo è **`inline`** . Se si include questo file di intestazione in più di un file di origine, si ottengono più definizioni della funzione nell'eseguibile.

    ```h
    // LNK2005_func.h
    int sample_function(int k) { return 42 * (k % 167); }  // LNK2005
    ```

   Tra le possibili soluzioni vi sono le seguenti:

  - Aggiungere la **`inline`** parola chiave alla funzione:

    ```h
    // LNK2005_func_inline.h
    inline int sample_function(int k) { return 42 * (k % 167); }
    ```

  - Rimuovere il corpo della funzione dal file di intestazione e lasciare solo la dichiarazione, quindi implementare la funzione in un solo file di origine:

    ```h
    // LNK2005_func_decl.h
    int sample_function(int);
    ```

    ```cpp
    // LNK2005_func_impl.cpp
    int sample_function(int k) { return 42 * (k % 167); }
    ```

- Questo errore può verificarsi anche se si definiscono funzioni membro all'esterno della dichiarazione di classe in un file di intestazione:

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

- Questo errore può verificarsi se si collega più di una versione della libreria standard o di CRT. Se, ad esempio, si tenta di collegare le librerie CRT di debug e finali, oppure entrambe le versioni statiche e dinamiche di una libreria o due versioni diverse di una libreria standard all'eseguibile, questo errore può essere segnalato più volte. Per risolvere questo problema, rimuovere tutte le copie tranne una per ogni libreria dal comando di collegamento. Nello stesso file eseguibile non è consigliabile combinare librerie di debug e di vendita al dettaglio o versioni diverse di una libreria.

   Per indicare al linker di usare librerie diverse da quelle predefinite, nella riga di comando specificare le librerie da usare e usare l'opzione [/NODEFAULTLIB](../../build/reference/nodefaultlib-ignore-libraries.md) per disabilitare le librerie predefinite. Nell'IDE aggiungere i riferimenti al progetto per specificare le librerie da usare e quindi aprire la finestra di dialogo **pagine delle proprietà** per il progetto e nella pagina del **linker**, **input** , impostare **Ignora tutte le librerie predefinite** o **Ignora proprietà specifiche delle librerie predefinite** per disabilitare le librerie predefinite.

- Questo errore può verificarsi se si combina l'uso di librerie statiche e dinamiche quando si usa l'opzione [/CLR](../../build/reference/clr-common-language-runtime-compilation.md) . Ad esempio, questo errore può verificarsi se si compila una DLL da usare nell'eseguibile che si collega alla libreria CRT statica. Per risolvere questo problema, usare solo librerie statiche o solo librerie dinamiche per l'intero eseguibile e per qualsiasi libreria compilata per l'uso nell'eseguibile.

- Questo errore può verificarsi se il simbolo è una funzione in pacchetto (creata mediante compilazione con [/Gy](../../build/reference/gy-enable-function-level-linking.md)) ed è inclusa in più di un file, ma è stata modificata tra le compilazioni. Per risolvere il problema, ricompilare tutti i file che includono la funzione in pacchetto.

- Questo errore può verificarsi se il simbolo viene definito in modo diverso in due oggetti membro in librerie diverse e vengono utilizzati entrambi gli oggetti membro. Un modo per risolvere questo problema quando le librerie sono collegate in modo statico consiste nell'usare l'oggetto membro di una sola libreria e includere la libreria prima nella riga di comando del linker. Per usare entrambi i simboli, è necessario creare un metodo per distinguerli. Se, ad esempio, è possibile compilare le librerie dall'origine, è possibile eseguire il wrapping di ogni libreria in uno spazio dei nomi univoco. In alternativa, è possibile creare una nuova libreria wrapper che usa nomi univoci per eseguire il wrapping dei riferimenti a una delle librerie originali, collegare la nuova libreria alla libreria originale, quindi collegare l'eseguibile alla nuova libreria anziché alla libreria originale.

- Questo errore può verificarsi se una `extern const` variabile viene definita due volte e presenta un valore diverso in ogni definizione. Per risolvere il problema, definire la costante una sola volta oppure utilizzare spazi dei nomi o **`enum class`** definizioni per distinguere le costanti.

- Questo errore può verificarsi se si usa UUID. lib in combinazione con altri file con estensione LIB che definiscono GUID, ad esempio OLEDB. lib e adsiid. lib. Ad esempio:

    ```Output
    oledb.lib(oledb_i.obj) : error LNK2005: _IID_ITransactionObject
    already defined in uuid.lib(go7.obj)
    ```

   Per risolvere il problema, aggiungere [/Force: multiple](../../build/reference/force-force-file-output.md) alle opzioni della riga di comando del linker e assicurarsi che UUID. lib sia la prima libreria a cui si fa riferimento.
