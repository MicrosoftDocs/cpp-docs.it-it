---
title: "Recordset: applicazione di parametri a un recordset (ODBC) | Microsoft Docs"
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
  - "recordset ODBC, applicazione di parametri"
  - "applicazione di parametri a recordset"
  - "passaggio di parametri, a query in fase di esecuzione"
  - "recordset, applicazione di parametri"
ms.assetid: 7d1dfeb6-5ee0-45e2-aacc-63bc52a465cd
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# Recordset: applicazione di parametri a un recordset (ODBC)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'argomento è relativo alle classi ODBC MFC.  
  
 Qualora si desideri selezionare i record in fase di esecuzione utilizzando informazioni calcolate o specificate dall'utente finale,  è possibile utilizzare i parametri del recordset.  
  
 In questo argomento vengono fornite informazioni su:  
  
-   [Recordset con parametri](#_core_parameterized_recordsets).  
  
-   [Utilizzo dei parametri](#_core_when_to_use_parameters).  
  
-   [Applicazione di parametri alla classe del recordset](#_core_parameterizing_your_recordset_class).  
  
-   [Passaggio dei valori dei parametri in fase di esecuzione](#_core_passing_parameter_values_at_run_time).  
  
##  <a name="_core_parameterized_recordsets"></a> Recordset con parametri  
 È possibile passare informazioni sui parametri in fase di esecuzione mediante un recordset con parametri.  Questa operazione produce due risultati importanti, descritti di seguito.  
  
-   Maggiore velocità di esecuzione.  
  
-   Compilazione di una query in fase di esecuzione basata su informazioni non disponibili in fase di progettazione, quali le informazioni specificate dall'utente finale o calcolate in fase di esecuzione.  
  
 Quando si chiama **Open** per eseguire la query, il recordset utilizza le informazioni dei parametri per completare la propria istruzione **SQL SELECT**.   È possibile applicare parametri a qualsiasi recordset.  
  
##  <a name="_core_when_to_use_parameters"></a> Utilizzo dei parametri  
 I parametri vengono in genere utilizzati per effettuare le operazioni descritte di seguito.  
  
-   Passaggio di argomenti a una query già definita in fase di esecuzione.  
  
     Per passare i parametri a una stored procedure, quando si chiama **Open** è necessario specificare un'istruzione ODBC personalizzata **CALL** completa, con i segnaposto dei parametri, eseguendo l'override dell'istruzione SQL predefinita del recordset.  Per ulteriori informazioni, vedere [CRecordset::Open](../Topic/CRecordset::Open.md) in *Riferimenti alla libreria di classi* e [SQL: personalizzazione dell'istruzione SQL del recordset \(ODBC\)](../../data/odbc/sql-customizing-your-recordset’s-sql-statement-odbc.md) e [Recordset: dichiarazione di una classe per una query già definita \(ODBC\)](../../data/odbc/recordset-declaring-a-class-for-a-predefined-query-odbc.md).  
  
-   Esecuzione di numerose ripetizioni di query utilizzando informazioni diverse sui parametri.  
  
     Per affrontare la situazione in cui l'utente finale cerca informazioni relative a un determinato studente nel database di registrazione degli studenti, ad esempio, è possibile impostare il nome o l'ID dello studente come parametro specificato dall'utente.  Quando, in un secondo momento, si chiama la funzione membro **Requery** del recordset, la query seleziona solo il record dello studente.  
  
     Di seguito è riportato un esempio di stringa di filtro del recordset, memorizzata in **m\_strFilter**.  
  
    ```  
    "StudentID = ?"  
    ```  
  
     Si supponga di recuperare l'ID dello studente nella variabile `strInputID`.  Quando si imposta un parametro su `strInputID`, ad esempio l'ID studente 100, il valore della variabile viene associato al segnaposto del parametro rappresentato dal carattere ? nella stringa del filtro.  
  
     Assegnare il valore del parametro come indicato di seguito.  
  
    ```  
    strInputID = "100";  
    ...  
    m_strParam = strInputID;  
    ```  
  
     Si consiglia di non impostare una stringa di filtro nel modo seguente:  
  
    ```  
    m_strFilter = "StudentID = 100";   // 100 is incorrectly quoted  
                                       // for some drivers  
    ```  
  
     Per una descrizione sul corretto utilizzo delle virgolette nelle stringhe dei filtri, vedere [Recordset: applicazione di filtri ai record \(ODBC\)](../../data/odbc/recordset-filtering-records-odbc.md).  
  
     Ogni volta che si ripete una query nel recordset per trovare l'ID di un nuovo studente, il valore del parametro risulta diverso.  
  
    > [!TIP]
    >  L'utilizzo di un parametro è più efficace rispetto all'utilizzo di un filtro.  Nel caso di un recordset con parametri, infatti, è necessario che il database elabori l'istruzione SQL **SELECT** una sola volta.  Nel caso di un recordset filtrato senza parametri, l'istruzione **SELECT** deve invece essere elaborata ogni volta che si esegue **Requery** con un nuovo valore di filtro.  
  
 Per ulteriori informazioni sui filtri, vedere [Recordset: applicazione di filtri ai record \(ODBC\)](../../data/odbc/recordset-filtering-records-odbc.md).  
  
##  <a name="_core_parameterizing_your_recordset_class"></a> Applicazione di parametri alla classe del recordset  
  
> [!NOTE]
>  Questa sezione si riferisce agli oggetti derivati da `CRecordset` per cui il recupero di massa di righe non è ancora stato implementato.  L'implementazione dei parametri è un processo simile al recupero di massa di righe.  Per ulteriori informazioni, vedere [Recordset: recupero di massa di record \(ODBC\)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
 Prima di creare la classe del recordset, è necessario determinare i parametri necessari, i relativi tipi di dati e come verranno utilizzati dal recordset.  
  
#### Per applicare parametri a una classe del recordset  
  
1.  Per creare la classe, eseguire la [Creazione guidata consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md) scegliendo il comando **Aggiungi classe**.  
  
2.  Specificare i membri dati di campo per le colonne del recordset.  
  
3.  Dopo la scrittura della classe in un file del progetto tramite la procedura guidata, passare al file con estensione h e aggiungere manualmente uno o più membri dati di parametro alla dichiarazione della classe.  L'operazione di aggiunta potrebbe essere simile all'esempio seguente, parte di una classe snapshot progettata per eseguire la query che recupera gli studenti che frequentano l'ultimo anno:  
  
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
  
     Aggiungere i membri dati di parametro dopo i membri dati di campo generati dalla procedura guidata.  Per convenzione si aggiunge la parola "Param" a ogni nome di parametro definito dall'utente.  
  
4.  Modificare la definizione della funzione membro [DoFieldExchange](../Topic/CRecordset::DoFieldExchange.md) nel file con estensione cpp.  Aggiungere una chiamata alle funzioni RFX per ciascun membro dati di parametro aggiunto alla classe.  Per informazioni sulla scrittura delle funzioni RFX, vedere [Trasferimento di campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).  Prima di chiamare RFX per i parametri, eseguire una singola chiamata a:  
  
    ```  
    pFX->SetFieldType( CFieldExchange::param );  
    // RFX calls for parameter data members  
    ```  
  
5.  Nel costruttore della classe del recordset incrementare il numero di parametri, `m_nParams`.  
  
     Per informazioni, vedere [Trasferimento di campi di record: utilizzo del codice della creazione guidata](../../data/odbc/record-field-exchange-working-with-the-wizard-code.md).  
  
6.  Quando si scrive il codice per creare un oggetto recordset di questa classe, inserire il carattere "?" \(punto interrogativo\) in ogni punto delle stringhe dell'istruzione SQL in cui deve essere inserito un parametro.  
  
     In fase di esecuzione i segnaposto "?" vengono sostituiti, in ordine, dai valori dei parametri passati.  Il primo membro dati di parametro impostato dopo la chiamata a [SetFieldType](../Topic/CFieldExchange::SetFieldType.md) sostituisce la prima occorrenza di "?" nella stringa SQL, il secondo membro dati di parametro sostituisce la seconda occorrenza di "?" e così via.  
  
> [!NOTE]
>  L'ordine dei parametri è importante, in quanto è necessario che l'ordine delle chiamate a RFX per i parametri nella funzione `DoFieldExchange` corrisponda a quello dei segnaposto dei parametri nella stringa SQL.  
  
> [!TIP]
>  In genere viene utilizzata la stringa specificata, se disponibile, per il membro dati [m\_strFilter](../Topic/CRecordset::m_strFilter.md) della classe. Tuttavia, alcuni driver ODBC consentono l'utilizzo di parametri in altre clausole SQL.  
  
##  <a name="_core_passing_parameter_values_at_run_time"></a> Passaggio dei valori dei parametri in fase di esecuzione  
 È necessario specificare i valori dei parametri prima di chiamare **Open** per un nuovo oggetto recordset o **Requery** per un oggetto esistente.  
  
#### Per passare i valori dei parametri a un oggetto recordset in fase di esecuzione  
  
1.  Creare l'oggetto recordset.  
  
2.  Preparare una o più stringhe, ad esempio **m\_strFilter**, contenenti l'istruzione SQL o parti di essa.  Immettere i segnaposto "?" nella posizione in cui verranno inserite le informazioni dei parametri.  
  
3.  Assegnare un valore di parametro in fase di esecuzione a ciascun membro dati di parametro dell'oggetto.  
  
4.  Chiamare la funzione membro **Open** o, per un recordset esistente, **Requery**.  
  
 Si supponga, ad esempio, di voler specificare una stringa di filtro per il recordset utilizzando le informazioni inserite in fase di esecuzione.  Si presuma di aver creato in precedenza un recordset della classe `CStudentSet`, definito `rsStudent`, e che ora si desideri ripetere la query del recordset per ottenere un particolare tipo di informazioni relative agli studenti.  
  
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
  
 Il recordset contiene i record degli studenti che soddisfano le condizioni specificate dal filtro, creato dai parametri in fase di esecuzione.  In questo caso, il recordset contiene i record di tutti gli studenti dell'ultimo anno.  
  
> [!NOTE]
>  Se necessario, è possibile impostare il valore di un membro dati di parametro su Null, utilizzando [SetParamNull](../Topic/CRecordset::SetParamNull.md).  È inoltre possibile verificare se un membro dati di parametro sia impostato su Null utilizzando [IsFieldNull](../Topic/CRecordset::IsFieldNull.md).  
  
## Vedere anche  
 [Recordset \(ODBC\)](../../data/odbc/recordset-odbc.md)   
 [Recordset: aggiunta, aggiornamento ed eliminazione di record \(ODBC\)](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md)   
 [Recordset: selezione dei record \(ODBC\)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md)