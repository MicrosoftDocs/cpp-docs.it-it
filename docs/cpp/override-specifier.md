---
title: Identificatore di override | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- override Identifier
ms.assetid: b286fb46-9374-4ad8-b2e7-4607119b6133
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c95a67df03f62279b7b9c46ef41b6cafe7ff3df1
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39408151"
---
# <a name="override-specifier"></a>Identificatore override
È possibile usare la **eseguire l'override** (parola chiave) per indicare che le funzioni che eseguono l'override di una funzione virtuale in una classe di base.  
  
## <a name="syntax"></a>Sintassi  
  
```  
function-declaration override;  
```  
  
## <a name="remarks"></a>Note  
 **eseguire l'override** è sensibile al contesto e ha un significato solo quando speciale utilizzato dopo una dichiarazione di funzione membro; in caso contrario, non è una parola chiave riservata.  
  
## <a name="example"></a>Esempio  
 Uso **eseguire l'override** al fine di evitare il comportamento di ereditarietà accidentali nel codice. Nell'esempio seguente viene illustrato dove, senza usare **eseguire l'override**, il comportamento della funzione membro della classe derivata potrebbe non essere stato previsto. Il compilatore non genera alcun errore per questo codice.  
  
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
  
 Quando si usa **eseguire l'override**, il compilatore genera errori invece in modo invisibile creare nuove funzioni membro.  
  
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
  
 Per specificare che non è possibile eseguire l'override di funzioni e che le classi non possono essere ereditate, usare il [finale](../cpp/final-specifier.md) (parola chiave).  
  
## <a name="see-also"></a>Vedere anche  
 [Identificatore final](../cpp/final-specifier.md)   
 [Parole chiave](../cpp/keywords-cpp.md)   