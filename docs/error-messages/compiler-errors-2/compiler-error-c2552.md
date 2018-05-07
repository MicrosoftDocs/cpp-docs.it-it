---
title: Errore del compilatore C2552 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2552
dev_langs:
- C++
helpviewer_keywords:
- C2552
ms.assetid: 0e0ab759-788a-4faf-9337-80d4b9e2e8c9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d13872af9ec5104b5c4327f39ec04c5642a5a5f8
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c2552"></a>Errore del compilatore C2552
'identificatore': non aggregati non possono essere inizializzati con un elenco di inizializzatori  
  
 L'identificatore di aggregazione è stato inizializzato in modo non corretto.  
  
 [Funzioni di aggregazione](../../c-language/initializing-aggregate-types.md) sono definite come:  
  
-   Matrici  
  
-   Classi, strutture e unioni che non includono:  
  
    -   Costruttori  
  
    -   Membri privati o protetti  
  
    -   Classi base  
  
    -   Funzioni virtuali  
  
 Inoltre, Visual C++ non consente i tipi di dati in un aggregato che contiene costruttori.  
  
 Di seguito sono indicati i motivi per cui può venire generato un avviso C2552 quando si effettua un tentativo di inizializzazione aggregata su un tipo:  
  
-   Il tipo dispone di uno o più costruttori definiti dall'utente.  
  
-   Il tipo dispone di uno o più membri dati non statici e privati.  
  
-   Il tipo dispone di una o più funzioni virtuali.  
  
-   Il tipo dispone di una classe base.  
  
-   Il tipo è una classe di riferimento o un'interfaccia CLR.  
  
-   Il tipo dispone di una matrice con dimensione non fissa (matrice zero) dove gli elementi hanno dei distruttori.  
  
 Il seguente codice di esempio genera l'errore C2552:  
  
```  
// C2552.cpp  
// compile with: /clr  
#include <string>  
using namespace std;  
  
struct Pair_Incorrect {  
private:  
   string m_name;  
   double m_val;  
};  
  
struct Pair_Correct1 {  
public:  
   Pair_Correct1(string name, double val)  
      : m_name(name), m_val(val) {}  
  
private:  
   string m_name;  
   double m_val;  
};  
  
struct Pair_Correct2 {  
public:  
   string m_name;  
   double m_val;  
};  
  
int main() {  
   // To fix, add a constructor to this class and use it for   
   // initializing the data members, see Pair_Correct1 (below)  
   // or  
   // Do not have any private or protected non-static data members,   
   // see Pair_Correct2 (below).  Pair_Correct2 is not recommended in   
   // case your object model requires some non-static data members to   
   // be private or protected  
  
   string name("John");  
   Pair_Incorrect pair1 = { name, 0.0 };   // C2552  
  
   // initialize a CLR immutable value type that has a constructor  
   System::DateTime dt = {2001, 4, 12, 22, 16, 49, 844};   // C2552   
  
   Pair_Correct1 pair2( name, 0.0 );  
   Pair_Correct1 pair3 = Pair_Correct1( name, 0.0 );  
   Pair_Correct2 pair4 = { name, 0.0 };  
   System::DateTime dt2(2001, 4, 12, 22, 16, 49, 844);  
}  
```