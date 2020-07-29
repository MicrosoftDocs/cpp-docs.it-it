---
title: Operatore __uuidof
ms.date: 10/10/2018
f1_keywords:
- __LIBID_cpp
- __uuidof_cpp
- __uuidof
- _uuidof
helpviewer_keywords:
- __uuidof keyword [C++]
- __LIBID_ keyword [C++]
ms.assetid: badfe709-809b-4b66-ad48-ee35039d25c6
ms.openlocfilehash: f7564270408d14f58d1528c1f41c0afd2dbe219c
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87226971"
---
# <a name="__uuidof-operator"></a>Operatore `__uuidof`

**Specifico di Microsoft**

Recupera il GUID collegato all'espressione.

## <a name="syntax"></a>Sintassi

> **`__uuidof (`***espressione***`)`**

## <a name="remarks"></a>Osservazioni

L' *espressione* può essere un nome di tipo, un puntatore, un riferimento o una matrice di quel tipo, un modello specializzato su questi tipi o una variabile di questi tipi. L'argomento è valido finché il compilatore può utilizzarlo per trovare il GUID collegato.

Un caso speciale di questa funzione intrinseca è quando **0** o null viene fornito come argomento. In questo caso, **`__uuidof`** restituirà un GUID composto da zeri.

Utilizzare questa parola chiave per estrarre il GUID collegato:

- Oggetto in base all' [`uuid`](../cpp/uuid-cpp.md) attributo esteso.

- Un blocco di libreria creato con l' [`module`](../windows/attributes/module-cpp.md) attributo.

> [!NOTE]
> In una build di debug, **`__uuidof`** Inizializza sempre un oggetto in modo dinamico (in fase di esecuzione). In una build di rilascio, **`__uuidof`** può inizializzare un oggetto in modo statico (in fase di compilazione).

Per compatibilità con le versioni precedenti, **`_uuidof`** è un sinonimo di, a **`__uuidof`** meno che non sia specificata l'opzione del compilatore [ `/Za` \( Disable Language Extensions)](../build/reference/za-ze-disable-language-extensions.md) .

## <a name="example"></a>Esempio

Il codice seguente (compilato con ole32.lib) visualizza l'elemento uuid di un blocco di libreria creato con l'attributo module:

```cpp
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

Nei casi in cui il nome della libreria non è più nell'ambito, è possibile usare `__LIBID_` anziché **`__uuidof`** . Ad esempio:

```cpp
StringFromCLSID(__LIBID_, &lpolestr);
```

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Espressioni con operatori unari](../cpp/expressions-with-unary-operators.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
