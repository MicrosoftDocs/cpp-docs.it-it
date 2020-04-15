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
ms.openlocfilehash: f73c72830216679f8a91d0037d48c1e1b8e400c3
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372859"
---
# <a name="variant-parameter-type-constants"></a>Costanti di tipi di parametri varianti

In questo argomento vengono elencate le nuove costanti che indicano i tipi di parametro variant progettati per l'utilizzo con le classi di controlli OLE della libreria Microsoft Foundation Class.

Di seguito è riportato un elenco di costanti di classe:The following is a list of class constants:

## <a name="variant-data-constants"></a><a name="_mfc_variant_data_constants"></a>Costanti di dati Variant

- VTS_COLOR Un numero intero a 32 bit utilizzato per rappresentare un valore di colore RGB.

- VTS_FONT Puntatore `IFontDisp` all'interfaccia di un oggetto tipo di carattere OLE.

- VTS_HANDLE un valore di handle di Windows.A Windows handle value.

- VTS_PICTURE Puntatore `IPictureDisp` all'interfaccia di un oggetto immagine OLE.

- VTS_OPTEXCLUSIVE Valore a 16 bit utilizzato per un controllo destinato a essere utilizzato in un gruppo di controlli, ad esempio i pulsanti di opzione. Questo tipo indica al contenitore che se un controllo in un gruppo ha un valore TRUE, tutti gli altri devono essere FALSE.

- VTS_TRISTATE Un intero con segno a 16 bit utilizzato per le proprietà che possono avere uno dei tre valori possibili (selezionato, deselezionato, non disponibile), ad esempio una casella di controllo.

- VTS_XPOS_HIMETRIC Un intero senza segno a 32 bit utilizzato per rappresentare una posizione lungo l'asse x in unità HIMETRIC.

- VTS_YPOS_HIMETRIC Un intero senza segno a 32 bit utilizzato per rappresentare una posizione lungo l'asse y in unità HIMETRIC.

- VTS_XPOS_PIXELS Un intero senza segno a 32 bit utilizzato per rappresentare una posizione lungo l'asse x in pixel.

- VTS_YPOS_PIXELS Un intero senza segno a 32 bit utilizzato per rappresentare una posizione lungo l'asse y in pixel.

- VTS_XSIZE_PIXELS Un intero senza segno a 32 bit utilizzato per rappresentare la larghezza di un oggetto dello schermo in pixel.

- VTS_YSIZE_PIXELS Un intero senza segno a 32 bit utilizzato per rappresentare l'altezza di un oggetto dello schermo in pixel.

- VTS_XSIZE_HIMETRIC Un intero senza segno a 32 bit utilizzato per rappresentare la larghezza di un oggetto dello schermo in unità HIMETRIC.

- VTS_YSIZE_HIMETRIC Un intero senza segno a 32 bit utilizzato per rappresentare l'altezza di un oggetto dello schermo in unità HIMETRIC.

    > [!NOTE]
    >  Sono state definite costanti variant aggiuntive per tutti i tipi variant, ad eccezione di VTS_FONT e VTS_PICTURE, che forniscono un puntatore alla costante di dati variant. Queste costanti vengono denominate`constantname` utilizzando la convenzione VTS_P. Ad esempio, VTS_PCOLOR è un puntatore a una costante di VTS_COLOR.

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
