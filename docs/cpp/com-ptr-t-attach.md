---
title: _com_ptr_t::Attach | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _com_ptr_t::Attach
dev_langs:
- C++
helpviewer_keywords:
- COM interfaces, attach pointer
- Attach method [C++]
ms.assetid: 94c18e0a-06be-4ca7-bdaf-cd54ec0a645e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7341695ad0cbc8384da859b80a72a63d8d52215f
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
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
  
-   **Collegamento (**`pInterface`**)** `AddRef` non viene chiamato.     La proprietà dell'interfaccia viene passata a questo oggetto `_com_ptr_t`. **Versione** viene chiamato per diminuire il conteggio dei riferimenti per il puntatore incapsulato in precedenza.  
  
-   **Collegamento (** `pInterface` **,**`fAddRef`**)** se `fAddRef` è **true**, `AddRef` viene chiamato per incrementare il riferimento conteggio per il puntatore a interfaccia incapsulato.       Se `fAddRef` è **false**, questo `_com_ptr_t` oggetto acquisisce la proprietà del puntatore a interfaccia raw senza chiamare `AddRef`. **Versione** viene chiamato per diminuire il conteggio dei riferimenti per il puntatore incapsulato in precedenza.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _com_ptr_t](../cpp/com-ptr-t-class.md)