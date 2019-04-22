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
ms.openlocfilehash: a14ef9043ec2196ff930a37d0eff95e90024d3d5
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58769199"
---
# <a name="uuidof-operator"></a>Operatore __uuidof

**Sezione specifica Microsoft**

Recupera il GUID collegato all'espressione.

## <a name="syntax"></a>Sintassi

```
__uuidof (expression)
```

## <a name="remarks"></a>Note

Il *espressione* può essere un nome di tipo, puntatore, riferimento o matrice di quel tipo, un modello specializzato su questi tipi, o una variabile di questi tipi. L'argomento è valido finché il compilatore può utilizzarlo per trovare il GUID collegato.

Un caso speciale di questa funzione intrinseca è quando entrambe **0** o NULL viene fornito come argomento. In questo caso **uuidof** restituirà un GUID composto da zero.

Utilizzare questa parola chiave per estrarre il GUID collegato:

- Un oggetto tramite il [uuid](../cpp/uuid-cpp.md) attributi estesa.

- Un blocco di libreria creato con il [modulo](../windows/attributes/module-cpp.md) attributo.

> [!NOTE]
> In una build di debug **uuidof** sempre Inizializza un oggetto in modo dinamico (in fase di esecuzione). In una build di rilascio **uuidof** può inizializzare staticamente (in fase di compilazione) un oggetto.

Per garantire la compatibilità con le versioni precedenti, **uuidof** è un sinonimo **uuidof** , a meno che l'opzione del compilatore [/Za \(Disabilita estensioni linguaggio)](../build/reference/za-ze-disable-language-extensions.md) è specificato.

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

Nei casi in cui il nome della libreria non è più nell'ambito, è possibile usare `__LIBID_` invece di **uuidof**. Ad esempio:

```cpp
StringFromCLSID(__LIBID_, &lpolestr);
```

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Espressioni con operatori unari](../cpp/expressions-with-unary-operators.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)