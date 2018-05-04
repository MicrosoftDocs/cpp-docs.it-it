---
title: Virtual (C++) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- virtual_cpp
- virtual
dev_langs:
- C++
helpviewer_keywords:
- virtual base classes [C++], declaring
- base classes [C++], virtual
- virtual functions [C++], declaring
- virtual keyword [C++]
ms.assetid: c2eb987d-6cf3-43b6-aa0c-29a6f561b1ae
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 909fd3fde92479b2e5407608026cb01ec17fced2
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
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