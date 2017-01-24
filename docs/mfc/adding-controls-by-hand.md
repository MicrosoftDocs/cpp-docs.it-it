---
title: "Aggiunta manuale di controlli | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "controlli comuni [C++], aggiunta"
  - "controllo dello stato attivo per l'input"
  - "controlli [MFC], aggiunta a finestre di dialogo"
  - "controlli delle finestre di dialogo [C++], aggiunta a finestre di dialogo"
  - "stato attivo, controllo dell'input"
  - "controllo dello stato attivo per l'input"
  - "controlli comuni di Windows [C++], aggiunta"
ms.assetid: bc843e59-0c51-4b5b-8bf2-343f716469d2
caps.latest.revision: 12
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Aggiunta manuale di controlli
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile [aggiungere controlli a una finestra di dialogo con l'editor finestre](../mfc/using-the-dialog-editor-to-add-controls.md) o aggiungerli manualmente, tramite codice.  
  
 Per creare un oggetto controllo manualmente, in genere si importerà l'oggetto controllo C\+\+ nell'oggetto finestra di dialogo o della finestra cornice c\+\+.  Come molti altri oggetti nel framework, i controlli richiedono la costruzione in due fasi.  È necessario chiamare la funzione membro di **Crea** del controllo durante la creazione della finestra di dialogo archivia o la finestra cornice padre.  Per le finestre di dialogo, in genere viene eseguito in [OnInitDialog](../Topic/CDialog::OnInitDialog.md) e delle finestre, in [OnCreate](../Topic/CWnd::OnCreate.md).  
  
 Nell'esempio seguente viene illustrato come è possibile dichiarare un oggetto di `CEdit` nella dichiarazione della classe di una classe derivata della finestra di dialogo e quindi chiamare la funzione membro di **Crea** in `OnInitDialog`.  Poiché l'oggetto di `CEdit` è dichiarato come oggetto incorporato, viene automaticamente costruito contestualmente all'oggetto finestra di dialogo viene costruito, ma deve comunque essere inizializzato utilizzando la relativa funzione membro di **Crea**.  
  
 [!code-cpp[NVC_MFCControlLadenDialog#1](../mfc/codesnippet/CPP/adding-controls-by-hand_1.h)]  
  
 La funzione di `OnInitDialog` configura un rettangolo, quindi chiama **Crea** per creare il controllo edit di windows e per allegarla all'oggetto non inizializzata di `CEdit`.  
  
 [!code-cpp[NVC_MFCControlLadenDialog#2](../mfc/codesnippet/CPP/adding-controls-by-hand_2.cpp)]  
  
 Dopo aver creato l'oggetto di modifica, è anche possibile impostare lo stato attivo per l'input al controllo chiamando la funzione membro di `SetFocus`.  Infine, viene restituito 0 per `OnInitDialog` per mostrare che si imposta lo stato attivo.  Viene restituito un valore diverso da zero, l'amministratore della finestra di dialogo imposta lo stato attivo sul primo elemento nell'elenco di elementi della finestra di dialogo.  Nella maggior parte dei casi, è consigliabile aggiungere i controlli alle finestre di dialogo con l'editor finestre.  
  
## Vedere anche  
 [Creazione e utilizzo di controlli](../mfc/making-and-using-controls.md)   
 [Controlli](../mfc/controls-mfc.md)   
 [CDialog::OnInitDialog](../Topic/CDialog::OnInitDialog.md)