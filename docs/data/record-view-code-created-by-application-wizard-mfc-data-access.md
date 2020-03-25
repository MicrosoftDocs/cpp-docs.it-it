---
title: Codice di visualizzazione record creato dalla creazione guidata applicazione (accesso ai dati MFC)
ms.date: 11/04/2016
helpviewer_keywords:
- application wizards [C++], record view code
- record views, refreshing controls
- record views, application wizard code
ms.assetid: 18fd4703-5939-491d-b759-985f767b951f
ms.openlocfilehash: 69bebe978d03e5777f20765ac0bcf9a344f69320
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80209157"
---
# <a name="record-view-code-created-by-application-wizard--mfc-data-access"></a>Codice di visualizzazione record creato dalla creazione guidata applicazione (accesso ai dati MFC)

La [creazione guidata applicazione MFC](../mfc/reference/database-support-mfc-application-wizard.md) sostituisce le funzioni membro `OnInitialUpdate` e `OnGetRecordset` della visualizzazione. Dopo aver creato la finestra cornice, il documento e la visualizzazione, il framework chiama `OnInitialUpdate` per inizializzare la visualizzazione. `OnInitialUpdate` ottiene un puntatore al recordset dal documento. Una chiamata alla funzione della classe base [CView:: OnInitialUpdate](../mfc/reference/cview-class.md#oninitialupdate) apre il recordset. Il codice seguente illustra questo processo per un `CRecordView`:

```cpp
void CSectionForm::OnInitialUpdate()
{
   m_pSet = &GetDocument()->m_sectionSet;
   CRecordView::OnInitialUpdate();
}
```

All'apertura del recordset vengono selezionati dei record. [CRecordset:: Open](../mfc/reference/crecordset-class.md#open) crea il primo record del record corrente e DDX sposta i dati dai membri dati di campo del recordset nei controlli form corrispondenti nella vista. Per ulteriori informazioni su RFX, vedere [trasferimento di campi di record (RFX)](../data/odbc/record-field-exchange-rfx.md). Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../mfc/dialog-data-exchange-and-validation.md). Per informazioni sul processo di creazione di documenti/visualizzazioni, vedere [utilizzo delle classi per scrivere applicazioni per Windows](../mfc/using-the-classes-to-write-applications-for-windows.md).

> [!NOTE]
>  È opportuno offrire all'utente finale la possibilità di aggiornare i controlli della visualizzazione di record dal recordset. Senza questa possibilità, se un utente modifica il valore di un controllo assegnando un valore non valido, è possibile che l'applicazione rimanga bloccata sul record corrente. Per aggiornare i controlli, chiamare la funzione membro `CWnd` [UpdateData](../mfc/reference/cwnd-class.md#updatedata) con un parametro false.

## <a name="see-also"></a>Vedere anche

[Uso di una visualizzazione di record](../data/using-a-record-view-mfc-data-access.md)
