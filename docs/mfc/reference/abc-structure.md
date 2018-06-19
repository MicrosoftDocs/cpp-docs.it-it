---
title: Struttura ABC | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- ABC
dev_langs:
- C++
helpviewer_keywords:
- ABC structure [MFC]
ms.assetid: 32663839-c3b7-4f47-896c-b15329c96bc8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 61b5f67247b556b37cdf934f94c30947675533e7
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33346490"
---
# <a name="abc-structure"></a>Struttura ABC
Il **ABC** struttura contiene la larghezza di un carattere in un tipo di carattere TrueType.  
  
## <a name="syntax"></a>Sintassi  
  
```  
typedef struct _ABC { /* abc */  
    int abcA;  
    UINT abcB;  
    int abcC;  
} ABC;  
```  
  
#### <a name="parameters"></a>Parametri  
 *abcA*  
 Specifica la spaziatura A del carattere. La spaziatura A rappresenta la distanza da aggiungere alla posizione corrente prima di creare il glifo di caratteri.  
  
 *abcB*  
 Specifica la spaziatura B del carattere. La spaziatura di B corrisponde alla larghezza della porzione disegnata del glifo di caratteri.  
  
 *abcC*  
 Specifica la spaziatura C del carattere. La spaziatura C rappresenta la distanza da aggiungere alla posizione corrente per fornire spazio vuoto a destra del glifo di caratteri.  
  
## <a name="remarks"></a>Note  
 La larghezza totale di un carattere è la somma degli spazi A, B e C. Gli spazi A e C possono essere negativi ad indicare rientranze o sporgenze.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** WinGDI. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CDC::GetCharABCWidths](../../mfc/reference/cdc-class.md#getcharabcwidths)


