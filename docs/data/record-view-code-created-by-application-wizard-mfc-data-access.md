---
title: "Codice di visualizzazione record creato dalla creazione guidata applicazione (accesso ai dati MFC) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "creazioni guidate applicazione [C++], codice di visualizzazione dei record"
  - "visualizzazioni di record, codice di creazione guidata applicazioni"
  - "visualizzazioni di record, aggiornamento controlli"
ms.assetid: 18fd4703-5939-491d-b759-985f767b951f
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Codice di visualizzazione record creato dalla creazione guidata applicazione (accesso ai dati MFC)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La [Creazione guidata applicazione MFC](../mfc/reference/database-support-mfc-application-wizard.md) esegue l'override delle funzioni membro `OnInitialUpdate` e `OnGetRecordset` della visualizzazione.  Dopo aver creato la finestra cornice, il documento e la visualizzazione, il framework chiama `OnInitialUpdate` per inizializzare la visualizzazione.  `OnInitialUpdate` ottiene un puntatore al recordset dal documento.  Una chiamata alla funzione [CView::OnInitialUpdate](../Topic/CView::OnInitialUpdate.md) della classe base apre il recordset.  Il codice che segue mostra questo processo per `CRecordView`. Il codice relativo a `CDaoRecordView` è simile:  
  
```  
void CSectionForm::OnInitialUpdate()  
{  
   m_pSet = &GetDocument()->m_sectionSet;  
   CRecordView::OnInitialUpdate();  
}  
```  
  
 All'apertura del recordset vengono selezionati dei record.  [CRecordset::Open](../Topic/CRecordset::Open.md) o [CDaoRecordset::Open](../Topic/CDaoRecordset::Open.md) imposta il primo record come record corrente e DDX sposta dati dai membri dati di campo del recordset ai corrispondenti controlli del form nella visualizzazione.  Per altre informazioni su RFX, vedere [Trasferimento di campi di record \(RFX\)](../data/odbc/record-field-exchange-rfx.md).  Per altre informazioni su DDX, vedere [Convalida e DDX \(Dialog Data Exchange\)](../mfc/dialog-data-exchange-and-validation.md).  Per informazioni sul processo di creazione del documento o della visualizzazione, vedere [Utilizzo delle classi per la creazione di applicazioni per Windows](../mfc/using-the-classes-to-write-applications-for-windows.md).  
  
> [!NOTE]
>  È opportuno offrire all'utente finale la possibilità di aggiornare i controlli della visualizzazione di record dal recordset.  Senza questa possibilità, se un utente modifica il valore di un controllo assegnando un valore non valido, è possibile che l'applicazione rimanga bloccata sul record corrente.  Per aggiornare i controlli, chiamare la funzione membro `CWnd` [UpdateData](../Topic/CWnd::UpdateData.md)con il parametro **FALSE**.  
  
## Vedere anche  
 [Uso di una visualizzazione di record](../data/using-a-record-view-mfc-data-access.md)