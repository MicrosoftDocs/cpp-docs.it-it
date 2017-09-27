---
title: Identificatore di override | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- override Identifier
ms.assetid: b286fb46-9374-4ad8-b2e7-4607119b6133
caps.latest.revision: 8
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
ms.openlocfilehash: 54c3b0de90ef3455af31c49592c6b405c345b0e9
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="override-specifier"></a>Identificatore override
È possibile utilizzare la parola chiave `override` per definire le funzioni membro che eseguono l'override di una funzione virtuale in una classe di base.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
function-declaration override;  
```  
  
## <a name="remarks"></a>Note  
 `override` è sensibile al contesto e ha un significato speciale solo quando utilizzato dopo una dichiarazione di funzione membro; in caso contrario, non è una parola chiave riservata.  
  
## <a name="example"></a>Esempio  
 Utilizzare `override` per evitare comportamenti di ereditarietà accidentali nel codice. Nell'esempio seguente viene illustrato dove, senza utilizzare `override`, il comportamento della funzione membro della classe derivata potrebbe non essere stato previsto. Il compilatore non genera alcun errore per questo codice.  
  
```cpp  
class BaseClass  
{  
    virtual void funcA();  
    virtual void funcB() const;  
    virtual void funcC(int = 0);  
    void funcD();  
};  
  
class DerivedClass: public BaseClass  
{  
    virtual void funcA(); // ok, works as intended  
  
    virtual void funcB(); // DerivedClass::funcB() is non-const, so it does not  
                          // override BaseClass::funcB() const and it is a new member function  
  
    virtual void funcC(double = 0.0); // DerivedClass::funcC(double) has a different  
                                      // parameter type than BaseClass::funcC(int), so  
                                      // DerivedClass::funcC(double) is a new member function  
  
};  
  
```  
  
 Quando si utilizza `override`, il compilatore genera errori invece di creare nuove funzioni membro automaticamente.  
  
```cpp  
class BaseClass  
{  
    virtual void funcA();  
    virtual void funcB() const;  
    virtual void funcC(int = 0);  
    void funcD();  
};  
  
class DerivedClass: public BaseClass  
{  
    virtual void funcA() override; // ok  
  
    virtual void funcB() override; // compiler error: DerivedClass::funcB() does not   
                                   // override BaseClass::funcB() const  
  
    virtual void funcC( double = 0.0 ) override; // compiler error:   
                                                 // DerivedClass::funcC(double) does not   
                                                 // override BaseClass::funcC(int)  
  
    void funcD() override; // compiler error: DerivedClass::funcD() does not   
                           // override the non-virtual BaseClass::funcD()  
};  
  
```  
  
 Per specificare che è Impossibile eseguire l'override di funzioni e che le classi non possono essere ereditate, utilizzare il [finale](../cpp/final-specifier.md) (parola chiave).  
  
## <a name="see-also"></a>Vedere anche  
 [Identificatore final](../cpp/final-specifier.md)   
 [Parole chiave](../cpp/keywords-cpp.md)   
 
