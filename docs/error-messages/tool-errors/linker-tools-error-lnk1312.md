---
title: Errore degli strumenti del linker LNK1312
ms.date: 11/04/2016
f1_keywords:
- LNK1312
helpviewer_keywords:
- LNK1312
ms.assetid: 48284abb-d849-43fc-ab53-45aded14fd8a
ms.openlocfilehash: e462d24f2eb54718ba73617146aab96bb14a66df
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74990915"
---
# <a name="linker-tools-error-lnk1312"></a>Errore degli strumenti del linker LNK1312

file danneggiato o non valido: Impossibile importare l'assembly

Quando si compila un assembly, un file diverso da un modulo o un assembly compilato con **/CLR** è stato passato all'opzione del linker **/ASSEMBLYMODULE** .  Se è stato passato un file oggetto a **/ASSEMBLYMODULE**, è sufficiente passare l'oggetto direttamente al linker, anziché a **/ASSEMBLYMODULE**.

## <a name="example"></a>Esempio

Nell'esempio seguente è stato creato il file con estensione obj.

```cpp
// LNK1312.cpp
// compile with: /clr /LD
public ref class A {
public:
   int i;
};
```

## <a name="example"></a>Esempio

L'esempio seguente genera l'LNK1312.

```cpp
// LNK1312_b.cpp
// compile with: /clr /LD /link /assemblymodule:LNK1312.obj
// LNK1312 error expected
public ref class M {};
```
