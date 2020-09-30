---
title: Errore del compilatore C3345
ms.date: 11/04/2016
f1_keywords:
- C3345
helpviewer_keywords:
- C3345
ms.assetid: 1dda4c79-73bb-441b-b939-746154c3afba
ms.openlocfilehash: 8682069fdf719f4e85d1d6f5107de1903e3ae071
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91504847"
---
# <a name="compiler-error-c3345"></a>Errore del compilatore C3345

'identifier': identificatore non valido per un nome di modulo

L' *identificatore* per un modulo contiene uno o più caratteri non validi. Un identificatore è valido se il primo carattere, così come qualsiasi carattere successivo, è costituito da un carattere alfabetico, un carattere di sottolineatura o un carattere ANSI esteso (0x80-FF).

### <a name="to-correct-this-error"></a>Per correggere l'errore

1. Verificare che l' *identificatore* non contenga spazi vuoti o altri caratteri non ammessi.

## <a name="example"></a>Esempio

L'esempio di codice seguente genera il messaggio di errore C3345 perché il parametro `name` dell'attributo `module` contiene uno spazio vuoto.

```cpp
// cpp_attr_name_module.cpp
// compile with: /LD /link /OPT:NOREF
#include <atlbase.h>
#include <atlcom.h>
#include <atlwin.h>
#include <atltypes.h>
#include <atlctl.h>
#include <atlhost.h>
#include <atlplus.h>

// C3345 expected
[module(dll, name="My Library", version="1.2", helpfile="MyHelpFile")]
// Try the following line instead
//[module(dll, name="MyLibrary", version="1.2", helpfile="MyHelpFile")]
// Module attribute now applies to this class
class CMyClass {
public:
BOOL WINAPI DllMain(DWORD dwReason, LPVOID lpReserved) {
   // add your own code here
   return __super::DllMain(dwReason, lpReserved);
   }
};
```

## <a name="see-also"></a>Vedere anche

[__iscsym](../../c-runtime-library/reference/iscsym-functions.md)<br/>
[Classificazione caratteri](../../c-runtime-library/character-classification.md)<br/>
[modulo](../../windows/attributes/module-cpp.md)
