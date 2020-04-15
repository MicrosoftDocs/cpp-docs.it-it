---
title: Codice di visualizzazione record creato dalla creazione guidata applicazione (accesso ai dati MFC)
ms.date: 11/04/2016
helpviewer_keywords:
- application wizards [C++], record view code
- record views, refreshing controls
- record views, application wizard code
ms.assetid: 18fd4703-5939-491d-b759-985f767b951f
ms.openlocfilehash: 69481299980329b98e378f02e090670fa3d7ece2
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81376026"
---
# <a name="record-view-code-created-by-application-wizard--mfc-data-access"></a>Codice di visualizzazione record creato dalla creazione guidata applicazione (accesso ai dati MFC)

La [Creazione guidata applicazione MFC](../mfc/reference/database-support-mfc-application-wizard.md) `OnInitialUpdate` esegue `OnGetRecordset` l'override delle funzioni membro e di visualizzazione. Dopo aver creato la finestra cornice, il documento e la visualizzazione, il framework chiama `OnInitialUpdate` per inizializzare la visualizzazione. `OnInitialUpdate` ottiene un puntatore al recordset dal documento. Una chiamata alla funzione [CView::OnInitialUpdate](../mfc/reference/cview-class.md#oninitialupdate) della classe base apre il recordset. Il codice seguente mostra `CRecordView`questo processo per un oggetto :The following code shows this process for a :

```cpp
void CSectionForm::OnInitialUpdate()
{
   m_pSet = &GetDocument()->m_sectionSet;
   CRecordView::OnInitialUpdate();
}
```

All'apertura del recordset vengono selezionati dei record. [CRecordset::Open](../mfc/reference/crecordset-class.md#open) rende il primo record il record corrente e DDX sposta i dati dai membri dati di campo del recordset ai controlli modulo corrispondenti nella visualizzazione. Per ulteriori informazioni su RFX, vedere [Record Field Exchange (RFX)](../data/odbc/record-field-exchange-rfx.md). Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../mfc/dialog-data-exchange-and-validation.md). Per informazioni sul processo di creazione di documenti/visualizzazioni, vedere [Utilizzo delle classi per scrivere applicazioni per Windows](../mfc/using-the-classes-to-write-applications-for-windows.md).

> [!NOTE]
> È opportuno offrire all'utente finale la possibilità di aggiornare i controlli della visualizzazione di record dal recordset. Senza questa possibilità, se un utente modifica il valore di un controllo assegnando un valore non valido, è possibile che l'applicazione rimanga bloccata sul record corrente. Per aggiornare i controlli, chiamare la `CWnd` funzione membro [UpdateData](../mfc/reference/cwnd-class.md#updatedata) con un parametro FALSE.

## <a name="see-also"></a>Vedere anche

[Uso di una visualizzazione di record](../data/using-a-record-view-mfc-data-access.md)
