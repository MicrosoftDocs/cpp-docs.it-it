---
title: Struttura ABCFLOAT | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: ABCFLOAT
dev_langs: C++
helpviewer_keywords: ABCFLOAT structure [MFC]
ms.assetid: 338e7e15-9d2c-42d0-aa80-273acfde5cc5
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: b58871df5a526455297dd6d092f98e9facd901ae
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="abcfloat-structure"></a>Struttura ABCFLOAT
Il `ABCFLOAT` struttura contiene la larghezza delle colonne A, B e C di un carattere di tipo di carattere.  
  
## <a name="syntax"></a>Sintassi  
  
```  
typedef struct _ABCFLOAT { /* abcf */  
    FLOAT abcfA;  
    FLOAT abcfB;  
    FLOAT abcfC;  
} ABCFLOAT;  
```  
  
#### <a name="parameters"></a>Parametri  
 *abcfA*  
 Specifica la spaziatura A del carattere. La spaziatura A rappresenta la distanza da aggiungere alla posizione corrente prima di creare il glifo di caratteri.  
  
 *abcfB*  
 Specifica la spaziatura B del carattere. La spaziatura di B corrisponde alla larghezza della porzione disegnata del glifo di caratteri.  
  
 *abcfC*  
 Specifica la spaziatura C del carattere. La spaziatura C rappresenta la distanza da aggiungere alla posizione corrente per fornire spazio vuoto a destra del glifo di caratteri.  
  
## <a name="remarks"></a>Note  
 La larghezza delle colonne A, B e C è misurati lungo la linea di base del tipo di carattere. L'incremento di tipo carattere (larghezza totale) di un carattere è la somma degli spazi A, B e C. Gli spazi A e C possono essere negativi ad indicare rientranze o sporgenze.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** WinGDI. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CDC::GetCharABCWidths](../../mfc/reference/cdc-class.md#getcharabcwidths)

