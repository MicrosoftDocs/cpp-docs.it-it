---
title: -CLR esegue il cast di tipo C (C + + CLI) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs: C++
helpviewer_keywords: C-style casts and /clr
ms.assetid: d2a4401a-156a-4da9-8d12-923743e26913
caps.latest.revision: "13"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 6a47dddb9950378d2b76e30893560dc0c364d7cf
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="c-style-casts-with-clr-ccli"></a>Cast di tipo C con /clr (C++/CLI)
L'argomento seguente si applica solo a Common Language Runtime.  
  
 Se utilizzato con tipi CLR, il compilatore tenta di eseguire il mapping tra i cast elencati di seguito, nell'ordine seguente cast di tipo C:  
  
1.  const_cast  
  
2.  safe_cast  
  
3.  safe_cast più const_cast  
  
4.  static_cast  
  
5.  static_cast più const_cast  
  
 Se nessuno dei cast elencate in precedenza è valido e se il tipo dell'espressione e il tipo di destinazione siano tipi riferimento CLR, cast di tipo C esegue il mapping a un controllo di runtime (istruzione MSIL castclass). In caso contrario, un cast di tipo C è considerato non valido e il compilatore genera un errore.  
  
## <a name="remarks"></a>Note  
 Un cast di tipo C non è consigliato. Durante la compilazione con [/clr (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md), utilizzare [safe_cast](../windows/safe-cast-cpp-component-extensions.md).  
  
 L'esempio seguente viene illustrato un cast di tipo C che esegue il mapping a un `const_cast`.  
  
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
  
 L'esempio seguente viene illustrato un cast di tipo C che esegue il mapping a un `safe_cast`.  
  
```  
// cstyle_casts_2.cpp  
// compile with: /clr  
using namespace System;  
int main() {  
   Object ^ o = "hello";  
   String ^ s = (String^)o;  
}  
```  
  
 L'esempio seguente viene illustrato un cast di tipo C che esegue il mapping a un `safe_cast` più `const_cast`.  
  
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
  
 L'esempio seguente viene illustrato un cast di tipo C che esegue il mapping a un `static_cast`.  
  
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
  
 L'esempio seguente viene illustrato un cast di tipo C che esegue il mapping a un `static_cast` più `const_cast`.  
  
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
  
 L'esempio seguente viene illustrato un cast di tipo C che esegue il mapping a un controllo in fase di esecuzione.  
  
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
  
 L'esempio seguente viene illustrato un valido cast di tipo C, che indica al compilatore per l'emissione di un errore.  
  
```  
// cstyle_casts_7.cpp  
// compile with: /clr  
using namespace System;  
int main() {  
   String^s = S"hello";  
   int i = (int)s;   // C2440  
}  
```  
  
## <a name="requirements"></a>Requisiti  
 Opzione del compilatore: **/clr**  
  
## <a name="see-also"></a>Vedere anche  
 [Estensioni componenti per le piattaforme runtime](../windows/component-extensions-for-runtime-platforms.md)