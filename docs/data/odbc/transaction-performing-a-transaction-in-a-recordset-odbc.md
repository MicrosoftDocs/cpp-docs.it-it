---
title: 'Transazione: Esecuzione di una transazione in un Recordset (ODBC) | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- transactions, updating recordsets
ms.assetid: cf1d6b48-7fb8-4903-84f7-a1822054534d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 9fcc5c6aae86aea005aef50f9083aeb718f64b19
ms.sourcegitcommit: 889a75be1232817150be1e0e8d4d7f48f5993af2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/30/2018
ms.locfileid: "39340267"
---
# <a name="transaction-performing-a-transaction-in-a-recordset-odbc"></a>Transazione: esecuzione di una transazione in un recordset (ODBC)
Questo argomento illustra come eseguire una transazione in un recordset.  
  
> [!NOTE]
>  È supportato solo un livello di transazioni; non è possibile annidare le transazioni.  
  
#### <a name="to-perform-a-transaction-in-a-recordset"></a>Per eseguire una transazione in un recordset  
  
1.  Chiamare il `CDatabase` dell'oggetto `BeginTrans` funzione membro.  
  
2.  Se non è stato implementato il recupero di righe bulk, chiamare il `AddNew/Update`, `Edit/Update`, e `Delete` funzioni membro di uno o più oggetti di recordset dello stesso database tutte le volte in base alle esigenze. Per altre informazioni, vedere [Recordset: aggiunta, aggiornamento e l'eliminazione di record (ODBC)](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md). Se è stato implementato il recupero di righe bulk, è necessario scrivere funzioni personalizzate per aggiornare l'origine dati.  
  
3.  Infine, chiamare il `CDatabase` dell'oggetto `CommitTrans` funzione membro. Se si verifica un errore in uno degli aggiornamenti o si decide di annullare le modifiche, chiamare il `Rollback` funzione membro.  
  
 Nell'esempio seguente usa due set di record per eliminare la registrazione di uno studente da un database di registrazione dell'istituto di istruzione, la rimozione dello studente da tutte le classi in cui viene registrato lo studente. Poiché il `Delete` chiamate in entrambi i recordset devono avere esito positivo, è necessaria una transazione. Nell'esempio si presuppone l'esistenza di `m_dbStudentReg`, una variabile membro di tipo `CDatabase` già connesso all'origine dati e le classi di recordset `CEnrollmentSet` e `CStudentSet`. Il `strStudentID` variabile contiene un valore ottenuto da parte dell'utente.  
  
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
>  La chiamata `BeginTrans` nuovamente senza chiamare `CommitTrans` o `Rollback` è un errore.  
  
## <a name="see-also"></a>Vedere anche  
 [Transazione (ODBC)](../../data/odbc/transaction-odbc.md)   
 [Transazione: Effetti delle transazioni sugli aggiornamenti (ODBC)](../../data/odbc/transaction-how-transactions-affect-updates-odbc.md)   
 [CDatabase (classe)](../../mfc/reference/cdatabase-class.md)   
 [Classe CRecordset](../../mfc/reference/crecordset-class.md)