---
description: Altre informazioni sulla direttiva make_public pragma in Microsoft C/C++
title: make_public pragma
ms.date: 01/22/2021
f1_keywords:
- vc-pragma.make_public
- make_public_CPP
helpviewer_keywords:
- pragma, make_public
- make_public pragma
no-loc:
- pragma
ms.openlocfilehash: 4bc3370ac0901ff9a0656de5657f9c9f557e1dff
ms.sourcegitcommit: a26a66a3cf479e0e827d549a9b850fad99b108d1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2021
ms.locfileid: "98713519"
---
# <a name="make_public-no-locpragma"></a>`make_public` pragma

Indica che un tipo nativo deve avere accessibilità pubblica dell'assembly.

## <a name="syntax"></a>Sintassi

> **`#pragma make_public(`***tipo* di **`)`**

### <a name="parameters"></a>Parametri

*tipo*\
Nome del tipo per cui si vuole avere accessibilità pubblica dell'assembly.

## <a name="remarks"></a>Osservazioni

**`make_public`** è utile quando il tipo nativo a cui si desidera fare riferimento è da un file di intestazione che non è possibile modificare. Se si desidera utilizzare il tipo nativo nella firma di una funzione pubblica in un tipo con visibilità dell'assembly pubblico, anche il tipo nativo deve avere accessibilità pubblica dell'assembly o il compilatore emetterà un avviso.

**`make_public`** deve essere specificato in ambito globale. Questa operazione è valida solo dal punto in cui viene dichiarata fino alla fine del file di codice sorgente.

Il tipo nativo può essere privato in modo implicito o esplicito. Per ulteriori informazioni, vedere [visibilità dei tipi](../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Type_visibility).

## <a name="examples"></a>Esempi

L'esempio seguente è il contenuto di un file di intestazione che contiene le definizioni per due struct nativi.

```cpp
// make_public_pragma.h
struct Native_Struct_1 { int i; };
struct Native_Struct_2 { int i; };
```

Nell'esempio di codice seguente viene utilizzato il file di intestazione. Indica che, a meno che non si contrassegni esplicitamente gli struct nativi come Public usando **`make_public`** , il compilatore genererà un avviso quando si tenta di usare gli struct nativi nella firma della funzione pubblica in un tipo gestito pubblico.

```cpp
// make_public_pragma.cpp
// compile with: /c /clr /W1
#pragma warning (default : 4692)
#include "make_public_pragma.h"
#pragma make_public(Native_Struct_1)

public ref struct A {
   void Test(Native_Struct_1 u) {u.i = 0;}   // OK
   void Test(Native_Struct_2 u) {u.i = 0;}   // C4692
};
```

## <a name="see-also"></a>Vedere anche

[Direttive pragma e `__pragma` `_Pragma` parole chiave e](./pragma-directives-and-the-pragma-keyword.md)
