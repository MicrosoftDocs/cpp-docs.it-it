---
title: Strumenti del linker LNK2005 errore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- LNK2005
dev_langs:
- C++
helpviewer_keywords:
- LNK2005
ms.assetid: d9587adc-68be-425c-8a30-15dbc86717a4
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 69b5201c3e035d1c0aca0105c136766eba3786f9
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="linker-tools-error-lnk2005"></a>Errore degli strumenti del linker LNK2005
*simbolo* già definito nell'oggetto  
  
Il simbolo *simbolo* è stato definito più volte.   
  
Questo errore è seguito dall'errore irreversibile [LNK1169](../../error-messages/tool-errors/linker-tools-error-lnk1169.md).  
  
### <a name="possible-causes-and-solutions"></a>Possibili cause e soluzioni  
  
In genere, questo errore indica che è stato interrotto il *regola di unica definizione*, che consente una sola definizione per il modello utilizzato, funzione, tipo o oggetto in un file oggetto specificato e una sola definizione tra l'eseguibile per intero oggetti visibili esternamente o funzioni.  
  
Ecco alcune cause comuni di questo errore.  
  
-   Questo errore può verificarsi quando un file di intestazione definisce una variabile. Ad esempio, se si include questo file di intestazione in più di un file di origine nel progetto, viene generato un errore:  
  
    ```h  
    // LNK2005_global.h  
    int global_int;  // LNK2005
    ```  
  
    Tra le possibili soluzioni vi sono le seguenti:  
  
    -   Dichiarare la variabile `extern` nel file di intestazione: `extern int global_int;`, quindi definirlo e, facoltativamente, inizializzarla in un unico file di origine: `int global_int = 17;`. Questa variabile è globale che è possibile utilizzare qualsiasi file di origine dichiarandola `extern`, ad esempio, includendo il file di intestazione. Si consiglia di questa soluzione per le variabili che devono essere globali, ma le variabili globali riduce la pratica di progettazione del software.  
    
    -   Dichiarare la variabile [statico](../../cpp/storage-classes-cpp.md#static): `static int static_int = 17;`. Questo limita l'ambito della definizione di file oggetto corrente e consente più file oggetto dispone di una copia della variabile. Non è consigliabile che definire le variabili statiche nei file di intestazione a causa la possibile confusione con le variabili globali. Se si preferisce spostare le definizioni di variabili statiche nei file di origine che li utilizzano.  
  
    -   Dichiarare la variabile [selectany](../../cpp/selectany.md): `__declspec(selectany) int global_int = 17;`. Ciò indica al linker di selezionare una definizione per l'utilizzo da tutti i riferimenti esterni e di annullare il resto. Questa soluzione è talvolta utile quando si combinano le librerie di importazione. In caso contrario, non è consigliabile come un modo per evitare errori del linker.  
  
-   Questo errore può verificarsi quando un file di intestazione definisce una funzione che non è `inline`. Se si include questo file di intestazione in più di un file di origine, si ottengono più definizioni di funzione nel file eseguibile.  
    
    ```h  
    // LNK2005_func.h  
    int sample_function(int k) { return 42 * (k % 167); }  // LNK2005
    ```  
  
    Tra le possibili soluzioni vi sono le seguenti:  
  
    -   Aggiungere il `inline` parola chiave della funzione: 

        ```h  
        // LNK2005_func_inline.h  
        inline int sample_function(int k) { return 42 * (k % 167); }  
        ```  
  
    -   Rimuovere il corpo della funzione dal file di intestazione e lasciare solo la dichiarazione, quindi implementare la funzione in un unico file di origine:  
  
        ```h  
        // LNK2005_func_decl.h  
        int sample_function(int);  
        ```  
  
        ```cpp  
        // LNK2005_func_impl.cpp  
        int sample_function(int k) { return 42 * (k % 167); }  
        ```  
-   Questo errore può verificarsi anche se si definiscono le funzioni membro all'esterno della dichiarazione di classe in un file di intestazione:  
  
    ```h  
    // LNK2005_member_outside.h  
    class Sample {
    public:
        int sample_function(int);  
    };
    int Sample::sample_function(int k) { return 42 * (k % 167); }  // LNK2005
    ```  
  
    Per risolvere questo problema, spostare le definizioni di funzione membro all'interno della classe. Le funzioni membro definite all'interno di una dichiarazione di classe vengono implicitamente impostati come inline.  
  
    ```h  
    // LNK2005_member_inline.h  
    class Sample {
    public:
        int sample_function(int k) { return 42 * (k % 167); }  
    };
    ```  
  
-   Questo errore può verificarsi se si collega più di una versione della libreria standard o CRT. Ad esempio, se si tenta di collegare il file eseguibile sia di vendita al dettaglio e librerie di debug CRT o entrambe le versioni statiche e dinamiche di una libreria o due versioni diverse di una libreria standard, questo errore potrebbe risultare più volte. Per risolvere questo problema, rimuovere il comando di collegamento tutte tranne una copia di ogni raccolta. Non è consigliabile si combinare delle vendite al dettaglio e il debug di librerie o versioni diverse di una libreria, nello stesso eseguibile.  
  
    Per indicare al linker di utilizzare librerie diverse dalle impostazioni predefinite, nella riga di comando, specificare le librerie per utilizzare e il [/NODEFAULTLIB](../../build/reference/nodefaultlib-ignore-libraries.md) possibile disabilitare le librerie predefinite. Nell'IDE, aggiungere i riferimenti al progetto per specificare le librerie da utilizzare e quindi aprire il **pagine delle proprietà** per il progetto e nella finestra di dialogo di **Linker**, **Input** proprietà impostare uno **ignorare tutte le librerie predefinite**, o **Ignora librerie predefinite specifiche** proprietà per disabilitare le librerie predefinite.   
  
-   Questo errore può verificarsi se si combina l'uso di librerie statiche e dinamiche quando si utilizza il [/clr](../../build/reference/clr-common-language-runtime-compilation.md) opzione. Ad esempio, questo errore può verificarsi se si compila una DLL da utilizzare nell'eseguibile che si collega nella libreria CRT statica. Per risolvere questo problema, utilizzare solo le librerie statiche o solo le raccolte dinamiche per l'intero file eseguibile e per tutte le librerie create per l'utilizzo del file eseguibile.  
  
-   Questo errore può verificarsi se il simbolo è una funzione di package (creata dalla compilazione con [/Gy](../../build/reference/gy-enable-function-level-linking.md)) e è stato incluso in più di un file, ma è stato modificato tra compilazioni. Per risolvere questo problema, ricompilare tutti i file che includono la funzione nel pacchetto.  
  
-   Questo errore può verificarsi se il simbolo è definito in modo diverso in due oggetti membro in librerie diverse e vengono utilizzati entrambi gli oggetti. Un modo per risolvere questo problema, quando le librerie collegate staticamente è usare l'oggetto membro da un solo catalogo multimediale e includere tale libreria prima della riga di comando del linker. Per usare entrambi i simboli, è necessario creare un modo per distinguerli. Ad esempio, se è possibile compilare le librerie di origine, è possibile eseguire il wrapping ogni libreria in uno spazio dei nomi univoco. In alternativa, è possibile creare una nuova libreria di wrapper che utilizza nomi univoci per eseguire il wrapping di riferimenti a una delle librerie di originale, nella nuova libreria di collegamento per la libreria originale, quindi collegare il file eseguibile per la nuova libreria anziché la libreria originale.  
  
-   Questo errore può verificarsi se un `extern const` variabile è definita due volte e ha un valore diverso in ogni definizione. Per risolvere questo problema, definire la costante solo una volta oppure utilizzare gli spazi dei nomi o `enum class` le definizioni per distinguere le costanti.  
  
-   Questo errore può verificarsi se si usa uuid.lib con altri file. lib che definiscono GUID (ad esempio, come oledb.lib e adsiid.lib). Ad esempio:  
  
    ```Output  
    oledb.lib(oledb_i.obj) : error LNK2005: _IID_ITransactionObject  
    already defined in uuid.lib(go7.obj)  
    ```  
  
     Per risolvere questo problema, aggiungere [/FORCE](../../build/reference/force-force-file-output.md) per le opzioni della riga di comando del linker e accertarsi che uuid.lib sia la prima libreria a cui fa riferimento.
  
## <a name="additional-information"></a>Informazioni aggiuntive  
  
Se si utilizza una versione precedente del set di strumenti, vedere gli articoli della Knowledge Base per ulteriori informazioni sulle cause dell'errore specifiche:  
  
-   [Si verifica un errore di LNK2005 quando la libreria CRT e librerie MFC sono collegate in ordine errato in Visual C++](https://support.microsoft.com/kb/148652)  
  
-   [Correzione: Delete overload globale operatore cause LNK2005](https://support.microsoft.com/kb/140440)  
  
-   [Quando si compila un progetto .exe eseguibile ATL in Visual C++, si ricevono errori LNK2005](https://support.microsoft.com/kb/184235).  
  
