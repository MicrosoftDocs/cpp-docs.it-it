---
title: Identificatore final | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- final_CPP
dev_langs:
- C++
helpviewer_keywords:
- final Identifier
ms.assetid: 649866d0-79d4-449f-ab74-f84b911b79a3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 82fb9e13fc5dbbafcc37905716a37322b2966c6d
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="final-specifier"></a>Identificatore final
È possibile utilizzare la parola chiave `final` per designare le funzioni virtuali che non possono essere sottoposte a override in una classe derivata. È inoltre possibile utilizzare tale parola chiave per definire classi che non possono essere ereditate.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
function-declaration final;  
```  
  
```  
  
class class-name final base-classes  
```  
  
## <a name="remarks"></a>Note  
 La parola chiave `final` è sensibile al contesto e ha un significato speciale solo quando viene utilizzata dopo una dichiarazione di funzione o un nome di classe; in caso contrario, non è una parola chiave riservata.  
  
 Quando si utilizza `final` nelle dichiarazioni di classe, `base-classes` è una parte della dichiarazione facoltativa.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene utilizzata la parola chiave `final` per specificare che una funzione virtuale non può essere sottoposta a override.  
  
```cpp  
class BaseClass  
{  
    virtual void func() final;  
};  
  
class DerivedClass: public BaseClass  
{  
    virtual void func(); // compiler error: attempting to   
                         // override a final function  
};  
```  
  
 Per informazioni su come specificare che è possono eseguire l'override di funzioni membro, vedere [identificatore di override](../cpp/override-specifier.md).  
  
 Nell'esempio successivo viene utilizzata la parola chiave `final` per specificare che una classe non può essere ereditata.  
  
```cpp  
class BaseClass final   
{  
};  
  
class DerivedClass: public BaseClass // compiler error: BaseClass is   
                                     // marked as non-inheritable  
{  
};  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Parole chiave](../cpp/keywords-cpp.md)   
 [Identificatore override](../cpp/override-specifier.md)