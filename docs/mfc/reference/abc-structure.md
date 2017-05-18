---
title: Struttura ABC | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ABC
dev_langs:
- C++
helpviewer_keywords:
- ABC structure
ms.assetid: 32663839-c3b7-4f47-896c-b15329c96bc8
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
ms.openlocfilehash: c8b49cd8a94c5ff580393814be08b1819a1eca52
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

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



