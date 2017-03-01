---
title: Struttura COLORADJUSTMENT | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- COLORADJUSTMENT
dev_langs:
- C++
helpviewer_keywords:
- COLORADJUSTMENT structure
ms.assetid: 67fc4e63-0e0e-4fcb-8c45-aa5ebfefa013
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
translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 7f88877fa009abf4e811ba0a99b7e0e1683f998a
ms.lasthandoff: 02/24/2017

---
# <a name="coloradjustment-structure"></a>Struttura COLORADJUSTMENT
Il `COLORADJUSTMENT` struttura definisce i valori di regolazione di colore utilizzati da Windows `StretchBlt` e **StretchDIBits** funzioni quando il `StretchBlt` modalità è **dei mezzitoni**.  
  
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
  
- **CA_LOG_FILTER** specifica che una funzione logaritmica deve essere applicata per la densità dei colori output finale. Quando la luminosità è bassa aumenterà il contrasto.  
  
 *caIlluminantIndex*  
 Specifica la luminosità della sorgente di luce in cui viene visualizzato l'oggetto immagine. Questo membro può essere impostato su uno dei valori seguenti:  
  
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
 Specifica il valore di correzione gamma ennesima potenza per rosso primario di colori di origine. Il valore deve essere compreso tra 2500 a 65.000. Un valore pari a 10.000 non significa nessuna correzione gamma.  
  
 *caGreenGamma*  
 Specifica il valore di correzione gamma ennesima potenza per l'elemento primario verde di colori di origine. Il valore deve essere compreso tra 2500 a 65.000. Un valore pari a 10.000 non significa nessuna correzione gamma.  
  
 *caBlueGamma*  
 Specifica il valore di correzione gamma ennesima potenza per blu primario di colori di origine. Il valore deve essere compreso tra 2500 a 65.000. Un valore pari a 10.000 non significa nessuna correzione gamma.  
  
 *caReferenceBlack*  
 Specifica il colore nero riferimento per i colori di origine. I colori più scuri a questo vengono considerati come nero. Il valore deve essere nell'intervallo da 0 a 4.000.  
  
 *caReferenceWhite*  
 Specifica il riferimento bianco per i colori di origine. I colori chiari rispetto a questa vengono considerati come vuoti. Il valore deve essere compreso tra 6.000 a 10.000.  
  
 *caContrast*  
 Specifica la quantità di contrasto da applicare all'oggetto di origine. Il valore deve essere compreso tra -100 e 100. Il valore 0 non significa nessuna regolazione contrasto.  
  
 *caBrightness*  
 Specifica la quantità di luminosità da applicare all'oggetto di origine. Il valore deve essere compreso tra -100 e 100. Il valore 0 non significa nessuna regolazione della luminosità.  
  
 *caColorfulness*  
 Specifica la quantità di colorfulness da applicare all'oggetto di origine. Il valore deve essere compreso tra -100 e 100. Il valore 0 non significa nessuna regolazione colorfulness.  
  
 *caRedGreenTint*  
 Specifica la quantità di regolazione rosso o verde tonalità da applicare all'oggetto di origine. Il valore deve essere compreso tra -100 e 100. I numeri positivi sarebbero regolare verso il rosso e modificare i numeri negativi verso il verde. 0 non significa nessuna regolazione tonalità.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** WinGDI. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CDC::GetColorAdjustment](../../mfc/reference/cdc-class.md#getcoloradjustment)



