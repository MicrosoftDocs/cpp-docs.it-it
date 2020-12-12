---
description: 'Altre informazioni su: costanti di tipo di parametro VARIANT'
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
ms.openlocfilehash: 5bc3dcc8a0a888b21b88700db99b05c0f12a4c5e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97218498"
---
# <a name="variant-parameter-type-constants"></a>Costanti di tipi di parametri varianti

Questo argomento elenca le nuove costanti che indicano i tipi di parametro VARIANT progettati per l'uso con le classi di controlli OLE del libreria Microsoft Foundation Class.

Di seguito è riportato un elenco di costanti della classe:

## <a name="variant-data-constants"></a><a name="_mfc_variant_data_constants"></a> Costanti dati Variant

- VTS_COLOR un intero a 32 bit utilizzato per rappresentare un valore di colore RGB.

- VTS_FONT un puntatore all' `IFontDisp` interfaccia di un oggetto del tipo di carattere OLE.

- VTS_HANDLE un valore dell'handle di Windows.

- VTS_PICTURE un puntatore all' `IPictureDisp` interfaccia di un oggetto immagine OLE.

- VTS_OPTEXCLUSIVE un valore a 16 bit utilizzato per un controllo destinato a essere utilizzato in un gruppo di controlli, ad esempio i pulsanti di opzione. Questo tipo indica al contenitore che se un controllo in un gruppo ha un valore TRUE, tutti gli altri devono essere FALSE.

- VTS_TRISTATE un intero con segno A 16 bit utilizzato per le proprietà che possono avere uno dei tre valori possibili (selezionato, cancellato, non disponibile), ad esempio, una casella di controllo.

- VTS_XPOS_HIMETRIC un Unsigned Integer a 32 bit utilizzato per rappresentare una posizione lungo l'asse x in unità HIMETRIC.

- VTS_YPOS_HIMETRIC un Unsigned Integer a 32 bit utilizzato per rappresentare una posizione lungo l'asse y in unità HIMETRIC.

- VTS_XPOS_PIXELS un Unsigned Integer a 32 bit utilizzato per rappresentare una posizione lungo l'asse x in pixel.

- VTS_YPOS_PIXELS un Unsigned Integer a 32 bit utilizzato per rappresentare una posizione lungo l'asse y in pixel.

- VTS_XSIZE_PIXELS un Unsigned Integer a 32 bit utilizzato per rappresentare la larghezza di un oggetto schermata in pixel.

- VTS_YSIZE_PIXELS un Unsigned Integer a 32 bit utilizzato per rappresentare l'altezza di un oggetto schermata in pixel.

- VTS_XSIZE_HIMETRIC un Unsigned Integer a 32 bit utilizzato per rappresentare la larghezza di un oggetto schermo in unità HIMETRIC.

- VTS_YSIZE_HIMETRIC un Unsigned Integer a 32 bit utilizzato per rappresentare l'altezza di un oggetto schermo in unità HIMETRIC.

    > [!NOTE]
    >  Sono state definite altre costanti Variant per tutti i tipi Variant, ad eccezione di VTS_FONT e VTS_PICTURE, che forniscono un puntatore alla costante di dati Variant. Queste costanti vengono denominate usando la `constantname` convenzione VTS_P. Ad esempio, VTS_PCOLOR è un puntatore a una costante VTS_COLOR.

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="see-also"></a>Vedi anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
