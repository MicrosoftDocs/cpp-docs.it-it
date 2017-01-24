---
title: "Procedura: effettuare il marshalling di strutture utilizzando l&#39;interoperabilit&#224; C++ | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "interoperabilità C++, strutture"
  - "marshalling dei dati [C++], strutture"
  - "interoperabilità [C++], strutture"
  - "marshalling [C++], strutture"
  - "strutture [C++], marshalling"
ms.assetid: c2080200-f983-4d6e-a557-cd870f060a54
caps.latest.revision: 15
caps.handback.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: effettuare il marshalling di strutture utilizzando l&#39;interoperabilit&#224; C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo argomento viene illustrato un facet di interoperabilità Visual C\+\+.  Per ulteriori informazioni, vedere [Utilizzo delle funzionalità di interoperabilità C\+\+ \(PInvoke implicito\)](../dotnet/using-cpp-interop-implicit-pinvoke.md).  
  
 Negli esempi di codice riportati di seguito vengono utilizzate le direttive \#pragma [managed, unmanaged](../preprocessor/managed-unmanaged.md) per implementare funzioni gestite e non gestite nello stesso file. Queste funzioni, tuttavia, vengono eseguite nello stesso modo anche se definite in file diversi.  I file che contengono soltanto funzioni non gestite non richiedono necessariamente la compilazione con [\/clr \(Compilazione Common Language Runtime\)](../build/reference/clr-common-language-runtime-compilation.md).  
  
## Esempio  
 Nell'esempio riportato di seguito viene illustrato il passaggio di una struttura da una funzione gestita a una funzione non gestita, sia per valore che per riferimento.  Poiché la struttura in questo esempio contiene soltanto semplici tipi di dati intrinseci \(vedere [Blittable and Non\-Blittable Types](../Topic/Blittable%20and%20Non-Blittable%20Types.md)\), non è necessario alcun marshalling speciale.  Per eseguire il marshalling delle strutture non copiabili, ad esempio quelle che contengono puntatori, vedere [Procedura: effettuare il marshalling di puntatori incorporati utilizzando l'interoperabilità C\+\+](../dotnet/how-to-marshal-embedded-pointers-using-cpp-interop.md).  
  
```  
// PassStruct1.cpp  
// compile with: /clr  
  
#include <stdio.h>  
#include <math.h>  
  
using namespace System;  
using namespace System::Runtime::InteropServices;  
  
#pragma unmanaged  
  
struct Location {  
   int x;  
   int y;  
};  
  
double GetDistance(Location loc1, Location loc2) {  
   printf_s("[unmanaged] loc1(%d,%d)", loc1.x, loc1.y);  
   printf_s(" loc2(%d,%d)\n", loc2.x, loc2.y);  
  
   double h = loc1.x - loc2.x;  
   double v = loc1.y = loc2.y;  
   double dist = sqrt( pow(h,2) + pow(v,2) );  
  
   return dist;  
}  
  
void InitLocation(Location* lp) {  
   printf_s("[unmanaged] Initializing location...\n");  
   lp->x = 50;  
   lp->y = 50;  
}  
  
#pragma managed  
  
int main() {  
   Location loc1;  
   loc1.x = 0;  
   loc1.y = 0;  
  
   Location loc2;  
   loc2.x = 100;  
   loc2.y = 100;  
  
   double dist = GetDistance(loc1, loc2);  
   Console::WriteLine("[managed] distance = {0}", dist);  
  
   Location loc3;  
   InitLocation(&loc3);  
   Console::WriteLine("[managed] x={0} y={1}", loc3.x, loc3.y);  
}  
```  
  
## Esempio  
 Nell'esempio riportato di seguito viene illustrato il passaggio di una struttura da una funzione non gestita a una funzione gestita, sia per valore che per riferimento.  Poiché la struttura in questo esempio contiene soltanto semplici tipi di dati intrinseci \(vedere [Blittable and Non\-Blittable Types](../Topic/Blittable%20and%20Non-Blittable%20Types.md)\), non è necessario alcun marshalling speciale.  Per eseguire il marshalling delle strutture non copiabili, ad esempio quelle che contengono puntatori, vedere [Procedura: effettuare il marshalling di puntatori incorporati utilizzando l'interoperabilità C\+\+](../dotnet/how-to-marshal-embedded-pointers-using-cpp-interop.md).  
  
```  
// PassStruct2.cpp  
// compile with: /clr  
#include <stdio.h>  
#include <math.h>  
using namespace System;  
  
// native structure definition  
struct Location {  
   int x;  
   int y;  
};  
  
#pragma managed  
  
double GetDistance(Location loc1, Location loc2) {  
   Console::Write("[managed] got loc1({0},{1})", loc1.x, loc1.y);  
   Console::WriteLine(" loc2({0},{1})", loc2.x, loc2.y);  
  
   double h = loc1.x - loc2.x;  
   double v = loc1.y = loc2.y;  
   double dist = sqrt( pow(h,2) + pow(v,2) );  
  
   return dist;  
}  
  
void InitLocation(Location* lp) {  
   Console::WriteLine("[managed] Initializing location...");  
   lp->x = 50;  
   lp->y = 50;  
}  
  
#pragma unmanaged  
  
int UnmanagedFunc() {  
   Location loc1;  
   loc1.x = 0;  
   loc1.y = 0;  
  
   Location loc2;  
   loc2.x = 100;  
   loc2.y = 100;  
  
   printf_s("(unmanaged) loc1=(%d,%d)", loc1.x, loc1.y);  
   printf_s(" loc2=(%d,%d)\n", loc2.x, loc2.y);  
  
   double dist = GetDistance(loc1, loc2);  
   printf_s("[unmanaged] distance = %f\n", dist);  
  
   Location loc3;  
   InitLocation(&loc3);  
   printf_s("[unmanaged] got x=%d y=%d\n", loc3.x, loc3.y);  
  
    return 0;  
}  
  
#pragma managed  
  
int main() {  
   UnmanagedFunc();  
}  
```  
  
## Vedere anche  
 [Utilizzo delle funzionalità di interoperabilità C\+\+ \(PInvoke implicito\)](../dotnet/using-cpp-interop-implicit-pinvoke.md)