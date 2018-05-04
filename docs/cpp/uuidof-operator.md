---
title: operatore uuidof | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- __LIBID_cpp
- __uuidof_cpp
dev_langs:
- C++
helpviewer_keywords:
- __uuidof keyword [C++]
- __LIBID_ keyword [C++]
ms.assetid: badfe709-809b-4b66-ad48-ee35039d25c6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 70731665ca2a2eba739f139678e0f7eaface2b85
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="uuidof-operator"></a>Operatore __uuidof
**Sezione specifica Microsoft**  
  
 Recupera il GUID collegato all'espressione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      __uuidof (  
   expression   
)  
```  
  
## <a name="remarks"></a>Note  
 Il *espressione* può essere un nome di tipo, puntatore, riferimento o matrice di quel tipo, un modello specializzato su questi tipi, o una variabile di questi tipi. L'argomento è valido finché il compilatore può utilizzarlo per trovare il GUID collegato.  
  
 Un caso speciale di questa funzione intrinseca è il caso entrambi **0** o **NULL** viene fornito come argomento. In questo caso, `__uuidof` restituirà un GUID composto da zero.  
  
 Utilizzare questa parola chiave per estrarre il GUID collegato:  
  
-   Un oggetto tramite il [uuid](../cpp/uuid-cpp.md) degli attributi estesa.  
  
-   Un blocco di libreria creato con il [modulo](../windows/module-cpp.md) attributo.  
  
> [!NOTE]
>  In una compilazione di debug `__uuidof` inizializza sempre dinamicamente un oggetto (in fase di esecuzione). In una build di rilascio `__uuidof` può inizializzare staticamente (in fase di compilazione) un oggetto.  
  
## <a name="example"></a>Esempio  
 Il codice seguente (compilato con ole32.lib) visualizza l'elemento uuid di un blocco di libreria creato con l'attributo module:  
  
```  
// expre_uuidof.cpp  
// compile with: ole32.lib  
#include "stdio.h"  
#include "windows.h"  
  
[emitidl];  
[module(name="MyLib")];  
[export]  
struct stuff {  
   int i;  
};  
  
int main() {  
   LPOLESTR lpolestr;  
   StringFromCLSID(__uuidof(MyLib), &lpolestr);  
   wprintf_s(L"%s", lpolestr);  
   CoTaskMemFree(lpolestr);  
}  
```  
  
## <a name="comments"></a>Commenti  
 Nei casi in cui il nome della libreria non è più in ambito, è possibile utilizzare __LIBID\_ anziché `__uuidof`. Ad esempio:  
  
```  
StringFromCLSID(__LIBID_, &lpolestr);  
```  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Espressioni con operatori unari](../cpp/expressions-with-unary-operators.md)   
 [Parole chiave](../cpp/keywords-cpp.md)