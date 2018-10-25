---
title: make_public | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- vc-pragma.make_public
- make_public_CPP
dev_langs:
- C++
helpviewer_keywords:
- pragmas, make_public
- make_public pragma
ms.assetid: c3665f4d-268a-4932-9661-c37c8ae6a341
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: eeabbfac65e67e0a293f4c31ff6f8911cc0b676e
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50066721"
---
# <a name="makepublic"></a>make_public
Indica che un tipo nativo deve avere accessibilità pubblica dell'assembly.

## <a name="syntax"></a>Sintassi

```
#pragma make_public(type)
```

### <a name="parameters"></a>Parametri

*tipo* è il nome del tipo di cui si desidera avere accessibilità pubblica dell'assembly.

## <a name="remarks"></a>Note

**make_public** è utile per l'utilizzo da un file con estensione h che non è possibile modificare il tipo nativo cui fare riferimento. Se si desidera utilizzare il tipo nativo nella firma di una funzione pubblica in un tipo con visibilità pubblica dell'assembly, il tipo nativo deve disporre anche di accessibilità pubblica dell'assembly o il compilatore genererà un avviso.

**make_public** deve essere specificato in ambito globale ed è attivo solo dal punto in cui viene dichiarato fino alla fine del file del codice sorgente.

Il tipo nativo può essere implicitamente o esplicitamente privato. visualizzare [visibilità del tipo](../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Type_visibility) per altre informazioni.

## <a name="examples"></a>Esempi

Nell'esempio seguente viene illustrato il contenuto di un file h contenente le definizioni per due struct nativi.

```cpp
// make_public_pragma.h
struct Native_Struct_1 { int i; };
struct Native_Struct_2 { int i; };
```

L'esempio di codice seguente usa il file di intestazione e viene mostrato che, a meno che non si contrassegnare in modo esplicito come pubblici, degli struct nativi usando **make_public**, il compilatore genererà un avviso quando si prova a usare gli struct nativi di firma della funzione pubblica di un tipo gestito pubblico.

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

[Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)