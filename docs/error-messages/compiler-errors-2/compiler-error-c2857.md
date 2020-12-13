---
description: 'Altre informazioni su: errore del compilatore C2857'
title: Errore del compilatore C2857
ms.date: 09/13/2018
f1_keywords:
- C2857
helpviewer_keywords:
- C2857
ms.assetid: b57302bd-58ec-45ae-992a-1e282d5eeccc
ms.openlocfilehash: 85f2a9cffc8a96998a102d9e8219d9656cb3386f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97337527"
---
# <a name="compiler-error-c2857"></a>Errore del compilatore C2857

> l'istruzione ' #include ' specificata con l'opzione della riga di comando/YC *filename* non è stata trovata nel file di origine

L'opzione [/YC](../../build/reference/yc-create-precompiled-header-file.md) specifica il nome di un file di inclusione non incluso nel file di origine che si sta compilando.

## <a name="remarks"></a>Commenti

Quando si usa l'opzione **/YC**<em>filename</em> in un file di origine per creare un file di intestazione precompilata (PCH), il file di origine deve includere il file di intestazione *filename* . Ogni file incluso nel file di origine, fino a includere il *nome* file specificato, è incluso nel file PCH. In altri file di origine compilati usando l'opzione **/Yu**<em>filename</em> per usare il file PCH, un'inclusione del *nome* file deve essere la prima riga non di commento nel file. Il compilatore ignora tutto il contenuto del file di origine prima di includerlo.

Questo errore può essere causato da un' `#include "filename"` istruzione in un blocco di compilazione condizionale che non viene compilato nel file di origine PCH.

## <a name="example"></a>Esempio

Nell'uso tipico, un file di origine nel progetto viene designato come file di origine PCH e un file di intestazione viene usato come file di intestazione PCH. Un file di intestazione PCH tipico include tutte le intestazioni di libreria usate nel progetto, ma non le intestazioni locali ancora in fase di sviluppo. In questo esempio, il file di intestazione PCH è denominato *my_pch. h*.

```cpp
// my_pch.h
#pragma once
#include <stdio.h>
```

Il file di origine PCH viene compilato usando l'opzione **/Yc**<em>my_pch. h</em> . Se il compilatore non trova un'inclusione del file di intestazione PCH, genera C2857:

```cpp
// my_pch.cpp
// Compile by using: cl /EHsc /W4 /Yumy_pch.h /c my_pch.cpp

#if 0
#include "my_pch.h"  // C2857; remove conditional directives to fix
#endif
```

Per usare questo file PCH, i file di origine devono essere compilati usando l'opzione **/Yu**<em>my_pch. h</em> . Il file di intestazione PCH deve essere incluso prima nei file di origine che usano il PCH:

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
