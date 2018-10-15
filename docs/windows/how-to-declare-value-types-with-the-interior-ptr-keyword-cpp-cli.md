---
title: 'Procedura: dichiarare i tipi di valore con la parola chiave interior_ptr (C + + / CLI) | Microsoft Docs'
ms.custom: ''
ms.date: 10/12/2018
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- _ptr keyword
- value types, declaring
ms.assetid: 49eea66e-eeba-49bd-95b0-ba297be436e3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: bae409c881255b19a92b481fecab625c6b66c3c1
ms.sourcegitcommit: 3f4e92266737ecb70507871e87dc8e2965ad7e04
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/15/2018
ms.locfileid: "49327947"
---
# <a name="how-to-declare-value-types-with-the-interiorptr-keyword-ccli"></a>Procedura: dichiarare i tipi di valori con la parola chiave interior_ptr (C++/CLI)

Un' **interior_ptr** può essere usato con un tipo di valore.

> [!IMPORTANT]
> Questa funzionalità del linguaggio è supportata dall'opzione del compilatore `/clr`, ma non dall'opzione del compilatore `/ZW`.

## <a name="example"></a>Esempio

### <a name="description"></a>Descrizione

L'esempio C + c++ /CLI CLI esempio viene illustrato come usare un **interior_ptr** con un tipo valore.

### <a name="code"></a>Codice

```cpp
// interior_ptr_value_types.cpp
// compile with: /clr
value struct V {
   V(int i) : data(i){}
   int data;
};

int main() {
   V v(1);
   System::Console::WriteLine(v.data);

   // pointing to a value type
   interior_ptr<V> pv = &v;
   pv->data = 2;

   System::Console::WriteLine(v.data);
   System::Console::WriteLine(pv->data);

   // pointing into a value type
   interior_ptr<int> pi = &v.data;
   *pi = 3;
   System::Console::WriteLine(*pi);
   System::Console::WriteLine(v.data);
   System::Console::WriteLine(pv->data);
}
```

```Output
1
2
2
3
3
3
```

## <a name="example"></a>Esempio

### <a name="description"></a>Descrizione

In un tipo valore, il **ciò** puntatore restituisce un oggetto interior_ptr.

Nel corpo di una funzione membro non statico di un tipo valore `V`, **ciò** è un'espressione di tipo `interior_ptr<V>` il cui valore è l'indirizzo dell'oggetto per cui la funzione viene chiamata.

### <a name="code"></a>Codice

```cpp
// interior_ptr_value_types_this.cpp
// compile with: /clr /LD
value struct V {
   int data;
   void f() {
      interior_ptr<V> pv1 = this;
      // V* pv2 = this;   error
   }
};
```

## <a name="example"></a>Esempio

### <a name="description"></a>Descrizione

Nell'esempio seguente viene illustrato come utilizzare l'operatore address-of con membri statici.

Tramite l'indirizzo di un membro di tipo Visual C++ statico viene generato un puntatore nativo.  L'indirizzo di un membro statico del tipo di valore è un puntatore gestito poiché il membro del tipo di valore viene allocato nell'heap di runtime e può essere spostato dal Garbage Collector.

### <a name="code"></a>Codice

```cpp
// interior_ptr_value_static.cpp
// compile with: /clr
using namespace System;
value struct V { int i; };

ref struct G {
   static V v = {22};
   static int i = 23;
   static String^ pS = "hello";
};

int main() {
   interior_ptr<int> p1 = &G::v.i;
   Console::WriteLine(*p1);

   interior_ptr<int> p2 = &G::i;
   Console::WriteLine(*p2);

   interior_ptr<String^> p3 = &G::pS;
   Console::WriteLine(*p3);
}
```

```Output 
22
23
hello
```

## <a name="see-also"></a>Vedere anche

[interior_ptr (C++/CLI)](../windows/interior-ptr-cpp-cli.md)