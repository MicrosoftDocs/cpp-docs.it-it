---
title: Errore degli strumenti del linker LNK1312
ms.date: 11/04/2016
f1_keywords:
- LNK1312
helpviewer_keywords:
- LNK1312
ms.assetid: 48284abb-d849-43fc-ab53-45aded14fd8a
ms.openlocfilehash: 49fa7e7963d6bb561e1602b58fe1f26c5f3d54bd
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62160471"
---
# <a name="linker-tools-error-lnk1312"></a>Errore degli strumenti del linker LNK1312

file danneggiato o non valido: non è possibile importare l'assembly

Quando si compila un assembly, un file diverso da un modulo o un assembly compilato con **/clr** è stato passato per il **/ASSEMBLYMODULE** l'opzione del linker.  Se è stato passato un file oggetto a **/ASSEMBLYMODULE**, passare l'oggetto direttamente al linker, anziché a **/ASSEMBLYMODULE**.

## <a name="example"></a>Esempio

Nell'esempio seguente viene creato il file con estensione obj.

```
// LNK1312.cpp
// compile with: /clr /LD
public ref class A {
public:
   int i;
};
```

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore LNK1312.

```
// LNK1312_b.cpp
// compile with: /clr /LD /link /assemblymodule:LNK1312.obj
// LNK1312 error expected
public ref class M {};
```