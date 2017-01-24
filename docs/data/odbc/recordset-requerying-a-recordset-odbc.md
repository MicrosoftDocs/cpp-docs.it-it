---
title: "Recordset: ripetizione di una query in un recordset (ODBC) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "recordset ODBC, ripetizione di query"
  - "recordset, ripetizione di query"
  - "aggiornamento di recordset"
  - "Requery (metodo)"
  - "ripetizione di query in recordset"
ms.assetid: 4ebc3b5b-5b91-4f51-a967-245223c6b8e1
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Recordset: ripetizione di una query in un recordset (ODBC)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'argomento è relativo alle classi ODBC MFC.  
  
 In questo argomento vengono illustrati l'utilizzo di un oggetto recordset per ripetere una query, ovvero eseguire un aggiornamento di se stesso dal database, e le situazioni in cui eseguire tale operazione mediante la funzione membro [Requery](../Topic/CRecordset::Requery.md).  
  
 La ripetizione di una query di un recordset viene effettuata principalmente per le ragioni indicate di seguito.  
  
-   Aggiornare il recordset in relazione ai record aggiunti personalmente e a quelli aggiunti o eliminati da altri utenti \(quelli eliminati personalmente sono già riflessi nel recordset\).  
  
-   Aggiornare il recordset in base alle modifiche dei valori dei parametri.  
  
##  <a name="_core_bringing_the_recordset_up_to_date"></a> Aggiornamento dei recordset  
 Accade di frequente che si desideri ripetere una query dell'oggetto recordset al fine di aggiornarlo.  In un ambiente di database multiutente altri utenti possono apportare modifiche ai dati per tutta la durata del recordset.  Per ulteriori informazioni sui casi in cui il recordset riflette le modifiche apportate da altri utenti e quelli in cui i recordset di altri utenti riflettono le modifiche apportate dal programmatore, vedere [Recordset: aggiornamento dei record \(ODBC\)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md) e [Dynaset](../../data/odbc/dynaset.md).  
  
##  <a name="_core_requerying_based_on_new_parameters"></a> Ripetizione di una query in base a nuovi parametri  
 La funzione [Requery](../Topic/CRecordset::Requery.md) viene di frequente utilizzata per l'esecuzione di un'operazione ugualmente importante: la selezione di un nuovo gruppo di record in base alle modifiche dei valori dei parametri.  
  
> [!TIP]
>  Se si chiama **Requery** con diversi valori dei parametri anziché chiamare nuovamente **Open**, si otterrà probabilmente un incremento della velocità delle query.  
  
##  <a name="_core_requerying_dynasets_vs.._snapshots"></a> Ripetere una query su dynaset e gli snapshot  
 Poiché i dynaset vengono utilizzati per la presentazione di un recordset con dati dinamici e aggiornati, se si desidera riflettere le aggiunte di altri utenti, sarà necessario ripetere di frequente la query dei dynaset.  Gli snapshot, d'altra parte, sono utili in quanto offrono un contenuto statico affidabile per la preparazione di report, il calcolo di totali e così via.  Talvolta può tuttavia essere necessario ripetere una query anche negli snapshot.  In un ambiente multiutente è possibile che i dati dello snapshot perdano la sincronizzazione con l'origine dati man mano che altri utenti apportano modifiche al database.  
  
#### Per ripetere una query di un oggetto recordset  
  
1.  Chiamare la funzione membro [Requery](../Topic/CRecordset::Requery.md) dell'oggetto.  
  
 In alternativa, è possibile chiudere e riaprire il recordset originale.  In entrambi i casi, il nuovo recordset rappresenta lo stato corrente dell'origine dati.  
  
 Per un esempio, vedere [Visualizzazioni di record: inserimento di dati in una casella combinata di un nuovo recordset](../../data/filling-a-list-box-from-a-second-recordset-mfc-data-access.md).  
  
> [!TIP]
>  Per ottimizzare le prestazioni di **Requery**, non modificare il [filtro](../../data/odbc/recordset-filtering-records-odbc.md) o l'[ordinamento](../../data/odbc/recordset-sorting-records-odbc.md) del recordset.  Prima di chiamare **Requery** modificare solo il valore del parametro.  
  
 Se la chiamata a **Requery** non viene eseguita correttamente, è possibile rieseguirla o chiudere normalmente l'applicazione in uso.  È possibile che una chiamata a **Requery** o a **Open** non venga eseguita correttamente per una serie di ragioni, quali  un eventuale errore di rete, l'utilizzo, durante la chiamata, dell'accesso esclusivo da parte di un altro utente dopo il rilascio dei dati esistenti ma prima del recupero dei nuovi dati oppure un'eventuale eliminazione della tabella su cui è basato il recordset in uso.  
  
## Vedere anche  
 [Recordset \(ODBC\)](../../data/odbc/recordset-odbc.md)   
 [Recordset: associazione dinamica di colonne di dati \(ODBC\)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md)   
 [Recordset: creazione e chiusura di recordset \(ODBC\)](../../data/odbc/recordset-creating-and-closing-recordsets-odbc.md)