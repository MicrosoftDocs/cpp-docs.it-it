---
title: "__ptr32, __ptr64 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "__ptr32_cpp"
  - "__ptr64_cpp"
  - "__ptr32"
  - "__ptr64"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__ptr32 (parola chiave) [C++]"
  - "__ptr64 (parola chiave) [C++]"
  - "_ptr32 (parola chiave) [C++]"
  - "_ptr64 (parola chiave) [C++]"
  - "ptr32 (parola chiave) [C++]"
  - "ptr64 (parola chiave) [C++]"
ms.assetid: afb563d8-7458-4fe7-9c30-bd4b5385a59f
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# __ptr32, __ptr64
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sezione specifica Microsoft  
 `__ptr32` rappresenta un puntatore nativo in un sistema a 32 bit, mentre `__ptr64` rappresenta un puntatore nativo in un sistema a 64 bit.  
  
 Di seguito viene illustrato come dichiarare ognuno dei seguenti tipi di puntatore:  
  
```  
int * __ptr32 p32;  
int * __ptr64 p64;  
```  
  
 In un sistema a 32 bit, un puntatore dichiarato con `__ptr64` viene troncato per corrispondere a un puntatore a 32 bit.  In un sistema a 64 bit, un puntatore dichiarato con `__ptr32` viene forzato per corrispondere a un puntatore a 64 bit.  
  
> [!NOTE]
>  Non è possibile usare `__ptr32` o `__ptr64` quando si esegue la compilazione con **\/clr:pure**.  In caso contrario, verrà generato un `Compiler Error C2472`.  
  
## Esempio  
 Con il seguente esempio, viene illustrato come dichiarare e allocare i puntatori con le parole chiave `__ptr32` e `__ptr64`.  
  
```  
#include <cstdlib>  
#include <iostream>  
  
int main()  
{  
    using namespace std;  
  
    int * __ptr32 p32;  
    int * __ptr64 p64;  
  
    p32 = (int * __ptr32)malloc(4);  
    *p32 = 32;  
    cout << *p32 << endl;  
  
    p64 = (int * __ptr64)malloc(4);  
    *p64 = 64;  
    cout << *p64 << endl;  
}  
```  
  
  **32**  
**64**   
## Fine sezione specifica Microsoft  
  
## Vedere anche  
 [Tipi fondamentali](../cpp/fundamental-types-cpp.md)