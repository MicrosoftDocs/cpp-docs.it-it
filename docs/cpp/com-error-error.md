---
title: _com_error::Error | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- _com_error::Error
dev_langs:
- C++
helpviewer_keywords:
- Error method
ms.assetid: b53a15fd-198e-4276-afcd-13439c4807f7
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
ms.openlocfilehash: df8f409430b802350c1696592fc7f096283d015d
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="comerrorerror"></a>_com_error::Error
**Sezione specifica Microsoft**  
  
 Recupera l'elemento `HRESULT` passato al costruttore.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
HRESULT Error( ) const throw( );  
  
```  
  
## <a name="return-value"></a>Valore restituito  
 L'elemento `HRESULT` non elaborato passato nel costruttore.  
  
## <a name="remarks"></a>Note  
 Recupera l'elemento incapsulato `HRESULT` in un oggetto `_com_error`.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _com_error](../cpp/com-error-class.md)
