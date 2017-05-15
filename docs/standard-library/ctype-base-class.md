---
title: Classe ctype_base | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- locale/std::ctype_base
- ctype_base
dev_langs:
- C++
helpviewer_keywords:
- ctype_base class
ms.assetid: ccffe891-d7ab-4d22-baf8-8eb6d438a96d
caps.latest.revision: 19
author: corob-msft
ms.author: corob
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 4ecf60434799708acab4726a95380a2d3b9dbb3a
ms.openlocfilehash: 74c13251b63018e00490487cb9a45c4bb6d52a21
ms.contentlocale: it-it
ms.lasthandoff: 04/19/2017

---
# <a name="ctypebase-class"></a>Classe ctype_base
La classe serve da classe base per i facet della classe modello [ctype](../standard-library/ctype-class.md). Classe base della classe ctype utilizzata per definire i tipi di enumerazione utilizzati per classificare o verificare i caratteri singolarmente o all'interno di intervalli completi.  
  
## <a name="syntax"></a>Sintassi  
  
```
struct ctype_base : public locale::facet
{
    enum
 {
    alnum,
 alpha,
    cntrl,
 digit,
    graph,
 lower,
    print,
 punct,
    space,
 upper,
    xdigit
 };
    typedef short mask;
    ctype_base(
 size_t _Refs = 0);

 ~ctype_base();

};
```  
  
## <a name="remarks"></a>Note  
 Definisce una maschera di enumerazione. Ogni costante di enumerazione caratterizza un modo diverso per classificare i caratteri, come definito dalle funzioni con nomi simili dichiarati nell'intestazione di \<ctype.h>. Le costanti sono:  
  
- **space** (funzione [isspace](../standard-library/locale-functions.md#isspace))  
  
- **print** (funzione [isprint](../standard-library/locale-functions.md#isprint))  
  
- **cntrl** (funzione [iscntrl](../standard-library/locale-functions.md#iscntrl))  
  
- **upper** (funzione [isupper](../standard-library/locale-functions.md#isupper))  
  
- **lower** (funzione [islower](../standard-library/locale-functions.md#islower))  
  
- **digit** (funzione [isdigit](../standard-library/locale-functions.md#isdigit))  
  
- **punct** (funzione [ispunct](../standard-library/locale-functions.md#ispunct))  
  
- **xdigit** (funzione [isxdigit](../standard-library/locale-functions.md#isxdigit))  
  
- **alpha** (funzione [isalpha](../standard-library/locale-functions.md#isalpha))  
  
- **alnum** (function [isalnum](../standard-library/locale-functions.md#isalnum))  
  
- **graph** (funzione [isgraph](../standard-library/locale-functions.md#isgraph))  
  
 È possibile caratterizzare una combinazione di classificazioni usando "o" con queste costanti. In particolare, è sempre vero che **alnum** == ( **alpha**``&#124; **digit**\) and **graph** \=\= \( **alnum**``&#124; **punct**).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<locale>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md) (Thread safety nella libreria standard C++)




