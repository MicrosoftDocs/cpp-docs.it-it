---
title: Codice di visualizzazione record creato dalla creazione guidata applicazione (accesso ai dati MFC)
ms.date: 11/04/2016
helpviewer_keywords:
- application wizards [C++], record view code
- record views, refreshing controls
- record views, application wizard code
ms.assetid: 18fd4703-5939-491d-b759-985f767b951f
ms.openlocfilehash: e25ca9cad1390dd11ab7328ffefed31badf6fc0b
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59036075"
---
# <a name="record-view-code-created-by-application-wizard--mfc-data-access"></a>Codice di visualizzazione record creato dalla creazione guidata applicazione (accesso ai dati MFC)

Il [Creazione guidata applicazione MFC](../mfc/reference/database-support-mfc-application-wizard.md) esegue l'override della vista `OnInitialUpdate` e `OnGetRecordset` funzioni membro. Dopo aver creato la finestra cornice, il documento e la visualizzazione, il framework chiama `OnInitialUpdate` per inizializzare la visualizzazione. `OnInitialUpdate` ottiene un puntatore al recordset dal documento. Una chiamata alla classe di base [CView:: OnInitialUpdate](../mfc/reference/cview-class.md#oninitialupdate) funzione apre il recordset. Il codice seguente illustra questo processo per un `CRecordView`:

```cpp
void CSectionForm::OnInitialUpdate()
{
   m_pSet = &GetDocument()->m_sectionSet;
   CRecordView::OnInitialUpdate();
}
```

All'apertura del recordset vengono selezionati dei record. [CRecordset:: Open](../mfc/reference/crecordset-class.md#open) rende il primo record, il record corrente e DDX sposta dati dai membri dei dati dei campi del recordset ai corrispondenti controlli del form nella visualizzazione. Per altre informazioni su RFX, vedere [campi di Record (RFX)](../data/odbc/record-field-exchange-rfx.md). Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../mfc/dialog-data-exchange-and-validation.md). Per informazioni sul processo di creazione documento/visualizzazione, vedere [utilizzando le classi per scrivere applicazioni per Windows](../mfc/using-the-classes-to-write-applications-for-windows.md).

> [!NOTE]
>  È opportuno offrire all'utente finale la possibilità di aggiornare i controlli della visualizzazione di record dal recordset. Senza questa possibilità, se un utente modifica il valore di un controllo assegnando un valore non valido, è possibile che l'applicazione rimanga bloccata sul record corrente. Per aggiornare i controlli, si chiama il `CWnd` funzione membro [UpdateData](../mfc/reference/cwnd-class.md#updatedata) con un parametro false.

## <a name="see-also"></a>Vedere anche

[Uso di una visualizzazione di Record](../data/using-a-record-view-mfc-data-access.md)