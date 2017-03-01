---
title: Errore del compilatore C2065 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2065
dev_langs:
- C++
helpviewer_keywords:
- C2065
ms.assetid: 78093376-acb7-45f5-9323-5ed7e0aab1dc
caps.latest.revision: 20
author: corob-msft
ms.author: corob
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
translationtype: Machine Translation
ms.sourcegitcommit: 3f69f0c3176d2fbe19e11ce08c071691a72d858d
ms.openlocfilehash: 81686df4727ab2b3d5af749174a42016e8443e70
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c2065"></a>Errore del compilatore C2065
'identifier': identificatore non dichiarato  
  
 Il tipo di una variabile deve essere specificato in una dichiarazione prima di poterla usare. I parametri usati da una funzione devono essere specificati in una dichiarazione, o prototipo, prima di poter usare la funzione.  
  
 Possibili cause:  
  
1.  Il nome dell'identificatore è errato.  
  
2.  L'identificatore usa lettere maiuscole e minuscole errate.  
  
3.  Mancano le virgolette di chiusura dopo una costante di stringa.  
  
4.  Si compila con una versione di debug del runtime C, dichiarare una variabile di iteratore della libreria Standard C++ in un `for` ciclo e quindi si tenta di utilizzare tale variabile all'esterno dell'ambito del `for` ciclo. La compilazione del codice della libreria Standard C++ con una versione di debug del runtime C implica [/Zc: forScope](../../build/reference/zc-forscope-force-conformance-in-for-loop-scope.md).  Vedere [supporto iteratori di Debug](../../standard-library/debug-iterator-support.md) per ulteriori informazioni.  
  
5.  È possibile che si stia chiamando una funzione in un file di intestazione SDK non attualmente supportata nell'ambiente di compilazione.  
  
6.  Si stanno omettendo file di inclusione necessari, soprattutto se si definisce `VC_EXTRALEAN`, `WIN32_LEAN_AND_MEAN` o `WIN32_EXTRA_LEAN`. Questi simboli escludono alcuni file di intestazione da windows.h e afxv_w32.h per velocizzare le compilazioni. Cercare in windows.h e afxv_w32.h una descrizione aggiornata degli elementi esclusi.  
  
7.  Ambito dello spazio dei nomi non corretto. Ad esempio, per risolvere le funzioni e gli operatori della libreria standard C++ non completi, è necessario specificare lo spazio dei nomi `std` con la direttiva `using`. L'esempio seguente non può essere compilato perché la direttiva `using` è impostata come commento e `cout` è definito nello spazio dei nomi `std`:  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2065 e mostra come risolverlo.  
  
```  
// C2065.cpp  
// compile with: /EHsc  
// using namespace std;   // Uncomment this line to fix  
#include <iostream>  
int main() {  
   cout << "Hello" << endl;   // C2065  
  
   // Or try the following line instead  
   std::cout << "Hello" << std::endl;  
}  
```  
  
## <a name="example"></a>Esempio  
 Quando si chiama una funzione generica, se l'argomento tipo designato non può essere dedotto dai parametri usati, il compilatore segnalerà un errore. Per ulteriori informazioni, vedere [funzioni generiche (C + c++ /CLI)](../../windows/generic-functions-cpp-cli.md).  
  
 L'esempio seguente genera l'errore C2065 e mostra come risolverlo.  
  
```  
// C2065_b.cpp  
// compile with: /clr  
generic <typename ItemType>  
void G(int i) {}  
  
int main() {  
   // global generic function call  
   G<T>(10);   // C2065  
   G<int>(10);   // OK - fix with a specific type argument  
}  
```  
  
## <a name="example"></a>Esempio  
 Questo errore può essere generato anche in seguito alle operazioni di conformità del compilatore eseguite per Visual C++ 2005: controllo dei parametri per gli attributi di Visual C++.  
  
 L'esempio seguente genera l'errore C2065 e mostra come risolverlo.  
  
```  
// C2065_c.cpp  
// compile with: /c  
[module(DLL, name=MyLibrary)];   // C2065  
// try the following line instead  
// [module(dll, name="MyLibrary")];  
  
[export]  
struct MyStruct {  
   int i;  
};  
```
