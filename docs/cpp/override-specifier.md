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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 677a6a0e0107f3ed0d0dc402f36e9d6dd4505c7f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
 