---
description: 'Altre informazioni su: errore del compilatore C2011'
title: Errore del compilatore C2011
ms.date: 11/04/2016
f1_keywords:
- C2011
helpviewer_keywords:
- C2011
ms.assetid: 992c9d51-e850-4d53-b86b-02e73b38249c
ms.openlocfilehash: c310495c570a2259cf5abe6acea951ca996bfb26
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97221020"
---
# <a name="compiler-error-c2011"></a>Errore del compilatore C2011

'identifier': ridefinizione tipo 'type'

L'identificatore è già stato definito come `type`. Cercare le ridefinizioni dell'identificatore.

L'errore C2011 può verificarsi anche se si importa un file di intestazione o una libreria dei tipi più di una volta nello stesso file. Per evitare più inclusioni dei tipi definiti in un file di intestazione, utilizzare Includi protezioni o una `#pragma` direttiva [once](../../preprocessor/once.md) nel file di intestazione.

Se è necessario trovare la dichiarazione iniziale del tipo ridefinito, è possibile usare il flag [/p](../../build/reference/p-preprocess-to-a-file.md) del compilatore per generare l'output pre-elaborato passato al compilatore. È possibile usare strumenti di ricerca testo per trovare le istanze dell'identificatore ridefinito nel file di output.

L'esempio seguente genera l'errore C2011 e mostra un modo per risolverlo:

```cpp
// C2011.cpp
// compile with: /c
struct S;
union S;   // C2011
union S2;   // OK
```
