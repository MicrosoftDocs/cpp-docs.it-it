---
title: _com_ptr_t::Release | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- _com_ptr_t.Release
- _com_ptr_t::Release
dev_langs:
- C++
helpviewer_keywords:
- Release method [C++]
ms.assetid: db448b34-0efa-4f02-b701-ad1ca3ae6ca5
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
ms.openlocfilehash: 6f3875a48977b047dfd8706369d448838626e5c6
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="comptrtrelease"></a>_com_ptr_t::Release
**Sezione specifica Microsoft**  
  
 Chiamate di **versione** funzione membro di **IUnknown** sul puntatore a interfaccia incapsulato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
void Release( );  
  
```  
  
## <a name="remarks"></a>Note  
 Chiamate `IUnknown::Release` sul puntatore a interfaccia incapsulato, che genera un `E_POINTER` errore se questo puntatore a interfaccia **NULL**.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _com_ptr_t](../cpp/com-ptr-t-class.md)
