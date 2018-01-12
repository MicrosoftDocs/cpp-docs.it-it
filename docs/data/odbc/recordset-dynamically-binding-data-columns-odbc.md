---
title: 'Recordset: Associazione dinamica di colonne di dati (ODBC) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- ODBC recordsets [C++], binding columns dynamically
- data binding [C++], recordset columns
- recordsets [C++], binding data
- data binding [C++], columns in recordsets
- columns [C++], binding to recordsets
ms.assetid: bff67254-d953-4ae4-9716-91c348cb840b
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 2e834820266e83d2c07bbe46f07e2ac48b0d18e0
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="recordset-dynamically-binding-data-columns-odbc"></a>Recordset: associazione dinamica di colonne di dati (ODBC)
Questo argomento si applica alle classi ODBC MFC.  
  
 I recordset gestiscono colonne della tabella dell'associazione specificata in fase di progettazione, ma vi sono alcuni casi si potrebbe voler associare le colonne che sono stati noti in fase di progettazione. Questo argomento viene illustrato:  
  
-   [Quando si potrebbe desiderare di associazione dinamica di colonne a un oggetto recordset](#_core_when_you_might_bind_columns_dynamically).  
  
-   [Come associare le colonne in modo dinamico in fase di esecuzione](#_core_how_to_bind_columns_dynamically).  
  
> [!NOTE]
>  Questo argomento si applica agli oggetti derivati da `CRecordset` in quale riga bulk recupero non è stato implementato. Le tecniche descritte in genere non sono consigliate se si utilizza il recupero di massa di righe. Per ulteriori informazioni sulle righe di massa, vedere [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
##  <a name="_core_when_you_might_bind_columns_dynamically"></a>Quando è possibile associare le colonne in modo dinamico  
 In fase di progettazione, la creazione guidata applicazione MFC o [Creazione guidata Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md) (da **Aggiungi classe**) consente di creare classi di recordset in base alle tabelle note e delle colonne nell'origine dati. I database possono variare tra durante la progettazione di loro e versioni successive, quando l'applicazione utilizza le tabelle e colonne in fase di esecuzione. Un utente può aggiungere o eliminare una tabella o aggiungere o eliminare colonne da una tabella da cui dipende il recordset dell'applicazione. Probabilmente non rappresenta un problema per tutte le applicazioni di accesso ai dati, ma se sia per quelle in uso, come possibile affrontano nello schema del database, diverso dalle modifiche? Lo scopo di questo argomento è per rispondere alla domanda.  
  
 Questo argomento viene descritto il caso più comune in cui è possibile associare le colonne in modo dinamico, aver iniziato con un recordset in base allo schema di un database noto, si desidera gestire colonne aggiuntive in fase di esecuzione. Suppone inoltre che le altre colonne siano mappati agli `CString` campo membri di dati, il caso più comune, anche se vengono forniti suggerimenti per la gestione di altri tipi di dati.  
  
 Con una piccola quantità di codice aggiuntivo, è possibile:  
  
-   [Determinare quali colonne sono disponibili in fase di esecuzione](#_core_how_to_bind_columns_dynamically).  
  
-   [Associare in modo dinamico, colonne aggiuntive per il recordset in fase di esecuzione](#_core_adding_the_columns).  
  
 Il recordset contiene ancora i membri dati per le colonne conosciute in fase di progettazione. Inoltre contiene una piccola quantità di codice aggiuntivo che determina in modo dinamico che siano state aggiunte nuove colonne alla tabella di destinazione e, in caso affermativo, associa le nuove colonne all'archiviazione allocata in modo dinamico (anziché ai membri di dati del recordset).  
  
 Questo argomento vengono illustrati altri casi di associazione dinamica, ad esempio colonne o tabelle eliminate. Per i casi, è necessario utilizzare più direttamente le chiamate all'API ODBC. Per informazioni, vedere il SDK di ODBC *di riferimento per programmatori* sul CD di MSDN Library.  
  
##  <a name="_core_how_to_bind_columns_dynamically"></a>Come associazione dinamica di colonne  
 Per associare le colonne in modo dinamico, è necessario conoscere (o essere in grado di determinare) i nomi delle colonne aggiuntive. È inoltre necessario allocare spazio di archiviazione per i membri di dati di campo, specificare i nomi e i relativi tipi e specificare il numero di colonne da aggiungere.  
  
 Di seguito vengono indicate due diversi set di record. Il primo è il principale recordset che seleziona i record dalla tabella di destinazione. Il secondo è un oggetto recordset speciale di colonna utilizzato per ottenere informazioni sulle colonne nella tabella di destinazione.  
  
###  <a name="_core_the_general_process"></a>Processo generale  
 Livello più generale, eseguire la procedura seguente:  
  
1.  Costruire l'oggetto recordset principale.  
  
     Facoltativamente, passare un puntatore a un oggetto aperto `CDatabase` dell'oggetto o essere in grado di fornire informazioni di connessione per il recordset di colonna in un altro modo.  
  
2.  Eseguire i passaggi per aggiungere le colonne in modo dinamico.  
  
     Vedere il processo descritto per l'aggiunta di colonne riportata di seguito.  
  
3.  Aprire il recordset principale.  
  
     Il recordset seleziona i record e utilizza il trasferimento di campi di record (RFX) per associare le colonne statiche, ovvero il mapping ai membri dati di campo del recordset sia le colonne dinamiche (mappate a spazio di archiviazione allocato).  
  
###  <a name="_core_adding_the_columns"></a>L'aggiunta delle colonne  
 Associazione dinamica di aggiunta di colonne in fase di esecuzione richiede i passaggi seguenti:  
  
1.  Determinare quali sono le colonne nella tabella di destinazione in fase di esecuzione. Estrarre da tali informazioni di un elenco delle colonne che sono stati aggiunti alla tabella dopo la classe del recordset è stata progettata.  
  
     Un buon approccio consiste nell'utilizzare una classe recordset colonna progettata per eseguire query sull'origine dati per informazioni sulla colonna per la tabella di destinazione (ad esempio colonna nome e tipo di dati).  
  
2.  Fornire l'archiviazione per i nuovi membri dati di campo. Poiché la classe recordset principale non dispone di membri di dati di campo per le colonne sconosciute, è necessario fornire una posizione per archiviare i nomi, valori dei risultati e possibilmente informazioni sul tipo di dati (se le colonne sono tipi di dati diversi).  
  
     Un approccio consiste nel creare uno o più elenchi dinamici, uno per i nuovi nomi delle colonne, un altro per i valori dei risultati e un terzo per i tipi di dati (se necessario). Questi elenchi, in particolare l'elenco di valore, forniscono le informazioni e lo spazio di archiviazione necessario per l'associazione. Nella figura seguente viene illustrata la compilazione degli elenchi.  
     ![Compilazione degli elenchi di colonne da associare in modo dinamico](../../data/odbc/media/vc37w61.gif "vc37w61")  
Compilazione degli elenchi di colonne da associare in modo dinamico  
  
3.  Aggiungere una chiamata di funzione RFX del recordset principale `DoFieldExchange` funzionerà per ciascuna colonna aggiunta. Queste chiamate RFX eseguono le operazioni di recupero di un record, incluse le colonne aggiuntive e binding le colonne a membri dati di recordset o lo spazio di archiviazione fornito in modo dinamico per tali.  
  
     Un approccio consiste nell'aggiungere un ciclo del recordset principale `DoFieldExchange` funzione che consente di scorrere l'elenco delle nuove colonne, chiamando la funzione RFX appropriata per ciascuna colonna nell'elenco. Per ogni chiamata RFX, passare un nome di colonna dall'elenco dei nomi di colonna e un percorso di archiviazione nel membro corrispondente nell'elenco dei risultati valore.  
  
###  <a name="_core_lists_of_columns"></a>Elenchi di colonne  
 È necessario utilizzare quattro elenchi vengono visualizzati nella tabella seguente.  
  
 **Colonne correnti della tabella (elenco 1 nell'illustrazione)** un elenco delle colonne della tabella nell'origine dati. Questo elenco può corrispondere all'elenco delle colonne attualmente associate nel recordset.  
  
 **Colonne associate del Recordset (elenco 2 nella figura)**  
 Un elenco delle colonne associate nel recordset. Queste colonne già presenti istruzioni RFX il `DoFieldExchange` (funzione).  
  
 **Le colonne da associare in modo dinamico (elenco 3 nella figura)**  
 Un elenco di colonne nella tabella, ma non nel recordset. Queste sono le colonne che si desidera associare in modo dinamico.  
  
 **Valori di colonna dinamici (elenco 4 dell'illustrazione)**  
 Un elenco di archiviazione per i valori recuperati dalle colonne associate in modo dinamico. Elementi dell'elenco corrispondono a quelli nelle colonne-a-binding-in modo dinamico, uno-a-uno.  
  
###  <a name="_core_building_your_lists"></a>Creazione degli elenchi  
 Con una strategia generale, è possibile attivare i dettagli. Le procedure nella parte restante di questo argomento viene descritta la compilazione degli elenchi nei [elenchi di colonne](#_core_lists_of_columns). Le procedure consentono di:  
  
-   [Determinare i nomi delle colonne non presenti nel recordset](#_core_determining_which_table_columns_are_not_in_your_recordset).  
  
-   [Archiviazione per le colonne aggiunte alla tabella](#_core_providing_storage_for_the_new_columns).  
  
-   [Aggiunta dinamica di RFX chiama per le nuove colonne](#_core_adding_rfx_calls_to_bind_the_columns).  
  
###  <a name="_core_determining_which_table_columns_are_not_in_your_recordset"></a>Determinare quali sono le colonne di tabella non presenti nel Recordset  
 Creare un elenco (colonne associate del Recordset, come l'elenco nella figura 2) che contiene un elenco di colonne già associate nel recordset principale. Quindi creare un elenco (colonne-a-binding-in modo dinamico, derivato da colonne correnti della tabella e colonne associate del Recordset) che contiene i nomi delle colonne presenti nella tabella nell'origine dati, ma non nel recordset principale.  
  
##### <a name="to-determine-the-names-of-columns-not-in-the-recordset-columns-to-bind-dynamically"></a>Per determinare i nomi delle colonne non presenti nel recordset (colonne da associare in modo dinamico)  
  
1.  Compila un elenco (colonne associate del Recordset) delle colonne già associate nel recordset principale.  
  
     Un approccio consiste nel creare colonne associate del Recordset in fase di progettazione. È possibile esaminare visivamente le chiamate alle funzioni RFX del recordset `DoFieldExchange` funzione per ottenere i nomi. Quindi, impostare l'elenco come una matrice inizializzata con i nomi.  
  
     Ad esempio, nell'illustrazione colonne associate del Recordset (elenco 2) con tre elementi. Colonne associate del Recordset manca la colonna telefono mostrata nelle colonne di tabella corrente (elenco 1).  
  
2.  Confrontare Colonne correnti della tabella e delle colonne associate del Recordset per compilare un elenco (le colonne da associare in modo dinamico) delle colonne non sono già associate nel recordset principale.  
  
     È possibile scorrere l'elenco di colonne nella tabella in fase di esecuzione (colonne correnti della tabella) e l'elenco delle colonne già associate nel recordset (colonne associate del Recordset) in parallelo. Inserire i nomi in colonne da associare in modo dinamico in colonne correnti della tabella non vengono visualizzati in colonne con associazione a Recordset.  
  
     Ad esempio, la figura mostra le colonne da associare in modo dinamico (elenco 3) con un elemento: la colonna telefono in colonne correnti della tabella (elenco 1) ma non nelle colonne associate del Recordset (elenco 2).  
  
3.  Compila un elenco di valori di colonna dinamici (come elenco 4 dell'illustrazione) in cui archiviare i valori dei dati corrispondente a ogni nome di colonna archiviato nell'elenco delle colonne da associare in modo dinamico (le colonne da associare in modo dinamico).  
  
     Gli elementi dell'elenco rivestono il ruolo del nuovo set di record membri dati di campo. Sono i percorsi di archiviazione a cui sono associate le colonne dinamiche. Per le descrizioni degli elenchi, vedere [elenchi di colonne](#_core_lists_of_columns).  
  
###  <a name="_core_providing_storage_for_the_new_columns"></a>Archiviazione per le nuove colonne  
 Successivamente, impostare i percorsi di archiviazione per le colonne da associare in modo dinamico. Lo scopo è fornire un elemento di elenco in cui archiviare ogni valore della colonna. Questi percorsi di archiviazione in parallelo le variabili membro recordset, archiviano le colonne associate normalmente.  
  
##### <a name="to-provide-dynamic-storage-for-new-columns-dynamic-column-values"></a>Per fornire l'archiviazione dinamica per le nuove colonne (valori di colonna dinamici)  
  
1.  Compilazione dinamica valori di colonna, paralleli a colonne-a-binding-dinamicamente, per contenere il valore dei dati in ogni colonna.  
  
     Ad esempio, la figura mostra dinamico-4 valori di colonna (elenco) con un elemento: un `CString` oggetto contenente il numero di telefono per il record corrente: "555-1212".  
  
     Nel caso più comune, valori di colonna dinamici include elementi di tipo `CString`. Se si utilizzano colonne di diversi tipi di dati, è necessario un elenco che può contenere elementi di una varietà di tipi.  
  
 Il risultato delle procedure precedente è due elenchi principali: colonne-a-binding-in modo dinamico contenente i nomi delle colonne e dinamico valori di colonna contenente i valori delle colonne per il record corrente.  
  
> [!TIP]
>  Se le nuove colonne non sono tutti dello stesso tipo di dati, è possibile che un altro elenco parallelo contenente gli elementi che in qualche modo definiscono il tipo di ciascun elemento corrispondente nell'elenco di colonne. (È possibile utilizzare i valori **AFX_RFX_BOOL**, **AFX_RFX_BYTE**e così via, per questa opzione se si desidera. Queste costanti sono definite in AFXDB. H.) Scegliere un tipo di elenco in base alle modalità di rappresentazione i tipi di dati della colonna.  
  
###  <a name="_core_adding_rfx_calls_to_bind_the_columns"></a>Aggiunta chiamate RFX per associare le colonne  
 Disporre, infine, per l'associazione dinamica di inserendo chiamate RFX per le nuove colonne nel `DoFieldExchange` (funzione).  
  
##### <a name="to-dynamically-add-rfx-calls-for-new-columns"></a>Per aggiungere in modo dinamico RFX di chiamate per le nuove colonne  
  
1.  Il recordset principale `DoFieldExchange` membro funzione, aggiungere il codice che consente di scorrere l'elenco delle nuove colonne (colonne da associare in modo dinamico). In ogni ciclo, estrarre un nome di colonna da un valore di risultato per la colonna di valori di colonna dinamici e di colonne da associare in modo dinamico. Passare questi elementi a una chiamata di funzione RFX appropriato per il tipo di dati della colonna. Per le descrizioni degli elenchi, vedere [elenchi di colonne](#_core_lists_of_columns).  
  
 Nel caso comune, nel `RFX_Text` estrazione di chiamate di funzione `CString` oggetti dagli elenchi, come le seguenti righe di codice, in cui le colonne da associare in modo dinamico un `CStringList` chiamato `m_listName` e valori di colonna dinamici è un `CStringList` chiamato `m_listValue`:  
  
```  
RFX_Text( pFX,   
            m_listName.GetNext( posName ),   
            m_listValue.GetNext( posValue ));  
```  
  
 Per ulteriori informazioni sulle funzioni RFX, vedere [macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md) nel *riferimenti alla libreria di classe*.  
  
> [!TIP]
>  Se le nuove colonne sono tipi di dati diversi, utilizzare un'istruzione switch nel ciclo di chiamare la funzione RFX appropriata per ogni tipo.  
  
 Quando il framework chiama `DoFieldExchange` durante il **aprire** processo per associare le colonne al recordset, le chiamate a RFX per le colonne statiche associano tali colonne. Il ciclo di chiama quindi ripetutamente RFX (funzioni) per le colonne dinamiche.  
  
## <a name="see-also"></a>Vedere anche  
 [Recordset (ODBC)](../../data/odbc/recordset-odbc.md)   
 [Recordset: gestione di dati di grandi dimensioni (ODBC)](../../data/odbc/recordset-working-with-large-data-items-odbc.md)