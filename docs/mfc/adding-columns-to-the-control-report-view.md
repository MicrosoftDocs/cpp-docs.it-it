---
title: "Aggiunta di colonne al controllo (visualizzazione dei rapporti) | Microsoft Docs"
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
  - "CListCtrl (classe), aggiunta di colonne"
  - "CListCtrl (classe), visualizzazione di rapporti"
  - "colonne [C++], aggiunta a CListCtrl"
  - "visualizzazione di rapporti nella classe CListCtrl"
  - "visualizzazioni, rapporto"
ms.assetid: 7392c0d7-f8a5-4e7b-9ae7-b53dc9dd80ae
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Aggiunta di colonne al controllo (visualizzazione dei rapporti)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  La procedura riportata di seguito viene applicato a [CListView](../mfc/reference/clistview-class.md) o all'oggetto di [CListCtrl](../mfc/reference/clistctrl-class.md).  
  
 Quando un controllo elenco è nella visualizzazione di rapporti, le colonne visualizzate, fornendo un metodo di organizzazione degli elementi secondari diversi di ogni elemento di controllo list.  La società è implementata con una corrispondenza uno\-a\-uno tra una colonna dall'elenco e l'elemento secondario collegato dell'elemento di controllo list.  Per ulteriori informazioni sugli elementi secondari, vedere [Aggiunta di elementi al controllo](../mfc/adding-items-to-the-control.md).  Un esempio di un controllo elenco nella visualizzazione di report viene fornito dalla visualizzazione dettagli in Windows 95 e in esplora con Windows 98.  I primi elenchi di colonne cartella, icone dei file e le etichette.  Altre colonne vengono elencate le dimensioni del file, il tipo, Last modified data, e così via.  
  
 Anche se le colonne possono essere aggiunte a un elenco in qualsiasi momento, le colonne sono visibili solo quando il controllo ha il bit di stile f `LVS_REPORT` abilitato.  
  
 Ogni colonna contiene un oggetto collegato voce di intestazione \(vedere [CHeaderCtrl](../mfc/reference/cheaderctrl-class.md)\) che etichette la colonna e consente agli utenti di ridimensionare la colonna.  
  
 Se il controllo elenco supporta una visualizzazione di rapporto, è necessario aggiungere una colonna per ogni elemento secondario in un elemento di controllo list.  Aggiungere una colonna preparazione di una struttura di [LV\_COLUMN](http://msdn.microsoft.com/library/windows/desktop/bb774743) quindi eseguita una chiamata a [InsertColumn](../Topic/CListCtrl::InsertColumn.md).  Dopo aver aggiunto le colonne necessarie \(talvolta definite voci di intestazione\), è possibile riordinarli mediante le funzioni membro e stili che appartengono al controllo intestazione incorporato.  Per ulteriori informazioni, vedere [Elementi nel controllo intestazione](../mfc/ordering-items-in-the-header-control.md).  
  
> [!NOTE]
>  Se il controllo elenco viene creato con lo stile di **LVS\_NOCOLUMNHEADER** , qualsiasi tentativo di inserire le colonne verrà ignorato.  
  
## Vedere anche  
 [Utilizzo di CListCtrl](../mfc/using-clistctrl.md)   
 [Controlli](../mfc/controls-mfc.md)