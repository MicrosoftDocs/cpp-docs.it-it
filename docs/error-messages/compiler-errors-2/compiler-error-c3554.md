---
title: Errore del compilatore C3554
ms.date: 11/04/2016
f1_keywords:
- C3554
helpviewer_keywords:
- C3554
ms.assetid: aede18d5-fefc-4da9-9b69-adfe90bfa742
ms.openlocfilehash: 8bc9c465d16aea4714916fa6aa2942eb81c19015
ms.sourcegitcommit: c6f8e6c2daec40ff4effd8ca99a7014a3b41ef33
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/24/2019
ms.locfileid: "64344572"
---
# <a name="compiler-error-c3554"></a>Errore del compilatore C3554

impossibile combinare 'decltype' con qualsiasi altro identificatore di tipo

Non è possibile qualificare la parola chiave `decltype()` con un identificatore di tipo. Ad esempio, il frammento di codice seguente genera l'errore C3554.

```
int x;
unsigned decltype(x); // C3554
```