---
title: "protected (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "protected"
  - "protected_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "protected (parola chiave) [C++]"
  - "protected (parola chiave) [C++], accesso a membri"
ms.assetid: 863d299f-fc0d-45d5-a1a7-bd24b7778a93
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# protected (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sintassi  
  
```  
protected:  
   [member-list]  
protected base-class  
```  
  
## Note  
 La parola chiave `protected` specifica l'accesso ai membri della classe in *member\-list* fino all'identificatore di accesso successivo \(**public** o `private`\) o la fine della definizione della classe.  I membri della classe dichiarati come `protected` possono essere usati solo dai seguenti elementi:  
  
-   Funzioni membro della classe che ha in origine dichiarato questi membri.  
  
-   Elementi friend della classe che ha in origine dichiarato questi membri.  
  
-   Classi derivate con accesso pubblico o protetto dalla classe che ha in origine dichiarato questi membri.  
  
-   Classi dirette derivate in modo privato che dispongono anche di accesso privato ai membri protetti.  
  
 Quando precede il nome di una classe base, la parola chiave `protected` specifica che i membri pubblici e protetti della classe base sono membri protetti delle relative classi derivate.  
  
 I membri protetti non sono privati come i membri `private`, che sono accessibili solo ai membri della classe in cui vengono dichiarati, ma sono meno pubblici dei membri **public**, accessibili in qualsiasi funzione.  
  
 I membri protetti dichiarati anche come **static** sono accessibili a qualsiasi elemento friend o funzione membro di una classe derivata.  I membri protetti non dichiarati come **static** sono accessibili agli elementi friend e alle funzioni membro di una classe derivata solo tramite un puntatore a, un riferimento a o un oggetto di tale classe.  
  
 Per altre informazioni, vedere [friend](../cpp/friend-cpp.md), [public](../cpp/public-cpp.md), [private](../cpp/private-cpp.md) e la tabella di accesso ai membri in [Controllo dell'accesso ai membri della classe](../misc/controlling-access-to-class-members.md).  
  
## Specifico di \/clr  
 Nei tipi CLR, le parole chiave dell'identificatore di accesso C\+\+ \(**public**, `private` e `protected`\) possono influire sulla visibilità dei tipi e dei metodi relativamente agli assembly.  Per altre informazioni, vedere [Visibilità di tipi e membri](../misc/type-and-member-visibility.md).  
  
> [!NOTE]
>  Tale comportamento non influisce sui file compilati con [\/LN](../build/reference/ln-create-msil-module.md).  In questo caso, tutte le classi gestite \(sia pubbliche che private\) saranno visibili.  
  
## Specifico di END \/clr  
  
## Esempio  
  
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
  
## Vedere anche  
 [Controllo dell'accesso ai membri di classi](../misc/controlling-access-to-class-members.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)