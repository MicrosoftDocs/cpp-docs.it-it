---
title: abstract (estensioni del componente C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- abstract
- abstract_cpp
dev_langs:
- C++
helpviewer_keywords:
- abstract keyword [C++]
ms.assetid: cbae3408-0378-4ac8-b70d-c016b381a6d5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 463848ea5f01bf232850d548c9f4255c07409254
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42610999"
---
# <a name="abstract--c-component-extensions"></a>abstract (Estensioni del componente C++)

Il **astratta** parola chiave dichiara:

- Che un tipo può essere usato come tipo di base, ma non è possibile creare un'istanza del tipo stesso.

- Che una funzione membro di tipo può essere definita solo in un tipo derivato.

## <a name="all-platforms"></a>Tutte le piattaforme

### <a name="syntax"></a>Sintassi

```cpp
      class-declaration
      class-identifier
      abstract {}
virtualreturn-typemember-function-identifier() abstract ;
```

### <a name="remarks"></a>Note

La sintassi del primo esempio dichiara una classe astratta. Il *dichiarazione di classe* componente può essere una dichiarazione C++ nativa (**classe** oppure **struct**), o una dichiarazione di estensione C++ (**classediriferimento** oppure **struct ref**) se il `/ZW` o `/clr` è specificata l'opzione del compilatore.

La sintassi del secondo esempio dichiara una funzione membro virtuale astratta. Dichiarare che una funzione astratta equivale a dichiararla come funzione virtuale pura. Dichiarare una funzione membro astratta comporta che la classe contenitore venga dichiarata astratta.

Il **astratto** parola chiave è supportata in codice nativo e specifico della piattaforma; vale a dire, può essere compilato con o senza il `/ZW` o `/clr` opzione del compilatore.

È possibile rilevare in fase di compilazione se un tipo è astratto con il `__is_abstract(type)` tratto di tipo. Per altre informazioni, vedere [supporto del compilatore per tratti di tipo](../windows/compiler-support-for-type-traits-cpp-component-extensions.md).

Il **astratta** (parola chiave) è un identificatore di override sensibile al contesto. Per altre informazioni sulle parole chiave sensibili al contesto, vedere [parole chiave sensibili al contesto](../windows/context-sensitive-keywords-cpp-component-extensions.md). Per altre informazioni sugli identificatori di override, vedere [procedura: dichiarare gli identificatori di Override nelle compilazioni Native](../dotnet/how-to-declare-override-specifiers-in-native-compilations-cpp-cli.md).

## <a name="windows-runtime"></a>Windows Runtime

Per altre informazioni, vedere [le classi e struct](../cppcx/ref-classes-and-structs-c-cx.md).

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/ZW`

## <a name="common-language-runtime"></a>Common Language Runtime

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/clr`

### <a name="examples"></a>Esempi

Esempio di codice seguente genera un errore perché classe `X` contrassegnato **astratto**.

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

Esempio di codice seguente genera un errore perché crea un'istanza di una classe nativa contrassegnata **astratta**. Questo errore si verifica con o senza l'opzione del compilatore `/clr`.

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

Esempio di codice seguente genera un errore perché funzione `f` include una definizione, ma è contrassegnato **astratto**. L'istruzione finale nell'esempio illustra che dichiarare una funzione virtuale astratta equivale a dichiarare una funzione virtuale pura.

```cpp
// abstract_keyword_3.cpp
// compile with: /clr
ref class X {
public:
   virtual void f() abstract {}   // C3634
   virtual void g() = 0 {}   // C3634
};
```

## <a name="see-also"></a>Vedere anche

[Estensioni componenti per le piattaforme runtime](../windows/component-extensions-for-runtime-platforms.md)