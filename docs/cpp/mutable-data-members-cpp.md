---
title: Membri dati modificabili (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- mutable_cpp
dev_langs:
- C++
helpviewer_keywords:
- mutable keyword [C++]
ms.assetid: ebe89746-3d36-43a8-8d69-f426af23f551
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
ms.openlocfilehash: b51f53444b7482575398b68c3a2bf52b3de96e55
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

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
