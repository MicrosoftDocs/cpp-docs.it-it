---
title: Proprietà C/C++ (Linux C++)
ms.date: 9/26/2017
ms.assetid: 4bb8894b-c874-4a68-935e-b127d54e484f
f1_keywords: []
ms.openlocfilehash: 4719f02b1050472f35375b921fd1a6bd670c11c0
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50498129"
---
# <a name="cc-properties-linux-c"></a>Proprietà C/C++ (Linux C++)

## <a name="general"></a>Generale

Proprietà | Descrizione | Scelte
--- | ---| ---
Directory di inclusione aggiuntive | Specifica una o più directory da aggiungere al percorso di inclusione. Usare il punto e virgola (;) come delimitatore per più percorsi. (-I[path]).
Formato informazioni di debug | Specifica il tipo di informazioni di debug generate dal compilatore. | **Nessuno**: non produce informazioni di debug, quindi la compilazione può risultare più veloce.<br/>**Informazioni minime di debug**: genera informazioni minime di debug.<br/>**Informazioni di debug complete (DWARF2)**: genera informazioni di debug DWARF2.<br/>
Nome file oggetto | Consente di specificare un nome usato per eseguire l'override del nome del file oggetto predefinito. Può essere un nome di file o di directory. (-o [name]).
Livello avvisi | Specifica il grado di severità del controllo effettuato dal compilatore per trovare gli errori del codice.  È possibile contrassegnare altre opzioni direttamente da Opzioni aggiuntive. (/w, /Weverything). | **Disattiva tutti gli avvisi**: disabilita tutti gli avvisi del compilatore.<br/>**Abilita tutti gli avvisi**: abilita tutti gli avvisi, inclusi quelli disabilitati per impostazione predefinita.<br/>
Considera gli avvisi come errori | Considera tutti gli avvisi del compilatore come errori. Per un nuovo progetto, potrebbe essere preferibile usare /Werror in tutte le compilazioni. La risoluzione degli avvisi garantirà il minor numero possibile di errori del codice di difficile individuazione.
Avvisi C aggiuntivi | Consente di definire un set di messaggi di avviso aggiuntivi.
Avvisi C++ aggiuntivi | Consente di definire un set di messaggi di avviso aggiuntivi.
Abilita modalità dettagliata | Quando è abilitata la modalità dettagliata, lo strumento restituisce maggiori informazioni per la diagnosi della compilazione.
Compilatore C | Consente di specificare il programma da richiamare durante la compilazione di file di origine C oppure il percorso del compilatore C nel sistema remoto.
Compilatore C++ | Consente di specificare il programma da richiamare durante la compilazione di file di origine C++ oppure il percorso del compilatore C++ nel sistema remoto.
Timeout compilazione | Timeout di compilazione remota in millisecondi.
Copia file oggetto | Consente di specificare se copiare i file oggetto compilati dal sistema remoto al computer locale.

## <a name="optimization"></a>Ottimizzazione

Proprietà | Descrizione | Scelte
--- | ---| ---
Ottimizzazione | Specifica il livello di ottimizzazione per l'applicazione. | **Personalizzato**: consente di personalizzare l'ottimizzazione.<br/>**Disabilitato**: disabilita l'ottimizzazione.<br/>**Riduci dimensione**: ottimizza in base alla dimensione.<br/>**Ottimizza velocità**: ottimizza in base alla velocità.<br/>**Ottimizzazione completa**: ottimizzazioni onerose.<br/>
Aliasing restrittivo | Presuppone le regole di aliasing più restrittive.  Un oggetto di un certo tipo non potrà mai risiedere nello stesso indirizzo di un oggetto di un tipo diverso.
Srotola cicli | Lo srotolamento dei cicli consente di velocizzare l'applicazione riducendo il numero di rami eseguiti, ma implica un aumento della dimensione del codice.
Ottimizzazione fase di collegamento | L'abilitazione delle ottimizzazioni tra routine consente all'utilità di ottimizzazione di esaminare tutti i file oggetto dell'applicazione.
Ometti puntatore ai frame | Disabilita la creazione di puntatori ai frame nello stack di chiamate.
Senza blocchi comuni | Consente di allocare anche variabili globali non inizializzate nella sezione dati del file oggetto, invece di generarle come blocchi comuni

## <a name="preprocessor"></a>Preprocessore

Proprietà | Descrizione | Scelte
--- | ---| ---
Definizioni del preprocessore | Definisce i simboli di pre-elaborazione per il file di origine. (-D)
Rimuovi definizioni per il preprocessore | Rimuove una o più definizioni per il preprocessore.  (-U [macro])
Rimuovi tutte le definizioni per il preprocessore | Rimuove tutti i valori precedentemente definiti per il preprocessore.  (-undef)
Mostra inclusioni | Indica al compilatore di generare un elenco dei file di inclusione.  (-H)

## <a name="code-generation"></a>Generazione di codice

Proprietà | Descrizione | Scelte
--- | ---| ---
Codice indipendente dalla posizione | Genera codice indipendente dalla posizione per l'uso in una libreria condivisa.
Elementi statici thread-safe | Crea codice aggiuntivo per usare routine specificate in ABI C++ per l'inizializzazione thread-safe di elementi statici locali. | **No**: disabilita gli elementi statici thread-safe.<br/>**Sì**: abilita gli elementi statici thread-safe.<br/>
Ottimizzazione virgola mobile | Abilita le ottimizzazioni della virgola mobile abbassando i requisiti previsti dalla conformità allo standard IEEE 754.
Metodi inline nascosti | Se è abilitato, le copie fuori linea dei metodi inline vengono dichiarati come "private extern".
Simboli nascosti per impostazione predefinita | Tutti i simboli vengono dichiarati come "private extern" a meno che non siano contrassegnati in modo esplicito per l'esportazione tramite la macro "__attribute".
Abilita eccezioni C++ | Specifica il modello di gestione delle eccezioni che deve essere usato dal compilatore. | **No**: disabilita la gestione delle eccezioni.<br/>**Sì**: abilita la gestione delle eccezioni.<br/>

## <a name="language"></a>Linguaggio

Proprietà | Descrizione | Scelte
--- | ---| ---
Abilita informazioni sui tipi in fase di esecuzione | Aggiunge codice per il controllo dei tipi di oggetto C++ in fase di esecuzione (informazioni sui tipi in fase di esecuzione).     (frtti, fno-rtti)
Standard del linguaggio C | Determina lo standard del linguaggio C. | **Default**<br/>**C89**: standard del linguaggio C89.<br/>**C99**: standard del linguaggio C99.<br/>**C11**: standard del linguaggio C11.<br/>**C99 (dialetto GNU)**: standard del linguaggio C99 (dialetto GNU).<br/>**C11 (dialetto GNU)**: standard del linguaggio C11 (dialetto GNU).<br/>
Standard del linguaggio C++ | Determina lo standard del linguaggio C++. | **Default**<br/>**C++03**: standard del linguaggio C++03.<br/>**C++11**: standard del linguaggio C++11.<br/>**C++14**: standard del linguaggio C++14.<br/>**C++03 (dialetto GNU)**: standard del linguaggio C++03 (dialetto GNU).<br/>**C++11 (dialetto GNU)**: standard del linguaggio C++11 (dialetto GNU).<br/>**C++14 (dialetto GNU)**: standard del linguaggio C++14 (dialetto GNU).<br/>

## <a name="advanced"></a>Avanzate

Proprietà | Descrizione | Scelte
--- | ---| ---
Compila come | Specifica il linguaggio di compilazione per i file con estensione c e cpp.  Il valore predefinito verrà rilevato in base all'estensione c o cpp. (-x c, -x c++) | **Predefinita**: impostazione predefinita.<br/>**Compila come codice C**: consente di compilare come codice C.<br/>**Compila come codice C++**: consente di compilare come codice C++.<br/>
File di inclusione forzati | Uno o più file di inclusione forzati (-include [nome])

## <a name="additional-options"></a>Opzioni aggiuntive
