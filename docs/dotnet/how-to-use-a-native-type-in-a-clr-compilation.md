---
title: "Procedura: utilizzare un tipo nativo in una compilazione /clr | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
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
  - "/clr (opzione del compilatore) [C++], utilizzo di tipi nativi"
  - "compilazione, tipi nativi in /clr"
ms.assetid: 3a505c90-4adb-4942-9cf9-7d1fdcbc01e7
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: utilizzare un tipo nativo in una compilazione /clr
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile definire un tipo nativo in una compilazione **\/clr**. Qualsiasi utilizzo di tale tipo nativo dall'assembly risulterà valido.  I tipi nativi non saranno tuttavia utilizzabili dai metadati a cui viene fatto riferimento.  
  
 Ciascun assembly deve contenere la definizione di ogni tipo nativo utilizzato.  
  
 Per ulteriori informazioni, vedere [\/clr \(Compilazione Common Language Runtime\)](../build/reference/clr-common-language-runtime-compilation.md).  
  
## Esempio  
 In questo esempio viene creato un componente che definisce e utilizza un tipo nativo.  
  
```  
// use_native_type_in_clr.cpp  
// compile with: /clr /LD  
public struct NativeClass {  
   static int Test() { return 98; }  
};  
  
public ref struct ManagedClass {  
   static int i = NativeClass::Test();  
   void Test() {  
      System::Console::WriteLine(i);  
   }  
};  
```  
  
## Esempio  
 In questo esempio viene definito un client che utilizza il componente.  Si noti che l'accesso al tipo nativo costituisce un errore, a meno che non sia definito nel modulo.  
  
```  
// use_native_type_in_clr_2.cpp  
// compile with: /clr  
#using "use_native_type_in_clr.dll"  
// Uncomment the following 3 lines to resolve.  
// public struct NativeClass {  
//    static int Test() { return 98; }  
// };  
  
int main() {  
   ManagedClass x;  
   x.Test();  
  
   System::Console::WriteLine(NativeClass::Test());   // C2653  
}  
```  
  
## Vedere anche  
 [Utilizzo delle funzionalità di interoperabilità C\+\+ \(PInvoke implicito\)](../dotnet/using-cpp-interop-implicit-pinvoke.md)