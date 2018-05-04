---
title: _bstr_t::GetAddress | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _bstr_t::GetAddress
dev_langs:
- C++
helpviewer_keywords:
- GetAddress method [C++]
ms.assetid: 09bc9180-867e-4ee5-b22a-8339dc663142
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 88accb8b614a5a07a7abf688790a80786f465607
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="bstrtgetaddress"></a>_bstr_t::GetAddress
**Sezione specifica Microsoft**  
  
 Libera la memoria per qualsiasi stringa esistente e restituisce l'indirizzo di una nuova stringa allocata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
BSTR* GetAddress( );  
  
```  
  
## <a name="return-value"></a>Valore restituito  
 Puntatore all'oggetto `BSTR` sottoposto a wrapping da `_bstr_t`.  
  
## <a name="remarks"></a>Note  
 `GetAddress` ha effetto su tutti gli oggetti `_bstr_t` che condividono un oggetto `BSTR`. Più di un oggetto `_bstr_t` può condividere un oggetto `BSTR` tramite l'utilizzo del costruttore copia e di `operator=`.  
  
## <a name="example"></a>Esempio  
 Vedere [Connetti](../cpp/bstr-t-assign.md) per un esempio di utilizzo `GetAddress`.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _bstr_t](../cpp/bstr-t-class.md)