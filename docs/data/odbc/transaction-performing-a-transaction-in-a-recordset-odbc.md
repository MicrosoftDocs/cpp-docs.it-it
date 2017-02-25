---
title: "Transazione: esecuzione di una transazione in un recordset (ODBC) | Microsoft Docs"
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
  - "transazioni, aggiornamento di recordset"
ms.assetid: cf1d6b48-7fb8-4903-84f7-a1822054534d
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Transazione: esecuzione di una transazione in un recordset (ODBC)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo argomento viene illustrata l'esecuzione di una transazione in un recordset.  
  
> [!NOTE]
>  È supportato un solo livello di transazioni, che non possono essere annidate.  
  
#### Per eseguire una transazione in un recordset  
  
1.  Chiamare la funzione membro **BeginTrans** dell'oggetto `CDatabase`.  
  
2.  Se non è stato implementato il recupero di massa di righe, chiamare le funzioni membro **AddNew\/Update**, **Edit\/Update** e **Delete** di uno o più oggetti recordset dello stesso database per il numero di volte desiderato.  Per ulteriori informazioni, vedere [Recordset: aggiunta, aggiornamento ed eliminazione di record \(ODBC\)](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md).  Se è stato implementato il recupero di massa di righe, è necessario creare le funzioni richieste per aggiornare l'origine dati.  
  
3.  Chiamare infine la funzione membro **CommitTrans** dell'oggetto `CDatabase`.  Se in uno degli aggiornamenti si verifica un errore o si decide di annullare le modifiche, chiamare la relativa funzione membro **Rollback**.  
  
 Nel seguente esempio vengono utilizzati due recordset per eliminare l'iscrizione di uno studente dal database di registrazione di una scuola, rimuovendo i dati dello studente da tutti i corsi ai quali è iscritto.  Le chiamate a **Delete** devono essere eseguite correttamente in entrambi i recordset, pertanto è necessario utilizzare una transazione.  Nell'esempio si presuppone l'esistenza di `m_dbStudentReg`, una variabile membro di tipo `CDatabase` già collegata all'origine dati e delle classi recordset `CEnrollmentSet` e `CStudentSet`.  La variabile `strStudentID` contiene un valore specificato dall'utente.  
  
```  
BOOL CEnrollDoc::RemoveStudent( CString strStudentID )  
{  
    // remove student from all the classes  
    // the student is enrolled in  
  
    if ( !m_dbStudentReg.BeginTrans( ) )  
        return FALSE;  
  
    CEnrollmentSet rsEnrollmentSet(&m_dbStudentReg);  
    rsEnrollmentSet.m_strFilter = "StudentID = " + strStudentID;  
  
    if ( !rsEnrollmentSet.Open(CRecordset::dynaset) )  
        return FALSE;  
  
    CStudentSet rsStudentSet(&m_dbStudentReg);  
    rsStudentSet.m_strFilter = "StudentID = " + strStudentID;  
  
    if ( !rsStudentSet.Open(CRecordset::dynaset) )  
        return FALSE;  
  
    TRY  
    {  
        while ( !rsEnrollmentSet.IsEOF( ) )  
        {  
            rsEnrollmentSet.Delete( );  
            rsEnrollmentSet.MoveNext( );  
        }  
  
        // delete the student record  
        rsStudentSet.Delete( );  
  
        m_dbStudentReg.CommitTrans( );  
    }  
  
    CATCH_ALL(e)  
    {  
        m_dbStudentReg.Rollback( );  
        return FALSE;  
    }  
    END_CATCH_ALL  
  
    rsEnrollmentSet.Close( );  
    rsStudentSet.Close( );  
  
    return TRUE;  
  
}  
```  
  
> [!NOTE]
>  Se si chiama nuovamente **BeginTrans** senza chiamare **CommitTrans** o **Rollback**, si verificherà un errore.  
  
## Vedere anche  
 [Transazione \(ODBC\)](../../data/odbc/transaction-odbc.md)   
 [Transazione: effetti delle transazioni sugli aggiornamenti \(ODBC\)](../../data/odbc/transaction-how-transactions-affect-updates-odbc.md)   
 [CDatabase Class](../../mfc/reference/cdatabase-class.md)   
 [CRecordset Class](../../mfc/reference/crecordset-class.md)