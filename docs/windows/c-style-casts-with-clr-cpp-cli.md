---
title: "C-Style Casts with /clr (C++/CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C-style casts and /clr"
ms.assetid: d2a4401a-156a-4da9-8d12-923743e26913
caps.latest.revision: 13
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# C-Style Casts with /clr (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nell'argomento si applica solo a Common Language Runtime.  
  
 Una volta utilizzato con i tipi CLR, il compilatore tenta di associare il cast di tipo C a uno dei cast elencati di seguito, nell'ordine seguente:  
  
1.  const\_cast  
  
2.  safe\_cast  
  
3.  safe\_cast più const\_cast  
  
4.  static\_cast  
  
5.  static\_cast più const\_cast  
  
 Se nessuno dei cast elencati in precedenza è valido e se il tipo dell'espressione e il tipo di destinazione sono tipi di riferimento CLR, mappe di cast di tipo C al controllo a runtime \(istruzione MSIL di castclass\).  In caso contrario, un cast di tipo C è considerato non valido e il compilatore segnala un errore.  
  
## Note  
 Un cast di tipo C non è consigliato.  Quando si compila con [\/clr \(Compilazione Common Language Runtime\)](../build/reference/clr-common-language-runtime-compilation.md), utilizzare [safe\_cast](../windows/safe-cast-cpp-component-extensions.md).  
  
 L'esempio seguente mostra un cast di tipo C che esegue il mapping ad un `const_cast`.  
  
```  
// cstyle_casts_1.cpp  
// compile with: /clr  
using namespace System;  
  
ref struct R {};  
int main() {  
   const R^ constrefR = gcnew R();  
   R^ nonconstR = (R^)(constrefR);   
}  
```  
  
 L'esempio seguente mostra un cast di tipo C che esegue il mapping ad un `safe_cast`.  
  
```  
// cstyle_casts_2.cpp  
// compile with: /clr  
using namespace System;  
int main() {  
   Object ^ o = "hello";  
   String ^ s = (String^)o;  
}  
```  
  
 L'esempio seguente mostra un cast di tipo C che esegue il mapping ad un `safe_cast` più `const_cast`..  
  
```  
// cstyle_casts_3.cpp  
// compile with: /clr  
using namespace System;  
  
ref struct R {};  
ref struct R2 : public R {};  
  
int main() {  
   const R^ constR2 = gcnew R2();  
   try {  
   R2^ b2DR = (R2^)(constR2);  
   }  
   catch(InvalidCastException^ e) {  
      System::Console::WriteLine("Invalid Exception");  
   }  
}  
```  
  
 L'esempio seguente mostra un cast di tipo C che esegue il mapping ad un `static_cast`.  
  
```  
// cstyle_casts_4.cpp  
// compile with: /clr  
using namespace System;  
  
struct N1 {};  
struct N2 {  
   operator N1() {  
      return N1();  
   }  
};  
  
int main() {  
   N2 n2;  
   N1 n1 ;  
   n1 = (N1)n2;  
}  
```  
  
 L'esempio seguente mostra un cast di tipo C che esegue il mapping ad un `static_cast` più `const_cast`..  
  
```  
// cstyle_casts_5.cpp  
// compile with: /clr  
using namespace System;  
struct N1 {};  
  
struct N2 {  
   operator const N1*() {  
      static const N1 n1;  
      return &n1;  
   }  
};  
  
int main() {  
   N2 n2;  
   N1* n1 = (N1*)(const N1*)n2;   // const_cast + static_cast  
}  
```  
  
 L'esempio seguente mostra un cast di tipo C che esegue il mapping a un controllo in fase di esecuzione.  
  
```  
// cstyle_casts_6.cpp  
// compile with: /clr  
using namespace System;  
  
ref class R1 {};  
ref class R2 {};  
  
int main() {  
   R1^ r  = gcnew R1();  
   try {  
      R2^ rr = ( R2^)(r);  
   }  
   catch(System::InvalidCastException^ e) {  
      Console::WriteLine("Caught expected exception");  
   }  
}  
```  
  
 L'esempio seguente mostra un cast di tipo C non valido, il quale causa un errore dal compilatore.  
  
```  
// cstyle_casts_7.cpp  
// compile with: /clr  
using namespace System;  
int main() {  
   String^s = S"hello";  
   int i = (int)s;   // C2440  
}  
```  
  
## Requisiti  
 Opzione del compilatore: **\/clr**  
  
## Vedere anche  
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)