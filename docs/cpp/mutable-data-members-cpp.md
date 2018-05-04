---
title: Membri dati modificabili (C++) | Documenti Microsoft
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
ms.openlocfilehash: e7dd639cbf1ef076dee6e447f317533bf12dae10
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="mutable-data-members-c"></a>Membri dati modificabili (C++)
Questa parola chiave può essere applicata solo a membri dati non dichiarati come static e const di una classe. Se viene dichiarato un membro dati `mutable`, è consentito assegnare un valore di questo membro dati da un **const** funzione membro.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
mutable member-variable-declaration;  
```  
  
## <a name="remarks"></a>Note  
 Ad esempio, il codice seguente compila senza errori perché `m_accessCount` è stato dichiarato `mutable` e pertanto può essere modificato da `GetFlag` anche se `GetFlag` è una funzione membro const.  
  
```  
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