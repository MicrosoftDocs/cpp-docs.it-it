---
title: 'Recordset: associazione dinamica di colonne di dati (ODBC)'
ms.date: 11/19/2018
helpviewer_keywords:
- ODBC recordsets [C++], binding columns dynamically
- data binding [C++], recordset columns
- recordsets [C++], binding data
- data binding [C++], columns in recordsets
- columns [C++], binding to recordsets
ms.assetid: bff67254-d953-4ae4-9716-91c348cb840b
ms.openlocfilehash: c2fc870ba08bbec0a886b3d77281f3c697ae09fe
ms.sourcegitcommit: 9e891eb17b73d98f9086d9d4bfe9ca50415d9a37
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/20/2018
ms.locfileid: "52175665"
---
# <a name="recordset-dynamically-binding-data-columns-odbc"></a>Recordset: associazione dinamica di colonne di dati (ODBC)

Questo argomento si applica alle classi ODBC MFC.

Recordset gestiscono le colonne nella tabella di associazione specificate in fase di progettazione, ma vi sono casi in cui si potrebbe voler associare le colonne che erano sconosciute all'utente in fase di progettazione. Questo argomento viene illustrato:

- [Quando si potrebbe desiderare di associare le colonne in modo dinamico a un oggetto recordset](#_core_when_you_might_bind_columns_dynamically).

- [Come associare le colonne in modo dinamico in fase di esecuzione](#_core_how_to_bind_columns_dynamically).

> [!NOTE]
>  In questo argomento si applica a oggetti derivati da `CRecordset` in quale riga bulk il recupero non è stato implementato. Le tecniche descritte in genere non sono consigliate se si usa il recupero di righe bulk. Per altre informazioni sul recupero di righe bulk, vedere [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

##  <a name="_core_when_you_might_bind_columns_dynamically"></a> Quando è possibile associare le colonne in modo dinamico

In fase di progettazione, la creazione guidata applicazione MFC o [Creazione guidata Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md) (dal **Aggiungi classe**) vengono create le classi di recordset basate su tabelle note e delle colonne nell'origine dati. I database possono variare tra durante la progettazione li e versioni successive se l'applicazione usa le tabelle e colonne in fase di esecuzione. Un utente potrebbe aggiungere o eliminare una tabella o aggiungere o eliminare colonne da una tabella di cui si basa il recordset dell'applicazione. Probabilmente non è un problema per tutte le applicazioni di accesso ai dati, ma se è valida anche per te, come può affrontano le modifiche dello schema del database, diverso da riprogettazione e ricompilando? Lo scopo di questo argomento è per rispondere a questa domanda.

Questo argomento viene descritto il caso più comune in cui è possibile associare le colonne in modo dinamico, ovvero aver iniziato con un recordset in base a uno schema di database noti, che si desidera gestire le colonne aggiuntive in fase di esecuzione. Ulteriormente nell'argomento si presuppone che le altre colonne siano mappati agli `CString` campo membri dati, il caso più comune, anche se vengono forniti suggerimenti per semplificare la gestione di altri tipi di dati.

Con una piccola quantità di codice aggiuntivo, è possibile:

- [Determinare quali colonne sono disponibili in fase di esecuzione](#_core_how_to_bind_columns_dynamically).

- [Associare le colonne aggiuntive per il recordset in modo dinamico, in fase di esecuzione](#_core_adding_the_columns).

Il recordset contiene ancora i membri di dati per le colonne che conosceva in fase di progettazione. Inoltre contiene una piccola quantità di codice aggiuntivo che determina in modo dinamico se tutte le nuove colonne sono stati aggiunti alla tabella di destinazione e, in caso affermativo, associa le nuove colonne alla memoria allocata in modo dinamico (invece che ai membri di dati del recordset).

Questo argomento vengono illustrati altri casi di binding dinamico, ad esempio colonne o tabelle eliminate. In questi casi, è necessario usare chiamate all'API ODBC in modo più diretto. Per informazioni, vedere il SDK di ODBC *di riferimento per programmatori* sul CD di MSDN Library.

##  <a name="_core_how_to_bind_columns_dynamically"></a> Come associare le colonne in modo dinamico

Per associare le colonne in modo dinamico, è necessario sapere o essere in grado di determinare i nomi delle colonne. È anche necessario allocare spazio di archiviazione per i membri di dati campo aggiuntivo, specificare i nomi e i relativi tipi e specificare il numero di colonne da aggiungere.

La discussione seguente specifica due set di record diversi. Il primo è il principale recordset che seleziona i record dalla tabella di destinazione. Il secondo è un set di record di colonna speciale usato per ottenere informazioni sulle colonne della tabella di destinazione.

###  <a name="_core_the_general_process"></a> Processo generale

A livello generale, seguire questi passaggi:

1. Costruire l'oggetto recordset principale.

   Facoltativamente, passare un puntatore a un elemento aperto `CDatabase` dell'oggetto o essere in grado di fornire le informazioni di connessione per il recordset di colonna in un altro modo.

1. Eseguire i passaggi per aggiungere le colonne in modo dinamico.

   Vedere la procedura descritta nell'aggiunta di colonne seguenti.

1. Aprire recordset principale.

   Il set di record selezionati i record e Usa il trasferimento di campi di record (RFX) per associare le colonne statiche, ovvero il mapping ai membri dati di campo del recordset sia le colonne dinamiche (mappate a spazio di archiviazione allocata).

###  <a name="_core_adding_the_columns"></a> L'aggiunta delle colonne

Associazione dinamica di aggiunta di colonne in fase di esecuzione sono necessari i passaggi seguenti:

1. Determinare quali sono le colonne nella tabella di destinazione in fase di esecuzione. Estrarre da tale informazione un elenco delle colonne che sono state aggiunte alla tabella poiché la classe del recordset è stata progettata.

   Un buon approccio consiste nell'utilizzare una classe recordset colonna progettata per eseguire query sull'origine dati per informazioni sulla colonna per la tabella di destinazione (ad esempio colonna nome e tipo di dati).

1. Offrire archiviazione per i nuovi membri dati di campo. Poiché la classe principale recordset non ha membri dati dei campi per le colonne sconosciute, è necessario fornire una posizione in cui archiviare i nomi, i valori dei risultati e possibilmente le informazioni sul tipo di dati (se le colonne sono diversi tipi di dati).

   Un approccio consiste nella compilazione di uno o più elenchi dinamici, uno per i nuovi nomi delle colonne, un altro per i valori dei risultati e un terzo per i tipi di dati (se necessario). Questi elenchi, in particolare l'elenco di valori, forniscono le informazioni e lo spazio di archiviazione necessaria per l'associazione. La figura seguente illustra la compilazione degli elenchi.

   ![Compilazione degli elenchi di colonne da associare in modo dinamico](../../data/odbc/media/vc37w61.gif "compilazione degli elenchi di colonne da associare in modo dinamico")<br/>
   Compilazione degli elenchi di colonne da associare in modo dinamico

1. Aggiungere una chiamata di funzione RFX del recordset principale `DoFieldExchange` funzionare per ciascuna colonna aggiunta. Queste chiamate RFX l'operazione di recupero di un record, includendo le colonne aggiuntive e associando le colonne a membri dati di recordset o nella risorsa di archiviazione fornito in modo dinamico per loro.

   Un approccio consiste nell'aggiungere un ciclo al recordset principale `DoFieldExchange` funzione che consente di scorrere l'elenco delle nuove colonne, chiamando la funzione RFX appropriata per ogni colonna nell'elenco. Per ogni chiamata RFX, passare un nome di colonna dall'elenco dei nomi di colonna e un percorso di archiviazione nel corrispondente membro dell'elenco dei valori di risultato.

###  <a name="_core_lists_of_columns"></a> Elenchi di colonne

È necessario per lavorare con quattro elenchi vengono visualizzati nella tabella seguente.

|||
|-|-|
|**Colonne della tabella corrente**| (Elenco 1 nella figura) Un elenco delle colonne attualmente presenti nella tabella dell'origine dati. Questo elenco può corrispondere all'elenco delle colonne attualmente associate nel set di record.|
|**Colonne associate a Recordset**| (Elenco 2 nella figura) Un elenco delle colonne associate nel recordset. Queste colonne già istruzioni RFX di `DoFieldExchange` (funzione).|
|**Le colonne da associare in modo dinamico**| (Elenco di 3 nella figura) Un elenco di colonne nella tabella ma non nel set di record. Queste sono le colonne da associare in modo dinamico.|
|**Colonna-Dynamic-Values**| (Elenco 4 nella figura) Un elenco che contiene risorse di archiviazione per i valori recuperati dalle colonne associate in modo dinamico. Elementi di questo elenco corrispondono a quelli nelle colonne-a-Bind-in modo dinamico, uno alla volta.|

###  <a name="_core_building_your_lists"></a> Compilazione degli elenchi

Con una strategia generale, è possibile attivare i dettagli. Le procedure descritte nella parte restante di questo argomento mostrano come compilare gli elenchi visualizzati nella [elenchi di colonne](#_core_lists_of_columns). Le procedure descritte illustrano:

- [Determinare i nomi delle colonne non presenti i recordset](#_core_determining_which_table_columns_are_not_in_your_recordset).

- [Fornire archiviazione dinamica per le colonne appena aggiunte alla tabella](#_core_providing_storage_for_the_new_columns).

- [Aggiunta dinamica di RFX chiama per le nuove colonne](#_core_adding_rfx_calls_to_bind_the_columns).

###  <a name="_core_determining_which_table_columns_are_not_in_your_recordset"></a> Determinare quali sono le colonne di tabella non nel set di record

Compila un elenco (associati a colonne del Recordset, come nell'elenco 2 nella figura) che contiene un elenco delle colonne di cui è già associata nel set di record principale. Compilare quindi un elenco (colonne-a-Bind-dinamicamente, derivata dalle colonne correnti della tabella e colonne associate del Recordset) che contiene i nomi di colonna presenti nella tabella dell'origine dati, ma non nel set di record principale.

##### <a name="to-determine-the-names-of-columns-not-in-the-recordset-columns-to-bind-dynamically"></a>Per determinare i nomi delle colonne non presenti i recordset (le colonne da associare in modo dinamico)

1. Compila un elenco (Recordset-colonne associate) le colonne già associata nel set di record principale.

   Un approccio consiste nella creazione di colonne associate del Recordset in fase di progettazione. È possibile esaminare visivamente le chiamate di funzione RFX del recordset `DoFieldExchange` funzione per ottenere i nomi. Quindi, impostare l'elenco come una matrice inizializzata con i nomi.

   Ad esempio, la figura Mostra colonne associate del Recordset (elenco 2) con tre elementi. Colonne associate del Recordset manca la colonna telefono mostrata in colonne di tabella correnti (elenco 1).

1. Confrontare Colonne correnti della tabella e colonne associate del Recordset per compilare un elenco (le colonne da associare in modo dinamico) delle colonne non ancora associato nel set di record principale.

   Un approccio consiste per scorrere in ciclo l'elenco di colonne della tabella in fase di esecuzione (colonne correnti della tabella) e l'elenco di colonne già associato nel set di record (Recordset-colonne associate) in parallelo. Inserire tutti i nomi in colonne da associare in modo dinamico in colonne correnti della tabella che non sono visibili nelle colonne associate del Recordset.

   Ad esempio, la figura mostra le colonne da associare in modo dinamico (elenco di 3) con un elemento: la colonna telefono in colonne di tabella correnti (elenco 1) ma non nelle colonne associate del Recordset (elenco 2).

1. Compilare un elenco di valori di colonna dinamiche (ad esempio elenco 4 dell'illustrazione) in cui archiviare i valori di dati corrispondenti a ogni nome di colonna archiviate nell'elenco delle colonne da associare in modo dinamico (le colonne da associare in modo dinamico).

   Gli elementi di questo elenco rivestono il ruolo del nuovo set di record membri dati di campo. Sono i percorsi di archiviazione a cui sono associate le colonne dinamiche. Per descrizioni degli elenchi, vedere [elenchi di colonne](#_core_lists_of_columns).

###  <a name="_core_providing_storage_for_the_new_columns"></a> Offrono l'archiviazione per le nuove colonne

Successivamente, impostare i percorsi di archiviazione per le colonne da associare in modo dinamico. L'idea consiste nel fornire un elemento di elenco in cui archiviare ogni valore della colonna. Questi percorsi di archiviazione in parallelo le variabili membro recordset, in cui sono archiviate le colonne in genere associate.

#### <a name="to-provide-dynamic-storage-for-new-columns-dynamic-column-values"></a>Per fornire l'archiviazione dinamica per le nuove colonne (colonna-Dynamic-Values)

1. Colonna di valori dinamici, paralleli a colonne-a-Bind-dinamicamente, per contenere il valore dei dati in ogni colonna di compilazione.

   Ad esempio, nell'illustrazione mostra valori di colonna dinamiche (elenco 4) con un elemento: un `CString` oggetto contenente il numero di telefono per il record corrente: "555-1212".

   Nel caso più comune, colonna-Dynamic-Values dispone di elementi di tipo `CString`. Se si usano colonne con tipi di dati diversi, è necessario un elenco che può contenere elementi di una varietà di tipi.

Il risultato di queste procedure è due elenchi principali: colonne-a-Bind-in modo dinamico che contiene i nomi delle colonne e dinamica-valori di colonna che contiene i valori nelle colonne del record corrente.

> [!TIP]
> Se le nuove colonne non sono tutti dello stesso tipo di dati, è possibile che un altro elenco parallelo contenente gli elementi che definiscono in qualche modo il tipo di ogni elemento corrispondente nell'elenco delle colonne. (È possibile usare i valori AFX_RFX_BOOL AFX_RFX_BYTE, e così via, per questa operazione se si desidera. Queste costanti sono definite in AFXDB. H.) Scegliere un tipo di elenco basato su cui si rappresentano i tipi di dati di colonna.

###  <a name="_core_adding_rfx_calls_to_bind_the_columns"></a> Aggiunta chiamate RFX per associare le colonne

Infine, Disponi per l'associazione dinamica a inserendo RFX chiama per le nuove colonne nel `DoFieldExchange` (funzione).

##### <a name="to-dynamically-add-rfx-calls-for-new-columns"></a>Aggiungere in modo dinamico le chiamate RFX nuove colonne

1. Il recordset principale `DoFieldExchange` membro di funzione, aggiungere il codice che consente di scorrere l'elenco delle nuove colonne (le colonne da associare in modo dinamico). In ogni ciclo, estrarre un nome di colonna da colonne da associare in modo dinamico e un valore di risultato per la colonna dalla colonna-Dynamic-Values. Passare questi elementi a una chiamata di funzione RFX appropriato per il tipo di dati della colonna. Per descrizioni degli elenchi, vedere [elenchi di colonne](#_core_lists_of_columns).

Nel caso comune, nelle `RFX_Text` è estrarre le chiamate di funzioni `CString` oggetti dagli elenchi, come le seguenti righe di codice, in cui le colonne da associare in modo dinamico è un `CStringList` chiamato `m_listName` e valori di colonna dinamica è una `CStringList` chiamato `m_listValue`:

```cpp
RFX_Text( pFX,
            m_listName.GetNext( posName ),
            m_listValue.GetNext( posValue ));
```

Per altre informazioni sulle funzioni RFX, vedere [macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md) nel *Class Library Reference*.

> [!TIP]
> Se le nuove colonne sono diversi tipi di dati, utilizzare un'istruzione switch nel ciclo per chiamare la funzione RFX appropriata per ogni tipo.

Quando il framework chiama `DoFieldExchange` durante la `Open` processo per associare le colonne al set di record, le chiamate RFX per le colonne statiche associano tali colonne. Il ciclo chiama quindi ripetutamente funzioni RFX per le colonne dinamiche.

## <a name="see-also"></a>Vedere anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: gestione di dati di grandi dimensioni (ODBC)](../../data/odbc/recordset-working-with-large-data-items-odbc.md)