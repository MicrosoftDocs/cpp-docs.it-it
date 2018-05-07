---
title: 'Recordset: Applicazione di filtri di record (ODBC) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- data [MFC], filtering
- recordsets [C++], filtering
- filtering recordsets
- ODBC recordsets [C++], filtering records
- filters [C++], recordset object
ms.assetid: 5c075f37-c837-464d-90c1-d028a9d1c175
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 4b4860726fa77d7b852290d8ea4680fe1bbbd86f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="recordset-filtering-records-odbc"></a>Recordset: applicazione di filtri ai record (ODBC)
Questo argomento si applica alle classi ODBC MFC.  
  
 In questo argomento viene illustrato come filtrare un recordset in modo che seleziona solo un sottoinsieme specifico di record disponibili. Potrebbe ad esempio, si desidera selezionare solo le sezioni di classe per un determinato corso, ad esempio MATH101. Un filtro è una condizione di ricerca definita dal contenuto di un database SQL **dove** clausola. Quando il framework aggiunge all'istruzione SQL del recordset, il **dove** clausola vincola la selezione.  
  
 È necessario specificare il filtro di un oggetto recordset dopo la creazione dell'oggetto, ma prima di chiamare il relativo **aprire** funzione membro (o prima di chiamare il **Requery** funzione membro per un oggetto recordset esistente oggetto il cui **aprire** funzione membro è stata chiamata in precedenza).  
  
#### <a name="to-specify-a-filter-for-a-recordset-object"></a>Per specificare un filtro per un oggetto recordset  
  
1.  Creare un nuovo oggetto recordset (o preparare una chiamata a **Requery** per un oggetto esistente).  
  
2.  Impostare il valore dell'oggetto [m_strFilter](../../mfc/reference/crecordset-class.md#m_strfilter) (membro dati).  
  
     Il filtro è una stringa con terminazione null che contiene il contenuto dell'istruzione SQL **in** clausola ma non la parola chiave **in**. Ad esempio, utilizzare:  
  
    ```  
    m_pSet->m_strFilter = "CourseID = 'MATH101'";  
    ```  
  
     not  
  
    ```  
    m_pSet->m_strFilter = "WHERE CourseID = 'MATH101'";  
    ```  
  
    > [!NOTE]
    >  La stringa letterale "MATH101" viene visualizzata con virgolette singole precedente. Nella specifica ODBC di SQL, le virgolette singole vengono utilizzate per indicare un valore letterale di stringa di caratteri. Consultare la documentazione del driver ODBC per i requisiti di delimitazione del DBMS in questa situazione. Questa sintassi è illustrata in modo più dettagliato alla fine di questo argomento.  
  
3.  Impostare le opzioni che necessarie, come l'ordinamento, la modalità di blocco o parametri. Se si specifica un parametro è particolarmente utile. Per informazioni sull'applicazione di parametri del filtro, vedere [Recordset: applicazione di parametri a un Recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md).  
  
4.  Chiamare **aprire** per il nuovo oggetto (o **Requery** per un oggetto aperto in precedenza).  
  
> [!TIP]
>  Utilizzo di parametri del filtro è potenzialmente il metodo più efficiente per il recupero di record.  
  
> [!TIP]
>  I filtri per recordset sono utili per [unione](../../data/odbc/recordset-performing-a-join-odbc.md) tabelle e per l'utilizzo di [parametri](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md) in base alle informazioni ottenute o calcolate in fase di esecuzione.  
  
 Il recordset seleziona solo i record che soddisfano la condizione di ricerca specificato. Ad esempio, per specificare il filtro corso descritto in precedenza (supponendo che una variabile `strCourseID` attualmente impostato, ad esempio, per "MATH101"), eseguire le operazioni seguenti:  
  
```  
// Using the recordset pointed to by m_pSet  
  
// Set the filter  
m_pSet->m_strFilter = "CourseID = " + strCourseID;   
  
// Run the query with the filter in place  
if ( m_pSet->Open( CRecordset::snapshot, NULL, CRecordset::readOnly ) )  
  
// Use the recordset  
```  
  
 Il recordset contiene record per tutte le sezioni di classe per MATH101.  
  
 Si noti come la stringa di filtro è stata impostata nell'esempio precedente, utilizzando una variabile di stringa. Questo è l'utilizzo tipico. Ma si supponga che si desidera specificare il valore letterale 100 per l'ID del corso. Il codice seguente viene illustrato come impostare la stringa di filtro correttamente con un valore letterale:  
  
```  
m_strFilter = "StudentID = '100'";   // correct  
```  
  
 Si noti l'uso di virgolette singole. Se si imposta la stringa di filtro direttamente, la stringa di filtro è **non**:  
  
```  
m_strFilter = "StudentID = 100";   // incorrect for some drivers  
```  
  
 Le virgolette sopra è conforme alla specifica ODBC, ma alcuni DBMS potrebbe richiedere altre virgolette. Per ulteriori informazioni, vedere [SQL: del Recordset SQL istruzione (ODBC personalizzazione)](../../data/odbc/sql-customizing-your-recordsets-sql-statement-odbc.md).  
  
> [!NOTE]
>  Se si sceglie di eseguire l'override della stringa del recordset predefinito SQL passando una stringa SQL personalizzata per **aprire**, non è necessario impostare un filtro se la stringa personalizzata è un **dove** clausola. Per ulteriori informazioni ignorando l'impostazione predefinita, SQL, vedere [SQL: del Recordset SQL istruzione (ODBC personalizzazione)](../../data/odbc/sql-customizing-your-recordsets-sql-statement-odbc.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Recordset (ODBC)](../../data/odbc/recordset-odbc.md)   
 [Recordset: Ordinamento dei record (ODBC)](../../data/odbc/recordset-sorting-records-odbc.md)   
 [Recordset: Selezione dei record (ODBC)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md)   
 [Recordset: Aggiornamento dei record (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md)   
 [Recordset: blocco dei record (ODBC)](../../data/odbc/recordset-locking-records-odbc.md)