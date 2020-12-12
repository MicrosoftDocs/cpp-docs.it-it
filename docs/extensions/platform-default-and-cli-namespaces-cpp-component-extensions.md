---
description: 'Scopri di più su: spazi dei nomi Platform, default e CLI (C++/CLI e C++/CX)'
title: Spazi dei nomi Platform, default e cli (C++/CLI e C++/CX)
ms.date: 10/12/2018
ms.topic: reference
f1_keywords:
- lang
- cli
helpviewer_keywords:
- lang namespace
- cli namespace
ms.assetid: 9d38bd1e-dc78-47d1-a84b-9b4683e52c9c
ms.openlocfilehash: 1b4b47a1568b1a137bc49a09b8b50feb8ec3a76b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97185674"
---
# <a name="platform-default-and-cli-namespaces--ccli-and-ccx"></a>Spazi dei nomi Platform, default e cli (C++/CLI e C++/CX)

Uno spazio dei nomi qualifica i nomi di un elemento del linguaggio in modo che i nomi non siano in conflitto con nomi identici nel codice sorgente. Ad esempio, un conflitto di nomi può impedire al compilatore di riconoscere [parole chiave sensibili al contesto](context-sensitive-keywords-cpp-component-extensions.md). Gli spazi dei nomi vengono utilizzati dal compilatore, ma non vengono mantenuti nell'assembly compilato.

## <a name="all-runtimes"></a>Tutti i runtime

Quando si crea un progetto, Visual Studio fornisce uno spazio dei nomi default per il progetto. È possibile rinominare manualmente lo spazio dei nomi, tuttavia in C++/CX il nome del file con estensione winmd deve corrispondere al nome dello spazio dei nomi radice.

## <a name="windows-runtime"></a>Windows Runtime

Per altre informazioni, vedere [Spazi dei nomi e visibilità del tipo (C++/CX)](../cppcx/namespaces-and-type-visibility-c-cx.md).

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/ZW`

## <a name="common-language-runtime"></a>Common Language Runtime

### <a name="syntax"></a>Sintassi

```cpp
using namespace cli;
```

### <a name="remarks"></a>Osservazioni

C++/CLI supporta lo spazio dei nomi **cli**. Quando si esegue la compilazione con `/clr` , l' **`using`** istruzione nella sezione della sintassi è implicita.

Le funzionalità del linguaggio seguenti si trovano nello spazio dei nomi **cli**:

- [Matrici](arrays-cpp-component-extensions.md)

- [interior_ptr (C++/CLI)](interior-ptr-cpp-cli.md)

- [pin_ptr (C++/CLI)](pin-ptr-cpp-cli.md)

- [safe_cast](safe-cast-cpp-component-extensions.md)

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/clr`

### <a name="examples"></a>Esempio

L'esempio di codice seguente illustra che è possibile usare un simbolo nello spazio dei nomi **cli** come simbolo definito dall'utente nel codice.  Se tuttavia si esegue questa operazione, è necessario qualificare in modo esplicito o implicito i riferimenti all'elemento del linguaggio **cli** con lo stesso nome.

```cpp
// cli_namespace.cpp
// compile with: /clr
using namespace cli;
int main() {
   array<int> ^ MyArray = gcnew array<int>(100);
   int array = 0;

   array<int> ^ MyArray2 = gcnew array<int>(100);   // C2062

   // OK
   cli::array<int> ^ MyArray2 = gcnew cli::array<int>(100);
   ::array<int> ^ MyArray3 = gcnew ::array<int>(100);
}
```

## <a name="see-also"></a>Vedi anche

[Estensioni del componente per .NET e UWP](component-extensions-for-runtime-platforms.md)
