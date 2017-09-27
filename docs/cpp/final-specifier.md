---
title: Identificatore final | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- final
- final_CPP
dev_langs:
- C++
helpviewer_keywords:
- final Identifier
ms.assetid: 649866d0-79d4-449f-ab74-f84b911b79a3
caps.latest.revision: 7
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
ms.openlocfilehash: c9f0a638707466778e75a3eabfe838c84b0355d7
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

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
