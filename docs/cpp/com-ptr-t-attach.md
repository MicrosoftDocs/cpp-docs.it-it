---
title: _com_ptr_t::Attach | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- _com_ptr_t::Attach
dev_langs:
- C++
helpviewer_keywords:
- COM interfaces, attach pointer
- Attach method [C++]
ms.assetid: 94c18e0a-06be-4ca7-bdaf-cd54ec0a645e
caps.latest.revision: 6
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
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: aa14a5fb0e54971e19de1b46317d768e7fc06a2e
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="comptrtattach"></a>_com_ptr_t::Attach
**Sezione specifica Microsoft**  
  
 Incapsula un puntatore a interfaccia raw di questo tipo di puntatore intelligente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      void Attach(  
   Interface* pInterface   
) throw( );  
void Attach(  
   Interface* pInterface,  
   bool fAddRef   
) throw( );  
```  
  
#### <a name="parameters"></a>Parametri  
 `pInterface`  
 Puntatore a interfaccia raw.  
  
 `fAddRef`  
 Se è **true**, quindi `AddRef` viene chiamato. Se è **false**, `_com_ptr_t` oggetto acquisisce la proprietà del puntatore a interfaccia raw senza chiamare `AddRef`.  
  
## <a name="remarks"></a>Note  
  
-   **Collegare (**`pInterface`**)** `AddRef` non viene chiamato.     La proprietà dell'interfaccia viene passata a questo oggetto `_com_ptr_t`. **Versione** viene chiamato per diminuire il conteggio dei riferimenti per il puntatore incapsulato in precedenza.  
  
-   **Collegare (** `pInterface` **,**`fAddRef`**)** se `fAddRef` è **true**, `AddRef` viene chiamato per incrementare il riferimento conteggio per il puntatore a interfaccia incapsulato.       Se `fAddRef` è **false**, questo `_com_ptr_t` oggetto acquisisce la proprietà del puntatore a interfaccia raw senza chiamare `AddRef`. **Versione** viene chiamato per diminuire il conteggio dei riferimenti per il puntatore incapsulato in precedenza.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _com_ptr_t](../cpp/com-ptr-t-class.md)
