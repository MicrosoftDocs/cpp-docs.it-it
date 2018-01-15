---
title: Struttura XFORM | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: XFORM
dev_langs: C++
helpviewer_keywords: XFORM structure [MFC]
ms.assetid: 4fb4ef5b-05d2-4884-82d1-1cb8f7be6302
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 3f6f7121b5cc93c3f8f6f34f22d16cef888bbf15
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
 Il `XFORM` struttura specifica uno spazio world alla trasformazione di spazio di pagina. Il **eDx** e **eDy** membri specificano i componenti di traduzione orizzontale e verticale, rispettivamente. Nella tabella seguente viene illustrato come vengono utilizzati gli altri membri, a seconda dell'operazione:  
  
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

