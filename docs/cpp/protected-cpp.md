---
title: protetto (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- protected_cpp
dev_langs:
- C++
helpviewer_keywords:
- protected keyword [C++], member access
- protected keyword [C++]
ms.assetid: 863d299f-fc0d-45d5-a1a7-bd24b7778a93
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b01c2f9ec4fa48cd2f11bd4176110384c1f8d288
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37943193"
---
# <a name="protected-c"></a>protected (C++)
## <a name="syntax"></a>Sintassi  
  
```  
protected:  
   [member-list]  
protected base-class  
```  
  
## <a name="remarks"></a>Note  
 Il **protetti** parola chiave specifica l'accesso ai membri della classe nel *dall'elenco dei membri* fino all'identificatore di accesso successivo (**pubblica** o **privato**) o alla fine della definizione di classe. I membri di classe dichiarati come **protetti** può essere usato solo dalle condizioni seguenti:  
  
-   Funzioni membro della classe che ha in origine dichiarato questi membri.  
  
-   Elementi friend della classe che ha in origine dichiarato questi membri.  
  
-   Classi derivate con accesso pubblico o protetto dalla classe che ha in origine dichiarato questi membri.  
  
-   Classi dirette derivate in modo privato che dispongono anche di accesso privato ai membri protetti.  
  
 Quando precede il nome di una classe di base, il **protetti** parola chiave specifica che i membri pubblici e protetti della classe di base sono membri protetti delle relative classi derivate.  
  
 Membri protetti non sono privati come **privati** membri che sono accessibili solo ai membri della classe in cui vengono dichiarati, ma non sono pubblici dei **pubblico** membri che sono accessibili in qualsiasi funzione.  
  
 I membri vengono dichiarati come protetti **statici** sono accessibili a qualsiasi funzione friend o membro di una classe derivata. I membri protetti non sono dichiarati come **statici** sono accessibili agli amici e dalle funzioni membro in una classe derivata solo tramite un puntatore a un riferimento o un oggetto della classe derivata.  
  
 Per informazioni correlate, vedere [friend](../cpp/friend-cpp.md), [pubblici](../cpp/public-cpp.md), [private](../cpp/private-cpp.md)e la tabella di accesso ai membri in [controllo dell'accesso ai membri della classe](member-access-control-cpp.md) .  
  
## <a name="clr-specific"></a>Specifico di /clr  
 Nei tipi CLR, parole chiave dell'identificatore di accesso di C++ (**pubbliche**, **privato**, e **protetti**) può influire sulla visibilità dei tipi e metodi relativamente agli assembly. Per altre informazioni, vedere [controllo di accesso membri](member-access-control-cpp.md).  
  
> [!NOTE]
>  I file compilati con [/LN](../build/reference/ln-create-msil-module.md) non sono interessati da questo comportamento. In questo caso, tutte le classi gestite (sia pubbliche che private) saranno visibili.  
  
## <a name="end-clr-specific"></a>Specifico di END /clr  
  
## <a name="example"></a>Esempio  
  
```cpp 
// keyword_protected.cpp  
// compile with: /EHsc  
#include <iostream>  
  
using namespace std;  
class X {  
public:  
   void setProtMemb( int i ) { m_protMemb = i; }  
   void Display() { cout << m_protMemb << endl; }  
protected:  
   int  m_protMemb;  
   void Protfunc() { cout << "\nAccess allowed\n"; }  
} x;  
  
class Y : public X {  
public:  
   void useProtfunc() { Protfunc(); }  
} y;  
  
int main() {  
   // x.m_protMemb;         error, m_protMemb is protected  
   x.setProtMemb( 0 );   // OK, uses public access function  
   x.Display();  
   y.setProtMemb( 5 );   // OK, uses public access function  
   y.Display();  
   // x.Protfunc();         error, Protfunc() is protected  
   y.useProtfunc();      // OK, uses public access function  
                        // in derived class  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Controllo dell'accesso ai membri della classe](member-access-control-cpp.md)   
 [Parole chiave](../cpp/keywords-cpp.md)