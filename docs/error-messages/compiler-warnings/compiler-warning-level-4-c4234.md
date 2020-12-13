---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4234'
title: Avviso del compilatore (livello 4) C4234
ms.date: 11/04/2016
f1_keywords:
- C4234
helpviewer_keywords:
- C4234
ms.assetid: f7fecd5c-8248-4fde-8446-502aedc357ca
ms.openlocfilehash: 98a3f5bc2c13dec3822342a669f7c9de3dc452fc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97334898"
---
# <a name="compiler-warning-level-4-c4234"></a>Avviso del compilatore (livello 4) C4234

utilizzata estensione non standard: parola chiave ' keyword ' riservata per un utilizzo futuro

Il compilatore non implementa ancora la parola chiave usata.

Questo avviso viene promosso automaticamente a un errore. Se si desidera modificare questo comportamento, utilizzare [#pragma avviso](../../preprocessor/warning.md). Ad esempio, per rendere C4234 un problema di avviso di livello 4,

```cpp
#pragma warning(2:4234)
```

nel file di codice sorgente.
