---
title: 'Transazione: esecuzione di una transazione in un recordset (ODBC)'
ms.date: 11/04/2016
helpviewer_keywords:
- transactions, updating recordsets
ms.assetid: cf1d6b48-7fb8-4903-84f7-a1822054534d
ms.openlocfilehash: 94177a27a1f99a8c9c37b7fce3f697fd0088b7c6
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80212589"
---
# <a name="transaction-performing-a-transaction-in-a-recordset-odbc"></a>Transazione: esecuzione di una transazione in un recordset (ODBC)

In questo argomento viene illustrato come eseguire una transazione in un recordset.

> [!NOTE]
>  È supportato un solo livello di transazioni. non è possibile nidificare le transazioni.

#### <a name="to-perform-a-transaction-in-a-recordset"></a>Per eseguire una transazione in un recordset

1. Chiamare la funzione membro `BeginTrans` dell'oggetto `CDatabase`.

1. Se non è stato implementato il recupero di righe bulk, chiamare le funzioni membro `AddNew/Update`, `Edit/Update`e `Delete` di uno o più oggetti recordset dello stesso database quante volte necessario. Per ulteriori informazioni, vedere [Recordset: aggiunta, aggiornamento ed eliminazione di record (ODBC)](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md). Se è stato implementato il recupero di righe bulk, è necessario scrivere funzioni personalizzate per aggiornare l'origine dati.

1. Infine, chiamare la funzione membro `CommitTrans` dell'oggetto `CDatabase`. Se si verifica un errore in uno degli aggiornamenti o si decide di annullare le modifiche, chiamare la relativa funzione membro `Rollback`.

Nell'esempio seguente vengono usati due recordset per eliminare la registrazione di uno studente da un database di registrazione dell'Istituto di istruzione, rimuovendo lo studente da tutte le classi in cui lo studente viene registrato. Poiché le chiamate `Delete` in entrambi i recordset devono avere esito positivo, è necessaria una transazione. Nell'esempio si presuppone l'esistenza di `m_dbStudentReg`, una variabile membro di tipo `CDatabase` già connessa all'origine dati e le classi recordset `CEnrollmentSet` e `CStudentSet`. La variabile `strStudentID` contiene un valore ottenuto dall'utente.

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
>  Chiamando di nuovo `BeginTrans` senza chiamare `CommitTrans` o `Rollback` è un errore.

## <a name="see-also"></a>Vedere anche

[Transazione (ODBC)](../../data/odbc/transaction-odbc.md)<br/>
[Transazione: effetti delle transazioni sugli aggiornamenti (ODBC)](../../data/odbc/transaction-how-transactions-affect-updates-odbc.md)<br/>
[Classe CDatabase](../../mfc/reference/cdatabase-class.md)<br/>
[Classe CRecordset](../../mfc/reference/crecordset-class.md)
