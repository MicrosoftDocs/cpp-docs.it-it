---
title: "Struttura LOGBRUSH | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "LOGBRUSH"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LOGBRUSH (struttura)"
ms.assetid: 1bf96768-52c5-4444-9bb8-d41ba2e27e68
caps.latest.revision: 11
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Struttura LOGBRUSH
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La struttura `LOGBRUSH` definisce lo stile, il colore e il modello di un pennello fisico.  Viene utilizzato da Windows [CreateBrushIndirect](http://msdn.microsoft.com/library/windows/desktop/dd183487) e dalle funzioni [ExtCreatePen](http://msdn.microsoft.com/library/windows/desktop/dd162705).  
  
## Sintassi  
  
```  
  
      typedef struct tag LOGBRUSH { /* lb */  
   UINT lbStyle;  
   COLORREF lbColor;  
   LONG lbHatch;  
} LOGBRUSH;  
```  
  
#### Parametri  
 `lbStyle`  
 Specifica lo stile del pennello.  Il membro `lbStyle` deve essere uno degli stili seguenti:  
  
-   Un pennello del modello **BS\_DIBPATTERN** definisce una specifica bitmap indipendente dal dispositivo \(DIB\).  Se `lbStyle` è **BS\_DIBPATTERN**, il membro **lbHatch** contiene un punto di controllo a una DIB compresso.  
  
-   Un pennello del modello **BS\_DIBPATTERNPT** definisce una specifica bitmap indipendente dal dispositivo \(DIB\).  Se `lbStyle` è **BS\_DIBPATTERNPT**, il membro **lbHatch** contiene un puntatore a una DIB compresso.  
  
-   **BS\_HATCHED** Pennello tratteggiato.  
  
-   **BS\_HOLLOW** Pennello concavo.  
  
-   **BS\_NULL** equivale a **BS\_HOLLOW**.  
  
-   **BS\_PATTERN** Pennello del modello definito in un bitmap di memoria.  
  
-   **BS\_SOLID** Pennello a tinta unita.  
  
 `lbColor`  
 Specifica il colore del pennello deve essere disegnato.  Se `lbStyle` è lo stile **BS\_PATTERN** o **BS\_HOLLOW**, **lbColor** viene ignorato.  Se `lbStyle` è **BS\_DIBPATTERN** o **BS\_DIBPATTERNBT**, la parola meno significativa di **lbColor** specifica se i membri di **bmiColors** della struttura [BITMAPINFO](../../mfc/reference/bitmapinfo-structure.md) sono contenuti in valori espliciti rosso, verde, blu \(RGB\) o in una tavolozza logica attualmente utilizzata.  Il membro **lbColor** deve essere uno dei valori seguenti:  
  
-   **DIB\_PAL\_COLORS** La tabella dei colori è costituita da una matrice di indici a 16 bit nella tavolozza logica attualmente utilizzata.  
  
-   **DIB\_RGB\_COLORS** La tabella dei colori contiene i valori letterali RGB.  
  
 *lbHatch*  
 Specifica lo stile tratteggiato.  Il significato dipende dallo stile del pennello definito da `lbStyle`.  Se `lbStyle` è **BS\_DIBPATTERN**, il membro **lbHatch** contiene un punto di controllo a una DIB compresso.  Se `lbStyle` è **BS\_DIBPATTERNPT**, il membro **lbHatch** contiene un puntatore a una DIB compresso.  Se `lbStyle` è **BS\_HATCHED**, il membro **lbHatch** specifica l'orientamento delle linee utilizzate per la creazione del tratteggio.  Può essere uno dei seguenti valori:  
  
-   `HS_BDIAGONAL` A dimensioni 45 gradi, tratteggio da sinistra a destra  
  
-   di`HS_CROSS` Zigrinatura orizzontale e verticale  
  
-   `HS_DIAGCROSS` Zigrinatura di 45 gradi  
  
-   `HS_FDIAGONAL` Un abbassamento 45 gradi, del tratteggio da sinistra a destra  
  
-   `HS_HORIZONTAL` Tratteggio orizzontale  
  
-   `HS_VERTICAL` Tratteggio verticale  
  
 Se `lbStyle` è **BS\_PATTERN**, **lbHatch** è un punto di controllo al bitmap che definisce il modello.  Se `lbStyle` è **BS\_SOLID** o **BS\_HOLLOW**, **lbHatch** viene ignorato.  
  
## Note  
 Sebbene **lbColor** controlla il colore di primo piano di un pennello tratteggiato, le funzioni [CDC::SetBkColor](../Topic/CDC::SetBkColor.md) e di [CDC::SetBkMode](../Topic/CDC::SetBkMode.md) controllano il colore di sfondo.  
  
## Requisiti  
 **File di intestazione:** wingdi.h  
  
## Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CDC::GetCharABCWidths](../Topic/CDC::GetCharABCWidths.md)