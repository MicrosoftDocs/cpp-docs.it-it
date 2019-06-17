---
title: Spostarsi all'interno del codice C++ in Visual Studio
description: Usare vari strumenti in Visual Studio per esplorare la codebase di C++.
ms.date: 05/28/2019
ms.openlocfilehash: 5f01307cc82fb1e61ba6fd0c922ea376279fba8b
ms.sourcegitcommit: 65ed563a8a1d4d90f872a2a6edcb086f84ec9f77
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 06/06/2019
ms.locfileid: "66742037"
---
# <a name="navigate-c-code-in-visual-studio"></a>Spostarsi all'interno del codice C++ in Visual Studio

Visual Studio offre una suite di strumenti che consentono di esplorare la codebase in modo rapido ed efficiente.

## <a name="open-an-included-file"></a>Aprire un file incluso

Per aprire il file, fare clic con il pulsante destro del mouse su una direttiva `#include`, quindi scegliere **Passa al documento** oppure posizionare il cursore sulla riga e premere **F12**.

![Opzione di menu Passa al documento in C&#43;&#43;](../ide/media/go-to-document.png "Passa al documento")

## <a name="toggle-headercode-file"></a>Attiva/disattiva file di codice/intestazione

È possibile passare da un file di intestazione al file di origine corrispondente facendo clic in un punto qualsiasi del file e scegliendo **Attiva/disattiva file di codice/intestazione** o premendo **CTRL+K, CTRL+O**.

## <a name="go-to-definitiondeclaration"></a>Vai a definizione/Vai a dichiarazione

È possibile passare alla definizione di un simbolo di codice facendo clic con il pulsante destro del mouse nell'editor e scegliendo **Vai a definizione** o premendo **F12**. È possibile passare a una dichiarazione in modo analogo usando il menu di scelta rapida visualizzato facendo clic con il pulsante destro del mouse oppure premendo **CTRL+F12**.

![Vai a definizione in C&#43;&#43;](../ide/media/go-to-def.png "Vai a definizione")

## <a name="go-to"></a>Vai a

**Vai a** fa riferimento a un set di funzionalità di navigazione ognuna delle quali genera un determinato tipo di risultato in base ai filtri specificati. 

È possibile aprire **Vai a** con **CTRL+,** . Questa operazione crea una casella di ricerca sul documento che si sta modificando.

![Vai a in C&#43;&#43;](../ide/media/go-to-cpp.png "Vai a")

**Vai a** include questi filtri di ricerca:

- **Vai alla riga (CTRL+G)** : consente di passare rapidamente a una riga diversa nel documento corrente
- **Vai a tutti (CTRL+,)** oppure **(CTRL+T)** : i risultati della ricerca includono tutto ciò che segue
- **Vai al file (CTRL 1, F)** : consente di cercare i file nella soluzione
- **Vai al tipo (CTRL 1, T)** : i risultati della ricerca includono:
  - Classi, strutture, enumerazioni
  - Interfacce e delegati (solo codice gestito)
- **Vai al membro (CTRL 1, M)** : i risultati della ricerca includono:
  - Variabili globali e funzioni globali
  - Variabili membro di classe e funzioni membro
  - Costanti
  - Elementi di enumerazione
  - Proprietà ed eventi
- **Vai al simbolo (CTRL 1, S)** : i risultati della ricerca includono:
  - Risultati di Vai al tipo e Vai al membro
  - Tutti i costrutti di linguaggio C++ rimanenti, comprese le macro

Quando si richiama per la prima volta **Vai a** con **CTRL+** , **Vai a tutti** viene attivato senza filtri sui risultati della ricerca. A questo punto è possibile selezionare il filtro desiderato usando i pulsanti accanto alla casella di testo di ricerca. Richiamare un filtro specifico usando i tasti di scelta rapida corrispondenti. Questa operazione apre la casella di ricerca **Vai a** con il filtro preselezionato. Tutti i tasti di scelta rapida sono configurabili.

Per applicare un filtro di testo, avviare la query di ricerca con il carattere corrispondente del filtro seguito da uno spazio. Con **Vai alla riga** si può omettere lo spazio. I filtri testo disponibili sono i seguenti:

- Vai a tutti: (nessun filtro testo)
- Vai alla riga numero: :
- Vai al file: f
- Vai al tipo: t
- Vai al membro: m
- Vai al simbolo: #

L'esempio seguente mostra i risultati di un'operazione *Vai al file* con il filtro 'f':

![Menu Vai a in C&#43;&#43;](../ide/media/vs2017-go-to-results.png "Menu Vai a")

Per vedere l'elenco dei filtri testo digitare ? seguito da uno spazio. È anche possibile accedere ai comandi **Vai a** con il menu **Modifica**. Si tratta di un altro modo per rammentarsi dei principali tasti di scelta rapida di Vai a.

![Menu Vai a in C&#43;&#43;](../ide/media/go-to-menu-cpp.png "Menu Vai a")

## <a name="find--find-in-files"></a>Trova/Cerca nei file

È possibile eseguire una ricerca di testo per qualsiasi elemento nella soluzione con **Trova (CTRL+F)** oppure **Cerca nei file (CTRL+MAIUSC+F)** .

Trova può essere applicato a una selezione, al documento corrente, a tutti i documenti aperti, al progetto corrente o all'intera soluzione. È possibile usare espressioni regolari così come testo normale. Evidenzia automaticamente, inoltre, tutte le corrispondenze nell'IDE.

![Trova in C&#43;&#43;](../ide/media/find-cpp.png "Trova")

**Cerca nei file** è una versione più potente di **Trova** che consente di visualizzare i risultati nella finestra **Risultati ricerca**. È possibile cercare le dipendenze del codice esterne, filtrare per tipi di file e altro ancora. 

![Cerca nei file in C&#43;&#43;](../ide/media/find-in-files-cpp.png "Cerca nei file")

È possibile organizzare i risultati di **Cerca nei file** in due finestre e accodare insieme i risultati di più ricerche. Fare clic su un risultato per passare alla posizione corrispondente nel file.

![Cerca nei file in C&#43;&#43](../ide/media/vs2017-find-in-files-results.png "Cerca nei file")

Per altre informazioni, vedere [Cerca nei file](/visualstudio/ide/find-in-files) nella documentazione di Visual Studio.

## <a name="find-all-references"></a>Trova tutti i riferimenti

Per trovare tutti gli utilizzi di un simbolo nella codebase, posizionare il cursore sul simbolo o subito dopo, quindi fare clic con il pulsante destro del mouse e scegliere **Trova tutti i riferimenti**. È possibile filtrare, ordinare o raggruppare i risultati in molti modi diversi. I risultati vengono popolati in modo incrementale. Sono classificati come letture o scritture per aiutare a distinguere che cosa fa parte della soluzione rispetto a cosa appartiene a intestazioni di sistema o altre librerie.

![Trova tutti i riferimenti in C&#43;&#43;](../ide/media/find-all-references-results-cpp.png "Trova tutti i riferimenti")

I risultati sono raggruppati in base alle categorie seguenti:

- Progetto, quindi definizione
- Solo definizione
- Definizione, quindi progetto
- Definizione, quindi percorso
- Definizione, progetto, quindi percorso

 #### <a name="filter-results"></a>Filtrare i risultati

Per filtrare i risultati, passare il mouse su una colonna e fare clic sull'icona del filtro che viene visualizzata. È possibile filtrare i risultati dalla prima colonna per nascondere elementi quali i riferimenti a stringhe e commenti che non è necessario visualizzare.

![Filtri di Trova tutti i riferimenti in C&#43;&#43;](../ide/media/find-all-references-filters-cpp.png "Filtri di Trova tutti i riferimenti")

- **Risultati Confirmed** (Confermati): riferimenti effettivi al simbolo cercato presenti nel codice. La ricerca di una funzione membro denominata `Size`, ad esempio, restituirà tutti i riferimenti a `Size` che corrispondono all'ambito della classe che definisce `Size`.

- **Risultati Disconfirmed** (Non confermati): filtro disattivato per impostazione predefinita perché mostra i simboli il cui nome corrisponde ma che non sono riferimenti effettivi al simbolo che si sta cercando. Se si dispone di due classi ognuna delle quali definisce una funzione membro denominata `Size`, ad esempio, e si esegue una ricerca di `Size` su un riferimento da un oggetto `Class1`, tutti i riferimenti a `Size` provenienti da `Class2` verranno visualizzati come non confermati.

- **Risultati Unprocessed** (Non elaborati): poiché le operazioni **Trova tutti i riferimenti** possono richiedere molto tempo se eseguite su codebase di grandi dimensioni, in questi casi l'elenco dei risultati mostra i risultati come non elaborati. Per i risultati non elaborati la corrispondenza al nome del simbolo cercato è stata confermata, ma non è stato ancora appurato se si tratta di riferimenti effettivi. È possibile attivare questo filtro per ottenere risultati più rapidi. Tenere semplicemente presente che alcuni risultati potrebbero non essere riferimenti effettivi.

 #### <a name="sort-results"></a>Ordinare i risultati

È possibile ordinare i risultati in base a qualsiasi colonna facendo clic sulla colonna. Per passare dall'ordine crescente all'ordine decrescente e viceversa, fare di nuovo clic sulla colonna.

## <a name="navigation-bar"></a>Barra di spostamento

È possibile passare alla definizione di un tipo in un file o ai membri del tipo usando la **sulla barra di spostamento** che si trova sopra la finestra dell'editor.

![Barra di spostamento in C&#43;&#43;](../ide/media/navbar-cpp.png "Barra di spostamento")

## <a name="see-also"></a>Vedere anche

[Leggere e comprendere il codice C++](read-and-understand-code-cpp.md)</br>
[Scrittura e refactoring del codice (C++)](read-and-understand-code-cpp.md)</br>
[Collaborare con Live Share per C++](live-share-cpp.md)
