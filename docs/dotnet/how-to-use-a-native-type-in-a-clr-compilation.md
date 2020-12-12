---
description: 'Altre informazioni su: procedura: usare un tipo nativo in una compilazione/clr'
title: 'Procedura: utilizzare un tipo nativo in una compilazione clr'
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- compilation, native types in /clr
- /clr compiler option [C++], using native types
ms.assetid: 3a505c90-4adb-4942-9cf9-7d1fdcbc01e7
ms.openlocfilehash: 8e8479bb64166faec841d9d69ce38b3e8e57e048
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97286280"
---
# <a name="how-to-use-a-native-type-in-a-clr-compilation"></a>Procedura: utilizzare un tipo nativo in una compilazione /clr

È possibile definire un tipo nativo in una compilazione **/CLR** e qualsiasi utilizzo del tipo nativo dall'interno dell'assembly è valido. Tuttavia, i tipi nativi non saranno disponibili per l'utilizzo da metadati a cui si fa riferimento.

Ogni assembly deve contenere la definizione di tutti i tipi nativi che utilizzerà.

Per altre informazioni, vedere [/CLR (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md).

## <a name="examples"></a>Esempio

In questo esempio viene creato un componente che definisce e utilizza un tipo nativo.

```cpp
// use_native_type_in_clr.cpp
// compile with: /clr /LD
public struct NativeClass {
   static int Test() { return 98; }
};

public ref struct ManagedClass {
   static int i = NativeClass::Test();
   void Test() {
      System::Console::WriteLine(i);
   }
};
```

In questo esempio viene definito un client che utilizza il componente. Si noti che è un errore accedere al tipo nativo, a meno che non sia definito in modulo.

```cpp
// use_native_type_in_clr_2.cpp
// compile with: /clr
#using "use_native_type_in_clr.dll"
// Uncomment the following 3 lines to resolve.
// public struct NativeClass {
//    static int Test() { return 98; }
// };

int main() {
   ManagedClass x;
   x.Test();

   System::Console::WriteLine(NativeClass::Test());   // C2653
}
```

## <a name="see-also"></a>Vedi anche

[Uso dell'interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)
