---
title: Membri dati modificabili (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- mutable_cpp
dev_langs:
- C++
helpviewer_keywords:
- mutable keyword [C++]
ms.assetid: ebe89746-3d36-43a8-8d69-f426af23f551
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 65d2fc42021a01a1260b57f9516e53c439c8e604
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37943881"
---
# <a name="mutable-data-members-c"></a>Membri dati modificabili (C++)
Questa parola chiave può essere applicata solo a membri dati non dichiarati come static e const di una classe. Se un membro dati viene dichiarato **modificabile**, è consentito assegnare un valore per questo membro dati da un **const** funzione membro.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
mutable member-variable-declaration;  
```  
  
## <a name="remarks"></a>Note  
 Ad esempio, il codice seguente verrà compilata senza errori perché `m_accessCount` è stata dichiarata come **modificabile**e pertanto può essere modificato da `GetFlag` anche se `GetFlag` è una funzione membro const.  
  
```cpp 
// mutable.cpp  
class X  
{  
public:  
   bool GetFlag() const  
   {  
      m_accessCount++;  
      return m_flag;  
   }  
private:  
   bool m_flag;  
   mutable int m_accessCount;  
};  
  
int main()  
{  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Parole chiave](../cpp/keywords-cpp.md)