---
title: "Errore del compilatore C2660 | Microsoft Docs"
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
  - "C2660"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2660"
ms.assetid: 2e01a1db-4f00-4df6-a04d-cb6f70a6922b
caps.latest.revision: 14
caps.handback.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2660
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione': la funzione non accetta numero parametri  
  
 La funzione è chiamata con un numero errato di parametri.  
  
 L'errore C2660 può verificarsi se viene chiamata accidentalmente una funzione dell'API Windows anziché una funzione membro MFC con lo stesso nome.  Per risolvere questo problema, eseguire le operazioni descritte di seguito.  
  
-   Modificare la chiamata di funzione in modo che corrisponda al formato della chiamata di funzione membro.  
  
-   Utilizzare l'operatore di risoluzione dell'ambito \(`::`\) per indicare al compilatore di cercare il nome della funzione nello spazio dei nomi globale.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C2660.  
  
```  
// C2660.cpp  
void func( int, int ) {}  
  
int main() {  
   func( 1 );   // C2660 func( int ) not declared  
   func( 1, 0 );   // OK  
}  
```  
  
## Esempio  
 L'errore C2660 può inoltre verificarsi quando si tenta di chiamare direttamente il metodo Dispose di un tipo gestito.   Per ulteriori informazioni, vedere [Distruttori e finalizzatori](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers).  Nell'esempio seguente viene generato l'errore C2660.  
  
```  
// C2660_a.cpp  
// compile with: /clr  
using namespace System;  
using namespace System::Threading;  
  
void CheckStatus( Object^ stateInfo ) {}  
  
int main() {  
   ManualResetEvent^ event = gcnew ManualResetEvent( false );     
   TimerCallback^ timerDelegate = gcnew TimerCallback( &CheckStatus );  
   Timer^ stateTimer = gcnew Timer( timerDelegate, event, 1000, 250 );  
  
   stateTimer->Dispose();   // C2660  
   stateTimer->~Timer();   // OK  
}  
```  
  
## Esempio  
 L'errore C2660 si verificherà se in una classe derivata è nascosta una funzione.  
  
```  
// C2660b.cpp  
// C2660 expected  
#include <stdio.h>  
  
class f {  
public:  
   void bar() {  
      printf_s("in f::bar\n");  
    }  
};  
  
class f2 : public f {  
public:  
   void bar(int i){printf("in f2::bar\n");}  
   // Uncomment the following line to resolve.  
   // using f::bar;   // - using declaration added  
   // or  
   // void bar(){__super::bar();}  
};  
  
int main() {  
   f2 fObject;  
   fObject.bar();  
}  
```  
  
## Esempio  
 L'errore C2660 può verificarsi se viene richiamata una proprietà indicizzata in modo non corretto.  
  
```  
// C2660c.cpp  
// compile with: /clr  
ref class X {  
   double d;  
public:  
   X() : d(1.9) {}  
   property double MyProp[] {  
      double get(int i) {  
         return d;  
      }  
   }   // end MyProp definition  
};  
  
int main() {  
   X ^ MyX = gcnew X();  
   System::Console::WriteLine(MyX->MyProp(1));   // C2660  
   System::Console::WriteLine(MyX->MyProp[1]);   // OK  
}  
```  
  
## Esempio  
 L'errore C2660 può verificarsi se viene richiamata una proprietà indicizzata in modo non corretto.  
  
```  
// C2660d.cpp  
// compile with: /clr  
ref class A{  
public:  
   property int default[int,int] {  
      int get(int a, int b) {  
         return a + b;  
      }  
   }  
};  
  
int main() {  
   A^ a = gcnew A;  
   int x = a[3][5];   // C2660  
   int x2 = a[3,5];   // OK  
}  
```  
  
## Esempio  
 L'errore C2660 può verificarsi se si definisce un operatore new in una classe modello in cui l'operatore new crea un oggetto il cui tipo è diverso da quello di inclusione.  
  
```  
// C2660e.cpp  
// compile with: /c  
#include <malloc.h>  
  
template <class T> class CA {  
private:  
    static T** line;  
   void* operator new (size_t, int i) {   
      return 0;  
   }  
   void operator delete(void* pMem, int i) {  
      free(pMem);  
   }  
  
public:  
   CA () { new (1) T(); }   // C2660  
   // try the following line instead  
   // CA () { new (1) CA<int>(); }  
};  
  
typedef CA <int> int_CA;  
  
void AAA() {  
   int_CA  list;  
}  
```