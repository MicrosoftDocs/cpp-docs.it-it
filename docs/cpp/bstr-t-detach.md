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
ms.openlocfilehash: 30d17c929316efe5e3b6c8c71f90591bb05868c3
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39401408"
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
 Visualizzare [_bstr_t::Assign](../cpp/bstr-t-assign.md) per un esempio di utilizzo **Detach**.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _bstr_t](../cpp/bstr-t-class.md)