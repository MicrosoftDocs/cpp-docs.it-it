---
title: Errore del compilatore C2857
ms.date: 09/13/2018
f1_keywords:
- C2857
helpviewer_keywords:
- C2857
ms.assetid: b57302bd-58ec-45ae-992a-1e282d5eeccc
ms.openlocfilehash: 10c0ea3b54ded29bf80f83713cea33428dca6ca0
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50432151"
---
# <a name="compiler-error-c2857"></a>Errore del compilatore C2857

> ' #include ' istruzione specificata con il /Yc*filename* opzione della riga di comando non è stato trovato nel file di origine

Il [/Yc](../../build/reference/yc-create-precompiled-header-file.md) opzione specifica il nome di un file di inclusione che non è incluso nel file di origine che si sta compilando.

## <a name="remarks"></a>Note

Quando si usa la **/Yc**<em>filename</em> opzione su un file di origine per creare un file di intestazione precompilata (PCH), file di origine deve includere il *filename* file di intestazione. Ogni file inclusa nel file di origine, fino alla versione specificata *filename*, è incluso nel file PCH. In altri file di origine compilati utilizzando il **/Yu**<em>filename</em> possibilità di usare il file PCH nel file, un file di inclusione dei *filename* deve essere la prima riga non di commento nel file. Il compilatore ignora qualsiasi elemento nel file di origine prima di questo tipo di inclusione.

Questo errore può essere causato da un `#include "filename"` istruzione in un blocco di compilazione condizionale che non viene compilato nel file di origine PCH.

## <a name="example"></a>Esempio

In utilizzo tipico, un file di origine nel progetto è designato come file di origine PCH e un file di intestazione viene usato come file di intestazione PCH. Un tipico file di intestazione PCH include tutte le intestazioni della libreria usate nel progetto, ma le intestazioni non locali che sono ancora in fase di sviluppo. In questo esempio è denominato file di intestazione PCH *my_pch.h*.

```cpp
// my_pch.h
#pragma once
#include <stdio.h>
```

Il file di origine PCH viene compilato usando il **/Yc**<em>my_pch.h</em> opzione. Se il compilatore non trova un file di inclusione di questo file di intestazione PCH, viene generato C2857:

```cpp
// my_pch.cpp
// Compile by using: cl /EHsc /W4 /Yumy_pch.h /c my_pch.cpp

#if 0
#include "my_pch.h"  // C2857; remove conditional directives to fix
#endif
```

Per usare questo file PCH, i file di origine devono essere compilati utilizzando la **/Yu**<em>my_pch.h</em> opzione. Il file di intestazione PCH deve essere prima di tutto incluso in file di origine che usano il file PCH:

```cpp
// C2857.cpp
// Compile my_pch.cpp first, then
// compile by using: cl /EHsc /W4 /Yumy_pch.h my_project.cpp my_pch.obj
// Include the pch header before any other non-comment line
#include "my_pch.h"

int main()
{
    puts("Using a precompiled header file.\n");
}
```