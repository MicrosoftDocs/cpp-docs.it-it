---
title: 'Procedura: accedere ai caratteri in System::String'
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- characters [C++], accessing in System::String
- examples [C++], strings
- strings [C++], accessing characters
ms.assetid: cfc89756-aef3-4988-907e-fb236dcb7087
ms.openlocfilehash: cb62eb0fecbee202e4d01635a60da565241822ee
ms.sourcegitcommit: c1fd917a8c06c6504f66f66315ff352d0c046700
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/16/2020
ms.locfileid: "90686795"
---
# <a name="how-to-access-characters-in-a-systemstring"></a>Procedura: accedere ai caratteri in System::String

È possibile accedere ai caratteri di un <xref:System.String> oggetto per le chiamate a prestazioni elevate a funzioni non gestite che accettano `wchar_t*` stringhe. Il metodo produce un puntatore interno al primo carattere dell' <xref:System.String> oggetto. Questo puntatore può essere modificato direttamente o aggiunto e passato a una funzione che prevede una stringa ordinata **`wchar_t`** .

## <a name="examples"></a>Esempi

`PtrToStringChars` Restituisce un oggetto <xref:System.Char> , che è un puntatore interno (noto anche come `byref` ). Di conseguenza, è soggetto a Garbage Collection. Non è necessario aggiungere questo puntatore a meno che non lo si passi a una funzione nativa.

Si consideri il codice seguente.  L'aggiunta non è necessaria perché `ppchar` è un puntatore interno e se il Garbage Collector sposta la stringa a cui punta, verrà aggiornato anche `ppchar` . Senza un [pin_ptr (C++/CLI)](../extensions/pin-ptr-cpp-cli.md), il codice funzionerà e non avrà il potenziale impatto sulle prestazioni causato dall'aggiunta.

Se si passa `ppchar` a una funzione nativa, è necessario che sia un puntatore di blocco. il Garbage Collector non sarà in grado di aggiornare i puntatori nella stack frame non gestita.

```cpp
// PtrToStringChars.cpp
// compile with: /clr
#include<vcclr.h>
using namespace System;

int main() {
   String ^ mystring = "abcdefg";

   interior_ptr<const Char> ppchar = PtrToStringChars( mystring );

   for ( ; *ppchar != L'\0'; ++ppchar )
      Console::Write(*ppchar);
}
```

```Output
abcdefg
```

Questo esempio mostra dove è necessario aggiungere il blocco.

```cpp
// PtrToStringChars_2.cpp
// compile with: /clr
#include <string.h>
#include <vcclr.h>
// using namespace System;

size_t getlen(System::String ^ s) {
   // Since this is an outside string, we want to be secure.
   // To be secure, we need a maximum size.
   size_t maxsize = 256;
   // make sure it doesn't move during the unmanaged call
   pin_ptr<const wchar_t> pinchars = PtrToStringChars(s);
   return wcsnlen(pinchars, maxsize);
};

int main() {
   System::Console::WriteLine(getlen("testing"));
}
```

```Output
7
```

Un puntatore interno ha tutte le proprietà di un puntatore C++ nativo. Ad esempio, è possibile usarlo per esaminare una struttura di dati collegata ed eseguire inserimenti ed eliminazioni usando un solo puntatore:

```cpp
// PtrToStringChars_3.cpp
// compile with: /clr /LD
using namespace System;
ref struct ListNode {
   Int32 elem;
   ListNode ^ Next;
};

void deleteNode( ListNode ^ list, Int32 e ) {
   interior_ptr<ListNode ^> ptrToNext = &list;
   while (*ptrToNext != nullptr) {
      if ( (*ptrToNext) -> elem == e )
         *ptrToNext = (*ptrToNext) -> Next;   // delete node
      else
         ptrToNext = &(*ptrToNext) -> Next;   // move to next node
   }
}
```

## <a name="see-also"></a>Vedere anche

[Uso dell'interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)
