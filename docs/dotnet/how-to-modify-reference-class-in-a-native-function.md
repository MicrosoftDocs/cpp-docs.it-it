---
description: 'Altre informazioni su: procedura: modificare la classe di riferimento in una funzione nativa'
title: 'Procedura: modificare una classe di riferimenti in una funzione nativa'
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- platform invoke, reference class
- reference types, modifying in a C++ native function
ms.assetid: c701145b-62a0-4c4b-b32a-db8d69a59720
ms.openlocfilehash: 49bdb082d5b884a0cbb34970b2ffebe988f15c0d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97286501"
---
# <a name="how-to-modify-reference-class-in-a-native-function"></a>Procedura: modificare una classe di riferimenti in una funzione nativa

È possibile passare una classe di riferimento con una matrice CLR a una funzione nativa e modificare la classe usando i servizi PInvoke.

## <a name="examples"></a>Esempio

Compilare la seguente libreria nativa.

```cpp
// modify_ref_class_in_native_function.cpp
// compile with: /LD
#include <stdio.h>
#include <windows.h>

struct S {
   wchar_t* str;
   int intarr[2];
};

extern "C"  {
   __declspec(dllexport) int bar(S* param) {
      printf_s("str: %S\n", param->str);
      fflush(stdin);
      fflush(stdout);
      printf_s("In native: intarr: %d, %d\n",
                param->intarr[0], param->intarr[1]);
      fflush(stdin);
      fflush(stdout);
      param->intarr[0]=300;param->intarr[1]=400;
      return 0;
    }
};
```

Compilare l'assembly seguente.

```cpp
// modify_ref_class_in_native_function_2.cpp
// compile with: /clr
using namespace System;
using namespace System::Runtime::InteropServices;

[StructLayout(LayoutKind::Sequential, CharSet = CharSet::Unicode)]
ref class S  {
public:
   [MarshalAsAttribute(UnmanagedType::LPWStr)]
   String ^ str;
   [MarshalAsAttribute(UnmanagedType::ByValArray,
        ArraySubType=UnmanagedType::I4, SizeConst=2)]
   array<Int32> ^ intarr;
};

[DllImport("modify_ref_class_in_native_function.dll",
           CharSet=CharSet::Unicode)]
int bar([In][Out] S ^ param);

int main() {
   S ^ param = gcnew S;
   param->str = "Hello";
   param->intarr = gcnew array<Int32>(2);
   param->intarr[0] = 100;
   param->intarr[1] = 200;
   bar(param);   // Call to native function
   Console::WriteLine("In managed: intarr: {0}, {1}",
                       param->intarr[0], param->intarr[1]);
}
```

```Output
str: Hello
In native: intarr: 100, 200
In managed: intarr: 300, 400
```

## <a name="see-also"></a>Vedi anche

[Uso dell'interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)
