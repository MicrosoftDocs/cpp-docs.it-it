---
description: 'Altre informazioni su: procedura: dichiarare i tipi di valore con la parola chiave interior_ptr (C++/CLI)'
title: 'Procedura: dichiarare i tipi di valori con la parola chiave interior_ptr (C++/CLI)'
ms.date: 10/12/2018
ms.topic: reference
helpviewer_keywords:
- _ptr keyword
- value types, declaring
ms.assetid: 49eea66e-eeba-49bd-95b0-ba297be436e3
ms.openlocfilehash: b8d5c554f212a9536b0ad063d67e044c08194015
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97119174"
---
# <a name="how-to-declare-value-types-with-the-interior_ptr-keyword-ccli"></a>Procedura: dichiarare i tipi di valori con la parola chiave interior_ptr (C++/CLI)

Un oggetto **interior_ptr** può essere usato con un tipo valore.

> [!IMPORTANT]
> Questa funzionalità del linguaggio è supportata dall'opzione del compilatore `/clr`, ma non dall'opzione del compilatore `/ZW`.

## <a name="example-interior_ptr-with-value-type"></a>Esempio: interior_ptr con tipo di valore

### <a name="description"></a>Description

L'esempio C++/CLI seguente mostra come usare un oggetto **interior_ptr** con un tipo valore.

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

## <a name="example-this-pointer"></a>Esempio: puntatore

### <a name="description"></a>Description

In un tipo valore, il **`this`** puntatore restituisce un interior_ptr.

Nel corpo di una funzione membro non statica di un tipo di valore `V` , **`this`** è un'espressione di tipo il `interior_ptr<V>` cui valore è l'indirizzo dell'oggetto per il quale viene chiamata la funzione.

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

## <a name="example-address-of-operator"></a>Esempio: operatore address-of

### <a name="description"></a>Description

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

## <a name="see-also"></a>Vedi anche

[interior_ptr (C++/CLI)](interior-ptr-cpp-cli.md)
