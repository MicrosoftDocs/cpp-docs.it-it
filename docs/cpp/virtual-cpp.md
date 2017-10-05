---
title: Virtual (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- virtual_cpp
- virtual
dev_langs:
- C++
helpviewer_keywords:
- virtual base classes, declaring
- base classes, virtual
- virtual functions, declaring
- virtual keyword [C++]
ms.assetid: c2eb987d-6cf3-43b6-aa0c-29a6f561b1ae
caps.latest.revision: 9
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
ms.openlocfilehash: 851f911dd7c49df1d685afe63ef5134cf0d5f175
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="virtual-c"></a>virtual (C++)
La parola chiave `virtual` dichiara una funzione virtuale o una classe base virtuale.  
  
## <a name="syntax"></a>Sintassi  
  
```  
virtual [type-specifiers] member-function-declarator  
virtual [access-specifier] base-class-name  
```  
  
#### <a name="parameters"></a>Parametri  
 `type-specifiers`  
 Specifica il tipo restituito della funzione interna virtuale.  
  
 `member-function-declarator`  
 Dichiara una nuova funzione interna.  
  
 `access-specifier`  
 Definisce il livello di accesso alla classe base, ovvero `public`, `protected` o `private`. Può apparire prima o dopo la parola chiave `virtual`.  
  
 `base-class-name`  
 Identifica un tipo della classe dichiarato precedentemente.  
  
## <a name="remarks"></a>Note  
 Vedere [funzioni virtuali](../cpp/virtual-functions.md) per ulteriori informazioni.  
  
 Vedere anche le parole chiave seguenti: [classe](../cpp/class-cpp.md), [privata](../cpp/private-cpp.md), [pubblica](../cpp/public-cpp.md), e [protetti](../cpp/protected-cpp.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Parole chiave](../cpp/keywords-cpp.md)
