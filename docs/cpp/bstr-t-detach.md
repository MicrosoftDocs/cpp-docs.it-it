---
title: _bstr_t::Detach | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _bstr_t::Detach
dev_langs:
- C++
helpviewer_keywords:
- Detach method [C++]
ms.assetid: cc8284bd-f68b-4fff-b2e6-ce8354dabf8b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6b8b7bc86ae487843f925668bccfbfd8e67b8685
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37940251"
---
# <a name="bstrtdetach"></a>_bstr_t::Detach
**Sezione specifica Microsoft**  
  
 Restituisce `BSTR` sottoposto a wrapping da un oggetto `_bstr_t` e rimuove `BSTR` da `_bstr_t`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
BSTR Detach( ) throw;  
  
```  
  
## <a name="return-value"></a>Valore restituito  
 L'elemento `BSTR` di cui è stato eseguito il wrapping da `_bstr_t`.  
  
## <a name="example"></a>Esempio  
 Visualizzare [_bstr_t::Assign](../cpp/bstr-t-assign.md) per un esempio di utilizzo `Detach`.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _bstr_t](../cpp/bstr-t-class.md)