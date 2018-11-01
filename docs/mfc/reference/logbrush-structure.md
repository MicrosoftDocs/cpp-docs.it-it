---
title: Struttura LOGBRUSH
ms.date: 11/04/2016
f1_keywords:
- LOGBRUSH
helpviewer_keywords:
- LOGBRUSH structure [MFC]
ms.assetid: 1bf96768-52c5-4444-9bb8-d41ba2e27e68
ms.openlocfilehash: 0ca635690843c6dae9db05b0a8cc246cf38ce814
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50579773"
---
# <a name="logbrush-structure"></a>Struttura LOGBRUSH

Il `LOGBRUSH` struttura definisce lo stile, colore e modello di un pennello fisico. Viene usato da di Windows [CreateBrushIndirect](/windows/desktop/api/wingdi/nf-wingdi-createbrushindirect) e [ExtCreatePen](/windows/desktop/api/wingdi/nf-wingdi-extcreatepen) funzioni.

## <a name="syntax"></a>Sintassi

```
typedef struct tag LOGBRUSH { /* lb */
    UINT lbStyle;
    COLORREF lbColor;
    LONG lbHatch;
} LOGBRUSH;
```

#### <a name="parameters"></a>Parametri

*lbStyle*<br/>
Specifica lo stile di pennello. Il `lbStyle` membro deve essere uno degli stili seguenti:

- Riempimento con BS_DIBPATTERN un motivo definito da device-independent bitmap specifica (DIB). Se *lbStyle* BS_DIBPATTERN, è il `lbHatch` membro contiene un handle per un DIB compresso.

- Riempimento con BS_DIBPATTERNPT un motivo definito da device-independent bitmap specifica (DIB). Se *lbStyle* BS_DIBPATTERNPT, è il `lbHatch` membro contiene un puntatore a un DIB compresso.

- Pennello BS_HATCHED tratteggio.

- Pennello BS_HOLLOW vuoto.

- BS_NULL stesso come BS_HOLLOW.

- Pennello BS_PATTERN modello definito da una bitmap in memoria.

- Pennello tinta unita BS_SOLID.

*lbColor*<br/>
Specifica il colore in cui deve essere disegnato il pennello. Se *lbStyle* è lo stile di BS_HOLLOW o BS_PATTERN *lbColor* viene ignorato. Se *lbStyle* rappresenti BS_DIBPATTERN BS_DIBPATTERNBT, la parola meno significativa della *lbColor* specifica se la `bmiColors` i membri del [BITMAPINFO](../../mfc/reference/bitmapinfo-structure.md) struttura contengono esplicita rosso, verde, blu valori (RGB) o gli indici nella tavolozza logica attualmente realizzata. Il `lbColor` membro deve essere uno dei valori seguenti:

- DIB_PAL_COLORS la tabella dei colori è costituito da una matrice di indici a 16 bit nella tavolozza logica attualmente realizzata.

- DIB_RGB_COLORS la tabella dei colori contiene i valori RGB letterali.

*lbHatch*<br/>
Specifica uno stile di tratteggio. Il significato dipende dallo stile pennello definito da *lbStyle*. Se *lbStyle* BS_DIBPATTERN, è il `lbHatch` membro contiene un handle per un DIB compresso. Se *lbStyle* BS_DIBPATTERNPT, è il `lbHatch` membro contiene un puntatore a un DIB compresso. Se *lbStyle* BS_HATCHED, è il `lbHatch` membro specifica l'orientamento delle righe utilizzato per creare il tratteggio. Può essere uno dei valori seguenti:

- HS_BDIAGONAL A 45 gradi verso l'alto, da sinistra a destra tratteggio

- HS_CROSS orizzontali e verticale tratteggio incrociato

- Tratteggio incrociato di 45 gradi HS_DIAGCROSS

- HS_FDIAGONAL A 45 gradi verso il basso, da sinistra a destra tratteggio

- HS_HORIZONTAL orizzontali tratteggiate

- HS_VERTICAL verticali tratteggiate

Se *lbStyle* BS_PATTERN, viene *lbHatch* è un handle alla bitmap che definisce il modello. Se *lbStyle* rappresenti BS_HOLLOW, BS_SOLID *lbHatch* viene ignorato.

## <a name="remarks"></a>Note

Sebbene *lbColor* controlla il colore di primo piano di un pennello tratteggio, il [CDC::SetBkMode](../../mfc/reference/cdc-class.md#setbkmode) e [CDC::SetBkColor](../../mfc/reference/cdc-class.md#setbkcolor) funzioni controllano il colore di sfondo.

## <a name="requirements"></a>Requisiti

**Intestazione:** WinGDI. h

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[CDC::GetCharABCWidths](../../mfc/reference/cdc-class.md#getcharabcwidths)

