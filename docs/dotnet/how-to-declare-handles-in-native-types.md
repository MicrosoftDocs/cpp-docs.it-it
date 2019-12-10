---
title: 'Procedura: dichiarare handle in tipi nativi'
ms.custom: get-started-article
ms.date: 11/04/2016
f1_keywords:
- gcroot
helpviewer_keywords:
- handles, declaring
- gcroot keyword [C++]
- types [C++], declaring handles in
ms.assetid: b8c0eead-17e5-4003-b21f-b673f997d79f
ms.openlocfilehash: 11dbc196a89a224afe02312fbe4dff99d8467f4c
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74988243"
---
# <a name="how-to-declare-handles-in-native-types"></a>Procedura: dichiarare handle in tipi nativi

Non è possibile dichiarare un tipo di handle in un tipo nativo. vcclr. h fornisce il modello di wrapper indipendente dai tipi `gcroot` per fare riferimento a un oggetto CLR C++ dall'heap. Questo modello consente di incorporare un handle virtuale in un tipo nativo e considerarlo come se fosse il tipo sottostante. Nella maggior parte dei casi, è possibile usare l'oggetto `gcroot` come tipo incorporato senza eseguire il cast. Tuttavia, con [per ogni, in](../dotnet/for-each-in.md)è necessario utilizzare `static_cast` per recuperare il riferimento gestito sottostante.

Il modello di `gcroot` viene implementato usando le funzionalità della classe Value System:: Runtime:: InteropServices:: GCHandle, che fornisce "Handles" nell'heap sottoposta a Garbage Collection. Si noti che gli handle non vengono sottoposti a Garbage Collection e vengono liberati quando non sono più utilizzati dal distruttore nella classe `gcroot` (questo distruttore non può essere chiamato manualmente). Se si crea un'istanza di un oggetto `gcroot` nell'heap nativo, è necessario chiamare delete sulla risorsa.

Il runtime manterrà un'associazione tra l'handle e l'oggetto CLR a cui fa riferimento. Quando l'oggetto CLR viene spostato con l'heap sottoposto a Garbage Collection, l'handle restituisce il nuovo indirizzo dell'oggetto. Una variabile non deve essere bloccata prima di essere assegnata a un modello di `gcroot`.

## <a name="example"></a>Esempio

In questo esempio viene illustrato come creare un oggetto `gcroot` nello stack nativo.

```cpp
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

In questo esempio viene illustrato come creare un oggetto `gcroot` nell'heap nativo.

```cpp
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

Questo esempio illustra come usare `gcroot` per conservare i riferimenti ai tipi di valore (non ai tipi di riferimento) in un tipo nativo usando `gcroot` sul tipo boxed.

```cpp
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
