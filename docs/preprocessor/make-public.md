---
description: 'Altre informazioni su: make_public pragma'
title: Pragma make_public
ms.date: 08/29/2019
f1_keywords:
- vc-pragma.make_public
- make_public_CPP
helpviewer_keywords:
- pragmas, make_public
- make_public pragma
ms.assetid: c3665f4d-268a-4932-9661-c37c8ae6a341
ms.openlocfilehash: 327a9882e13f9c51182e0673443566b56177d320
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97333401"
---
# <a name="make_public-pragma"></a>Pragma make_public

Indica che un tipo nativo deve avere accessibilità pubblica dell'assembly.

## <a name="syntax"></a>Sintassi

> **#pragma make_public (** *tipo* **)**

### <a name="parameters"></a>Parametri

*tipo*\
Nome del tipo per cui si vuole avere accessibilità pubblica dell'assembly.

## <a name="remarks"></a>Commenti

**make_public** è utile quando il tipo nativo a cui si vuole fare riferimento è da un file di intestazione che non è possibile modificare. Se si desidera utilizzare il tipo nativo nella firma di una funzione pubblica in un tipo con visibilità dell'assembly pubblico, anche il tipo nativo deve avere accessibilità pubblica dell'assembly o il compilatore emetterà un avviso.

è necessario specificare **make_public** nell'ambito globale. Questa operazione è valida solo dal punto in cui viene dichiarata fino alla fine del file di codice sorgente.

Il tipo nativo può essere privato in modo implicito o esplicito. Per ulteriori informazioni, vedere [visibilità dei tipi](../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Type_visibility).

## <a name="examples"></a>Esempio

L'esempio seguente è il contenuto di un file di intestazione che contiene le definizioni per due struct nativi.

```cpp
// make_public_pragma.h
struct Native_Struct_1 { int i; };
struct Native_Struct_2 { int i; };
```

Nell'esempio di codice seguente viene utilizzato il file di intestazione. Indica che, a meno che non si contrassegni esplicitamente gli struct nativi come Public usando **make_public**, il compilatore genererà un avviso quando si tenta di usare gli struct nativi nella firma della funzione pubblica in un tipo gestito pubblico.

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

## <a name="see-also"></a>Vedi anche

[Direttive pragma e parola chiave __pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
