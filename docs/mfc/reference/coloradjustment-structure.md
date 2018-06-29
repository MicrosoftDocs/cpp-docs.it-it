---
title: Struttura COLORADJUSTMENT | Documenti Microsoft
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
ms.openlocfilehash: 1bb4cba5ef2eafa27a26c945f8754eb1a0ab0315
ms.sourcegitcommit: be0e3457f2884551f18e183ef0ea65c3ded7f689
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/28/2018
ms.locfileid: "37077955"
---
# <a name="coloradjustment-structure"></a>Struttura COLORADJUSTMENT
Il `COLORADJUSTMENT` struttura definisce i valori di regolazione colore usati dalle finestre `StretchBlt` e `StretchDIBits` funzioni quando il `StretchBlt` modalità **mezzitoni**.  
  
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
 *caSize*  
 Specifica la dimensione della struttura in byte.  
  
 *caFlags*  
 Specifica come deve essere preparato l'immagine di output. Questo membro può essere impostato su **NULL** o qualsiasi combinazione dei valori seguenti:  
  
- **CA_NEGATIVE** specifica che deve essere visualizzato il corrispondente negativo dell'immagine originale.  
  
- **CA_LOG_FILTER** specifica che una funzione logaritmica deve essere applicata in base alla densità finale dei colori output. Si aumenterà il contrasto colore quando la luminosità è bassa.  
  
 *caIlluminantIndex*  
 Specifica la luminosità della sorgente di luce con cui viene visualizzato l'oggetto immagine. Questo membro può essere impostato su uno dei valori seguenti:  
  
- **ILLUMINANT_EQUAL_ENERGY**  
  
- **ILLUMINANT_A**  
  
- **ILLUMINANT_B**  
  
- **ILLUMINANT_C**  
  
- **ILLUMINANT_D50**  
  
- **ILLUMINANT_D55**  
  
- **ILLUMINANT_D65**  
  
- **ILLUMINANT_D75**  
  
- **ILLUMINANT_F2**  
  
- **ILLUMINANT_TURNGSTEN**  
  
- **ILLUMINANT_DAYLIGHT**  
  
- **ILLUMINANT_FLUORESCENT**  
  
- **ILLUMINANT_NTSC**  
  
 *caRedGamma*  
 Specifica il valore di correzione gamma ennesima potenza per il database primario rosso di colori di origine. Il valore deve essere compreso nell'intervallo da 2500 a 65.000. Un valore pari a 10.000 non significa alcuna correzione gamma.  
  
 *caGreenGamma*  
 Specifica il valore di correzione gamma ennesima potenza per il database primario verde di colori di origine. Il valore deve essere compreso nell'intervallo da 2500 a 65.000. Un valore pari a 10.000 non significa alcuna correzione gamma.  
  
 *caBlueGamma*  
 Specifica il valore di correzione gamma ennesima potenza per il database primario blu di colori di origine. Il valore deve essere compreso nell'intervallo da 2500 a 65.000. Un valore pari a 10.000 non significa alcuna correzione gamma.  
  
 *caReferenceBlack*  
 Specifica il colore nero riferimento per i colori di origine. I colori più scuri superiore vengono considerati come nero. Il valore deve essere compreso nell'intervallo da 0 a 4.000.  
  
 *caReferenceWhite*  
 Specifica il riferimento bianco per i colori di origine. I colori chiari rispetto a questo vengono considerati come vuoti. Il valore deve essere compreso nell'intervallo da 6.000 a 10.000.  
  
 *caContrast*  
 Specifica la quantità di contrasto da applicare all'oggetto di origine. Il valore deve essere compreso nell'intervallo da -100 per 100. Un valore pari a 0 non significa nessuna regolazione a contrasto elevato.  
  
 *caBrightness*  
 Specifica la quantità di luminosità da applicare all'oggetto di origine. Il valore deve essere compreso nell'intervallo da -100 per 100. Un valore pari a 0 non significa nessuna luminosità.  
  
 *caColorfulness*  
 Specifica la quantità di colorfulness da applicare all'oggetto di origine. Il valore deve essere compreso nell'intervallo da -100 per 100. Un valore pari a 0 non significa nessuna regolazione colorfulness.  
  
 *caRedGreenTint*  
 Specifica la quantità di regolazione rosse o verdi tonalità da applicare all'oggetto di origine. Il valore deve essere compreso nell'intervallo da -100 per 100. I numeri positivi verrebbero regolare verso il rosso e modificare i numeri negativi verso il verde. 0 non significa nessuna regolazione tint.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** WinGDI. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CDC::GetColorAdjustment](../../mfc/reference/cdc-class.md#getcoloradjustment)


