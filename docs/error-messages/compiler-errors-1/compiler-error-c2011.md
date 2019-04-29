---
title: Errore del compilatore C2011
ms.date: 11/04/2016
f1_keywords:
- C2011
helpviewer_keywords:
- C2011
ms.assetid: 992c9d51-e850-4d53-b86b-02e73b38249c
ms.openlocfilehash: 14969c9cdf4b00844d2001bf4817ea7ffc9bfba6
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62361555"
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