---
title: 'Transazione: Esecuzione di una transazione in un Recordset (ODBC) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: transactions, updating recordsets
ms.assetid: cf1d6b48-7fb8-4903-84f7-a1822054534d
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 1451775374b94bbefb6396e7afeda2396df84ba4
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="transaction-performing-a-transaction-in-a-recordset-odbc"></a>Transazione: esecuzione di una transazione in un recordset (ODBC)
In questo argomento viene illustrato come eseguire una transazione in un recordset.  
  
> [!NOTE]
>  È supportato un solo livello di transazioni; è possibile nidificare le transazioni.  
  
#### <a name="to-perform-a-transaction-in-a-recordset"></a>Per eseguire una transazione in un recordset  
  
1.  Chiamare il `CDatabase` dell'oggetto **BeginTrans** funzione membro.  
  
2.  Se non è stato implementato il recupero di massa di righe, chiamare il **AddNew/Update**, **Modifica/Aggiorna**, e **eliminare** funzioni membro di uno o più oggetti recordset dello stesso database il numero di volte in base alle esigenze. Per ulteriori informazioni, vedere [Recordset: aggiunta, aggiornamento e l'eliminazione di record (ODBC)](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md). Se è stato implementato il recupero di massa di righe, è necessario scrivere funzioni personalizzate per aggiornare l'origine dati.  
  
3.  Infine, chiamare il `CDatabase` dell'oggetto **CommitTrans** funzione membro. Se si verifica un errore in uno degli aggiornamenti o si decide di annullare le modifiche, chiamare il relativo **Rollback** funzione membro.  
  
 Nell'esempio seguente usa due set di record per eliminare la registrazione di uno studente da un database di registrazione dell'istituto di istruzione, la rimozione dello studente da tutte le classi in cui viene registrato lo studente. Poiché il **eliminare** chiamate in entrambi i recordset devono avere esito positivo, è necessaria una transazione. Nell'esempio si presuppone l'esistenza di `m_dbStudentReg`, una variabile membro di tipo `CDatabase` già connesso all'origine dati e le classi di recordset `CEnrollmentSet` e `CStudentSet`. Il `strStudentID` variabile contiene un valore specificato dall'utente.  
  
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
>  La chiamata **BeginTrans** nuovamente senza chiamare **CommitTrans** o **Rollback** è un errore.  
  
## <a name="see-also"></a>Vedere anche  
 [Transazione (ODBC)](../../data/odbc/transaction-odbc.md)   
 [Transazione: Effetti delle transazioni sugli aggiornamenti (ODBC)](../../data/odbc/transaction-how-transactions-affect-updates-odbc.md)   
 [CDatabase (classe)](../../mfc/reference/cdatabase-class.md)   
 [Classe CRecordset](../../mfc/reference/crecordset-class.md)