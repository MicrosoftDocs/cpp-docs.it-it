---
title: private (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- private_cpp
dev_langs:
- C++
helpviewer_keywords:
- private keyword [C++]
ms.assetid: 94e99983-46a5-4e21-800c-28f8a7c6a8ff
caps.latest.revision: 10
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
ms.openlocfilehash: ec12850b2d2059c2824c0585edee21cb3fd1a7f7
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="private-c"></a>private (C++)
## <a name="syntax"></a>Sintassi  
  
```  
private:  
   [member-list]  
private base-class  
```  
  
## <a name="remarks"></a>Note  
 Quando precede un elenco di membri di classe, la parola chiave `private` indica che tali membri sono accessibili solo da funzioni membro e da elementi friend della classe. Quanto detto si applica a tutti i membri dichiarati fino al successivo identificatore di accesso o fino alla fine della classe.  
  
 Quando precede il nome di una classe base, la parola chiave `private` indica che i membri pubblici e protetti della classe base sono membri privati della classe derivata.  
  
 L'accesso predefinito dei membri in una classe è privato. L'accesso predefinito dei membri in una struttura o in un'unione è pubblico.  
  
 L'accesso predefinito di una classe base è privato per le classi e pubblico per le strutture. Le unioni non possono avere classi base.  
  
 Per informazioni correlate, vedere [friend](../cpp/friend-cpp.md), [pubblica](../cpp/public-cpp.md), [protetti](../cpp/protected-cpp.md)e la tabella di accesso ai membri in [controllo dell'accesso ai membri della classe](member-access-control-cpp.md).  
  
## <a name="clr-specific"></a>Specifico di /clr  
 Nei tipi CLR, parole chiave dell'identificatore di accesso di C++ (**pubblica**, `private`, e `protected`) può influire sulla visibilità dei tipi e metodi relativamente agli assembly. Per ulteriori informazioni, vedere [sul controllo dell'accesso](member-access-control-cpp.md).  
  
> [!NOTE]
>  I file compilati con [/LN](../build/reference/ln-create-msil-module.md) non sono interessati da questo comportamento. In questo caso, tutte le classi gestite (sia pubbliche che private) saranno visibili.  
  
## <a name="end-clr-specific"></a>Specifico di END /clr  
  
## <a name="example"></a>Esempio  
  
```  
// keyword_private.cpp  
class BaseClass {  
public:  
   // privMem accessible from member function  
   int pubFunc() { return privMem; }  
private:  
   void privMem;  
};  
  
class DerivedClass : public BaseClass {  
public:  
   void usePrivate( int i )  
      { privMem = i; }   // C2248: privMem not accessible  
                         // from derived class  
};  
  
class DerivedClass2 : private BaseClass {  
public:  
   // pubFunc() accessible from derived class  
   int usePublic() { return pubFunc(); }  
};  
  
int main() {  
   BaseClass aBase;  
   DerivedClass aDerived;  
   DerivedClass2 aDerived2;  
   aBase.privMem = 1;     // C2248: privMem not accessible  
   aDerived.privMem = 1;  // C2248: privMem not accessible  
                          //    in derived class  
   aDerived2.pubFunc();   // C2247: pubFunc() is private in  
                          //    derived class  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Controllo dell'accesso ai membri della classe](member-access-control-cpp.md)   
 [Parole chiave](../cpp/keywords-cpp.md)
