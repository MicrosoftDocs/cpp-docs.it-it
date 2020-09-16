---
title: Errore degli strumenti del linker LNK1312
ms.date: 11/04/2016
f1_keywords:
- LNK1312
helpviewer_keywords:
- LNK1312
ms.assetid: 48284abb-d849-43fc-ab53-45aded14fd8a
ms.openlocfilehash: 69af2bd2c22fdb1188cf0b7119791e451e80f966
ms.sourcegitcommit: c1fd917a8c06c6504f66f66315ff352d0c046700
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/16/2020
ms.locfileid: "90686496"
---
# <a name="linker-tools-error-lnk1312"></a>Errore degli strumenti del linker LNK1312

file danneggiato o non valido: Impossibile importare l'assembly

Quando si compila un assembly, un file diverso da un modulo o un assembly compilato con **/CLR** è stato passato all'opzione del linker **/ASSEMBLYMODULE** .  Se è stato passato un file oggetto a **/ASSEMBLYMODULE**, è sufficiente passare l'oggetto direttamente al linker, anziché a **/ASSEMBLYMODULE**.

## <a name="examples"></a>Esempi

Nell'esempio seguente è stato creato il file con estensione obj.

```cpp
// LNK1312.cpp
// compile with: /clr /LD
public ref class A {
public:
   int i;
};
```

L'esempio seguente genera l'LNK1312.

```cpp
// LNK1312_b.cpp
// compile with: /clr /LD /link /assemblymodule:LNK1312.obj
// LNK1312 error expected
public ref class M {};
```
