---
title: 'Procedura: convertire System::String in wchar_t* o char*'
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- System::String, converting to char or wchar_t
- PtrToStringChars method
- System::String
- wchart type, converting System::String
- char data type, converting System::String to
ms.assetid: 385da01b-5649-4543-8076-e3e251243ff0
ms.openlocfilehash: 9fcea7d54f5b3dcfe5fa75092463465711b1a505
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74988252"
---
# <a name="how-to-convert-systemstring-to-wchar_t-or-char"></a>Procedura: convertire System::String in wchar_t* o char*

È possibile utilizzare `PtrToStringChars` in Vcclr.h per convertire <xref:System.String> in un tipo `wchar_t *` o `char *` nativo.  Viene sempre restituito un puntatore stringa di caratteri estesi Unicode poiché il formato interno delle stringhe CLR è Unicode. È quindi possibile eseguire la conversione da caratteri estesi, come illustrato nell'esempio riportato di seguito.

## <a name="example"></a>Esempio

```cpp
// convert_string_to_wchar.cpp
// compile with: /clr
#include < stdio.h >
#include < stdlib.h >
#include < vcclr.h >

using namespace System;

int main() {
   String ^str = "Hello";

   // Pin memory so GC can't move it while native function is called
   pin_ptr<const wchar_t> wch = PtrToStringChars(str);
   printf_s("%S\n", wch);

   // Conversion to char* :
   // Can just convert wchar_t* to char* using one of the
   // conversion functions such as:
   // WideCharToMultiByte()
   // wcstombs_s()
   // ... etc
   size_t convertedChars = 0;
   size_t  sizeInBytes = ((str->Length + 1) * 2);
   errno_t err = 0;
   char    *ch = (char *)malloc(sizeInBytes);

   err = wcstombs_s(&convertedChars,
                    ch, sizeInBytes,
                    wch, sizeInBytes);
   if (err != 0)
      printf_s("wcstombs_s  failed!\n");

    printf_s("%s\n", ch);
}
```

```Output
Hello
Hello
```

## <a name="see-also"></a>Vedere anche

[Uso delle funzionalità di interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)
