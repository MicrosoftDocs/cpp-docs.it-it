---
title: "Procedura: dichiarare handle in tipi nativi | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
f1_keywords: 
  - "gcroot"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "gcroot (parola chiave) [C++]"
  - "handle, dichiarazione"
  - "tipi [C++], dichiarazione di handle in"
ms.assetid: b8c0eead-17e5-4003-b21f-b673f997d79f
caps.latest.revision: 14
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: dichiarare handle in tipi nativi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Non è possibile dichiarare un tipo di handle in un tipo nativo. vcclr.h fornisce il modello indipendente dai tipi `gcroot` wrapper per fare riferimento a un oggetto CLR dall'heap C\+\+.  Questo modello consente di incorporare un handle virtuale in un tipo nativo e di considerarlo come se fosse il tipo sottostante.  Nella maggior parte dei casi, è possibile utilizzare l'oggetto `gcroot` come tipo incorporato senza casting.  Con [for each, in](../dotnet/for-each-in.md), tuttavia, è necessario utilizzare `static_cast` per recuperare il riferimento gestito sottostante.  
  
 Il modello `gcroot` viene implementato utilizzando le funzionalità della classe di valori System::Runtime::InteropServices::GCHandle, che fornisce handle nell'heap sottoposto a procedure di Garbage Collection.  Si noti che gli handle stessi non sono sottoposti a procedure di Garbage Collection e vengono liberati quando non sono più utilizzati dal distruttore presente nella classe `gcroot`. Questo distruttore non può essere chiamato manualmente.  Se si crea un'istanza di un oggetto `gcroot` nell'heap nativo, è necessario chiamare il metodo delete nella risorsa.  
  
 Il runtime continua a mantenere un'associazione tra l'handle e l'oggetto CLR a cui è riferito.  Quando l'oggetto CLR viene spostato con l'heap sottoposto a Garbage Collection, l'handle restituisce il nuovo indirizzo dell'oggetto.  Non è necessario bloccare una variabile prima di assegnarla a un modello `gcroot`.  
  
## Esempio  
 In questo esempio viene illustrato come creare un oggetto `gcroot` nello stack nativo.  
  
```  
// mcpp_gcroot.cpp  
// compile with: /clr  
#include <vcclr.h>  
using namespace System;  
  
class CppClass {  
public:  
   gcroot<String^> str;   // can use str as if it were String^  
   CppClass() {}  
};  
  
int main() {  
   CppClass c;  
   c.str = gcnew String("hello");  
   Console::WriteLine( c.str );   // no cast required  
}  
```  
  
  **hello**   
## Esempio  
 In questo esempio viene illustrato come creare un oggetto `gcroot` nell'heap nativo.  
  
```  
// mcpp_gcroot_2.cpp  
// compile with: /clr  
// compile with: /clr  
#include <vcclr.h>  
using namespace System;  
  
struct CppClass {  
   gcroot<String ^> * str;  
   CppClass() : str(new gcroot<String ^>) {}  
  
   ~CppClass() { delete str; }  
  
};  
  
int main() {  
   CppClass c;  
   *c.str = gcnew String("hello");  
   Console::WriteLine( *c.str );  
}  
```  
  
  **hello**   
## Esempio  
 In questo esempio viene illustrato come utilizzare `gcroot` per fare riferimento a tipi di valore \(non tipi di riferimento\) in un tipo nativo utilizzando `gcroot` nel tipo boxed.  
  
```  
// mcpp_gcroot_3.cpp  
// compile with: /clr  
#include < vcclr.h >  
using namespace System;  
  
public value struct V {  
   String^ str;  
};  
  
class Native {  
public:  
   gcroot< V^ > v_handle;  
};  
  
int main() {  
   Native native;  
   V v;  
   native.v_handle = v;  
   native.v_handle->str = "Hello";  
   Console::WriteLine("String in V: {0}", native.v_handle->str);  
}  
```  
  
  **Stringa in V: Hello**   
## Vedere anche  
 [Utilizzo delle funzionalità di interoperabilità C\+\+ \(PInvoke implicito\)](../dotnet/using-cpp-interop-implicit-pinvoke.md)