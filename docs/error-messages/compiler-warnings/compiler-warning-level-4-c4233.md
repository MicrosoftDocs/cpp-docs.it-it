---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4233'
title: Avviso del compilatore (livello 4) C4233
ms.date: 10/25/2017
f1_keywords:
- C4233
helpviewer_keywords:
- C4233
ms.assetid: 9aa51fc6-8ef3-43b5-bafb-c9333cf60de3
ms.openlocfilehash: 3e797bcefeaeee615014ea8e0bd109e4cf4ffbef
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97344016"
---
# <a name="compiler-warning-level-4-c4233"></a>Avviso del compilatore (livello 4) C4233

> utilizzata estensione non standard: parola chiave '*keyword*' supportata solo in C++, non in C

Il compilatore ha compilato il codice sorgente come C anziché C++ ed è stata usata una parola chiave valida solo in C++. Il compilatore compila il file di origine come C se l'estensione del file di origine è c o si usa [/TC](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md).

Questo avviso viene promosso automaticamente a un errore. Se si desidera modificare questo comportamento, utilizzare [#pragma avviso](../../preprocessor/warning.md). Ad esempio, per rendere C4233 un problema di avviso di livello 4, aggiungere questa riga al file del codice sorgente:

```cpp
#pragma warning(4:4233)
```
