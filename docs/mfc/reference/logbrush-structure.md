---
title: Struttura LOGBRUSH | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- LOGBRUSH
dev_langs:
- C++
helpviewer_keywords:
- LOGBRUSH structure
ms.assetid: 1bf96768-52c5-4444-9bb8-d41ba2e27e68
caps.latest.revision: 11
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: eea7caf6139fd43dd77163271701d170c7a744e2
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

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
  
- **BS_DIBPATTERN** un pennello pattern definito dalla specifica bitmap indipendente dalla periferica (DIB). Se `lbStyle` è **BS_DIBPATTERN**, **lbHatch** membro contiene un handle a DIB compresso.  
  
- **BS_DIBPATTERNPT** un pennello pattern definito dalla specifica bitmap indipendente dalla periferica (DIB). Se `lbStyle` è **BS_DIBPATTERNPT**, **lbHatch** membro contiene un puntatore a un DIB compresso.  
  
- **BS_HATCHED** nati pennello.  
  
- **BS_HOLLOW** rendere cavo pennello.  
  
- **BS_NULL** come **BS_HOLLOW**.  
  
- **BS_PATTERN** modello pennello definito da una bitmap in memoria.  
  
- **BS_SOLID** pennello tinta unita.  
  
 `lbColor`  
 Specifica il colore in cui è necessario creare il pennello. Se `lbStyle` è il **BS_HOLLOW** o **BS_PATTERN** stile, **lbColor** viene ignorato. Se `lbStyle` è **BS_DIBPATTERN** o **BS_DIBPATTERNBT**, la parola meno significativa di **lbColor** specifica se il **bmiColors** i membri di [BITMAPINFO](../../mfc/reference/bitmapinfo-structure.md) struttura contengono esplicita rosso, verde, blu valori (RGB) o gli indici della tavolozza logica attualmente realizzato. Il **lbColor** membro deve essere uno dei valori seguenti:  
  
- **DIB_PAL_COLORS** la tabella color è costituito da una matrice di indici a 16 bit nella tavolozza logica attualmente realizzata.  
  
- **DIB_RGB_COLORS** la tabella color contiene valori RGB letterali.  
  
 *lbHatch*  
 Specifica uno stile di tratteggio. Il significato dipende dallo stile pennello definito da `lbStyle`. Se `lbStyle` è **BS_DIBPATTERN**, **lbHatch** membro contiene un handle a DIB compresso. Se `lbStyle` è **BS_DIBPATTERNPT**, **lbHatch** membro contiene un puntatore a un DIB compresso. Se `lbStyle` è **BS_HATCHED**, **lbHatch** membro specifica l'orientamento delle linee utilizzate per creare il tratteggio. Può essere uno dei valori seguenti:  
  
- `HS_BDIAGONAL`Un tratteggio verso l'alto, da sinistra a destra di 45 gradi  
  
- `HS_CROSS`Tratteggio incrociato orizzontale e verticale  
  
- `HS_DIAGCROSS`Tratteggio incrociato di 45 gradi  
  
- `HS_FDIAGONAL`Un tratteggio verso il basso, da sinistra a destra di 45 gradi  
  
- `HS_HORIZONTAL`Tratteggio orizzontale  
  
- `HS_VERTICAL`Tratteggio verticale  
  
 Se `lbStyle` è **BS_PATTERN**, **lbHatch** è un handle per la mappa di bit che definisce il modello. Se `lbStyle` è **BS_SOLID** o **BS_HOLLOW**, **lbHatch** viene ignorato.  
  
## <a name="remarks"></a>Note  
 Sebbene **lbColor** controlla il colore di primo piano di un pennello tratteggiato, il [CDC::SetBkMode](../../mfc/reference/cdc-class.md#setbkmode) e [CDC::SetBkColor](../../mfc/reference/cdc-class.md#setbkcolor) funzioni controllano il colore di sfondo.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** WinGDI. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CDC::GetCharABCWidths](../../mfc/reference/cdc-class.md#getcharabcwidths)


