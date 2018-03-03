---
title: 'Recordset: Architettura (ODBC) | Documenti Microsoft'
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
- recordsets, data members
- field data members, recordset architecture
- field data members
- m_nParams data member, recordsets
- recordsets, architecture
- parameter data members in recordsets
- m_nFields data member
- ODBC recordsets, architecture
- m_nParams data member
- m_nFields data member, recordsets
ms.assetid: 47555ddb-11be-4b9e-9b9a-f2931764d298
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 169d371327137cf4f51ed10429eb5e9708a0e088
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="recordset-architecture-odbc"></a>Recordset: architettura (ODBC)
Questo argomento si applica alle classi ODBC MFC.  
  
 In questo argomento vengono descritti i membri di dati che costituiscono l'architettura di un oggetto recordset:  
  
-   [Membri dati di campo](#_core_field_data_members)  
  
-   [Membri dati di parametro](#_core_parameter_data_members)  
  
-   [Utilizzo di m_nFields e m_nParams membri dati](#_core_using_m_nfields_and_m_nparams)  
  
> [!NOTE]
>  Questo argomento si applica agli oggetti derivati da `CRecordset` in quale riga bulk recupero non è stato implementato. Se viene implementato il recupero di massa di righe, l'architettura è simile. Per comprendere le differenze, vedere [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
##  <a name="_core_a_sample_class"></a>Classe di esempio  
 Quando si utilizza il [Creazione guidata Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md) da **Aggiungi classe** procedura guidata per una dichiarazione di una classe derivata da `CRecordset`, la classe risultante ha la struttura generale illustrata di seguito semplice classe:  
  
```  
class CCourse : public CRecordset  
{  
public:  
   CCourse(CDatabase* pDatabase = NULL);  
   ...  
   CString m_strCourseID;  
   CString m_strCourseTitle;  
   CString m_strIDParam;  
};  
```  
  
 All'inizio della classe, la procedura guidata scrive un set di [membri dati di campo](#_core_field_data_members). Quando si crea la classe, è necessario specificare uno o più membri di dati di campo. Se la classe è con parametri, come l'esempio di classe è (con il membro dati `m_strIDParam`), è necessario aggiungere manualmente [membri dati di parametro](#_core_parameter_data_members). La procedura guidata non supporta l'aggiunta di parametri a una classe.  
  
##  <a name="_core_field_data_members"></a>Membri dati di campo  
 I membri più importanti della classe recordset sono i membri di dati del campo. Per ogni colonna selezionata dall'origine dati, la classe contiene un membro dati di tipo di dati appropriato per la colonna. Ad esempio, il [classe di esempio](#_core_a_sample_class) riportata all'inizio di questo argomento contiene due membri dati di campo, entrambi di tipo `CString`, denominato `m_strCourseID` e `m_strCourseTitle`.  
  
 Quando il recordset seleziona un set di record, il framework associa automaticamente le colonne del record corrente (dopo il **aprire** chiamata, il primo record è corrente) ai membri di dati di campo dell'oggetto. Ovvero, il framework utilizza il membro dati di campo appropriato come buffer in cui archiviare il contenuto di una colonna di record.  
  
 Quando si passa a un nuovo record, il framework utilizza i membri di dati campo per rappresentare il record corrente. Il framework aggiorna i membri di dati di campo, sostituendo i valori del record precedente. Membri dati di campo vengono utilizzati anche per aggiornare il record corrente e per l'aggiunta di nuovi record. Come parte del processo di aggiornamento di un record, specificare i valori di aggiornamento assegnando valori direttamente al membro dati di campo appropriato o membri.  
  
##  <a name="_core_parameter_data_members"></a>Membri dati di parametro  
 Se la classe è con parametri, contiene uno o più membri di dati di parametro. Una classe con parametri consente di basare una query di recordset informazioni ottenute o calcolate in fase di esecuzione.  
  
 In genere, il parametro consente di restringere la selezione, come nell'esempio seguente. In base il [classe di esempio](#_core_a_sample_class) all'inizio di questo argomento, l'oggetto recordset potrebbe eseguire l'istruzione SQL seguente:  
  
```  
SELECT CourseID, CourseTitle FROM Course WHERE CourseID = ?  
```  
  
 Il "?" è un segnaposto per un valore di parametro che viene fornito in fase di esecuzione. Quando si crea il recordset e impostare il relativo `m_strIDParam` un membro dati MATH101, l'istruzione SQL effettiva per il recordset diventa:  
  
```  
SELECT CourseID, CourseTitle FROM Course WHERE CourseID = MATH101  
```  
  
 Definendo i membri dati di parametro, indicare al framework sui parametri nella stringa SQL. Il framework associa il parametro, che consente a ODBC di sapere dove ottenere i valori da sostituire il segnaposto. Nell'esempio, il recordset risulta contiene solo il record della tabella Course con una colonna CourseID il cui valore è MATH101. Vengono selezionate tutte le colonne di questo record. È possibile specificare tutti i parametri (e i segnaposto) in base alle esigenze.  
  
> [!NOTE]
>  MFC non esegue alcuna operazione se stesso con i parametri, in particolare, non verrà eseguita una sostituzione di testo. Bensì indica ODBC dove ottenere il parametro. ODBC recupera i dati ed esegue la parametrizzazione necessaria.  
  
> [!NOTE]
>  L'ordine dei parametri è importante. Per informazioni su questa e altre informazioni sui parametri, vedere [Recordset: applicazione di parametri a un Recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md).  
  
##  <a name="_core_using_m_nfields_and_m_nparams"></a>Utilizzo di m_nFields e m_nParams  

 Anche quando una procedura guidata scrive un costruttore per la classe, viene inizializzato il [m_nFields](../../mfc/reference/crecordset-class.md#m_nfields) membro dati, che specifica il numero di [membri dati di campo](#_core_field_data_members) nella classe. Se si aggiungono [parametri](#_core_parameter_data_members) alla classe, è necessario aggiungere anche un'inizializzazione per il [m_nParams](../../mfc/reference/crecordset-class.md#m_nparams) membro dati, che specifica il numero di membri dati di parametro. Il framework utilizza questi valori per lavorare con i membri di dati.  
  
 Per ulteriori informazioni ed esempi, vedere [campi di record: utilizzo di RFX](../../data/odbc/record-field-exchange-using-rfx.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Recordset (ODBC)](../../data/odbc/recordset-odbc.md)   
 [Recordset: Dichiarazione di una classe per una tabella (ODBC)](../../data/odbc/recordset-declaring-a-class-for-a-table-odbc.md)   
 [Trasferimento di campi di record (RFX)](../../data/odbc/record-field-exchange-rfx.md)