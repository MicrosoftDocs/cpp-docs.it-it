---
title: "Procedura: utilizzare riferimenti di rilevamento in C++/CLI | Microsoft Docs"
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
  - "CLR (tipi), passaggio per riferimento"
ms.assetid: d91e471c-34ff-4786-9e0d-c6db0494b946
caps.latest.revision: 11
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: utilizzare riferimenti di rilevamento in C++/CLI
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene illustrato come utilizzare un riferimento di rilevamento \(%\) in [!INCLUDE[cppcli](../build/reference/includes/cppcli_md.md)] per passare i tipi Common Language Runtime \(CLR\) per riferimento.  
  
## Per passare i tipi CLR per riferimento  
 Il seguente codice di esempio mostra come utilizzare un riferimento di rilevamento ai tipi CLR della sessione per riferimento.  
  
```  
// tracking_reference_handles.cpp  
// compile with: /clr  
using namespace System;  
  
ref struct City {  
private:  
   Int16 zip_;  
  
public:  
   City (int zip) : zip_(zip) {};  
   property Int16 zip {  
      Int16 get(void) {  
         return zip_;  
      }   // get  
   }   // property  
};  
  
void passByRef (City ^% myCity) {  
   // cast required so this pointer in City struct is "const City"  
   if (myCity->zip == 20100)  
      Console::WriteLine("zip == 20100");  
   else  
      Console::WriteLine("zip != 20100");  
}  
  
ref class G {  
public:  
   int i;  
};  
  
void Test(int % i) {  
   i++;  
}  
  
int main() {  
   G ^ g1 = gcnew G;  
   G ^% g2 = g1;  
   g1 -> i = 12;  
  
   Test(g2->i);   // g2->i will be changed in Test2()  
  
   City ^ Milano = gcnew City(20100);  
   passByRef(Milano);  
}  
```  
  
 **Output**  
  
  **\=\= 20100 zip** L'esempio seguente mostra che che accetta l'indirizzo di ritorno di un riferimento di rilevamento e [interior\_ptr \(C\+\+\/CLI\)](../windows/interior-ptr-cpp-cli.md)illustrato come modificare e l'accesso ai dati con un riferimento di rilevamento.  
  
```  
// tracking_reference_data.cpp  
// compile with: /clr  
using namespace System;  
  
public ref class R {  
public:  
   R(int i) : m_i(i) {  
      Console::WriteLine("ctor: R(int)");  
   }  
  
   int m_i;  
};  
  
class N {  
public:  
   N(int i) : m_i (i) {  
      Console::WriteLine("ctor: N(int i)");  
   }  
  
   int m_i;  
};  
  
int main() {  
   R ^hr = gcnew R('r');  
   R ^%thr = hr;  
   N n('n');  
   N %tn = n;  
  
   // Declare interior pointers  
   interior_ptr<R^> iphr = &thr;  
   interior_ptr<N> ipn = &tn;  
  
   // Modify data through interior pointer  
   (*iphr)->m_i = 1;   // (*iphr)->m_i == thr->m_i  
   ipn->m_i = 4;   // ipn->m_i == tn.m_i  
  
   ++thr-> m_i;   // hr->m_i == thr->m_i  
   ++tn. m_i;   // n.m_i == tn.m_i  
  
   ++hr-> m_i;   // (*iphr)->m_i == hr->m_i  
   ++n. m_i;   // ipn->m_i == n.m_i  
}  
```  
  
 **Output**  
  
  **costruttore: R \(int\)**  
**costruttore: N \(int i\)**   
## Riferimento di rilevamento e puntatori interni  
 Nell'esempio di codice viene illustrato che è possibile convertire tra i riferimenti di rilevamento e puntatori interni.  
  
```  
// tracking_reference_interior_ptr.cpp  
// compile with: /clr  
using namespace System;  
  
public ref class R {  
public:  
   R(int i) : m_i(i) {  
      Console::WriteLine("ctor: R(int)");  
   }  
  
   int m_i;  
};  
  
class N {  
public:  
   N(int i) : m_i(i) {  
      Console::WriteLine("ctor: N(int i)");  
   }  
  
   int m_i;  
};  
  
int main() {  
   R ^hr = gcnew R('r');  
   N n('n');  
  
   R ^%thr = hr;  
   N %tn = n;  
  
   // Declare interior pointers  
   interior_ptr<R^> iphr = &hr;  
   interior_ptr<N> ipn = &n;  
  
   // Modify data through interior pointer  
   (*iphr)->m_i = 1;   // (*iphr)-> m_i == thr->m_i  
   ipn->m_i = 4;   // ipn->m_i == tn.m_i  
  
   ++thr->m_i;   // hr->m_i == thr->m_i  
   ++tn.m_i;   // n.m_i == tn.m_i  
  
   ++hr->m_i;   // (*iphr)->m_i == hr->m_i  
   ++n.m_i;   // ipn->m_i == n.m_i  
}  
```  
  
 **Output**  
  
  **costruttore: R \(int\)**  
**costruttore: N \(int i\)**   
## Riferimento di rilevamento e tipi di valore  
 In questo esempio viene illustrata la conversione boxing semplice con un riferimento di rilevamento a un tipo di valore:  
  
```  
// tracking_reference_valuetypes_1.cpp// compile with: /clrusing namespace System;int main() {   int i = 10;   int % j = i;   Object ^ o = j;   // j is implicitly boxed and assigned to o}  
```  
  
 Nell'esempio seguente viene illustrato che è possibile disporre sia dei riferimenti di rilevamento che i riferimenti nativi a tipi di valore.  
  
```  
// tracking_reference_valuetypes_2.cpp  
// compile with: /clr  
using namespace System;  
int main() {  
   int i = 10;  
   int & j = i;  
   int % k = j;  
   i++;   // 11  
   j++;   // 12  
   k++;   // 13  
   Console::WriteLine(i);  
   Console::WriteLine(j);  
   Console::WriteLine(k);  
}  
```  
  
 **Output**  
  
  **13**  
**13**  
**13** Nell'esempio seguente viene illustrato che è possibile utilizzare i riferimenti di rilevamento insieme ai tipi di valore e tipi nativi.  
  
```  
// tracking_reference_valuetypes_3.cpp  
// compile with: /clr  
value struct G {  
   int i;  
};  
  
struct H {  
   int i;  
};  
  
int main() {  
   G g;  
   G % v = g;  
   v.i = 4;  
   System::Console::WriteLine(v.i);  
   System::Console::WriteLine(g.i);  
  
   H h;  
   H % w = h;  
   w.i = 5;  
   System::Console::WriteLine(w.i);  
   System::Console::WriteLine(h.i);  
}  
```  
  
 **Output**  
  
  **4**  
**4**  
**5**  
**5** In questo esempio viene illustrato che è possibile associare un riferimento di rilevamento a un tipo di valore nell'heap sottoposto a garbage collection:  
  
```  
// tracking_reference_valuetypes_4.cpp  
// compile with: /clr  
using namespace System;  
value struct V {  
   int i;  
};  
  
void Test(V^ hV) {   // hv boxes another copy of original V on GC heap  
   Console::WriteLine("Boxed new copy V: {0}", hV->i);  
}  
  
int main() {  
   V v;   // V on the stack  
   v.i = 1;  
   V ^hV1 = v;   // v is boxed and assigned to hV1  
   v.i = 2;  
   V % trV = *hV1;   // trV is bound to boxed v, the v on the gc heap.  
   Console::WriteLine("Original V: {0}, Tracking reference to boxed V: {1}", v.i, trV.i);  
   V ^hV2 = trV;   // hv2 boxes another copy of boxed v on the GC heap  
   hV2->i = 3;  
   Console::WriteLine("Tracking reference to boxed V: {0}", hV2->i);  
   Test(trV);  
   v.i = 4;  
   V ^% trhV = hV1;  // creates tracking reference to boxed type handle  
   Console::WriteLine("Original V: {0}, Reference to handle of originally boxed V: {1}", v.i, trhV->i);  
}  
```  
  
 **Output**  
  
  **V originale: 2, riferimento di rilevamento del boxing V: 1**  
**Il riferimento di rilevamento del boxing V: 3**  
**Nuova copia boxed V: 1**  
**V originale: 4, riferimento all'handle di V originariamente boxed: 1**   
## Il modello viene eseguito che accetta nativo, il valore, o i parametri ref  
 Tramite un riferimento di rilevamento nella firma di una funzione modello, si garantisce che la funzione può essere chiamata da un parametro il cui tipo nativo, un valore di CLR, o un riferimento CLR.  
  
```  
// tracking_reference_template.cpp  
// compile with: /clr  
using namespace System;  
  
class Temp {  
public:  
   // template functions  
   template<typename T>  
   static int f1(T% tt) {   // works for object in any location  
      Console::WriteLine("T %");  
      return 0;  
   }  
  
   template<typename T>  
   static int f2(T& rt) {   // won't work for object on the gc heap  
      Console::WriteLine("T &");  
      return 1;  
   }  
};  
  
// Class Defintions  
ref struct R {  
   int i;  
};  
  
int main() {  
   R ^hr = gcnew R;  
   int i = 1;  
  
   Temp::f1(i); // ok  
   Temp::f1(hr->i); // ok  
   Temp::f2(i); // ok  
  
   // error can't track object on gc heap with a native reference  
   // Temp::f2(hr->i);   
}  
```  
  
 **Output**  
  
  **% T**  
**% T**  
**T &**   
## Vedere anche  
 [Tracking Reference Operator](../windows/tracking-reference-operator-cpp-component-extensions.md)