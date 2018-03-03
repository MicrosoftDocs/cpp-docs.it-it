---
title: 'Recordset: Creazione e chiusura di recordset (ODBC) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- ODBC recordsets, creating
- recordsets, creating
- recordsets, opening
- recordsets, closing
- ODBC recordsets, closing
- ODBC recordsets, opening
ms.assetid: 8d2aac23-4396-4ce2-8c60-5ecf1b360d3d
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 9ec09c08aa4730c11960d675aef68c8a1007c900
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="recordset-creating-and-closing-recordsets-odbc"></a>Recordset: creazione e chiusura di recordset (ODBC)
Questo argomento si applica alle classi ODBC MFC.  
  
 Per utilizzare un recordset, costruire un oggetto recordset e quindi chiamare il relativo **aprire** funzione membro per eseguire la query del recordset e selezionare i record. Dopo aver terminato il recordset, chiudere ed eliminare definitivamente l'oggetto.  
  
 Questo argomento viene illustrato:  
  
-   [Quando e come creare un oggetto recordset](#_core_creating_recordsets_at_run_time).  
  
-   [Quando e come è possibile qualificare il funzionamento del recordset da applicazione di parametri, il filtro, ordinamento o il blocco](#_core_setting_recordset_options).  
  
-   [Quando e come chiudere un oggetto recordset](#_core_closing_a_recordset).  
  
##  <a name="_core_creating_recordsets_at_run_time"></a>Creazione di recordset in fase di esecuzione  
 Prima di creare oggetti recordset nel programma, è in genere necessario scrivere classi recordset specifiche dell'applicazione. Per ulteriori informazioni su questo passaggio preliminare, vedere [aggiunta di un Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md).  
  
 Aprire un oggetto dynaset o snapshot quando è necessario selezionare i record da un'origine dati. Il tipo di oggetto da creare dipende è necessario eseguire con i dati nell'applicazione e su quali il driver ODBC supporta. Per ulteriori informazioni, vedere [Dynaset](../../data/odbc/dynaset.md) e [Snapshot](../../data/odbc/snapshot.md).  
  
#### <a name="to-open-a-recordset"></a>Per aprire un recordset  
  
1.  Creare un oggetto del `CRecordset`-classe derivata.  
  
     È possibile costruire l'oggetto nell'heap o sullo stack frame di una funzione.  
  
2.  Facoltativamente, modificare il funzionamento predefinito del recordset. Per le opzioni disponibili, vedere [impostazione delle opzioni di Recordset](#_core_setting_recordset_options).  
  
3.  Chiamare l'oggetto [aprire](../../mfc/reference/crecordset-class.md#open) funzione membro.  
  
 Nel costruttore, passare un puntatore a un `CDatabase` dell'oggetto o passare **NULL** per utilizzare una password temporanea oggetto di database che il framework crea e apre in base alla stringa di connessione restituita dal [GetDefaultConnect ](../../mfc/reference/crecordset-class.md#getdefaultconnect) funzione membro. Il `CDatabase` oggetto potrebbe essere già connessi a un'origine dati.  
  
 La chiamata a **aprire** utilizza SQL per selezionare i record dall'origine dati. Il primo record selezionato (se presente) è il record corrente. I valori dei campi del record sono archiviati nei membri dati di campo dell'oggetto recordset. Se sono stati selezionati record, sia il `IsBOF` e `IsEOF` funzioni membro restituiscono 0.  
  
 Nel [aprire](../../mfc/reference/crecordset-class.md#open) chiamata, è possibile:  
  
-   Specificare se il recordset è un dynaset o snapshot. Per impostazione predefinita i recordset vengono aperti come snapshot. In alternativa, è possibile specificare un recordset forward-only, che consente solo lo scorrimento in avanti, un record alla volta.  
  
     Per impostazione predefinita, un recordset utilizza il tipo predefinito memorizzato nel `CRecordset` membro dati **m_nDefaultType**. Procedure guidate di scrivono codice per inizializzare **m_nDefaultType** per il tipo di recordset. Invece di accettazione di questa impostazione predefinita, è possibile sostituire un altro tipo di recordset.  
  
-   Specificare una stringa per sostituire il valore predefinito SQL **selezionare** istruzione che crea il recordset.  
  
-   Specificare se il recordset è di sola lettura o solo di Accodamento. Recordset consente completo l'aggiornamento per impostazione predefinita, ma è possibile limitare che per l'aggiunta di record solo o è possibile disabilitare tutti gli aggiornamenti.  
  
 Nell'esempio seguente viene illustrato come aprire un oggetto di snapshot di sola lettura della classe `CStudentSet`, una classe specifica dell'applicazione:  
  
```  
// Construct the snapshot object  
CStudentSet rsStudent( NULL );  
// Set options if desired, then open the recordset  
if(!rsStudent.Open(CRecordset::snapshot, NULL, CRecordset::readOnly))  
    return FALSE;  
// Use the snapshot to operate on its records...  
```  
  
 Dopo aver chiamato **aprire**, utilizzare i membri di dati e funzioni membro dell'oggetto per lavorare con i record. In alcuni casi, si potrebbe voler requery o aggiornare il recordset per includere le modifiche apportate nell'origine dati. Per ulteriori informazioni, vedere [Recordset: ripetizione di query in un Recordset (ODBC)](../../data/odbc/recordset-requerying-a-recordset-odbc.md).  
  
> [!TIP]
>  La stringa di connessione utilizzata durante lo sviluppo potrebbe non essere la stessa stringa di connessione necessarie per gli utenti finali. Per informazioni sulla generalizzazione dell'applicazione in proposito, vedere [origine dati: gestione delle connessioni (ODBC)](../../data/odbc/data-source-managing-connections-odbc.md).  
  
##  <a name="_core_setting_recordset_options"></a>Impostazione delle opzioni di Recordset  
 Dopo la costruzione dell'oggetto recordset ma prima di chiamare **aprire** per selezionare i record, è possibile impostare alcune opzioni per controllare il funzionamento del recordset. Per tutti i recordset, è possibile:  
  
-   Specificare un [filtro](../../data/odbc/recordset-filtering-records-odbc.md) di selezione dei record.  
  
-   Specificare un [ordinamento](../../data/odbc/recordset-sorting-records-odbc.md) per i record.  
  
-   Specificare [parametri](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md) per selezionare i record utilizzando le informazioni ottenute o calcolate in fase di esecuzione.  
  
 Se le condizioni, è anche possibile impostare l'opzione seguente:  
  
-   Se il recordset è aggiornabile e supporta le opzioni di blocco, specificare il [blocco](../../data/odbc/recordset-locking-records-odbc.md) metodo utilizzato per gli aggiornamenti.  
  
> [!NOTE]
>  Per influire sulla selezione di record, è necessario impostare queste opzioni prima di chiamare il **aprire** funzione membro.  
  
##  <a name="_core_closing_a_recordset"></a>Chiusura di un Recordset  
 Al termine di un oggetto Recordset, è necessario eliminarlo e deallocare la memoria.  
  
#### <a name="to-close-a-recordset"></a>Per chiudere un recordset  
  
1.  Chiamare il relativo [Chiudi](../../mfc/reference/crecordset-class.md#close) funzione membro.  
  
2.  Eliminare definitivamente l'oggetto recordset.  
  
     Se è stata dichiarata nello stack frame di una funzione, l'oggetto viene eliminato automaticamente quando l'oggetto esce dall'ambito. In caso contrario, utilizzare il **eliminare** operatore.  
  
 **Chiudi** libera del recordset **HSTMT** gestire. Ma non elimina l'oggetto C++.  
  
## <a name="see-also"></a>Vedere anche  
 [Recordset (ODBC)](../../data/odbc/recordset-odbc.md)   
 [Recordset: Scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md)   
 [Recordset: aggiunta, aggiornamento ed eliminazione di record (ODBC)](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md)