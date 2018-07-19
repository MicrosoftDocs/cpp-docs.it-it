---
title: Virtual (C++) | Microsoft Docs
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
ms.openlocfilehash: 9eba5462caf739d78236e10df018fc07421ea876
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37939120"
---
# <a name="virtual-c"></a>virtual (C++)
Il **virtuale** parola chiave dichiara una funzione virtuale o una classe base virtuale.  
  
## <a name="syntax"></a>Sintassi  
  
```  
virtual [type-specifiers] member-function-declarator  
virtual [access-specifier] base-class-name  
```  
  
#### <a name="parameters"></a>Parametri  
 *identificatori di tipo*  
 Specifica il tipo restituito della funzione interna virtuale.  
  
 *dichiaratore di funzione membro*  
 Dichiara una nuova funzione interna.  
  
 *Identificatore di accesso*  
 Definisce il livello di accesso per la classe di base **pubbliche**, **protetti** oppure **private**. Può apparire prima o dopo il **virtuale** (parola chiave).  
  
 *base-class-name*  
 Identifica un tipo della classe dichiarato precedentemente.  
  
## <a name="remarks"></a>Note  
 Visualizzare [funzioni virtuali](../cpp/virtual-functions.md) per altre informazioni.  
  
 Vedere anche le parole chiave seguenti: [classe](../cpp/class-cpp.md), [privato](../cpp/private-cpp.md), [pubblica](../cpp/public-cpp.md), e [protetto](../cpp/protected-cpp.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Parole chiave](../cpp/keywords-cpp.md)