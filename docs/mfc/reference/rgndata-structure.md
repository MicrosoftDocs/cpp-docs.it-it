---
title: Struttura RGNDATA | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- RGNDATA
dev_langs:
- C++
helpviewer_keywords:
- RGNDATA structure [MFC]
ms.assetid: 72257c00-f440-4dca-979e-9b6b5b2d5f2f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 591c2dd65fdb9dde00f0ac1373c39affbe82da85
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33373508"
---
# <a name="rgndata-structure"></a>Struttura RGNDATA
Il `RGNDATA` struttura contiene un'intestazione e una matrice di rettangoli che costituiscono un'area. I rettangoli, ordinati dall'alto verso il basso a sinistra a destra, non si sovrappongano.  
  
## <a name="syntax"></a>Sintassi  
  
```  
typedef struct _RGNDATA { /* rgnd */  
    RGNDATAHEADER rdh;  
    char Buffer[1];  
} RGNDATA;  
```  
  
#### <a name="parameters"></a>Parametri  
 *rdh*  
 Specifica un [RGNDATAHEADER](http://msdn.microsoft.com/library/windows/desktop/dd162941) struttura. (Per ulteriori informazioni su tale struttura, vedi il Windows SDK). I membri di questa struttura di specificano il tipo di area (se è rettangolare o trapezoidale), il numero di rettangoli che costituiscono l'area, le dimensioni del buffer che contiene le strutture del rettangolo, e così via.  
  
 `Buffer`  
 Specifica un buffer di dimensioni arbitrarie che contiene il [RECT](../../mfc/reference/rect-structure1.md) strutture che compongono l'area.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** WinGDI. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CRgn::CreateFromData](../../mfc/reference/crgn-class.md#createfromdata)   
 [CRgn::GetRegionData](../../mfc/reference/crgn-class.md#getregiondata)

