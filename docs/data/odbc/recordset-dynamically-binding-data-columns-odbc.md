---
title: "Recordset: associazione dinamica di colonne di dati (ODBC) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "colonne [C++], associazione a recordset"
  - "associazione dati [C++], colonne nei recordset"
  - "associazione dati [C++], colonne dei recordset"
  - "ODBC (recordset) [C++], associazione dinamica di colonne"
  - "recordset [C++], associazione dati"
ms.assetid: bff67254-d953-4ae4-9716-91c348cb840b
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Recordset: associazione dinamica di colonne di dati (ODBC)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'argomento è relativo alle classi ODBC MFC.  
  
 I recordset gestiscono l'associazione delle colonne delle tabelle specificate in fase di progettazione. Talvolta può tuttavia essere consigliabile associare colonne non ancora presenti in fase di progettazione.  In questo argomento vengono fornite informazioni su:  
  
-   [Casi in cui eseguire l'associazione dinamica di colonne](#_core_when_you_might_bind_columns_dynamically).  
  
-   [Associazione dinamica di colonne](#_core_how_to_bind_columns_dynamically).  
  
> [!NOTE]
>  L'argomento è relativo agli oggetti derivati da `CRecordset` per cui il recupero di massa di righe non è ancora stato implementato.  Se si utilizza il recupero di massa di righe, si consiglia di non utilizzare le tecniche descritte.  Per ulteriori informazioni sul recupero di massa di righe, vedere [Recordset: recupero di massa di record \(ODBC\)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
##  <a name="_core_when_you_might_bind_columns_dynamically"></a> Casi in cui eseguire l'associazione dinamica di colonne  
 In fase di progettazione la Creazione guidata applicazione MFC o la [Creazione guidata consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md) \(da **Aggiungi classe**\) crea le classi del recordset in base alle tabelle e alle colonne conosciute nell'origine dati.  È possibile che un database venga modificato tra il momento in cui viene progettato e il momento in cui l'applicazione ne utilizza le tabelle e le colonne in fase di esecuzione.  È possibile aggiungere o eliminare una tabella o le colonne di una tabella su cui è basato il recordset dell'applicazione in uso.  Ciò non riguarda tutte le applicazioni di accesso ai dati. Tuttavia, nel caso in cui l'applicazione progettata sia di questo tipo, è necessario trovare una soluzione per gestire le modifiche nello schema del database senza ripetere la progettazione e la compilazione.  In questo argomento viene illustrato come procedere in questi casi.  
  
 In questo argomento viene descritto il caso più comune in cui è possibile associare le colonne in modo dinamico, ovvero la situazione in cui, utilizzando un recordset basato su uno schema di database conosciuto, si desidera gestire colonne aggiuntive in fase di esecuzione.  Si suppone inoltre che le colonne aggiuntive vengano associate ai membri dati di campo `CString`, che rappresenta il caso più comune. Vengono tuttavia forniti anche suggerimenti relativi alla gestione di altri tipi di dati.  
  
 Con una piccola quantità di codice aggiuntivo è possibile effettuare le operazioni riportate di seguito.  
  
-   [Rilevamento delle colonne della tabella in fase di esecuzione](#_core_to_determine_the_columns_in_a_table_at_run_time).  
  
-   [Associazione dinamica di colonne in fase di esecuzione](#_core_adding_the_columns).  
  
 Il recordset contiene ancora i membri dati per le colonne conosciute in fase di progettazione.  Contiene inoltre una piccola quantità di codice aggiuntivo che determina in modo dinamico se sono state aggiunte alla tabella di destinazione nuove colonne e, in caso affermativo, associa le nuove colonne a un percorso di archiviazione allocato in modo dinamico anziché ai membri dati del recordset.  
  
 In questo argomento non vengono illustrati altri casi di associazione dinamica, quali l'eliminazione di tabelle o di colonne.  Per una descrizione di tali casi, è necessario utilizzare in modo più diretto le chiamate all'API ODBC.  Per informazioni, vedere l'SDK di ODBC *Programmer's Reference* nel CD di MSDN Library.  
  
##  <a name="_core_how_to_bind_columns_dynamically"></a> Associazione dinamica di colonne  
 Per associare le colonne in modo dinamico, è necessario conoscere o essere in grado di determinare i nomi delle colonne aggiuntive.   È inoltre necessario allocare un percorso di archiviazione per i membri dati di campo aggiuntivi, specificarne i nomi e i tipi e indicare il numero di colonne da aggiungere.  
  
 Nelle sezioni riportate di seguito vengono descritti due diversi recordset.  Il primo rappresenta il recordset principale che seleziona i record dalla tabella di destinazione.  Il secondo rappresenta un recordset di colonne speciale utilizzato per il recupero di informazioni sulle colonne contenute nella tabella di destinazione.  
  
###  <a name="_core_the_general_process"></a> Processo generale  
 A livello generale, attenersi alla procedura riportata di seguito.  
  
1.  Creare l'oggetto recordset principale.  
  
     Se si desidera, passare un puntatore a un oggetto `CDatabase` aperto o fornire le informazioni di connessione al recordset delle colonne in altro modo.  
  
2.  Aggiungere le colonne in modo dinamico.  
  
     Vedere la procedura descritta nella sezione Aggiunta delle colonne riportata di seguito.  
  
3.  Aprire il recordset principale.  
  
     Il recordset seleziona i record e utilizza il trasferimento di campi di record \(RFX\) per associare le colonne statiche, ovvero quelle associate ai membri dati di campo del recordset, e le colonne dinamiche, ovvero quelle associate al percorso aggiuntivo allocato.  
  
###  <a name="_core_adding_the_columns"></a> Aggiunta delle colonne  
 Per associare in modo dinamico le colonne aggiunte in fase di esecuzione, è necessario effettuare le operazioni descritte di seguito.  
  
1.  Specificare in fase di esecuzione le colonne presenti nella tabella di destinazione.  Estrarre da tali informazioni un elenco delle colonne aggiunte alla tabella a partire dal momento in cui è stata progettata la classe del recordset.  
  
     Un metodo efficace consiste nell'utilizzare una classe del recordset delle colonne progettata per cercare nell'origine dati informazioni sulle colonne per la tabella di destinazione, quali il nome di colonna e il tipo di dati.  
  
2.  Impostare un percorso di archiviazione per i nuovi membri dati di campo.  Poiché la classe del recordset principale non dispone di membri dati di campo per le colonne sconosciute, è necessario fornire una posizione di archiviazione per i nomi, i valori dei risultati ed eventualmente le informazioni relative ai tipi di dati, nel caso in cui alle colonne siano associati tipi di dati diversi.  
  
     È possibile compilare uno o più elenchi dinamici, uno per i nomi delle nuove colonne, un altro per i valori dei risultati e un terzo per i tipi di dati, se necessario.  In questi elenchi, in particolare nell'elenco dei valori, sono contenute le informazioni e il percorso di archiviazione necessari per l'associazione.  Nella figura riportata di seguito viene illustrata la compilazione degli elenchi.  
  
     ![Compilazione degli elenchi di colonne da associare in modo dinamico](../../data/odbc/media/vc37w61.gif "vc37W61")  
Compilazione degli elenchi di colonne da associare in modo dinamico  
  
3.  Aggiungere una chiamata alle funzioni RFX nella funzione `DoFieldExchange` del recordset principale per ciascuna colonna aggiunta.  Le chiamate a RFX consentono di recuperare un record che include le colonne aggiuntive e di associare le colonne ai membri dati del recordset o al percorso di archiviazione reso disponibile in modo dinamico per tali colonne.  
  
     È possibile aggiungere un ciclo alla funzione `DoFieldExchange` del recordset principale che scorre l'elenco delle nuove colonne, chiamando la funzione RFX appropriata per ciascuna colonna.  A ogni chiamata a RFX, passare il nome di una colonna contenuto nell'elenco dei nomi delle colonne e una posizione di archiviazione nel membro corrispondente dell'elenco dei valori dei risultati.  
  
###  <a name="_core_lists_of_columns"></a> Elenchi di colonne  
 Nella tabella seguente sono riportati i quattro elenchi da utilizzare.  
  
 [Colonne correnti della tabella \(elenco 1 nell'illustrazione\)](#_core_illustration_dynamic)  
 Elenco delle colonne correnti della tabella nell'origine dati.  Questo elenco può corrispondere all'elenco delle colonne attualmente associate nel recordset.  
  
 [Colonne associate del recordset \(elenco 2 nell'illustrazione\)](#_core_illustration_dynamic)  
 Elenco delle colonne associate nel recordset.  Queste colonne includono già le istruzioni RFX nella funzione `DoFieldExchange`.  
  
 [Colonne da associare in modo dinamico \(elenco 3 nell'illustrazione\)](#_core_illustration_dynamic)  
 Elenco delle colonne contenute nella tabella, ma non nel recordset.  Si tratta delle colonne che si desidera associare in modo dinamico.  
  
 [Valori di colonna dinamici \(elenco 4 nell'illustrazione\)](#_core_illustration_dynamic)  
 Elenco contenente il percorso di archiviazione per i valori recuperati dalle colonne associate in modo dinamico.  Esiste una corrispondenza uno a uno tra gli elementi di questo elenco e quelli presenti nell'elenco Colonne da associare in modo dinamico.  
  
###  <a name="_core_building_your_lists"></a> Compilazione degli elenchi  
 Una volta determinata la strategia generale, è possibile passare alla progettazione dei dettagli.  Nelle procedure descritte nella seconda parte di questo argomento viene illustrata la compilazione degli elenchi riportati nella sezione [Elenchi di colonne](#_core_lists_of_columns).  Mediante queste procedure è possibile effettuare le operazioni elencate di seguito.  
  
-   [Rilevamento delle colonne delle tabelle non presenti nel recordset](#_core_determining_which_table_columns_are_not_in_your_recordset)  
  
-   [Archiviazione delle nuove colonne](#_core_providing_storage_for_the_new_columns)  
  
-   [Aggiunta delle chiamate a RFX per l'associazione delle colonne](#_core_adding_rfx_calls_to_bind_the_columns)  
  
###  <a name="_core_determining_which_table_columns_are_not_in_your_recordset"></a> Rilevamento delle colonne delle tabelle non presenti nel recordset  
 Compilare un elenco Colonne associate del recordset, come l'elenco 2 dell'[illustrazione](#_core_illustration_dynamic), contenente un elenco delle colonne già associate nel recordset principale.  Compilare quindi un elenco denominato Colonne da associare in modo dinamico, derivato da Colonne correnti della tabella e Colonne associate del recordset, contenente i nomi delle colonne presenti nella tabella nell'origine dati, ma non nel recordset principale.  
  
##### Per determinare i nomi delle colonne non presenti nel recordset \(Colonne da associare in modo dinamico\)  
  
1.  Compilare un elenco Colonne associate del recordset delle colonne già associate nel recordset principale.  
  
     È possibile creare l'elenco Colonne associate del recordset in fase di progettazione.  Per ottenere i nomi necessari, è possibile esaminare visivamente le chiamate alle funzioni RFX nella funzione `DoFieldExchange` del recordset.  Impostare quindi l'elenco come matrice inizializzata con i nomi.  
  
     Ad esempio, nell'[illustrazione](#_core_illustration_dynamic) è presente l'elenco 2 Colonne associate del recordset con tre elementi.  Nell'elenco Colonne associate del recordset manca la colonna Telefono riportata invece nell'elenco 1 Colonne correnti della tabella.  
  
2.  Confrontare Colonne correnti della tabella e Colonne associate del recordset in modo da compilare un elenco denominato Colonne da associare in modo dinamico contenente le colonne non ancora associate nel recordset principale.  
  
     È possibile scorrere in parallelo l'elenco delle colonne della tabella in fase di esecuzione \(Colonne correnti della tabella\) e l'elenco delle colonne già associate nel recordset \(Colonne associate del recordset\).  Inserire in Colonne da associare in modo dinamico tutti i nomi contenuti in Colonne correnti della tabella non visualizzati in Colonne associate del recordset.  
  
     Ad esempio, nell'[illustrazione](#_core_illustration_dynamic) l'elenco 3 Colonne da associare in modo dinamico contiene un solo elemento, ovvero la colonna Telefono contenuta nell'elenco 1 Colonne correnti della tabella, ma non nell'elenco 2 Colonne associate del recordset.  
  
3.  Compilare un elenco Valori di colonna dinamici, come l'elenco 4 dell'[illustrazione](#_core_illustration_dynamic), in cui memorizzare i valori dei dati corrispondenti a ciascun nome di colonna archiviato nell'elenco Colonne da associare in modo dinamico.  
  
     Gli elementi di questo elenco svolgono il ruolo di nuovi membri dati di campo del recordset,  in quanto rappresentano le posizioni di archiviazione a cui vengono associate le colonne dinamiche.  Per le descrizioni degli elenchi, vedere [Elenchi di colonne](#_core_lists_of_columns).  
  
###  <a name="_core_providing_storage_for_the_new_columns"></a> Archiviazione delle nuove colonne  
 Impostare le posizioni di archiviazione per le colonne di cui eseguire l'associazione dinamica.  Lo scopo è fornire un elemento di elenco in cui memorizzare il valore di ciascuna colonna.  Queste posizioni di archiviazione sono parallele alle variabili membro del recordset in cui sono memorizzate le colonne associate normalmente.  
  
##### Per fornire un metodo di archiviazione dinamica per le nuove colonne \(Valori di colonna dinamici\)  
  
1.  Compilare l'elenco Valori di colonna dinamici, parallelo all'elenco Colonne da associare in modo dinamico, in modo che contenga il valore dei dati di ciascuna colonna.  
  
     Ad esempio, nell'[illustrazione](#_core_illustration_dynamic) l'elenco 4 Valori di colonna dinamici include un solo elemento, ovvero un oggetto `CString` contenente il numero di telefono per il record corrente: 555\-1212.  
  
     Nel caso più comune, l'elenco Valori di colonna dinamici include elementi di tipo `CString`.  Se si utilizzano colonne con diversi tipi di dati, è necessario un elenco in grado di contenere elementi di tipi diversi.  
  
 Il risultato delle procedure precedenti è la creazione di due elenchi principali: Colonne da associare in modo dinamico, contenente i nomi delle colonne, e Valori di colonna dinamici, contenente i valori delle colonne per il record corrente.  
  
> [!TIP]
>  Se le nuove colonne non hanno lo stesso tipo di dati, si consiglia di creare un altro elenco parallelo contenente gli elementi che in qualche modo definiscono il tipo di ciascun elemento corrispondente nell'elenco delle colonne. A tal fine, è possibile utilizzare i valori **AFX\_RFX\_BOOL**, **AFX\_RFX\_BYTE** e così via.  Queste costanti sono definite in AFXDB.H. Scegliere un tipo di elenco in base alla modalità di rappresentazione dei tipi di dati delle colonne.  
  
###  <a name="_core_adding_rfx_calls_to_bind_the_columns"></a> Aggiunta delle chiamate a RFX per l'associazione delle colonne  
 Per effettuare l'associazione dinamica, è necessario inserire le chiamate a RFX per le nuove colonne nella funzione `DoFieldExchange`.  
  
##### Per aggiungere in modo dinamico le chiamate a RFX per le nuove colonne  
  
1.  Nella funzione membro `DoFieldExchange` del recordset principale aggiungere il codice per lo scorrimento ciclico dell'elenco delle nuove colonne \(Colonne da associare in modo dinamico\).  In ogni ciclo estrarre il nome di una colonna dall'elenco Colonne da associare in modo dinamico e il valore risultante per la colonna dall'elenco Valori di colonna dinamici.  Passare questi elementi a una chiamata a una funzione RFX appropriata per il tipo di dati della colonna.  Per le descrizioni degli elenchi, vedere [Elenchi di colonne](#_core_lists_of_columns).  
  
 In genere, nelle chiamate alla funzione `RFX_Text` vengono estratti gli oggetti `CString` dagli elenchi, come riportato nelle righe di codice seguenti, dove Colonne da associare in modo dinamico è un oggetto `CStringList` denominato `m_listName` e Valori di colonna dinamici è un oggetto `CStringList` denominato `m_listValue`:  
  
```  
RFX_Text( pFX,   
            m_listName.GetNext( posName ),   
            m_listValue.GetNext( posValue ));  
```  
  
 Per ulteriori informazioni sulle funzioni RFX, vedere [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md) in *Riferimenti alla libreria di classi*.  
  
> [!TIP]
>  Se le nuove colonne hanno tipi di dati diversi, utilizzare nel ciclo un'istruzione switch per chiamare la funzione RFX appropriata per ciascun tipo.  
  
 Quando il framework chiama `DoFieldExchange` durante il processo **Open** per associare le colonne al recordset, le chiamate a RFX per le colonne statiche associano tali colonne.  Durante il ciclo vengono quindi eseguite ripetute chiamate alle funzioni RFX per ottenere le colonne dinamiche.  
  
## Vedere anche  
 [Recordset \(ODBC\)](../../data/odbc/recordset-odbc.md)   
 [Recordset: gestione di dati di grandi dimensioni \(ODBC\)](../../data/odbc/recordset-working-with-large-data-items-odbc.md)