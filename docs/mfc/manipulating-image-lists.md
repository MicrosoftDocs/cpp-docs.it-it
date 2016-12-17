---
title: "Modifica degli elenchi immagini | Microsoft Docs"
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
  - "CImageList (classe), modifica"
  - "elenchi di immagini [C++], modifica"
  - "elenchi [C++], immagine"
ms.assetid: 043418f8-077e-4dce-b8bb-2b7b0d7b5156
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Modifica degli elenchi immagini
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La funzione membro [Sostituisci](../Topic/CImageList::Replace.md) sostituisce un'immagine in un elenco di immagini \([CImageList](../mfc/reference/cimagelist-class.md)\) con una nuova immagine.  Questa funzione è utile anche se è necessario aumentare in modo dinamico il numero di immagini in un oggetto elenco.  La funzione [SetImageCount](../Topic/CImageList::SetImageCount.md) modifica in modo dinamico il numero delle immagini archiviate nell'elenco.  Se si aumenta la dimensione dell'elenco immagini, chiamare **Sostituisci** per aggiungere immagini ai nuovi slot immagine.  Se si diminuisce la dimensione dell'elenco immagini, le immagini oltre la nuova dimensione vengono liberate.  
  
 La funzione membro [Rimuovi](../Topic/CImageList::Remove.md) rimuove un'immagine da un elenco di immagini.  La funzione membro [Copia](../Topic/CImageList::Copy.md) può copiare o scambiare immagini in un elenco di immagini.  Questa funzione consente di indicare se l'immagine di origine deve essere copiata sull'indice di destinazione o se le immagini di origine e di destinazione devono essere invertite.  
  
 Per creare un nuovo elenco immagini unendo due elenchi di immagini, utilizzare l'overload appropriato della funzione membro [Create](../Topic/CImageList::Create.md).  Questo overload **Create** unisce la prima immagine degli elenchi immagini esistenti, archiviando l'immagine risultante in un nuovo oggetto elenco immagini.  La nuova immagine viene creata disegnando la seconda immagine in modo trasparente sulla prima.  La maschera per la nuova immagine è il risultato dell'esecuzione di un'operazione logica OR sui bit delle maschere per le due immagini esistenti.  
  
 Ciò viene ripetuto finchè tutte le immagini non vengono unite e aggiunte al nuovo oggetto elenco immagini.  
  
 È possibile scrivere informazioni di immagine in un archivio chiamando la funzione membro [Write](../Topic/CImageList::Write.md), e rileggerle chiamando la funzione membro [Read](../Topic/CImageList::Read.md).  
  
 Le funzioni membro [GetSafeHandle](../Topic/CImageList::GetSafeHandle.md), [Attach](../Topic/CImageList::Attach.md) e [Detach](../Topic/CImageList::Detach.md) consentono di modificare l'handle dell'elenco immagini connesso all'oggetto `CImageList`, mentre la funzione membro [DeleteImageList](../Topic/CImageList::DeleteImageList.md) elimina l'elenco immagini senza eliminare l'oggetto `CImageList`.  
  
## Vedere anche  
 [Utilizzo di CImageList](../mfc/using-cimagelist.md)   
 [Controlli](../mfc/controls-mfc.md)