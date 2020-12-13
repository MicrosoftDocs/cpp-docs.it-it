---
description: 'Ulteriori informazioni su: transazione: esecuzione di una transazione in un recordset (ODBC)'
title: 'Transazione: esecuzione di una transazione in un recordset (ODBC)'
ms.date: 11/04/2016
helpviewer_keywords:
- transactions, updating recordsets
ms.assetid: cf1d6b48-7fb8-4903-84f7-a1822054534d
ms.openlocfilehash: bb041d35e7ab0bfc7e19f2658a8cdadae4bd8c7e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97333878"
---
# <a name="transaction-performing-a-transaction-in-a-recordset-odbc"></a>Transazione: esecuzione di una transazione in un recordset (ODBC)

In questo argomento viene illustrato come eseguire una transazione in un recordset.

> [!NOTE]
> È supportato un solo livello di transazioni. non è possibile nidificare le transazioni.

#### <a name="to-perform-a-transaction-in-a-recordset"></a>Per eseguire una transazione in un recordset

1. Chiamare la `CDatabase` `BeginTrans` funzione membro dell'oggetto.

1. Se non è stato implementato il recupero di righe bulk, chiamare `AddNew/Update` le `Edit/Update` `Delete` funzioni membro, e di uno o più oggetti recordset dello stesso database tutte le volte che è necessario. Per ulteriori informazioni, vedere [Recordset: aggiunta, aggiornamento ed eliminazione di record (ODBC)](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md). Se è stato implementato il recupero di righe bulk, è necessario scrivere funzioni personalizzate per aggiornare l'origine dati.

1. Infine, chiamare la `CDatabase` `CommitTrans` funzione membro dell'oggetto. Se si verifica un errore in uno degli aggiornamenti o si decide di annullare le modifiche, chiamare la relativa `Rollback` funzione membro.

Nell'esempio seguente vengono usati due recordset per eliminare la registrazione di uno studente da un database di registrazione dell'Istituto di istruzione, rimuovendo lo studente da tutte le classi in cui lo studente viene registrato. Poiché le `Delete` chiamate in entrambi i recordset devono avere esito positivo, è necessaria una transazione. Nell'esempio si presuppone l'esistenza di `m_dbStudentReg` , una variabile membro di tipo `CDatabase` già connessa all'origine dati e le classi recordset `CEnrollmentSet` e `CStudentSet` . La `strStudentID` variabile contiene un valore ottenuto dall'utente.

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
> `BeginTrans`La chiamata di nuovo senza chiamare `CommitTrans` o `Rollback` è un errore.

## <a name="see-also"></a>Vedi anche

[Transazione (ODBC)](../../data/odbc/transaction-odbc.md)<br/>
[Transazione: come le transazioni influiscono sugli aggiornamenti (ODBC)](../../data/odbc/transaction-how-transactions-affect-updates-odbc.md)<br/>
[CDatabase (classe)](../../mfc/reference/cdatabase-class.md)<br/>
[Classe CRecordset](../../mfc/reference/crecordset-class.md)
