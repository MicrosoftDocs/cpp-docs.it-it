---
title: Struttura RGNDATA | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- RGNDATA
dev_langs:
- C++
helpviewer_keywords:
- RGNDATA structure
ms.assetid: 72257c00-f440-4dca-979e-9b6b5b2d5f2f
caps.latest.revision: 14
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
ms.openlocfilehash: 93a7c79f175e22dcb0b40cb39b157cfe21a98e93
ms.lasthandoff: 02/24/2017

---
# <a name="rgndata-structure"></a>Struttura RGNDATA
Il `RGNDATA` struttura contiene un'intestazione e una matrice di rettangoli che costituiscono un'area. I rettangoli, ordinati dall'alto in basso a sinistra a destra, non si sovrappongano.  
  
## <a name="syntax"></a>Sintassi  
  
```  
typedef struct _RGNDATA { /* rgnd */  
    RGNDATAHEADER rdh;  
    char Buffer[1];  
} RGNDATA;  
```  
  
#### <a name="parameters"></a>Parametri  
 *rdh*  
 Specifica un [RGNDATAHEADER](http://msdn.microsoft.com/library/windows/desktop/dd162941) struttura. (Per ulteriori informazioni su tale struttura, vedere il [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].) I membri di questa struttura di specificano il tipo di area (ovvero rettangolare o trapezoidale), il numero di rettangoli che costituiscono l'area, le dimensioni del buffer che contiene le strutture di rettangolo, e così via.  
  
 `Buffer`  
 Specifica un buffer di dimensioni arbitrarie che contiene il [RECT](../../mfc/reference/rect-structure1.md) strutture che compongono l'area.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** WinGDI. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CRgn::CreateFromData](../../mfc/reference/crgn-class.md#createfromdata)   
 [CRgn::GetRegionData](../../mfc/reference/crgn-class.md#getregiondata)


