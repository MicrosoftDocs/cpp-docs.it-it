---
title: "Errore del compilatore C2065 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2065"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2065"
ms.assetid: 78093376-acb7-45f5-9323-5ed7e0aab1dc
caps.latest.revision: 20
caps.handback.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2065
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identifier': identificatore non dichiarato  
  
 Il tipo di una variabile deve essere specificato in una dichiarazione prima di poterla usare.  I parametri usati da una funzione devono essere specificati in una dichiarazione, o prototipo, prima di poter usare la funzione.  
  
 Possibili cause:  
  
1.  Il nome dell'identificatore è errato.  
  
2.  L'identificatore usa lettere maiuscole e minuscole errate.  
  
3.  Mancano le virgolette di chiusura dopo una costante di stringa.  
  
4.  Si esegue la compilazione con una versione di debug del runtime C, si dichiara una variabile iteratore della libreria standard C\+\+ in un ciclo `for` e quindi si cerca di usare la variabile iteratore all'esterno dell'ambito del ciclo `for`.  La compilazione del codice della libreria standard C\+\+ con una versione di debug del runtime C implica [\/Zc:forScope](../../build/reference/zc-forscope-force-conformance-in-for-loop-scope.md).  Per altre informazioni, vedere [Supporto degli iteratori di debug](../../standard-library/debug-iterator-support.md).  
  
5.  È possibile che si stia chiamando una funzione in un file di intestazione SDK non attualmente supportata nell'ambiente di compilazione.  
  
6.  Si stanno omettendo file di inclusione necessari, soprattutto se si definisce `VC_EXTRALEAN`, `WIN32_LEAN_AND_MEAN` o `WIN32_EXTRA_LEAN`.  Questi simboli escludono alcuni file di intestazione da windows.h e afxv\_w32.h per velocizzare le compilazioni.  Cercare in windows.h e afxv\_w32.h una descrizione aggiornata degli elementi esclusi.  
  
7.  Ambito dello spazio dei nomi non corretto.  Ad esempio, per risolvere le funzioni e gli operatori della libreria standard C\+\+ non completi, è necessario specificare lo spazio dei nomi `std` con la direttiva `using`.  L'esempio seguente non può essere compilato perché la direttiva `using` è impostata come commento e `cout` è definito nello spazio dei nomi `std`:  
  
## Esempio  
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
  
## Esempio  
 Quando si chiama una funzione generica, se l'argomento di tipo designato non può essere dedotto dai parametri usati, il compilatore segnalerà un errore.  Per altre informazioni, vedere [Generic Functions \(C\+\+\/CLI\)](../../windows/generic-functions-cpp-cli.md).  
  
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
  
## Esempio  
 Questo errore può essere generato anche in seguito alle operazioni di conformità del compilatore eseguite per Visual C\+\+ 2005: controllo dei parametri per gli attributi di Visual C\+\+.  
  
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