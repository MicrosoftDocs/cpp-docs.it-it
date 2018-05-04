---
title: protected (C++) | Documenti Microsoft
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
ms.openlocfilehash: be866cda09ddc1770cf8d4b1ac0433e3c2701520
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="protected-c"></a>protected (C++)
## <a name="syntax"></a>Sintassi  
  
```  
protected:  
   [member-list]  
protected base-class  
```  
  
## <a name="remarks"></a>Note  
 Il `protected` la parola chiave specifica l'accesso ai membri di classe di *elenco dei membri* fino al successivo identificatore di accesso (**pubblica** o `private`) o alla fine della definizione della classe. I membri della classe dichiarati come `protected` possono essere usati solo dai seguenti elementi:  
  
-   Funzioni membro della classe che ha in origine dichiarato questi membri.  
  
-   Elementi friend della classe che ha in origine dichiarato questi membri.  
  
-   Classi derivate con accesso pubblico o protetto dalla classe che ha in origine dichiarato questi membri.  
  
-   Classi dirette derivate in modo privato che dispongono anche di accesso privato ai membri protetti.  
  
 Quando precede il nome di una classe base, la parola chiave `protected` specifica che i membri pubblici e protetti della classe base sono membri protetti delle relative classi derivate.  
  
 I membri protetti non sono privati come `private` membri che sono accessibili solo ai membri della classe in cui vengono dichiarati, ma non sono pubblici dei **pubblica** membri che sono accessibili in qualsiasi funzione.  
  
 I membri vengono dichiarati come protetti **statico** sono accessibili a qualsiasi funzione friend o un membro di una classe derivata. I membri non vengono dichiarati come protetti **statico** sono accessibili ad amici e funzioni membro in una classe derivata solo tramite un puntatore a riferimento a, o di un oggetto della classe derivata.  
  
 Per informazioni correlate, vedere [friend](../cpp/friend-cpp.md), [pubblica](../cpp/public-cpp.md), [privata](../cpp/private-cpp.md)e la tabella di accesso ai membri in [controllo dell'accesso ai membri della classe](member-access-control-cpp.md) .  
  
## <a name="clr-specific"></a>Specifico di /clr  
 Nei tipi CLR, parole chiave dell'identificatore di accesso di C++ (**pubblica**, `private`, e `protected`) può influire sulla visibilità dei tipi e metodi relativamente agli assembly. Per ulteriori informazioni, vedere [sul controllo dell'accesso](member-access-control-cpp.md).  
  
> [!NOTE]
>  I file compilati con [/LN](../build/reference/ln-create-msil-module.md) non sono interessati da questo comportamento. In questo caso, tutte le classi gestite (sia pubbliche che private) saranno visibili.  
  
## <a name="end-clr-specific"></a>Specifico di END /clr  
  
## <a name="example"></a>Esempio  
  
```  
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