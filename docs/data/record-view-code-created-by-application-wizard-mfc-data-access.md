---
title: Registrare Visualizza codice creato dalla creazione guidata applicazione (accesso ai dati MFC) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- application wizards [C++], record view code
- record views, refreshing controls
- record views, application wizard code
ms.assetid: 18fd4703-5939-491d-b759-985f767b951f
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 239ace3f23987bc4f704515e7f87d62ba2e26543
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="record-view-code-created-by-application-wizard--mfc-data-access"></a>Codice di visualizzazione record creato dalla creazione guidata applicazione (accesso ai dati MFC)
Il [Creazione guidata applicazione MFC](../mfc/reference/database-support-mfc-application-wizard.md) esegue l'override della vista `OnInitialUpdate` e `OnGetRecordset` funzioni membro. Dopo aver creato la finestra cornice, il documento e la visualizzazione, il framework chiama `OnInitialUpdate` per inizializzare la visualizzazione. `OnInitialUpdate` ottiene un puntatore al recordset dal documento. Una chiamata alla classe di base [CView:: OnInitialUpdate](../mfc/reference/cview-class.md#oninitialupdate) funzione apre il recordset. Nel codice seguente viene illustrato questo processo per un `CRecordView`:  
  
```  
void CSectionForm::OnInitialUpdate()  
{  
   m_pSet = &GetDocument()->m_sectionSet;  
   CRecordView::OnInitialUpdate();  
}  
```  
  
 All'apertura del recordset vengono selezionati dei record. [CRecordset:: Open](../mfc/reference/crecordset-class.md#open) imposta il primo record, il record corrente e DDX sposta dati dai membri di dati di campo del recordset alla corrispondente nella visualizzazione controlli del form. Per ulteriori informazioni su RFX, vedere [trasferimento di campi di Record (RFX)](../data/odbc/record-field-exchange-rfx.md). Per ulteriori informazioni su DDX, vedere [convalida e DDX](../mfc/dialog-data-exchange-and-validation.md). Per informazioni sul processo di creazione documento/visualizzazione, vedere [utilizzando le classi per scrivere applicazioni per Windows](../mfc/using-the-classes-to-write-applications-for-windows.md).  
  
> [!NOTE]
>  È opportuno offrire all'utente finale la possibilità di aggiornare i controlli della visualizzazione di record dal recordset. Senza questa possibilità, se un utente modifica il valore di un controllo assegnando un valore non valido, è possibile che l'applicazione rimanga bloccata sul record corrente. Per aggiornare i controlli, chiamare il `CWnd` funzione membro [UpdateData](../mfc/reference/cwnd-class.md#updatedata) con un parametro di **FALSE**.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di una visualizzazione di Record](../data/using-a-record-view-mfc-data-access.md)