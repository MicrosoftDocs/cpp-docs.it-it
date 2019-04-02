---
title: 'Procedura: Caratteri di accesso in un System:: String'
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- characters [C++], accessing in System::String
- examples [C++], strings
- strings [C++], accessing characters
ms.assetid: cfc89756-aef3-4988-907e-fb236dcb7087
ms.openlocfilehash: 6b9e30a18ab1d2b8463ccccae0b265bc20904020
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58775972"
---
# <a name="how-to-access-characters-in-a-systemstring"></a>Procedura: Caratteri di accesso in un System:: String

È possibile accedere ai caratteri di una <xref:System.String> oggetto per chiamate a prestazioni elevate a non gestito le funzioni che accettano `wchar_t*` stringhe. Il metodo restituisce un puntatore interno per il primo carattere del <xref:System.String> oggetto. Puntatore ' this ' possono essere manipolati direttamente o aggiunti e passato a una funzione è previsto un normale `wchar_t` stringa.

## <a name="example"></a>Esempio

`PtrToStringChars` Restituisce un <xref:System.Char>, che è un puntatore interno (noto anche come un `byref`). Di conseguenza, è sottoposte a garbage collection. Non è necessario aggiungere questo puntatore a meno che non si intende passare a una funzione nativa.

Si consideri il codice seguente.  L'aggiunta non è necessaria perché `ppchar` è un puntatore interno e se il garbage collector Sposta la stringa che punta a, verrà aggiornato anche `ppchar`. Senza una [pin_ptr (C + + CLI)](../extensions/pin-ptr-cpp-cli.md), il codice sarà valido e non è la potenziale riduzione delle prestazioni causato dal blocco.

Se si passa `ppchar` a una funzione nativa, quindi deve essere un puntatore di blocco, il garbage collector non sarà in grado di aggiornare tutti i puntatori sul frame dello stack non gestito.

```
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

## <a name="example"></a>Esempio

Questo esempio viene illustrato in cui il blocco necessario.

```
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

## <a name="example"></a>Esempio

Un puntatore interno ha tutte le proprietà del puntatore C++ nativo. Ad esempio, è possibile utilizzare per spostarsi di una struttura di dati collegato ed eseguire inserimenti ed eliminazioni utilizzando solo un puntatore:

```
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

[Uso delle funzionalità di interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)
