---
title: 'Procedura: dichiarare handle in tipi nativi | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: get-started-article
f1_keywords: gcroot
dev_langs: C++
helpviewer_keywords:
- handles, declaring
- gcroot keyword [C++]
- types [C++], declaring handles in
ms.assetid: b8c0eead-17e5-4003-b21f-b673f997d79f
caps.latest.revision: "14"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 097889acd9a77cea5e0a81dd3bd13be712a70550
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="how-to-declare-handles-in-native-types"></a>Procedura: dichiarare handle in tipi nativi
È possibile dichiarare un tipo di handle in un tipo nativo. Vcclr costituisce il modello di wrapper indipendente dai tipi `gcroot` per fare riferimento a un oggetto CLR dall'heap C++. Questo modello consente di incorporare un handle virtuale in un tipo nativo e considerarlo come se fosse il tipo sottostante. Nella maggior parte dei casi, è possibile utilizzare il `gcroot` oggetto come tipo incorporato senza cast. Tuttavia, con [per ognuno, in](../dotnet/for-each-in.md), è necessario utilizzare `static_cast` per recuperare il riferimento gestito sottostante.  
  
 Il `gcroot` modello viene implementato utilizzando la funzionalità della classe di valore:: GCHandle, che fornisce "handle" nell'heap sottoposto a garbage collection. Si noti che gli handle stessi non sono sottoposte a garbage collection e vengono liberate quando non è più in uso dal distruttore nel `gcroot` classe (questo distruttore non può essere chiamato manualmente). Se crea un'istanza un `gcroot` dell'oggetto nell'heap nativo, è necessario chiamare delete su tale risorsa.  
  
 Il runtime manterrà un'associazione tra l'handle e l'oggetto CLR, che fa riferimento. Quando l'oggetto CLR si sposta con l'heap del garbage collector, l'handle restituirà il nuovo indirizzo dell'oggetto. Una variabile non deve essere bloccata prima che venga assegnata a un `gcroot` modello.  
  
## <a name="example"></a>Esempio  
 In questo esempio viene illustrato come creare un `gcroot` oggetto nello stack nativo.  
  
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
  
```Output  
hello  
```  
  
## <a name="example"></a>Esempio  
 In questo esempio viene illustrato come creare un `gcroot` oggetto nell'heap nativo.  
  
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
  
```Output  
hello  
```  
  
## <a name="example"></a>Esempio  
 In questo esempio viene illustrato come utilizzare `gcroot` per fare riferimento a tipi di valore (non i tipi di riferimento) in un tipo nativo tramite `gcroot` sul tipo boxed.  
  
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
  
```Output  
String in V: Hello  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Uso delle funzionalità di interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)