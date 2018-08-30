---
title: Struttura RGNDATA | Microsoft Docs
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
ms.openlocfilehash: 2c539feaac9cac5bca3a41868cc03379a63bf6bb
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43204359"
---
# <a name="rgndata-structure"></a>Struttura RGNDATA
Il `RGNDATA` struttura contiene un'intestazione e una matrice di rettangoli che costituiscono un'area. I rettangoli, ordinate dall'alto verso il basso a sinistra a destra, non si sovrappongano.  
  
## <a name="syntax"></a>Sintassi  
  
```  
typedef struct _RGNDATA { /* rgnd */  
    RGNDATAHEADER rdh;  
    char Buffer[1];  
} RGNDATA;  
```  
  
#### <a name="parameters"></a>Parametri  
 *rdh*  
 Specifica un [RGNDATAHEADER](/windows/desktop/api/wingdi/ns-wingdi-_rgndataheader) struttura. (Per altre informazioni su questa struttura, vedere il SDK di Windows). I membri di questa struttura di specificano il tipo di area (se è rettangolare o trapezoidale), il numero di rettangoli che formano l'area, le dimensioni del buffer che contiene le strutture di rettangolo, e così via.  
  
 *Buffer*  
 Specifica un buffer di dimensione arbitraria che contiene il [RECT](../../mfc/reference/rect-structure1.md) le strutture che compongono l'area.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** WinGDI. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CRgn::CreateFromData](../../mfc/reference/crgn-class.md#createfromdata)   
 [CRgn::GetRegionData](../../mfc/reference/crgn-class.md#getregiondata)

