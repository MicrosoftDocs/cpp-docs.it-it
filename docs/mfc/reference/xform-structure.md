---
title: Struttura XFORM | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- XFORM
dev_langs:
- C++
helpviewer_keywords:
- XFORM structure
ms.assetid: 4fb4ef5b-05d2-4884-82d1-1cb8f7be6302
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
ms.openlocfilehash: 2d23b3838f1e2dcabb2affb96fa6f18942581ff8
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="xform-structure"></a>Struttura XFORM
Il `XFORM` struttura ha il formato seguente:  
  
## <a name="syntax"></a>Sintassi  
  
```  
typedef struct  tagXFORM {  /* xfrm */  
    FLOAT eM11;  
    FLOAT eM12;  
    FLOAT eM21;  
    FLOAT eM22;  
    FLOAT eDx;  
    FLOAT eDy;  
} XFORM;  
```  
  
## <a name="remarks"></a>Note  
 Il `XFORM` struttura specifica uno spazio mondo alla trasformazione di spazio di paging. Il **eDx** e **eDy** membri specificano i componenti di traduzione orizzontale e verticale, rispettivamente. Nella tabella seguente viene illustrato come vengono utilizzati gli altri membri, a seconda dell'operazione:  
  
|Operazione|eM11|eM12|eM21|eM22|  
|---------------|----------|----------|----------|----------|  
|`Rotation`|Coseno dell'angolo di rotazione|Seno dell'angolo di rotazione|Negativo seno dell'angolo di rotazione|Coseno dell'angolo di rotazione|  
|**La scalabilità**|Componente di scalabilità orizzontale|Nothing|Nothing|Componente di scala verticale|  
|**Taglio**|Nothing|Costante proporzionalità orizzontale|Costante proporzionalità verticale|Nothing|  
|**Reflection**|Componente orizzontale reflection|Nothing|Nothing|Componente verticale di reflection|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** WinGDI. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CRgn::CreateFromData](../../mfc/reference/crgn-class.md#createfromdata)


