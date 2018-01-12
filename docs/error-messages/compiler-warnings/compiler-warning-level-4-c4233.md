---
title: Compilatore avviso (livello 4) C4233 | Documenti Microsoft
ms.custom: 
ms.date: 10/25/2017
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4233
dev_langs: C++
helpviewer_keywords: C4233
ms.assetid: 9aa51fc6-8ef3-43b5-bafb-c9333cf60de3
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: ad27d2ec3d59df147d8bfc26372a2d25397e651f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-4-c4233"></a>Avviso del compilatore (livello 4) C4233

> utilizzata estensione non standard: '*parola chiave*' parola chiave supportata solo in C++, non in C

Il compilatore compilato il codice sorgente come C anziché in C++ e di aver usato una parola chiave che è valida solo in C++. Il compilatore compila il file di origine come C, se l'estensione del file di origine c o utilizzano [/Tc](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md).

Questo avviso viene promossa automaticamente a un errore. Se si desidera modificare questo comportamento, utilizzare [#pragma avviso](../../preprocessor/warning.md). Ad esempio, per rendere C4233 un problema di avviso di livello 4, aggiungere questa riga al file del codice sorgente:

```cpp
#pragma warning(4:4233)
```
