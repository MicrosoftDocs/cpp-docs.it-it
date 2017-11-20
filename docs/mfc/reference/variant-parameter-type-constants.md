---
title: Costanti di tipi di parametri varianti | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VTS_YPOS_HIMETRIC
- VTS_PICTURE
- VTS_FONT
- VTS_XPOS_HIMETRIC
- VTS_XPOS_PIXELS
- VTS_XSIZE_HIMETRIC
- VTS_YPOS_PIXELS
- VTS_TRISTATE
- VTS_HANDLE
- VTS_YSIZE_HIMETRIC
- VTS_COLOR
- VTS_OPTEXCLUSIVE
- VTS_YSIZE_PIXELS
- VTS_XSIZE_PIXELS
dev_langs: C++
helpviewer_keywords:
- VTS_XPOS_HIMETRIC constant [MFC]
- VTS_FONT constant [MFC]
- VTS_XPOS_PIXELS constant [MFC]
- VTS_COLOR constant [MFC]
- Variants [MFC]
- VTS_YPOS_PIXELS constant [MFC]
- VTS_YSIZE_HIMETRIC constant [MFC]
- VTS_YPOS_HIMETRIC constant [MFC]
- Variants, parameter type constants
- Variant data constants [MFC]
- VTS_PICTURE constant [MFC]
- VTS_TRISTATE constant [MFC]
- VTS_XSIZE_HIMETRIC constant [MFC]
- VTS_HANDLE constant [MFC]
- VTS_XSIZE_PIXELS constant [MFC]
- VTS_OPTEXCLUSIVE constant [MFC]
- VTS_YSIZE_PIXELS constant [MFC]
ms.assetid: de99c7a9-7aae-4dc4-b723-40c6380543ab
caps.latest.revision: "14"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: cc8daf0853a97e8903b47d29f70e190430931fd5
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="variant-parameter-type-constants"></a>Costanti di tipi di parametri varianti
Questo argomento elenca le nuove costanti che indicano i tipi di parametri varianti progettati per l'uso con le classi di controlli OLE della libreria di classi Microsoft Foundation.  
  
 Di seguito è riportato un elenco di costanti di classe:  
  
##  <a name="_mfc_variant_data_constants"></a>Costanti di dati Variant  
  
-   **VTS_COLOR** integer A 32 bit utilizzato per rappresentare un valore di colore RGB.  
  
-   **VTS_FONT** un puntatore al **IFontDisp** interfaccia di un oggetto di tipo di carattere OLE.  
  
-   **VTS_HANDLE** handle di Windows di un valore.  
  
-   **VTS_PICTURE** un puntatore al `IPictureDisp` interfaccia di un oggetto immagine OLE.  
  
-   **VTS_OPTEXCLUSIVE** valore A 16 bit utilizzato per un controllo che deve essere utilizzata in un gruppo di controlli, ad esempio i pulsanti di opzione. Questo tipo indica al contenitore se un controllo un gruppo è un **TRUE** valore, tutti gli altri devono essere **FALSE**.  
  
-   **VTS_TRISTATE** intero con segno A 16 bit utilizzato per le proprietà che possono assumere uno dei tre valori possibili (selezionati, deselezionati, non disponibili), ad esempio, una casella di controllo.  
  
-   **VTS_XPOS_HIMETRIC** unsigned integer A 32 bit utilizzato per rappresentare una posizione lungo l'asse x in **HIMETRIC** unità.  
  
-   **VTS_YPOS_HIMETRIC** unsigned integer A 32 bit utilizzato per rappresentare una posizione lungo l'asse y in **HIMETRIC** unità.  
  
-   **VTS_XPOS_PIXELS** unsigned integer A 32 bit utilizzato per rappresentare una posizione lungo l'asse x, in pixel.  
  
-   **VTS_YPOS_PIXELS** unsigned integer A 32 bit utilizzato per rappresentare una posizione lungo l'asse y, in pixel.  
  
-   **VTS_XSIZE_PIXELS** unsigned integer A 32 bit utilizzato per rappresentare la larghezza di un oggetto dello schermo in pixel.  
  
-   **VTS_YSIZE_PIXELS** unsigned integer A 32 bit utilizzato per rappresentare l'altezza di un oggetto dello schermo in pixel.  
  
-   **VTS_XSIZE_HIMETRIC** unsigned integer A 32 bit utilizzato per rappresentare la larghezza di un oggetto dello schermo in **HIMETRIC** unità.  
  
-   **VTS_YSIZE_HIMETRIC** unsigned integer A 32 bit utilizzato per rappresentare l'altezza di un oggetto dello schermo in **HIMETRIC** unità.  
  
    > [!NOTE]
    >  Costanti di tipo variant aggiuntive sono state definite per tutti i tipi variant, ad eccezione di **VTS_FONT** e **VTS_PICTURE**, che forniscono un puntatore a dati variant co nstant. Queste costanti vengono denominate usando il **VTS_P** `constantname` convenzione. Ad esempio, **VTS_PCOLOR** è un puntatore a un **VTS_COLOR** costante.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdisp.h  
  
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
