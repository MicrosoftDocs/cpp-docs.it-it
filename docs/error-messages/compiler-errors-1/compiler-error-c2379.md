---
description: 'Altre informazioni su: errore del compilatore C2379'
title: Errore del compilatore C2379
ms.date: 11/04/2016
f1_keywords:
- C2379
helpviewer_keywords:
- C2379
ms.assetid: 37dc3015-a4af-4341-bbf3-da6150df7e51
ms.openlocfilehash: 4b278040107a026ffd5f7bee79e709519647cb54
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97174715"
---
# <a name="compiler-error-c2379"></a>Errore del compilatore C2379

il numero del parametro formale ha un tipo diverso quando viene promosso

Il tipo del parametro specificato non è compatibile con le promozioni predefinite e il tipo in una dichiarazione precedente. Si tratta di un errore in ANSI C ([/za](../../build/reference/za-ze-disable-language-extensions.md)) e di un avviso con le estensioni Microsoft (**/ze**).

L'esempio seguente genera l'C2379:

```c
// C2379.c
// compile with: /Za
void func();
void func(char);   // C2379, char promotes to int
```
