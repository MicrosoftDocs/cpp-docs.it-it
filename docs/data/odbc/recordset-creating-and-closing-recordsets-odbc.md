---
title: "Recordset: creazione e chiusura di recordset (ODBC) | Microsoft Docs"
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
  - "recordset ODBC, chiusura"
  - "recordset ODBC, creazione"
  - "recordset ODBC, apertura"
  - "recordset, chiusura"
  - "recordset, creazione"
  - "recordset, apertura"
ms.assetid: 8d2aac23-4396-4ce2-8c60-5ecf1b360d3d
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Recordset: creazione e chiusura di recordset (ODBC)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'argomento è relativo alle classi ODBC MFC.  
  
 Per utilizzare un recordset, costruire un oggetto recordset e chiamare la relativa funzione membro **Open** per eseguire la query del recordset e selezionare i record.  Una volta utilizzato il recordset, chiudere ed eliminare l'oggetto.  
  
 In questo argomento vengono fornite informazioni su:  
  
-   [Creazione di recordset in fase di esecuzione](#_core_creating_recordsets_at_run_time).  
  
-   [Impostazione delle opzioni del recordset](#_core_setting_recordset_options).  
  
-   [Chiusura di un recordset](#_core_closing_a_recordset).  
  
##  <a name="_core_creating_recordsets_at_run_time"></a> Creazione di recordset in fase di esecuzione  
 Prima di creare oggetti recordset nel programma, in genere si creano le classi dei recordset specifiche dell'applicazione.  Per ulteriori informazioni su questa operazione preliminare, vedere [Aggiunta di un consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md).  
  
 Quando si desidera selezionare record da un'origine dati, aprire un oggetto dynaset o snapshot.  Il tipo di oggetto da creare dipende dall'utilizzo che si farà dei dati nell'applicazione e dalle funzionalità supportate dal driver ODBC.  Per ulteriori informazioni, vedere [Dynaset](../../data/odbc/dynaset.md) e [Snapshot](../../data/odbc/snapshot.md).  
  
#### Per aprire un recordset  
  
1.  Creare un oggetto della classe derivata da `CRecordset`.  
  
     È possibile creare l'oggetto nell'heap o nello stack frame di una funzione.  
  
2.  Se lo si desidera, modificare il funzionamento predefinito del recordset.  Per informazioni sulle opzioni disponibili, vedere [Impostazione delle opzioni del recordset](#_core_setting_recordset_options).  
  
3.  Chiamare la funzione membro [Open](../Topic/CRecordset::Open.md) dell'oggetto.  
  
 Nel costruttore passare un puntatore a un oggetto `CDatabase` o passare il valore **NULL** per utilizzare un oggetto di database temporaneo costruito e aperto dal framework in base alla stringa di connessione restituita dalla funzione membro [GetDefaultConnect](../Topic/CRecordset::GetDefaultConnect.md).  È possibile che l'oggetto `CDatabase` sia già connesso a un'origine dati.  
  
 La chiamata a **Open** utilizza SQL per selezionare i record dall'origine dati.  Il primo record selezionato, se presente, è il record corrente.  I valori dei campi di questo record vengono memorizzati nei membri dati di campo dell'oggetto recordset.  Se sono stati selezionati record, le funzioni membro `IsBOF` e `IsEOF` restituiscono 0.  
  
 Nella chiamata a [Open](../Topic/CRecordset::Open.md) è possibile effettuare le operazioni descritte di seguito.  
  
-   Specificare se il recordset è un dynaset o uno snapshot.  Per impostazione predefinita i recordset vengono aperti come snapshot.  In alternativa, è possibile specificare un recordset di tipo forward\-only, che consente di eseguire solo lo scorrimento in avanti di un record per volta.  
  
     Per impostazione predefinita un recordset utilizza il tipo predefinito memorizzato nel membro dati **m\_nDefaultType** di `CRecordset`.  Le procedure guidate scrivono il codice necessario per inizializzare **m\_nDefaultType** per il tipo di recordset selezionato.  È possibile specificare un tipo di recordset diverso da quello predefinito.  
  
-   Specificare una stringa che sostituisca l'istruzione SQL **SELECT** predefinita creata dal recordset.  
  
-   Specificare se il recordset è in sola lettura o di solo accodamento.  Per impostazione predefinita, i recordset supportano l'aggiornamento completo. È tuttavia possibile disabilitare qualsiasi aggiornamento o limitare l'aggiornamento solo all'aggiunta di nuovi record.  
  
 Nell'esempio seguente viene illustrata l'apertura di un oggetto snapshot in sola lettura della classe `CStudentSet`, una classe specifica dell'applicazione:  
  
```  
// Construct the snapshot object  
CStudentSet rsStudent( NULL );  
// Set options if desired, then open the recordset  
if(!rsStudent.Open(CRecordset::snapshot, NULL, CRecordset::readOnly))  
    return FALSE;  
// Use the snapshot to operate on its records...  
```  
  
 Dopo avere chiamato **Open**, utilizzare i record mediante le funzioni membro e i membri dati dell'oggetto.  In alcuni casi, è consigliabile ripetere una query o aggiornare il recordset, in modo da includere le modifiche apportate all'origine dati.  Per ulteriori informazioni, vedere [Recordset: ripetizione di una query in un recordset \(ODBC\)](../../data/odbc/recordset-requerying-a-recordset-odbc.md).  
  
> [!TIP]
>  La stringa di connessione utilizzata durante lo sviluppo potrebbe non coincidere con quella necessaria per gli utenti finali.  Per informazioni sulla generalizzazione dell'applicazione a questo proposito, vedere [Origine dati: gestione delle connessioni \(ODBC\)](../../data/odbc/data-source-managing-connections-odbc.md).  
  
##  <a name="_core_setting_recordset_options"></a> Impostazione delle opzioni del recordset  
 Dopo la costruzione dell'oggetto recordset, ma prima della chiamata a **Open** per la selezione dei record, si consiglia di impostare alcune opzioni per controllare il funzionamento del recordset.  Per tutti i recordset, è possibile eseguire le seguenti operazioni:  
  
-   Specificare un [filtro](../../data/odbc/recordset-filtering-records-odbc.md) per aggiungere vincoli alla selezione dei record.  
  
-   Specificare un criterio di [ordinamento](../../data/odbc/recordset-sorting-records-odbc.md) per i record.  
  
-   Specificare [parametri](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md), in modo da potere selezionare i record utilizzando le informazioni recuperate o calcolate in fase di esecuzione.  
  
 Se le condizioni lo consentono, è inoltre possibile impostare l'opzione seguente.  
  
-   Se il recordset è aggiornabile e supporta le opzioni di blocco, specificare il metodo di [blocco](../../data/odbc/recordset-locking-records-odbc.md) per gli aggiornamenti.  
  
> [!NOTE]
>  Per applicare queste opzioni alla selezione di record, è necessario impostarle prima di chiamare la funzione membro **Open**.  
  
##  <a name="_core_closing_a_recordset"></a> Chiusura di un recordset  
 Dopo aver utilizzato il recordset, è necessario eliminarlo e liberare la memoria a esso allocata.  
  
#### Per chiudere un recordset  
  
1.  Chiamare la funzione membro [Close](../Topic/CRecordset::Close.md) del recordset.  
  
2.  Eliminare l'oggetto recordset.  
  
     Se l'oggetto è stato dichiarato nello stack frame di una funzione, verrà automaticamente eliminato quando non rientra più nell'area di validità.  In caso contrario, utilizzare l'operatore **delete**.  
  
 **Close** libera l'handle **HSTMT** del recordset,  ma non elimina l'oggetto C\+\+.  
  
## Vedere anche  
 [Recordset \(ODBC\)](../../data/odbc/recordset-odbc.md)   
 [Recordset: scorrimento \(ODBC\)](../../data/odbc/recordset-scrolling-odbc.md)   
 [Recordset: aggiunta, aggiornamento ed eliminazione di record \(ODBC\)](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md)