---
title: 'Transazione: esecuzione di una transazione in un recordset (ODBC)'
ms.date: 11/04/2016
helpviewer_keywords:
- transactions, updating recordsets
ms.assetid: cf1d6b48-7fb8-4903-84f7-a1822054534d
ms.openlocfilehash: 45ae414c318376b2c4d787498e9a288a0037af83
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81358090"
---
# <a name="transaction-performing-a-transaction-in-a-recordset-odbc"></a>Transazione: esecuzione di una transazione in un recordset (ODBC)

In questo argomento viene illustrato come eseguire una transazione in un recordset.

> [!NOTE]
> È supportato un solo livello di transazioni; non è possibile nidificare le transazioni.

#### <a name="to-perform-a-transaction-in-a-recordset"></a>Per eseguire una transazione in un recordset

1. Chiamare `CDatabase` la funzione `BeginTrans` membro dell'oggetto.

1. Se non è stato implementato il `AddNew/Update`recupero `Edit/Update`di `Delete` massa di righe, chiamare le funzioni membro , e di uno o più oggetti recordset dello stesso database il numero di volte necessario. Per ulteriori informazioni, vedere [Recordset: aggiunta, aggiornamento ed eliminazione di record (ODBC)](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md). Se è stato implementato il recupero di massa di righe, è necessario scrivere funzioni personalizzate per aggiornare l'origine dati.

1. Infine, chiamare `CDatabase` la `CommitTrans` funzione membro dell'oggetto. Se si verifica un errore in uno degli aggiornamenti o `Rollback` si decide di annullare le modifiche, chiamare la relativa funzione membro.

Nell'esempio seguente vengono utilizzati due recordset per eliminare l'iscrizione di uno studente da un database di registrazione dell'istituto di istruzione, rimuovendo lo studente da tutte le classi a cui lo studente è iscritto. Poiché `Delete` le chiamate in entrambi i recordset devono avere esito positivo, è necessaria una transazione. Nell'esempio si presuppone `m_dbStudentReg`l'esistenza di `CDatabase` , una variabile membro di `CEnrollmentSet` tipo `CStudentSet`già connessa all'origine dati e le classi recordset e . La `strStudentID` variabile contiene un valore ottenuto dall'utente.

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
> Chiamare `BeginTrans` di `CommitTrans` nuovo `Rollback` senza chiamare o è un errore.

## <a name="see-also"></a>Vedere anche

[Transazione (ODBC)](../../data/odbc/transaction-odbc.md)<br/>
[Transazione: effetti delle transazioni sugli aggiornamenti (ODBC)](../../data/odbc/transaction-how-transactions-affect-updates-odbc.md)<br/>
[Classe CDatabase](../../mfc/reference/cdatabase-class.md)<br/>
[CRecordset (classe)](../../mfc/reference/crecordset-class.md)
