---
title: 'Recordset: Applicazione di parametri a un Recordset (ODBC) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- parameterizing recordsets
- ODBC recordsets, parameterizing
- recordsets, parameterizing
- passing parameters, to queries at runtime
ms.assetid: 7d1dfeb6-5ee0-45e2-aacc-63bc52a465cd
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: e282bf795435d21264ff4ab62575b9315781a0e0
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="recordset-parameterizing-a-recordset-odbc"></a>Recordset: applicazione di parametri a un recordset (ODBC)
Questo argomento si applica alle classi ODBC MFC.  
  
 In alcuni casi è consigliabile essere in grado di selezionare i record in fase di esecuzione utilizzando le informazioni calcolate o ottenuto dall'utente finale. Recordset parametri consentono di raggiungere tale obiettivo.  
  
 Questo argomento viene illustrato:  
  
-   [Lo scopo di un recordset con parametri](#_core_parameterized_recordsets).  
  
-   [Quando e perché si potrebbe voler parametri](#_core_when_to_use_parameters).  
  
-   [Come dichiarare i membri dati della classe recordset di parametro](#_core_parameterizing_your_recordset_class).  
  
-   [Come passare le informazioni sui parametri a un oggetto recordset in fase di esecuzione](#_core_passing_parameter_values_at_run_time).  
  
##  <a name="_core_parameterized_recordsets"></a>Recordset con parametri  
 Un recordset con parametri consente di passare le informazioni di parametro in fase di esecuzione. Ciò produce due risultati importanti:  
  
-   Ma potrebbe causare una maggiore velocità di esecuzione.  
  
-   Consente di compilare una query in fase di esecuzione, in base alle informazioni non disponibili in fase di progettazione, quali le informazioni specificate dall'utente finale o calcolate in fase di esecuzione.  
  
 Quando si chiama **aprire** per eseguire la query, il recordset utilizza le informazioni sui parametri per completare il **SQL SELECT** istruzione. È possibile parametrizzare qualsiasi recordset.  
  
##  <a name="_core_when_to_use_parameters"></a>Utilizzo dei parametri  
 Utilizzi tipici per i parametri includono:  
  
-   Passaggio di argomenti in fase di esecuzione per una query predefinita.  
  
     Per passare parametri a una stored procedure, è necessario specificare un ODBC personalizzato completo **CHIAMARE** istruzione, ovvero con i segnaposto dei parametri, quando si chiama **aprire**, si esegue l'override di istruzione SQL predefinita del recordset. Per ulteriori informazioni, vedere [CRecordset:: Open](../../mfc/reference/crecordset-class.md#open) nel *riferimenti alla libreria di classi* e [SQL: del Recordset SQL istruzione (ODBC personalizzazione)](../../data/odbc/sql-customizing-your-recordsets-sql-statement-odbc.md) e [ Recordset: Dichiarazione di una classe per una Query già definita (ODBC)](../../data/odbc/recordset-declaring-a-class-for-a-predefined-query-odbc.md).  

  
-   Esecuzione di numerose ripetizioni di query con le informazioni di parametro diversi.  
  
     Per ogni volta che l'utente finale cerca informazioni per un determinato studente nel database di registrazione studenti, ad esempio, è possibile specificare nome o ID dello studente come parametro ottenuto dall'utente. Quindi, quando si chiama il recordset **Requery** funzione membro, la query seleziona solo i record di tale studente.  
  
     Stringa di filtro del recordset, memorizzata in **m_strFilter**, potrebbe essere simile al seguente:  
  
    ```  
    "StudentID = ?"  
    ```  
  
     Si supponga che ottenere l'ID dello studente nella variabile `strInputID`. Quando si imposta un parametro `strInputID` (ad esempio, l'ID studente 100), il valore della variabile è associato al segnaposto del parametro rappresentato dal "?" nella stringa di filtro.  
  
     Assegnare il valore del parametro come segue:  
  
    ```  
    strInputID = "100";  
    ...  
    m_strParam = strInputID;  
    ```  
  
     Non si desidera impostare una stringa di filtro in questo modo:  
  
    ```  
    m_strFilter = "StudentID = 100";   // 100 is incorrectly quoted  
                                       // for some drivers  
    ```  
  
     Per una discussione su come utilizzare le virgolette correttamente per le stringhe di filtro, vedere [Recordset: applicazione di filtri dei record (ODBC)](../../data/odbc/recordset-filtering-records-odbc.md).  
  
     Il valore del parametro è diverso ogni volta che il recordset requery per un nuovo ID di studenti.  
  
    > [!TIP]
    >  Utilizzo di un parametro è più efficiente rispetto a un filtro. Per un recordset con parametri, il database deve elaborare un database SQL **selezionare** istruzione una sola volta. Per un recordset filtrato senza parametri, il **selezionare** istruzione deve essere elaborata ogni volta che si **Requery** con un nuovo valore di filtro.  
  
 Per ulteriori informazioni sui filtri, vedere [Recordset: applicazione di filtri dei record (ODBC)](../../data/odbc/recordset-filtering-records-odbc.md).  
  
##  <a name="_core_parameterizing_your_recordset_class"></a>Applicazione di parametri della classe Recordset  
  
> [!NOTE]
>  Questa sezione si applica agli oggetti derivati da `CRecordset` in quale riga bulk recupero non è stato implementato. Se si utilizza di massa di righe recupero l'implementazione dei parametri è un processo simile. Per ulteriori informazioni, vedere [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
 Prima di creare la classe del recordset, determinare i parametri necessari, quali sono i tipi di dati e come verranno utilizzati dal recordset.  
  
#### <a name="to-parameterize-a-recordset-class"></a>Per parametrizzare una classe di recordset  
  
1.  Eseguire il [Creazione guidata Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md) da **Aggiungi classe** per creare la classe.  
  
2.  Specificare i membri di dati campo per le colonne del recordset.  
  
3.  Dopo la procedura guidata scrive la classe in un file nel progetto, passare al file con estensione h e aggiungere manualmente uno o più membri di dati di parametro alla dichiarazione di classe. L'aggiunta può avere un aspetto analogo al seguente, parte di una classe snapshot è progettato per rispondere alla query "che gli studenti sono nella classe senior?"  
  
    ```  
    class CStudentSet : public CRecordset  
    {  
    // Field/Param Data  
        CString m_strFirstName;  
        CString m_strLastName;  
        CString m_strStudentID;  
        CString m_strGradYear;  
  
        CString m_strGradYrParam;  
    };  
    ```  
  
     Aggiungere i membri di dati di parametro dopo i membri di dati del campo generato dalla procedura guidata. La convenzione consiste nell'aggiungere la parola "Param" per ogni nome di parametro definiti dall'utente.  
  
4.  Modificare il [DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange) definizione di funzione membro nel file con estensione cpp. Aggiungere una chiamata di funzione RFX per ogni membro dati del parametro che è stato aggiunto alla classe. Per informazioni sulla scrittura delle funzioni RFX, vedere [campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md). Anteporre RFX per i parametri con una singola chiamata a:  
  
    ```  
    pFX->SetFieldType( CFieldExchange::param );  
    // RFX calls for parameter data members  
    ```  
  
5.  Nel costruttore della classe recordset, incrementare il numero di parametri, `m_nParams`.  
  
     Per informazioni, vedere [campi di record: utilizzo del codice della procedura guidata](../../data/odbc/record-field-exchange-working-with-the-wizard-code.md).  
  
6.  Quando si scrive codice che crea un oggetto recordset di questa classe, inserire un "?" (punto interrogativo) in ogni punto stringhe dell'istruzione SQL in un parametro da sostituire.  
  
     In fase di esecuzione "?" i segnaposti vengono sostituiti, in ordine, per i valori dei parametri passati. Il primo membro di dati di parametro impostato dopo la [SetFieldType](../../mfc/reference/cfieldexchange-class.md#setfieldtype) sostituisce la prima "?"nella stringa SQL, il secondo membro dati di parametro sostituisce la seconda"?" e così via.  
  
> [!NOTE]
>  L'ordine dei parametri è importante: l'ordine delle RFX chiamate per i parametri nel `DoFieldExchange` funzione deve corrispondere all'ordine dei segnaposto di parametri nella stringa SQL.  
  
> [!TIP]

>  La stringa da utilizzare più probabile è la stringa specificata (se presente) per la classe [m_strFilter](../../mfc/reference/crecordset-class.md#m_strfilter) (membro dati), ma alcuni driver ODBC potrebbero consentire parametri in altre clausole SQL.  
  
##  <a name="_core_passing_parameter_values_at_run_time"></a>Passaggio di valori di parametro in fase di esecuzione  
 È necessario specificare i valori dei parametri prima di chiamare **aprire** (per un nuovo oggetto recordset) o **Requery** (per un oggetto esistente).  
  
#### <a name="to-pass-parameter-values-to-a-recordset-object-at-run-time"></a>Per passare valori di parametro a un oggetto recordset in fase di esecuzione  
  
1.  Creare l'oggetto recordset.  
  
2.  Preparare una o più stringhe, ad esempio il **m_strFilter** stringa, contenente l'istruzione SQL o parti di esso. Inserire "?" segnaposto in cui le informazioni sui parametri da passare.  
  
3.  Assegnare un valore di parametro in fase di esecuzione per ogni membro dati del parametro dell'oggetto.  
  
4.  Chiamare il **aprire** funzione membro (o **Requery**, per un oggetto recordset esistente).  
  
 Si supponga, ad esempio, che si desidera specificare una stringa di filtro per il recordset utilizzando le informazioni ottenute in fase di esecuzione. Si presuma un recordset della classe `CStudentSet` in precedenza, chiamato `rsStudents` e si desidera ripetere la query per un particolare tipo di informazioni di studenti.  
  
```  
// Set up a filter string with   
// parameter placeholders  
rsStudents.m_strFilter = "GradYear <= ?";  
  
// Obtain or calculate parameter values   
// to pass--simply assigned here   
CString strGradYear = GetCurrentAcademicYear( );  
  
// Assign the values to parameter data members  
rsStudents.m_strGradYrParam = strGradYear;  
  
// Run the query  
if( !rsStudents.Requery( ) )  
    return FALSE;  
```  
  
 Il recordset contiene record per i partecipanti i cui record soddisfano le condizioni specificate per il filtro, che è stato costruito da parametri in fase di esecuzione. In questo caso, il recordset contiene record di tutti gli studenti senior.  
  
> [!NOTE]
>  Se necessario, è possibile impostare il valore di un membro di dati del parametro su Null, utilizzando [SetParamNull](../../mfc/reference/crecordset-class.md#setparamnull). È inoltre possibile verificare se un membro dati del parametro è Null, utilizzando [IsFieldNull](../../mfc/reference/crecordset-class.md#isfieldnull).  
  
## <a name="see-also"></a>Vedere anche  
 [Recordset (ODBC)](../../data/odbc/recordset-odbc.md)   
 [Recordset: Aggiunta, aggiornamento ed eliminazione di record (ODBC)](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md)   
 [Recordset: selezione dei record (ODBC)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md)