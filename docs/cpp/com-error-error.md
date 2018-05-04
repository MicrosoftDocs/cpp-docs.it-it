---
title: _com_error::Error | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _com_error::Error
- Error
dev_langs:
- C++
helpviewer_keywords:
- Error method [C++]
ms.assetid: b53a15fd-198e-4276-afcd-13439c4807f7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 02afac78de5eb5908d477f8503ceeebffe46f672
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
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