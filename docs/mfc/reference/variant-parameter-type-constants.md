---
title: Costanti di tipi di parametri varianti
ms.date: 11/04/2016
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
ms.openlocfilehash: 9627452d674aa48a84094665d9499e3a38a3bdf4
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50632505"
---
# <a name="variant-parameter-type-constants"></a>Costanti di tipi di parametri varianti

Questo argomento elenca le nuove costanti che indicano i tipi di parametri varianti progettati per l'uso con le classi di controlli OLE della libreria di classi Microsoft Foundation.

Di seguito è riportato un elenco di costanti di classe:

##  <a name="_mfc_variant_data_constants"></a> Costanti di dati Variant

- Valore integer A 32 bit VTS_COLOR utilizzato per rappresentare un valore di colore RGB.

- Puntatore a oggetto VTS_FONT al `IFontDisp` interfaccia dell'oggetto font OLE.

- Valore dell'handle VTS_HANDLE A Windows.

- Puntatore a oggetto VTS_PICTURE al `IPictureDisp` interfaccia dell'oggetto immagine OLE.

- Valore A 16 bit VTS_OPTEXCLUSIVE utilizzato per un controllo che dovrà essere utilizzato in un gruppo di controlli, quali pulsanti di opzione. Questo tipo indica al contenitore che se un controllo in un gruppo dispone di un valore TRUE, tutti gli altri utenti deve essere FALSE.

- VTS_TRISTATE A 16 bit signed integer a utilizzato per le proprietà che possono avere uno dei tre valori possibili (selezionati, deselezionati, non disponibili), ad esempio, una casella di controllo.

- VTS_XPOS_HIMETRIC A 32 bit unsigned integer utilizzato per rappresentare una posizione lungo l'asse x in unità HIMETRIC.

- VTS_YPOS_HIMETRIC A 32 bit unsigned integer utilizzato per rappresentare una posizione lungo l'asse y in unità HIMETRIC.

- VTS_XPOS_PIXELS A 32 bit unsigned integer utilizzato per rappresentare una posizione lungo l'asse x in pixel.

- VTS_YPOS_PIXELS A 32 bit unsigned integer utilizzato per rappresentare una posizione lungo l'asse y in pixel.

- VTS_XSIZE_PIXELS A 32 bit unsigned integer utilizzato per rappresentare la larghezza di un oggetto sullo schermo in pixel.

- VTS_YSIZE_PIXELS A 32 bit unsigned integer utilizzato per rappresentare l'altezza di un oggetto sullo schermo in pixel.

- VTS_XSIZE_HIMETRIC A 32 bit unsigned integer utilizzato per rappresentare la larghezza di un oggetto sullo schermo in unità HIMETRIC.

- VTS_YSIZE_HIMETRIC A 32 bit unsigned integer utilizzato per rappresentare l'altezza di un oggetto sullo schermo in unità HIMETRIC.

    > [!NOTE]
    >  Costanti variante aggiuntive sono state definite per tutti i tipi varianti, fatta eccezione per VTS_FONT e VTS_PICTURE, che offrono un puntatore alla costante di dati variant. Queste costanti vengono denominate usando il VTS_P`constantname` convenzione. Ad esempio, VTS_PCOLOR è un puntatore a un VTS_COLOR (costante).

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
