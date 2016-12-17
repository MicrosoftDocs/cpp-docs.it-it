---
title: "Elementi di callback e maschera di callback | Microsoft Docs"
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
  - "elementi di callback nella classe CListCtrl"
  - "CListCtrl (classe), elemento di callback e maschera di callback"
ms.assetid: 67c1f76f-6144-453e-9376-6712f89430ae
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Elementi di callback e maschera di callback
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per ognuno dei relativi elementi, un controllo elenco in genere archiviare il testo dell'etichetta, l'indice dell'elenco immagini di icone dell'elemento e un set di flag di bit dello stato dell'elemento.  È possibile definire i singoli elementi come elementi di callback, utili se l'applicazione è già archivia le informazioni per un elemento.  
  
 Si definisce un elemento come elemento di callback specificando i valori appropriati per i membri di `iImage` e di `pszText` della struttura di **LV\_ITEM** \(vedere [CListCtrl::GetItem](../Topic/CListCtrl::GetItem.md)\).  Se l'applicazione gestisce il testo dell'elemento secondario o dell'elemento, specificare il valore di **LPSTR\_TEXTCALLBACK** per il membro di `pszText`.  Se l'applicazione tiene traccia dell'icona per l'elemento, specificare il valore di **I\_IMAGECALLBACK** per il membro di `iImage`.  
  
 Oltre a definire gli elementi di callback, è inoltre possibile modificare la maschera di callback del controllo.  La maschera è un set di flag di bit che specificano gli stati degli elementi per cui l'applicazione, anziché il controllo, memorizzati i dati correnti.  La maschera di callback viene applicato agli elementi di tutti i controlli, a differenza della designazione di callback dell'elemento, applicato a un elemento specifico.  La maschera di callback è zero per impostazione predefinita, pertanto le barre di avanzamento del controllo tutti gli stati degli elementi.  Per modificare questo comportamento predefinito, inizializzare la maschera a qualsiasi combinazione dei seguenti valori:  
  
-   `LVIS_CUT` l'elemento è contrassegnato per un'operazione di taglia e incolla.  
  
-   `LVIS_DROPHILITED` l'elemento verrà evidenziato come una destinazione di trascinamento.  
  
-   `LVIS_FOCUSED` gli elementi con stato attivo.  
  
-   `LVIS_SELECTED` l'elemento è selezionato.  
  
-   **LVIS\_OVERLAYMASK** l'applicazione archivia l'indice dell'elenco immagini di un'immagine sovrapposta corrente per ogni elemento.  
  
-   **LVIS\_STATEIMAGEMASK** l'applicazione archivia l'indice dell'elenco immagini dell'immagine dello stato corrente per ogni elemento.  
  
 Per ulteriori informazioni sul recupero e sull'impostazione della maschera, vedere [CListCtrl::GetCallbackMask](../Topic/CListCtrl::GetCallbackMask.md) e [CListCtrl::SetCallbackMask](../Topic/CListCtrl::SetCallbackMask.md).  
  
## Vedere anche  
 [Utilizzo di CListCtrl](../mfc/using-clistctrl.md)   
 [Controlli](../mfc/controls-mfc.md)