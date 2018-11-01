---
title: 'Procedura: usare un tipo nativo in una compilazione - clr'
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- compilation, native types in /clr
- /clr compiler option [C++], using native types
ms.assetid: 3a505c90-4adb-4942-9cf9-7d1fdcbc01e7
ms.openlocfilehash: 0079be21b474858684e1abaaeb363820764a701d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50459953"
---
# <a name="how-to-use-a-native-type-in-a-clr-compilation"></a>Procedura: utilizzare un tipo nativo in una compilazione /clr

È possibile definire un tipo nativo in un **/clr** compilazione e qualsiasi uso di tale tipo nativo all'interno dell'assembly è valido. Tuttavia, i tipi nativi non sarà disponibili per l'uso di metadati di riferimento.

Ogni assembly deve contenere la definizione di ogni tipo nativo che userà.

Per altre informazioni, vedere [/clr (Compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md).

## <a name="example"></a>Esempio

In questo esempio crea un componente che definisce e Usa un tipo nativo.

```
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

## <a name="example"></a>Esempio

In questo esempio definisce un client che utilizza il componente. Si noti che è possibile accedere al tipo nativo, a meno che non si è definito nel modulo.

```
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

## <a name="see-also"></a>Vedere anche

[Uso delle funzionalità di interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)