---
title: 'Procedura: dichiarare handle in tipi nativi | Microsoft Docs'
ms.custom: get-started-article
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
f1_keywords:
- gcroot
dev_langs:
- C++
helpviewer_keywords:
- handles, declaring
- gcroot keyword [C++]
- types [C++], declaring handles in
ms.assetid: b8c0eead-17e5-4003-b21f-b673f997d79f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: fbf2934c2d7a1192e55ee9b454f91e7e8cc7037f
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46431268"
---
# <a name="how-to-declare-handles-in-native-types"></a>Procedura: dichiarare handle in tipi nativi

È possibile dichiarare un tipo di handle in un tipo nativo. Vcclr fornisce il modello di wrapper indipendente dai tipi `gcroot` per fare riferimento a un oggetto CLR dall'heap C++. Questo modello consente di incorporare un handle virtuale in un tipo nativo e considerarla come se fosse il tipo sottostante. Nella maggior parte dei casi, è possibile usare il `gcroot` object come tipo incorporato senza cast. Tuttavia, con [per ognuna, in](../dotnet/for-each-in.md), è necessario usare `static_cast` per recuperare il riferimento gestito sottostante.

Il `gcroot` modello viene implementato usando la funzionalità della classe di valore:: GCHandle, che fornisce "handles" nell'heap sottoposto a garbage collection. Si noti che i quadratini stessi non vengono raccolti nel Garbage Collector e vengono liberate quando non è più in uso dal distruttore nel `gcroot` classe (questo distruttore non è possibile chiamare manualmente). Se si creano istanze un `gcroot` dell'oggetto nell'heap nativo, è necessario chiamare delete su tale risorsa.

Il runtime manterrà un'associazione tra l'handle e l'oggetto Common Language Runtime, che fa riferimento. Quando si sposta l'oggetto CLR con l'heap sottoposto a garbage collection, l'handle restituirà il nuovo indirizzo dell'oggetto. Una variabile non deve essere aggiunto prima che venga assegnata a un `gcroot` modello.

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

In questo esempio viene illustrato come utilizzare `gcroot` mantiene i riferimenti ai tipi di valore (non i tipi di riferimento) in un tipo nativo tramite `gcroot` sul tipo boxed.

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