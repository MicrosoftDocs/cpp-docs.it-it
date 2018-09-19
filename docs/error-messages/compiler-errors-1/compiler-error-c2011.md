---
title: Errore del compilatore C2011 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2011
dev_langs:
- C++
helpviewer_keywords:
- C2011
ms.assetid: 992c9d51-e850-4d53-b86b-02e73b38249c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 09946a6a3e974293e65a582c735e3de42503f0c3
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46115040"
---
# <a name="compiler-error-c2011"></a>Errore del compilatore C2011

'identifier': ridefinizione tipo 'type'

L'identificatore è già stato definito come `type`. Cercare le ridefinizioni dell'identificatore.

L'errore C2011 può verificarsi anche se si importa un file di intestazione o una libreria dei tipi più di una volta nello stesso file. Per evitare più inclusioni dei tipi definiti in un file di intestazione, usare Guard include o una `#pragma` [una volta](../../preprocessor/once.md) direttiva nel file di intestazione.

Se è necessario trovare la dichiarazione iniziale del tipo ridefinito, è possibile usare la [/P](../../build/reference/p-preprocess-to-a-file.md) flag del compilatore per generare l'output pre-elaborato passato al compilatore. È possibile usare strumenti di ricerca testo per trovare le istanze dell'identificatore ridefinito nel file di output.

L'esempio seguente genera l'errore C2011 e mostra un modo per risolverlo:

```
// C2011.cpp
// compile with: /c
struct S;
union S;   // C2011
union S2;   // OK
```