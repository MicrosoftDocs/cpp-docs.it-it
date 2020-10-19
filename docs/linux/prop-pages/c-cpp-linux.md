---
title: Proprietà C/C++ (Linux C++)
ms.date: 10/14/2020
description: Descrive le opzioni di compilazione di Linux nella pagina delle proprietà di Visual Studio C/C++
ms.assetid: 4bb8894b-c874-4a68-935e-b127d54e484f
f1_keywords: []
ms.openlocfilehash: 0840327b30d94b4845adef7788fd73f4e797775f
ms.sourcegitcommit: f19f02f217b80804ab321d463c76ce6f681abcc6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/19/2020
ms.locfileid: "92176244"
---
# <a name="cc-properties-linux-c"></a>Proprietà C/C++ (Linux C++)

::: moniker range="vs-2015"

Il supporto Linux è disponibile in Visual Studio 2017 e versioni successive.

::: moniker-end

::: moniker range=">=vs-2017"

## <a name="general"></a>Generale

| Proprietà | Descrizione | Opzioni |
|--|--|--|
| Directory di inclusione aggiuntive | Specifica una o più directory da aggiungere al percorso di inclusione. Usare il punto e virgola per separare più directory. (-I\[percorso]). |
| Formato informazioni di debug | Specifica il tipo di informazioni di debug generate dal compilatore. | **Nessuno**: non produce informazioni di debug, quindi la compilazione può risultare più veloce.<br/>**Informazioni minime di debug**: genera informazioni minime di debug.<br/>**Informazioni di debug complete (DWARF2)**: genera informazioni di debug DWARF2.<br/> |
| Nome file oggetto | Specifica un nome con cui eseguire l'override del nome del file oggetto predefinito. Può essere un nome di file o directory. (-o [name]). |
| Livello avvisi | Seleziona il grado di severità del controllo eseguito dal compilatore per trovare gli errori del codice.  Aggiungere altri flag direttamente a **Opzioni aggiuntive**. (/w, /Weverything). | **Disattiva tutti gli avvisi**: disabilita tutti gli avvisi del compilatore.<br/>**Abilita tutti gli avvisi**: abilita tutti gli avvisi, inclusi quelli disabilitati per impostazione predefinita.<br/> |
| Considera gli avvisi come errori | Considera tutti gli avvisi del compilatore come errori. Per un nuovo progetto, potrebbe essere preferibile usare /Werror in tutte le compilazioni. La risoluzione di tutti gli avvisi garantirà il minor numero possibile di errori del codice di difficile individuazione. |
| Avvisi C aggiuntivi | Consente di definire un set di messaggi di avviso aggiuntivi. |
| Avvisi C++ aggiuntivi | Consente di definire un set di messaggi di avviso aggiuntivi. |
| Abilita modalità dettagliata | Quando è abilitata la modalità dettagliata, vengono restituite maggiori informazioni per la diagnosi della compilazione. |
| Compilatore C | Consente di specificare il programma da richiamare durante la compilazione di file di origine C oppure il percorso del compilatore C nel sistema remoto. |
| Compilatore C++ | Consente di specificare il programma da richiamare durante la compilazione di file di origine C++ oppure il percorso del compilatore C++ nel sistema remoto. |
| Timeout compilazione | Timeout di compilazione remota in millisecondi. |
| Copia file oggetto | Consente di specificare se copiare i file oggetto compilati dal sistema remoto al computer locale. |
| Numero massimo processi di compilazione paralleli | Numero di processi da creare in parallelo durante la compilazione. Il valore predefinito è 1. Se si usa il sottosistema Windows per Linux (WSL) versione 1, il limite è 64. |
| Convalida architettura | Specificare se verificare se la piattaforma di destinazione del progetto corrisponde al sistema remoto.|
| Abilita sanificatore indirizzo | Compilare il programma con l'igienizzatore degli indirizzi, ovvero un rilevatore di errori di memoria veloce in grado di rilevare problemi di memoria di runtime, ad esempio use-after-free, ed eseguire controlli fuori limite.|

## <a name="optimization"></a>Optimization

| Proprietà | Descrizione | Opzioni |
|--|--|--|
| Optimization | Specifica il livello di ottimizzazione per l'applicazione. | **Personalizzato**: consente di personalizzare l'ottimizzazione.<br/>**Disabilitato**: disabilita l'ottimizzazione.<br/>**Riduci dimensione**: ottimizza in base alla dimensione.<br/>**Ottimizza velocità**: ottimizza in base alla velocità.<br/>**Ottimizzazione completa**: ottimizzazioni onerose. |
| Aliasing restrittivo | Presuppone le regole di aliasing più restrittive.  Non si presuppone mai che un oggetto di un tipo abbia lo stesso indirizzo di un oggetto di un tipo diverso. |
| Srotola cicli | Lo srotolamento dei cicli consente di velocizzare l'applicazione riducendo il numero di rami eseguiti, ma implica un aumento delle dimensioni del codice. |
| Ottimizzazione fase di collegamento | L'abilitazione delle ottimizzazioni tra routine consente all'utilità di ottimizzazione di esaminare i file oggetto dell'applicazione. |
| Ometti puntatore ai frame | Disabilita la creazione di puntatori ai frame nello stack di chiamate. |
| Senza blocchi comuni | Consente di allocare anche variabili globali non inizializzate nella sezione dati del file oggetto, invece di generarle come blocchi comuni. |

## <a name="preprocessor"></a>Preprocessore

| Proprietà | Descrizione |
|--|--|
| Definizioni del preprocessore | Definisce i simboli di pre-elaborazione per il file origine. (-D) |
| Rimuovi definizioni per il preprocessore | Rimuove una o più definizioni per il preprocessore.  (-U \[macro]) |
| Rimuovi tutte le definizioni per il preprocessore | Rimuove tutti i valori precedentemente definiti per il preprocessore.  (-undef) |
| Mostra inclusioni | Indica al compilatore di generare un elenco dei file di inclusione.  (-H) |

## <a name="code-generation"></a>Generazione di codice

| Proprietà | Descrizione | Opzioni |
|--|--|--|
| Codice indipendente dalla posizione | Genera codice indipendente dalla posizione per l'uso in una libreria condivisa. |
| Elementi statici thread-safe | Crea codice aggiuntivo per usare routine specificate in ABI C++ per l'inizializzazione thread-safe di elementi statici locali. | **No**: disabilita gli elementi statici thread-safe.<br/>**Sì**: abilita gli elementi statici thread-safe. |
| Ottimizzazione virgola mobile | Abilita le ottimizzazioni della virgola mobile abbassando i requisiti previsti dalla conformità allo standard IEEE 754. |
| Metodi inline nascosti | Se è abilitato, le copie fuori linea dei metodi inline vengono dichiarati come `private extern`. |
| Simboli nascosti per impostazione predefinita | Tutti i simboli vengono dichiarati come `private extern` a meno che non siano contrassegnati in modo esplicito per l'esportazione tramite la macro `__attribute`. |
| Abilita eccezioni C++ | Specifica il modello di gestione delle eccezioni usato dal compilatore. | **No**: disabilita la gestione delle eccezioni.<br/>**Sì**: abilita la gestione delle eccezioni. |

## <a name="language"></a>Linguaggio

| Proprietà | Descrizione | Opzioni |
|--|--|--|
| Abilita informazioni sui tipi in fase di esecuzione | Aggiunge codice per il controllo dei tipi di oggetto C++ in fase di esecuzione (informazioni sui tipi in fase di esecuzione).     (frtti, fno-rtti) |
| Standard del linguaggio C | Determina lo standard del linguaggio C. | **Default**<br/>**C89**: standard del linguaggio C89.<br/>**C99**: standard del linguaggio C99.<br/>**C11**: standard del linguaggio C11.<br/>**C99 (dialetto GNU)**: standard del linguaggio C99 (dialetto GNU).<br/>**C11 (dialetto GNU)** : standard del linguaggio C11 (dialetto GNU). |
| Standard del linguaggio C++ | Determina lo standard del linguaggio C++. | **Default**<br/>**C++03**: standard del linguaggio C++03.<br/>**C++ 11** -standard del linguaggio c++ 11.<br/>**C++14**: standard del linguaggio C++14.<br/>**C++03 (dialetto GNU)**: standard del linguaggio C++03 (dialetto GNU).<br/>**C++11 (dialetto GNU)**: standard del linguaggio C++11 (dialetto GNU).<br/>**C++14 (dialetto GNU)**: standard del linguaggio C++14 (dialetto GNU). |

## <a name="advanced"></a>Avanzate

| Proprietà | Descrizione | Opzioni |
|--|--|--|
| Compila come | Seleziona il linguaggio di compilazione per i file con estensione c e cpp. (-x c, -x c++) | **Valore predefinito**: viene rilevato in base all'estensione c o cpp.<br/>**Compila come codice c** . Compila come codice c.<br/>**Compila come codice c++** : Compila come codice c++. |
| File di inclusione forzati | Specifica uno o più file di inclusione forzati (-include \[nome]) |

::: moniker-end
