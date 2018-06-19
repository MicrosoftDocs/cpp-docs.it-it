---
title: Doppio thunk (C++) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- double thunks
- interop [C++], double thunking
- mixed assemblies [C++], double thunking
- /clr compiler option [C++], double thunking
- interoperability [C++], double thunking
ms.assetid: a85090b2-dc3c-498a-b40c-340db229dd6f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 47d5bbbecc8e1b9743c543a503df1a0afa0dc0ae
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33111208"
---
# <a name="double-thunking-c"></a>Doppio thunk (C++)
Doppio thunk fa riferimento la perdita di prestazioni che può verificarsi quando una chiamata di funzione in un contesto gestito chiama un Visual C++ funzione gestita e l'esecuzione del programma in cui viene chiamato il punto di ingresso nativo della funzione per chiamare la funzione gestita. In questo argomento viene illustrato dove si verifica il doppio thunk e come è possibile evitare in modo da migliorare le prestazioni.  
  
## <a name="remarks"></a>Note  
 Per impostazione predefinita, durante la compilazione con **/clr**, la definizione di una funzione gestita, il compilatore di generare un punto di ingresso gestito e un punto di ingresso nativo. In questo modo la funzione gestita da chiamare da siti di chiamata nativa e gestita. Tuttavia, quando esiste un punto di ingresso nativo, può essere il punto di ingresso per tutte le chiamate alla funzione. Se una funzione chiamante viene gestita, il punto di ingresso nativo chiamerà quindi il punto di ingresso gestito. In effetti, sono necessarie due chiamate per richiamare la funzione (da cui doppio thunk). Ad esempio, le funzioni virtuali vengono chiamate sempre tramite un punto di ingresso nativo.  
  
 È possibile indicare al compilatore di generare un punto di ingresso nativo per una funzione gestita, non che la funzione di essere chiamata solo da un contesto gestito, utilizzando il [clrcall](../cpp/clrcall.md) convenzione di chiamata.  
  
 Analogamente, se si esporta ([dllexport, dllimport](../cpp/dllexport-dllimport.md)) una funzione gestita, viene generato un punto di ingresso nativo e qualsiasi funzione che importa e chiama tale funzione verrà chiamata attraverso il punto di ingresso nativo. Per evitare il doppio thunk in questo caso, si utilizza la semantica di importazione/esportazione nativa. è sufficiente fare riferimento ai metadati tramite `#using` (vedere [# direttiva using](../preprocessor/hash-using-directive-cpp.md)).  
  
 Il compilatore è stato aggiornato per ridurre il doppio thunk non necessario. Ad esempio, qualsiasi funzione con un tipo gestito nella firma (incluso il tipo restituito) verrà implicitamente contrassegnate come `__clrcall`. Per ulteriori informazioni sull'eliminazione del doppio thunk, vedere [ http://msdn.microsoft.com/msdnmag/issues/05/01/COptimizations/default.aspx ](http://msdn.microsoft.com/msdnmag/issues/05/01/COptimizations/default.aspx).  
  
## <a name="example"></a>Esempio  
  
### <a name="description"></a>Descrizione  
 L'esempio seguente viene illustrato il doppio thunk. Quando viene compilato nativo (senza **/clr**), la chiamata alla funzione virtuale in `main` genera una chiamata al `T`di copiare e una chiamata al costruttore il distruttore. Un comportamento simile si ottiene quando la funzione virtuale viene dichiarata con **/clr** e `__clrcall`. Tuttavia, al termine della compilazione con **/clr**, la chiamata di funzione genera una chiamata al costruttore di copia, ma è presente un'altra chiamata al costruttore di copia a causa del thunk da nativo a gestito.  
  
### <a name="code"></a>Codice  
  
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
  
### <a name="sample-output"></a>Esempio di output  
  
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
  
## <a name="example"></a>Esempio  
  
### <a name="description"></a>Descrizione  
 L'esempio precedente è dimostrata l'esistenza del doppio thunk. Questo esempio viene illustrato l'effetto. Il `for` ciclo chiama la funzione virtuale e il tempo di esecuzione di report di programma. Il tempo più lento viene segnalato quando il programma viene compilato con **/clr**. I tempi più rapidi vengono segnalati durante la compilazione senza **/clr** o se la funzione virtuale viene dichiarata con `__clrcall`.  
  
### <a name="code"></a>Codice  
  
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
  
### <a name="sample-output"></a>Esempio di output  
  
```  
4.2 seconds  
after calling struct S  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md)