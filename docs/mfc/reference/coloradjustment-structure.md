---
title: Struttura COLORADJUSTMENT | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- COLORADJUSTMENT
dev_langs:
- C++
helpviewer_keywords:
- COLORADJUSTMENT structure [MFC]
ms.assetid: 67fc4e63-0e0e-4fcb-8c45-aa5ebfefa013
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: cfa3d3393143b32e5e7a882918aedbc061b9b219
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46431060"
---
# <a name="coloradjustment-structure"></a>Struttura COLORADJUSTMENT

Il `COLORADJUSTMENT` struttura definisce i valori di regolazione di colore utilizzati per il Windows `StretchBlt` e `StretchDIBits` funzioni quando il `StretchBlt` modalità è mezzitoni.

## <a name="syntax"></a>Sintassi

```
typedef struct  tagCOLORADJUSTMENT {    /* ca */
    WORD caSize;
    WORD caFlags;
    WORD caIlluminantIndex;
    WORD caRedGamma;
    WORD caGreenGamma;
    WORD caBlueGamma;
    WORD caReferenceBlack;
    WORD caReferenceWhite;
    SHORT caContrast;
    SHORT caBrightness;
    SHORT caColorfulness;
    SHORT caRedGreenTint;
} COLORADJUSTMENT;
```

#### <a name="parameters"></a>Parametri

*caSize*<br/>
Specifica la dimensione della struttura in byte.

*caFlags*<br/>
Specifica come deve essere preparata l'immagine di output. Questo membro può essere impostato su NULL o qualsiasi combinazione dei valori seguenti:

- CA_NEGATIVE specifica che deve essere visualizzato il corrispondente negativo dell'immagine originale.

- CA_LOG_FILTER specifica che una funzione logaritmica deve essere applicata alla densità dei colori output finale. Questo aumenterà il contrasto dei colori quando sta per esaurirsi la luminanza.

*caIlluminantIndex*<br/>
Specifica la luminosità della sorgente di luce con cui viene visualizzato l'oggetto immagine. Questo membro può essere impostato su uno dei valori seguenti:

- ILLUMINANT_EQUAL_ENERGY

- ILLUMINANT_A

- ILLUMINANT_B

- ILLUMINANT_C

- ILLUMINANT_D50

- ILLUMINANT_D55

- ILLUMINANT_D65

- ILLUMINANT_D75

- ILLUMINANT_F2

- ILLUMINANT_TURNGSTEN

- ILLUMINANT_DAYLIGHT

- ILLUMINANT_FLUORESCENT

- ILLUMINANT_NTSC

*caRedGamma*<br/>
Specifica il valore di correzione gamma ennesima power per il database primario di colore rosso dei colori di origine. Il valore deve essere compreso tra 2.500 a 65.000. Un valore pari a 10.000 non significa nessuna correzione gamma.

*caGreenGamma*<br/>
Specifica il valore di correzione gamma ennesima power per il database primario verde di colori di origine. Il valore deve essere compreso tra 2.500 a 65.000. Un valore pari a 10.000 non significa nessuna correzione gamma.

*caBlueGamma*<br/>
Specifica il valore di correzione gamma ennesima power per il database primario blu di colori di origine. Il valore deve essere compreso tra 2.500 a 65.000. Un valore pari a 10.000 non significa nessuna correzione gamma.

*caReferenceBlack*<br/>
Specifica il riferimento nero per i colori di origine. Tutti i colori più scuri rispetto a questo vengono trattati come black. Il valore deve essere compreso tra 0 e 4.000.

*caReferenceWhite*<br/>
Specifica il riferimento bianco per i colori di origine. Tutti i colori chiari rispetto a questo vengono trattati come vuoti. Il valore deve essere compreso tra 6.000 a 10.000.

*caContrast*<br/>
Specifica la quantità di contrasto elevato da applicare all'oggetto di origine. Il valore deve essere compreso tra -100 per 100. Un valore pari a 0 non significa nessuna regolazione a contrasto elevato.

*caBrightness*<br/>
Specifica la quantità di luminosità da applicare all'oggetto di origine. Il valore deve essere compreso tra -100 per 100. Un valore pari a 0 non indica nessun regolazione della luminosità.

*caColorfulness*<br/>
Specifica la quantità di colorfulness da applicare all'oggetto di origine. Il valore deve essere compreso tra -100 per 100. Un valore pari a 0 non significa nessuna regolazione colorfulness.

*caRedGreenTint*<br/>
Specifica la quantità di regolazione del rosso o verde tonalità da applicare all'oggetto di origine. Il valore deve essere compreso tra -100 per 100. I numeri positivi sarebbero regolare verso il rosso e i numeri negativi regolare verso verde. Il valore 0 non significa alcun adattamento tinta.

## <a name="requirements"></a>Requisiti

**Intestazione:** WinGDI. h

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[CDC::GetColorAdjustment](../../mfc/reference/cdc-class.md#getcoloradjustment)


