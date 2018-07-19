---
title: _com_ptr_t::Attach | Microsoft Docs
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
ms.openlocfilehash: f8e982ebd9a09d4dfcb5e4b5e150b42a1e8d5c75
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37943793"
---
# <a name="comptrtattach"></a>_com_ptr_t::Attach
**Sezione specifica Microsoft**  
  
 Incapsula un puntatore a interfaccia raw di questo tipo di puntatore intelligente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
void Attach( Interface* pInterface ) throw( );  
void Attach( Interface* pInterface, bool fAddRef ) throw( );  
```  
  
#### <a name="parameters"></a>Parametri  
 *pInterface*  
 Puntatore a interfaccia raw.  
  
 *fAddRef*  
 Se è TRUE, quindi `AddRef` viene chiamato. Se è FALSE, il `_com_ptr_t` oggetto acquisisce la proprietà del puntatore a interfaccia raw senza chiamare `AddRef`.  
  
## <a name="remarks"></a>Note  
  
-   **Collega (***pInterface***)** `AddRef` non viene chiamato.     La proprietà dell'interfaccia viene passata a questo oggetto `_com_ptr_t`. `Release` viene chiamato per diminuire il conteggio dei riferimenti del puntatore incapsulato in precedenza.  
  
-   **Collega (***pInterface* **,***fAddRef***)** se *fAddRef* è TRUE, `AddRef`viene chiamato per incrementare il conteggio dei riferimenti per il puntatore a interfaccia incapsulato.       Se *fAddRef* è FALSE, questa `_com_ptr_t` oggetto acquisisce la proprietà del puntatore a interfaccia raw senza chiamare `AddRef`. `Release` viene chiamato per diminuire il conteggio dei riferimenti del puntatore incapsulato in precedenza.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _com_ptr_t](../cpp/com-ptr-t-class.md)