---
description: 'Altre informazioni su: abstract (C++/CLI e C++/CX)'
title: abstract (C++/CLI e C++/CX)
ms.date: 10/12/2018
ms.topic: reference
f1_keywords:
- abstract
- abstract_cpp
helpviewer_keywords:
- abstract keyword [C++]
ms.assetid: cbae3408-0378-4ac8-b70d-c016b381a6d5
ms.openlocfilehash: e40d0d0c03bbf97b684d9e011f4bf614f6a44332
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97177120"
---
# <a name="abstract--ccli-and-ccx"></a>abstract (C++/CLI e C++/CX)

La parola chiave **abstract** dichiara:

- Che un tipo può essere usato come tipo di base, ma non è possibile creare un'istanza del tipo stesso.

- Che una funzione membro di tipo può essere definita solo in un tipo derivato.

## <a name="all-platforms"></a>Tutte le piattaforme

### <a name="syntax"></a>Sintassi

*class-declaration* *class-identifier* **abstract {}**

**`virtual`***return-type* *member-function-identifier* **() abstract;**

### <a name="remarks"></a>Commenti

La sintassi del primo esempio dichiara una classe astratta. Il componente della *dichiarazione di classe* può essere una dichiarazione c++ nativa (**`class` * * * * o **`struct`** ) o una dichiarazione di estensione c++ (** classe ref * * o **struct Ref**) se `/ZW` `/clr` è specificata l'opzione del compilatore o.

La sintassi del secondo esempio dichiara una funzione membro virtuale astratta. Dichiarare che una funzione astratta equivale a dichiararla come funzione virtuale pura. Dichiarare una funzione membro astratta comporta che la classe contenitore venga dichiarata astratta.

La parola chiave **abstract** è supportata in codice nativo e specifico della piattaforma, ovvero può essere compilata con o senza l'opzione del compilatore `/ZW` o `/clr`.

È possibile rilevare in fase di compilazione se un tipo è astratto con la caratteristica di tipo `__is_abstract(type)`. Per altre informazioni, vedere [Supporto del compilatore per caratteristiche di tipo](compiler-support-for-type-traits-cpp-component-extensions.md).

La parola chiave **abstract** è un identificatore di override sensibile al contesto. Per altre informazioni sulle parole chiave sensibili al contesto, vedere [Parole chiave sensibili al contesto](context-sensitive-keywords-cpp-component-extensions.md). Per altre informazioni sugli identificatori di override, vedere [procedura: dichiarare gli identificatori di override nelle compilazioni native](../dotnet/how-to-declare-override-specifiers-in-native-compilations-cpp-cli.md).

## <a name="windows-runtime"></a>Windows Runtime

Per altre informazioni, vedere [Classi e struct di riferimento](../cppcx/ref-classes-and-structs-c-cx.md).

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/ZW`

## <a name="common-language-runtime"></a>Common Language Runtime

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/clr`

### <a name="examples"></a>Esempio

L'esempio di codice seguente genera un errore perché la classe `X` è contrassegnata come **abstract**.

```cpp
// abstract_keyword.cpp
// compile with: /clr
ref class X abstract {
public:
   virtual void f() {}
};

int main() {
   X ^ MyX = gcnew X;   // C3622
}
```

L'esempio di codice seguente genera un errore perché crea un'istanza di una classe nativa contrassegnata come **abstract**. Questo errore si verifica con o senza l'opzione del compilatore `/clr`.

```cpp
// abstract_keyword_2.cpp
class X abstract {
public:
   virtual void f() {}
};

int main() {
   X * MyX = new X; // C3622: 'X': a class declared as 'abstract'
                    // cannot be instantiated. See declaration of 'X'}
```

L'esempio di codice seguente genera un errore perché la funzione `f` include una definizione, ma è contrassegnata come **abstract**. L'istruzione finale nell'esempio illustra che dichiarare una funzione virtuale astratta equivale a dichiarare una funzione virtuale pura.

```cpp
// abstract_keyword_3.cpp
// compile with: /clr
ref class X {
public:
   virtual void f() abstract {}   // C3634
   virtual void g() = 0 {}   // C3634
};
```

## <a name="see-also"></a>Vedi anche

[Estensioni del componente per .NET e UWP](component-extensions-for-runtime-platforms.md)
