---
title: "Appunti | Microsoft Docs"
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
  - "Appunti"
  - "Appunti, programmazione"
  - "copia di dati"
  - "taglia e copia di dati"
  - "trasferimento dati"
ms.assetid: a71b2824-1f14-4914-8816-54578d73ad4e
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Appunti
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La famiglia di articoli viene illustrato come implementare il supporto per gli Appunti di Windows nelle applicazioni MFC.  Gli Appunti di Windows vengono utilizzati in due modi:  
  
-   L'implementazione dei controlli standard del menu Modifica, ad esempio taglia, copia e incolla.  
  
-   Implementare trasferimento dei dati uniforme tramite trascinamento della selezione \(OLE\).  
  
 Gli Appunti sono il metodo standard di windows di trasferimento dei dati tra un'origine e una destinazione.  Può essere molto utile in operazioni OLE.  Con l'introduzione di OLE, sono disponibili due meccanismi degli Appunti in windows.  Gli Appunti di Windows standard API sono sempre disponibili, ma sono stati completati con OLE il meccanismo di trasferimento dei dati.  OLE uniforma supporta taglia, copia e incolla \(UDT\) di trasferimento dati agli Appunti e il trascinamento e la destinazione.  
  
 Gli Appunti sono un servizio di sistema condiviso dall'intera sessione di windows, pertanto non dispongono di un handle o più specifico che comune.  Gestire gli Appunti con funzioni membro di classe [CWnd](../mfc/reference/cwnd-class.md).  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Quando utilizzare ciascun meccanismo degli Appunti](../mfc/clipboard-when-to-use-each-clipboard-mechanism.md)  
  
-   [Mediante gli Appunti di Windows tradizionali API](../mfc/clipboard-using-the-windows-clipboard.md)  
  
-   [Utilizzando il meccanismo di Appunti OLE](../mfc/clipboard-using-the-ole-clipboard-mechanism.md)  
  
-   [Copiando e incollando dati](../mfc/clipboard-copying-and-pasting-data.md)  
  
-   [Aggiunta di altri formati](../mfc/clipboard-adding-other-formats.md)  
  
-   [\<caps:sentence id\="tgt18" sentenceid\="1bc8aafd7da110d0b343b54cffa169d9" class\="tgtSentence"\>Gli Appunti di Windows\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/ms648709)  
  
-   [Implementazione di trascinamento della selezione \(OLE\)](../mfc/drag-and-drop-ole.md)  
  
## Vedere anche  
 [Elementi dell'interfaccia utente](../mfc/user-interface-elements-mfc.md)