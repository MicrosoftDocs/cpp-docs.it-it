---
title: Identificatore final | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: final_CPP
dev_langs: C++
helpviewer_keywords: final Identifier
ms.assetid: 649866d0-79d4-449f-ab74-f84b911b79a3
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: a3f7c5afd4010983ea943193b7abfb99f22eda38
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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