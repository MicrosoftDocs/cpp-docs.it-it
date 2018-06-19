---
title: Errore del compilatore C3345 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3345
dev_langs:
- C++
helpviewer_keywords:
- C3345
ms.assetid: 1dda4c79-73bb-441b-b939-746154c3afba
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3e6b3a021d9c747e4ec30278d8a22bde899cb39a
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33254235"
---
# <a name="compiler-error-c3345"></a>Errore del compilatore C3345
'identifier': identificatore non valido per un nome di modulo  
  
 L' *identificatore* per un modulo contiene uno o più caratteri non validi. Un identificatore è valido se il primo carattere, così come qualsiasi carattere successivo, è costituito da un carattere alfabetico, un carattere di sottolineatura o un carattere ANSI esteso (0x80-FF).  
  
### <a name="to-correct-this-error"></a>Per correggere l'errore  
  
1.  Verificare che l' *identificatore* non contenga spazi vuoti o altri caratteri non ammessi.  
  
## <a name="example"></a>Esempio  
 L'esempio di codice seguente genera il messaggio di errore C3345 perché il parametro `name` dell'attributo `module` contiene uno spazio vuoto.  
  
```  
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
 [__iscsym](../../c-runtime-library/reference/iscsym-functions.md)   
 [Classificazione di caratteri](../../c-runtime-library/character-classification.md)   
 [Modulo](../../windows/module-cpp.md)