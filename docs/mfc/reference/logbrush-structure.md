---
title: LOGBRUSH (struttura) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- LOGBRUSH
dev_langs:
- C++
helpviewer_keywords:
- LOGBRUSH structure [MFC]
ms.assetid: 1bf96768-52c5-4444-9bb8-d41ba2e27e68
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6e02c156619e4ca36d268870c70ba783c41a352d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33375210"
---
# <a name="logbrush-structure"></a>Struttura LOGBRUSH
Il `LOGBRUSH` struttura definisce lo stile, colore e motivo di un pennello fisico. Viene utilizzato da Windows [CreateBrushIndirect](http://msdn.microsoft.com/library/windows/desktop/dd183487) e [ExtCreatePen](http://msdn.microsoft.com/library/windows/desktop/dd162705) funzioni.  
  
## <a name="syntax"></a>Sintassi  
  
```  
typedef struct tag LOGBRUSH { /* lb */  
    UINT lbStyle;  
    COLORREF lbColor;  
    LONG lbHatch;  
} LOGBRUSH;  
```  
  
#### <a name="parameters"></a>Parametri  
 `lbStyle`  
 Specifica lo stile del pennello. Il `lbStyle` membro deve essere uno degli stili seguenti:  
  
- **BS_DIBPATTERN** un pennello modello definito da una specifica di bitmap indipendente dalla periferica (DIB). Se `lbStyle` è **BS_DIBPATTERN**, **lbHatch** membro contiene un handle a DIB compresso.  
  
- **BS_DIBPATTERNPT** un pennello modello definito da una specifica di bitmap indipendente dalla periferica (DIB). Se `lbStyle` è **BS_DIBPATTERNPT**, **lbHatch** membro contiene un puntatore a DIB compresso.  
  
- **BS_HATCHED** tratteggio pennello.  
  
- **BS_HOLLOW** rendere cavo pennello.  
  
- **BS_NULL** uguale a **BS_HOLLOW**.  
  
- **BS_PATTERN** motivo tratto definito da una bitmap in memoria.  
  
- **BS_SOLID** pennello tinta unita.  
  
 `lbColor`  
 Specifica il colore in cui viene disegnato il pennello. Se `lbStyle` è il **BS_HOLLOW** o **BS_PATTERN** stile, **lbColor** viene ignorato. Se `lbStyle` è **BS_DIBPATTERN** o **BS_DIBPATTERNBT**, la parola meno significativa di **lbColor** specifica se il **bmiColors**i membri del [BITMAPINFO](../../mfc/reference/bitmapinfo-structure.md) struttura contengono esplicita rosso, verde, blu valori (RGB) o gli indici in attualmente realizzata tavolozza logica. Il **lbColor** membro deve essere uno dei valori seguenti:  
  
- **DIB_PAL_COLORS** la tabella dei colori è costituito da una matrice di indici a 16 bit nella tavolozza logica attualmente realizzata.  
  
- **DIB_RGB_COLORS** la tabella color contiene valori RGB letterali.  
  
 *lbHatch*  
 Specifica uno stile di tratteggio. Il significato dipende dallo stile pennello definito da `lbStyle`. Se `lbStyle` è **BS_DIBPATTERN**, **lbHatch** membro contiene un handle a DIB compresso. Se `lbStyle` è **BS_DIBPATTERNPT**, **lbHatch** membro contiene un puntatore a DIB compresso. Se `lbStyle` è **BS_HATCHED**, **lbHatch** membro specifica l'orientamento delle linee utilizzate per creare il tratteggio. Può essere uno dei valori seguenti:  
  
- `HS_BDIAGONAL` Un tratteggio verso l'alto, da sinistra a destra di 45 gradi  
  
- `HS_CROSS` Tratteggio incrociato orizzontale e verticali  
  
- `HS_DIAGCROSS` Tratteggio incrociato di 45 gradi  
  
- `HS_FDIAGONAL` Un tratteggio verso il basso, da sinistra a destra di 45 gradi  
  
- `HS_HORIZONTAL` Tratteggio orizzontale  
  
- `HS_VERTICAL` Tratteggio verticale  
  
 Se `lbStyle` è **BS_PATTERN**, **lbHatch** è un handle per la mappa di bit che definisce il modello. Se `lbStyle` è **BS_SOLID** o **BS_HOLLOW**, **lbHatch** viene ignorato.  
  
## <a name="remarks"></a>Note  
 Sebbene **lbColor** controlla il colore di primo piano di un pennello, tratteggio di [CDC::SetBkMode](../../mfc/reference/cdc-class.md#setbkmode) e [CDC::SetBkColor](../../mfc/reference/cdc-class.md#setbkcolor) funzioni controllano il colore di sfondo.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** WinGDI. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CDC::GetCharABCWidths](../../mfc/reference/cdc-class.md#getcharabcwidths)

