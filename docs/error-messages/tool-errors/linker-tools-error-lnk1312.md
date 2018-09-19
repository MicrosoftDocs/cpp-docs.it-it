---
title: Strumenti del linker LNK1312 errore | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK1312
dev_langs:
- C++
helpviewer_keywords:
- LNK1312
ms.assetid: 48284abb-d849-43fc-ab53-45aded14fd8a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 335a3976675f36e3da295bc23c8e17440a56a505
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46088652"
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