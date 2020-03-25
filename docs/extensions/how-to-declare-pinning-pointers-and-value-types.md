---
title: 'Procedura: dichiarare i puntatori di blocco e i tipi di valore'
ms.date: 10/12/2018
ms.topic: reference
helpviewer_keywords:
- value types, declaring
- pinning pointers
ms.assetid: 57c5ec8a-f85a-48c4-ba8b-a81268bcede0
ms.openlocfilehash: 88ef7e82161703a272a571392fd66e6055371c61
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80181967"
---
# <a name="how-to-declare-pinning-pointers-and-value-types"></a>Procedura: dichiarare i puntatori di blocco e i tipi di valore

Un tipo di valore può essere sottoposto a boxing in modo implicito. È quindi possibile dichiarare un puntatore di blocco all'oggetto di tipo valore e usare **pin_ptr** per il tipo valore boxed.

## <a name="example"></a>Esempio

### <a name="code"></a>Codice

```cpp
// pin_ptr_value.cpp
// compile with: /clr
value struct V {
   int i;
};

int main() {
   V ^ v = gcnew V;   // imnplicit boxing
   v->i=8;
   System::Console::WriteLine(v->i);
   pin_ptr<V> mv = &*v;
   mv->i = 7;
   System::Console::WriteLine(v->i);
   System::Console::WriteLine(mv->i);
}
```

```Output
8
7
7
```

## <a name="see-also"></a>Vedere anche

[pin_ptr (C++/CLI)](pin-ptr-cpp-cli.md)
