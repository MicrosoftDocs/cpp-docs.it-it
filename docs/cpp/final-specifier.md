---
title: Identificatore final | Microsoft Docs
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
ms.openlocfilehash: 594bc432cb12b63c76172b06ee078d5b0f72de55
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37943166"
---
# <a name="final-specifier"></a>Identificatore final
È possibile usare la **finale** parola chiave per definire le funzioni virtuali che non possono essere sottoposto a override in una classe derivata. È inoltre possibile utilizzare tale parola chiave per definire classi che non possono essere ereditate.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
function-declaration final;  
class class-name final base-classes  
```  
  
## <a name="remarks"></a>Note  
 **finale** è sensibile al contesto e ha un significato speciale solo quando viene utilizzata dopo una dichiarazione di funzione o nome di classe; in caso contrario, non è una parola chiave riservata.  
  
 Quando **finale** viene usato nelle dichiarazioni di classe, `base-classes` è una parte facoltativa della dichiarazione.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente usa il **finale** (parola chiave) per specificare che una funzione virtuale non può essere sottoposto a override.  
  
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
  
 Per informazioni su come specificare che è possano eseguire l'override di funzioni membro, vedere [identificatore di override](../cpp/override-specifier.md).  
  
 L'esempio seguente usa il **finale** (parola chiave) per specificare che una classe non può essere ereditata.  
  
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