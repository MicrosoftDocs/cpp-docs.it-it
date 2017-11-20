---
title: Virtual (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- virtual_cpp
- virtual
dev_langs: C++
helpviewer_keywords:
- virtual base classes [C++], declaring
- base classes [C++], virtual
- virtual functions [C++], declaring
- virtual keyword [C++]
ms.assetid: c2eb987d-6cf3-43b6-aa0c-29a6f561b1ae
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: f8d029ce5a75da7c3c5642912c3d2a418183eee0
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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