---
title: Compilazione di una casella di riepilogo da un secondo recordset (accesso ai dati MFC)
ms.date: 11/04/2016
helpviewer_keywords:
- record views, filling list boxes
- list boxes, filling from second recordset
- recordsets [C++], filling list boxes or combo boxes
- CComboBox class, filling object from second rowset
- ODBC recordsets [C++], filling list boxes or combo boxes
- combo boxes [C++], filling from second recordset
- CListCtrl class, filling from second recordset
ms.assetid: 360c0834-da6b-4dc0-bcea-80e9acd611f0
ms.openlocfilehash: 8eb2525ef8b749f58303cae13b87b21d7df73d1b
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80213408"
---
# <a name="filling-a-list-box-from-a-second-recordset--mfc-data-access"></a>Compilazione di una casella di riepilogo da un secondo recordset (accesso ai dati MFC)

Per impostazione predefinita, una visualizzazione di record è associata a un unico oggetto recordset i cui campi sono associati ai controlli della visualizzazione di record. In alcuni casi, può essere utile aggiungere un controllo casella di riepilogo o casella combinata nella visualizzazione di record e inserirvi valori provenienti da un secondo oggetto recordset. L'utente può usare la casella di riepilogo per selezionare una nuova categoria di informazioni da visualizzare nella visualizzazione dei record. Questo argomento spiega come e quando eseguire questa operazione.

> [!TIP]
>  Tenere presente che l'inserimento di valori in una casella combinata o di riepilogo da un'origine dati può essere un'operazione lenta. Come precauzione, non inserire mai in un controllo valori di un recordset contenente un elevato numero di record.

Il modello per questo argomento è costituito da un recordset primario che inserisce valori nei controlli del form e da un recordset secondario che li inserisce in una casella di riepilogo o in una casella combinata. La selezione di una stringa dalla casella di riepilogo avvia una nuova query sul recordset primario in base alla voce selezionata. Sebbene la procedura illustrata di seguito preveda l'uso di una casella combinata, è applicabile anche a una casella di riepilogo.

#### <a name="to-fill-a-combo-box-or-list-box-from-a-second-recordset"></a>Per inserire i valori di un secondo recordset in una casella combinata o di riepilogo

1. Creare l'oggetto recordset ([CRecordset](../mfc/reference/crecordset-class.md).

1. Ottenere un puntatore all'oggetto [CComboBox](../mfc/reference/ccombobox-class.md) per il controllo casella combinata.

1. Eliminare eventuali dati già presenti nella casella combinata.

1. Spostarsi tra tutti i record del recordset, chiamando [CComboBox:: AddString](../mfc/reference/ccombobox-class.md#addstring) per ogni stringa del record corrente che si desidera aggiungere alla casella combinata.

1. Inizializzare la selezione nella casella combinata.

```cpp
void CSectionForm::OnInitialUpdate()
{
    // ...

    // Fill the combo box with all of the courses
    CENROLLDoc* pDoc = GetDocument();
    if (!pDoc->m_courseSet.Open())
        return;

    // ...

    m_ctlCourseList.ResetContent();
    if (pDoc->m_courseSet.IsOpen())
    {
        while (!pDoc->m_courseSet.IsEOF() )
        {
            m_ctlCourseList.AddString(
                pDoc->m_courseSet.m_CourseID);
            pDoc->m_courseSet.MoveNext();
        }
    }
    m_ctlCourseList.SetCurSel(0);
}
```

Questa funzione usa un secondo recordset denominato `m_courseSet`, che contiene un record per ogni corso disponibile, e un controllo `CComboBox` denominato `m_ctlCourseList`, che è memorizzato nella classe di visualizzazione dei record.

La funzione ottiene `m_courseSet` dal documento e lo apre. Elimina quindi il contenuto di `m_ctlCourseList` e scorre il contenuto di `m_courseSet`. Per ciascun record, la funzione chiama la funzione membro `AddString` della casella combinata per aggiungere l'ID del corso ottenuto dal record. Infine, il codice impostata la selezione della casella combinata.

## <a name="see-also"></a>Vedere anche

[Visualizzazioni di record (accesso ai dati MFC)](../data/record-views-mfc-data-access.md)<br/>
[Elenco dei driver ODBC](../data/odbc/odbc-driver-list.md)
