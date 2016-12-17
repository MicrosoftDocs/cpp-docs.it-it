---
title: "Utilizzo di un elenco di immagini | Microsoft Docs"
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
  - "CImageList (classe), utilizzo"
  - "elenchi di immagini [C++]"
  - "elenchi [C++], immagine"
ms.assetid: e0aed188-a1e6-400e-9f51-033d61c5541f
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Utilizzo di un elenco di immagini
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'utilizzo tipico di un elenco immagini segue il modello di seguito:  
  
-   Costruisce un oggetto di [CImageList](../mfc/reference/cimagelist-class.md) e chiamare uno degli overload della funzione di [Crea](../Topic/CImageList::Create.md) per creare un elenco immagini e per associarlo all'oggetto di `CImageList`.  
  
-   Se non si è aggiunto le immagini al momento dell'elenco immagini, aggiungere le immagini all'elenco immagini chiamando la funzione membro di [Lettura](../Topic/CImageList::Read.md) o di [Aggiungi](../Topic/CImageList::Add.md).  
  
-   Associare l'elenco di immagini con un controllo chiamando la funzione membro appropriata del controllo, o immagini dall'elenco immagini personalmente di disegnare utilizzando la funzione membro di [Disegno](../Topic/CImageList::Draw.md)elenco immagini.  
  
-   Forse consentono all'utente di trascinare un'immagine, utilizzando il supporto incorporatoelenco immagini al trascinamento.  
  
> [!NOTE]
>  Se l'elenco di immagini è stato creato con l'operatore di **nuova**, è necessario distruggere l'oggetto di `CImageList` quando l'operazione è stata eseguita.  
  
## Vedere anche  
 [Utilizzo di CImageList](../mfc/using-cimagelist.md)   
 [Controlli](../mfc/controls-mfc.md)