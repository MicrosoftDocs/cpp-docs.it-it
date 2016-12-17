---
title: "Struttura COLORADJUSTMENT | Microsoft Docs"
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
  - "COLORADJUSTMENT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COLORADJUSTMENT (struttura)"
ms.assetid: 67fc4e63-0e0e-4fcb-8c45-aa5ebfefa013
caps.latest.revision: 11
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Struttura COLORADJUSTMENT
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La struttura di `COLORADJUSTMENT` definisce i valori di regolazione dei colori utilizzati da funzioni di windows `StretchBlt` e di **StretchDIBits** quando la modalità di `StretchBlt` è **HALFTONE**.  
  
## Sintassi  
  
```  
  
      typedef struct  tagCOLORADJUSTMENT {    /* ca */  
    WORD  caSize;  
    WORD  caFlags;  
    WORD  caIlluminantIndex;  
    WORD  caRedGamma;  
    WORD  caGreenGamma;  
    WORD  caBlueGamma;  
    WORD  caReferenceBlack;  
    WORD  caReferenceWhite;  
    SHORT caContrast;  
    SHORT caBrightness;  
    SHORT caColorfulness;  
    SHORT caRedGreenTint;  
} COLORADJUSTMENT;  
```  
  
#### Parametri  
 *caSize*  
 Specifica la dimensione della struttura in byte.  
  
 *caFlags*  
 Specifica come l'immagine di output deve essere preparata.  Questo membro è stato impostato a **NULL** o a qualsiasi combinazione dei seguenti valori:  
  
-   **CA\_NEGATIVE** specifica se il segno negativo dell'immagine originale da visualizzare.  
  
-   **CA\_LOG\_FILTER** specifica che una funzione logaritmica deve essere applicato a densità finale dei colori di output.  Questo aumento del contrasto di colore quando la luminanza è bassa.  
  
 *caIlluminantIndex*  
 Specifica la luminanza di una sorgente di luce in cui l'oggetto image verrà visualizzato.  Il membro può essere impostata su uno dei seguenti valori:  
  
-   **ILLUMINANT\_EQUAL\_ENERGY**  
  
-   **ILLUMINANT\_A**  
  
-   **ILLUMINANT\_B**  
  
-   **ILLUMINANT\_C**  
  
-   **ILLUMINANT\_D50**  
  
-   **ILLUMINANT\_D55**  
  
-   **ILLUMINANT\_D65**  
  
-   **ILLUMINANT\_D75**  
  
-   **ILLUMINANT\_F2**  
  
-   **ILLUMINANT\_TURNGSTEN**  
  
-   **ILLUMINANT\_DAYLIGHT**  
  
-   **ILLUMINANT\_FLUORESCENT**  
  
-   **ILLUMINANT\_NTSC**  
  
 *caRedGamma*  
 Specifica l'ennesimo valore della gamma\- correzione del consumo energetico per il rosso primario dei colori di origine.  Il valore deve essere compreso tra 2.500 e 65.000.  Il valore 10.000 indica che non gamma\- correzione.  
  
 *caGreenGamma*  
 Specifica l'ennesimo valore della gamma\- correzione del consumo energetico per il verde primario dei colori di origine.  Il valore deve essere compreso tra 2.500 e 65.000.  Il valore 10.000 indica che non gamma\- correzione.  
  
 *caBlueGamma*  
 Specifica l'ennesimo valore della gamma\- correzione del consumo energetico per il colore blu primario dei colori di origine.  Il valore deve essere compreso tra 2.500 e 65.000.  Il valore 10.000 indica che non gamma\- correzione.  
  
 *caReferenceBlack*  
 Specifica il riferimento nero dei colori di origine.  Tutti i colori utilizzati più scuri di seguito vengono considerati come nero.  Il valore deve essere compreso tra 0 e 4.000.  
  
 *caReferenceWhite*  
 Specifica il riferimento bianco per i colori di origine.  Tutti i colori che sono più semplici di seguito vengono considerati come bianco.  Il valore deve essere compreso tra 6.000 e 10.000.  
  
 *caContrast*  
 Specifica la quantità di contrasto all'oggetto di origine.  Il valore deve essere compreso tra \-100 e 100.  Un valore 0 non significa regolazione di contrasto.  
  
 *caBrightness*  
 Specifica la quantità di luminosità all'oggetto di origine.  Il valore deve essere compreso tra \-100 e 100.  Un valore 0 non significa regolazione di luminosità.  
  
 *caColorfulness*  
 Specifica la quantità di colorfulness all'oggetto di origine.  Il valore deve essere compreso tra \-100 e 100.  Un valore 0 non significa regolazione di colorfulness.  
  
 *caRedGreenTint*  
 Specifica la quantità di regolazione rossa o verde a tinta all'oggetto di origine.  Il valore deve essere compreso tra \-100 e 100.  I numeri positivi si regolerebbero in rosso e i numeri negativi vengono modificati in verde.  Un 0 non significa regolazione di tinta.  
  
## Requisiti  
 **File di intestazione:** wingdi.h  
  
## Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CDC::GetColorAdjustment](../Topic/CDC::GetColorAdjustment.md)