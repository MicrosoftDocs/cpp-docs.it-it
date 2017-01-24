---
title: "Doppio thunk (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/clr (opzione del compilatore) [C++], thunk doppio"
  - "thunk doppi"
  - "interoperabilità [C++], thunk doppio"
  - "interoperabilità [C++], thunk doppio"
  - "assembly misti [C++], thunk doppio"
ms.assetid: a85090b2-dc3c-498a-b40c-340db229dd6f
caps.latest.revision: 12
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Doppio thunk (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il doppio thunk fa riferimento al calo di prestazioni che può verificarsi quando la chiamata di funzioni in un contesto gestito chiama una funzione Visual C\+\+ gestita e quando l'esecuzione del programma chiama il punto di ingresso nativo della funzione allo scopo di chiamare la funzione gestita.  In questo argomento viene illustrato il punto in cui si verifica il doppio thunk e come evitarlo per migliorare le prestazioni.  
  
## Osservazioni  
 Per impostazione predefinita, quando si esegue la compilazione utilizzando **\/clr** \(non **\/clr:pure**\), la definizione di una funzione gestita porta il compilatore a generare un punto di ingresso gestito e un punto di ingresso nativo.  Questo consente alla funzione gestita di essere chiamata da siti di chiamata nativi e gestiti.  Tuttavia, quando è presente un punto di ingresso nativo, questo può rappresentare il punto di ingresso per tutte le chiamate alla funzione.  Se una funzione chiamante è gestita, il punto di ingresso nativo chiamerà il punto di ingresso gestito.  In effetti, per chiamare la funzione sono necessarie due chiamate \(da cui doppio thunk\).  Le funzioni virtuali, ad esempio, vengono sempre chiamate attraverso un punto di ingresso nativo.  
  
 Una possibile soluzione consiste nell'indicare al compilatore di non generare un punto di ingresso nativo per una funzione gestita, in modo che la funzione venga chiamata solo da un contesto gestito, utilizzando la convenzione di chiamata [\_\_clrcall](../cpp/clrcall.md).  
  
 Analogamente, se si esporta una funzione gestita \([dllexport, dllimport](../cpp/dllexport-dllimport.md)\), viene generato un punto di ingresso nativo, attraverso cui verranno eseguite le chiamate di tutte le funzioni che importano e chiamano la funzione gestita.  Per evitare il doppio thunk in questa situazione, non utilizzare la semantica di importazione\/esportazione nativa, ma fare semplicemente riferimento ai metadati tramite `#using` \(vedere [Direttiva \#using](../preprocessor/hash-using-directive-cpp.md)\).  
  
 Il compilatore è stato aggiornato in modo da ridurre il doppio thunking non necessario.  Ad esempio, qualsiasi funzione che contiene un tipo gestito nella firma \(incluso il tipo restituito\) verrà implicitamente contrassegnata come `__clrcall`.  Per ulteriori informazioni sull'eliminazione del doppio thunk, vedere [http:\/\/msdn.microsoft.com\/msdnmag\/issues\/05\/01\/COptimizations\/default.aspx](http://msdn.microsoft.com/msdnmag/issues/05/01/COptimizations/default.aspx).  
  
## Esempio  
  
### Descrizione  
 Nell'esempio riportato di seguito viene descritto il doppio thunk.  In caso di compilazione nativa \(senza **\/clr**\), la chiamata alla funzione virtuale in `main` genera una chiamata al distruttore e una chiamata al costruttore di copia di `T`.  Un comportamento analogo si ottiene quando la funzione virtuale viene dichiarata con **\/clr** e `__clrcall`.  Tuttavia, al termine della compilazione con **\/clr**, la chiamata di funzione genera una chiamata al costruttore di copia, ma a causa del thunk da nativo a gestito per tale costruttore viene eseguita un'ulteriore chiamata.  
  
### Codice  
  
```  
// double_thunking.cpp  
// compile with: /clr  
#include <stdio.h>  
struct T {  
   T() {  
      puts(__FUNCSIG__);  
   }  
  
   T(const T&) {  
      puts(__FUNCSIG__);  
   }  
  
   ~T() {  
      puts(__FUNCSIG__);  
   }  
  
   T& operator=(const T&) {  
      puts(__FUNCSIG__);  
      return *this;  
   }  
};  
  
struct S {  
   virtual void /* __clrcall */ f(T t) {};  
} s;  
  
int main() {  
   S* pS = &s;  
   T t;  
  
   printf("calling struct S\n");  
   pS->f(t);  
   printf("after calling struct S\n");  
}  
```  
  
### Esempio di output  
  
```  
__thiscall T::T(void)  
calling struct S  
__thiscall T::T(const struct T &)  
__thiscall T::T(const struct T &)  
__thiscall T::~T(void)  
__thiscall T::~T(void)  
after calling struct S  
__thiscall T::~T(void)  
```  
  
## Esempio  
  
### Descrizione  
 L'esempio precedente ha dimostrato l'esistenza del doppio thunk  e quello riportato di seguito ne illustra l'effetto.  Il ciclo `for` chiama la funzione virtuale e il programma segnala il tempo di esecuzione.  Il tempo più lento viene indicato quando si compila il programma con **\/clr**.  I tempi più rapidi sono segnalati quando la compilazione viene eseguita senza **\/clr** o quando la funzione virtuale viene dichiarata con `__clrcall`.  
  
### Codice  
  
```  
// double_thunking_2.cpp  
// compile with: /clr  
#include <time.h>  
#include <stdio.h>   
  
#pragma unmanaged  
struct T {  
   T() {}  
   T(const T&) {}  
   ~T() {}  
   T& operator=(const T&) { return *this; }  
};  
  
struct S {  
   virtual void /* __clrcall */ f(T t) {};  
} s;  
  
int main() {  
   S* pS = &s;  
   T t;  
   clock_t start, finish;  
   double  duration;  
   start = clock();  
  
   for ( int i = 0 ; i < 1000000 ; i++ )  
      pS->f(t);  
  
   finish = clock();  
   duration = (double)(finish - start) / (CLOCKS_PER_SEC);  
   printf( "%2.1f seconds\n", duration );  
   printf("after calling struct S\n");  
}  
```  
  
### Esempio di output  
  
```  
4.2 seconds  
after calling struct S  
```  
  
## Vedere anche  
 [Assembly misti \(nativi e gestiti\)](../dotnet/mixed-native-and-managed-assemblies.md)