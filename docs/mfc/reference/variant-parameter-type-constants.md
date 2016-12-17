---
title: "Costanti di tipi di parametri varianti | Microsoft Docs"
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
  - "VTS_YPOS_HIMETRIC"
  - "VTS_PICTURE"
  - "VTS_FONT"
  - "VTS_XPOS_HIMETRIC"
  - "VTS_XPOS_PIXELS"
  - "VTS_XSIZE_HIMETRIC"
  - "VTS_YPOS_PIXELS"
  - "VTS_TRISTATE"
  - "VTS_HANDLE"
  - "VTS_YSIZE_HIMETRIC"
  - "VTS_COLOR"
  - "VTS_OPTEXCLUSIVE"
  - "VTS_YSIZE_PIXELS"
  - "VTS_XSIZE_PIXELS"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Variant (costanti di dati)"
  - "Variant"
  - "Variant, costanti di tipi di parametro"
  - "VTS_COLOR (costante)"
  - "VTS_FONT (costante)"
  - "VTS_HANDLE (costante)"
  - "VTS_OPTEXCLUSIVE (costante)"
  - "VTS_PICTURE (costante)"
  - "VTS_TRISTATE (costante)"
  - "VTS_XPOS_HIMETRIC (costante)"
  - "VTS_XPOS_PIXELS (costante)"
  - "VTS_XSIZE_HIMETRIC (costante)"
  - "VTS_XSIZE_PIXELS (costante)"
  - "VTS_YPOS_HIMETRIC (costante)"
  - "VTS_YPOS_PIXELS (costante)"
  - "VTS_YSIZE_HIMETRIC (costante)"
  - "VTS_YSIZE_PIXELS (costante)"
ms.assetid: de99c7a9-7aae-4dc4-b723-40c6380543ab
caps.latest.revision: 14
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Costanti di tipi di parametri varianti
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo argomento vengono elencate le nuove costanti che indicano i tipi di parametri variabili progettati per l'utilizzo con le classi di controlli OLE di MFC.  
  
 Di seguito viene fornito un elenco delle costanti della classe:  
  
##  <a name="_mfc_variant_data_constants"></a> Costanti di dati variabili  
  
-   Integer a 32 bit di**VTS\_COLOR**A utilizzato per rappresentare un valore di colore RGB.  
  
-   Puntatore di**VTS\_FONT**All'interfaccia di **IFontDisp** di un oggetto OLE tipo di carattere.  
  
-   **VTS\_HANDLE** un valore degli handle di windows.  
  
-   Puntatore di**VTS\_PICTURE**All'interfaccia di `IPictureDisp` di un oggetto immagine OLE.  
  
-   Valore a 16 bit di**VTS\_OPTEXCLUSIVE**A utilizzato per un controllo che deve essere utilizzato in un gruppo di controlli, ad esempio pulsanti di opzione.  Questo tipo indica al contenitore che se un controllo in un gruppo dispone di un valore di **TRUE**, tutti gli altri devono essere **FALSE**.  
  
-   Intero con segno a 16 bit di**VTS\_TRISTATE**A utilizzato per le proprietà che possono avere uno dei tre valori possibili \(selezionati, deselezionata, non disponibile\), ad esempio, una casella di controllo.  
  
-   Intero senza segno a 32 bit di**VTS\_XPOS\_HIMETRIC**A utilizzato per rappresentare una posizione lungo l'asse x in unità di **HIMETRIC**.  
  
-   Intero senza segno a 32 bit di**VTS\_YPOS\_HIMETRIC**A utilizzato per rappresentare una posizione lungo l'asse y in unità di **HIMETRIC**.  
  
-   Intero senza segno a 32 bit di**VTS\_XPOS\_PIXELS**A utilizzato per rappresentare una posizione lungo l'asse x in pixel.  
  
-   Intero senza segno a 32 bit di**VTS\_YPOS\_PIXELS**A utilizzato per rappresentare una posizione lungo l'asse y in pixel.  
  
-   Intero senza segno a 32 bit di**VTS\_XSIZE\_PIXELS**A utilizzato per rappresentare la larghezza di un oggetto dello schermo in pixel.  
  
-   Intero senza segno a 32 bit di**VTS\_YSIZE\_PIXELS**A utilizzato per rappresentare l'altezza di un oggetto dello schermo in pixel.  
  
-   Intero senza segno a 32 bit di**VTS\_XSIZE\_HIMETRIC**A utilizzato per rappresentare la larghezza di un oggetto dello schermo in unità di **HIMETRIC**.  
  
-   Intero senza segno a 32 bit di**VTS\_YSIZE\_HIMETRIC**A utilizzato per rappresentare l'altezza di un oggetto dello schermo in unità di **HIMETRIC**.  
  
    > [!NOTE]
    >  Le costanti variabili aggiuntive definite per tutti i tipi VARIANT, ad eccezione di **VTS\_FONT** e di **VTS\_PICTURE**, che forniscono un puntatore alla costante di dati variant.  Queste costanti sono denominate utilizzando la convenzione di **VTS\_P**`constantname`.  Ad esempio, **VTS\_PCOLOR** è un puntatore a una costante di **VTS\_COLOR**.  
  
## Requisiti  
 **Header:** afxdisp.h  
  
## Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)