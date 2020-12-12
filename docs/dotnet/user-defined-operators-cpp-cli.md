---
description: 'Altre informazioni su: operatori di User-Defined (C++/CLI)'
title: Operatori definiti dall'utente (C++/CLI)
ms.date: 11/04/2016
helpviewer_keywords:
- user-defined operators under /clr
ms.assetid: 42f93b4a-6de4-4e34-b07b-5a62ac014f2c
ms.openlocfilehash: e94a4d28517fc253fb8284a604b01a5f9d76de22
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97204225"
---
# <a name="user-defined-operators-ccli"></a>Operatori definiti dall'utente (C++/CLI)

Gli operatori definiti dall'utente per i tipi gestiti sono consentiti come membri statici o membri di istanza o in ambito globale. Tuttavia, solo gli operatori statici sono accessibili tramite metadati ai client scritti in una lingua diversa da Visual C++.

In un tipo riferimento, uno dei parametri di un operatore statico definito dall'utente deve essere uno dei seguenti:

- Handle ( `type` ^) a un'istanza del tipo di inclusione.

- Riferimento indiretto del tipo di riferimento ( `type` ^& o Type ^%) a un handle per un'istanza del tipo di inclusione.

In un tipo valore, uno dei parametri di un operatore statico definito dall'utente deve essere uno dei seguenti:

- Dello stesso tipo del tipo di valore di inclusione.

- Puntatore indiretto del tipo di puntatore ( `type` ^) al tipo di inclusione.

- Riferimento indiretto del tipo di riferimento ( `type` % o `type`&) al tipo di inclusione.

- Riferimento indiretto del tipo di riferimento ( `type` ^% o `type` ^&) all'handle.

È possibile definire gli operatori seguenti:

|Operatore|Moduli unari/binari?|
|--------------|--------------------------|
|!|Unario|
|!=|Binary|
|%|Binary|
|&|Unario e binario|
|&&|Binary|
|*|Unario e binario|
|+|Unario e binario|
|++|Unario|
|,|Binary|
|-|Unario e binario|
|--|Unario|
|->|Unario|
|/|Binary|
|<|Binary|
|<<|Binary|
|\<=|Binary|
|=|Binary|
|==|Binary|
|>|Binary|
|>=|Binary|
|>>|Binary|
|^|Binary|
|false|Unario|
|true|Unario|
|&#124;|Binary|
|&#124;&#124;|Binary|
|~|Unario|

## <a name="example-user-defined-operators"></a>Esempio: operatori definiti dall'utente

```cpp
// mcppv2_user-defined_operators.cpp
// compile with: /clr
using namespace System;
public ref struct X {
   X(int i) : m_i(i) {}
   X() {}

   int m_i;

   // static, binary, user-defined operator
   static X ^ operator + (X^ me, int i) {
      return (gcnew X(me -> m_i + i));
   }

   // instance, binary, user-defined operator
   X^ operator -( int i ) {
      return gcnew X(this->m_i - i);
   }

   // instance, unary, user-defined pre-increment operator
   X^ operator ++() {
      return gcnew X(this->m_i++);
   }

   // instance, unary, user-defined post-increment operator
   X^ operator ++(int i) {
      return gcnew X(this->m_i++);
   }

   // static, unary user-defined pre- and post-increment operator
   static X^ operator-- (X^ me) {
      return (gcnew X(me -> m_i - 1));
   }
};

int main() {
   X ^hX = gcnew X(-5);
   System::Console::WriteLine(hX -> m_i);

   hX = hX + 1;
   System::Console::WriteLine(hX -> m_i);

   hX = hX - (-1);
   System::Console::WriteLine(hX -> m_i);

   ++hX;
   System::Console::WriteLine(hX -> m_i);

   hX++;
   System::Console::WriteLine(hX -> m_i);

   hX--;
   System::Console::WriteLine(hX -> m_i);

   --hX;
   System::Console::WriteLine(hX -> m_i);
}
```

```Output
-5
-4
-3
-2
-1
-2
-3
```

## <a name="example-operator-synthesis"></a>Esempio: sintesi di operatori

Nell'esempio seguente viene illustrata l'operatore Synthesis, che è disponibile solo quando si utilizza **/CLR** per la compilazione. Operatore Synthesis crea il form di assegnazione di un operatore binario, se non ne è stato definito uno, in cui il lato sinistro dell'operatore di assegnazione ha un tipo CLR.

```cpp
// mcppv2_user-defined_operators_2.cpp
// compile with: /clr
ref struct A {
   A(int n) : m_n(n) {};
   static A^ operator + (A^ r1, A^ r2) {
      return gcnew A( r1->m_n + r2->m_n);
   };
   int m_n;
};

int main() {
   A^ a1 = gcnew A(10);
   A^ a2 = gcnew A(20);

   a1 += a2;   // a1 = a1 + a2   += not defined in source
   System::Console::WriteLine(a1->m_n);
}
```

```Output
30
```

## <a name="see-also"></a>Vedi anche

[Classi e struct](../extensions/classes-and-structs-cpp-component-extensions.md)
