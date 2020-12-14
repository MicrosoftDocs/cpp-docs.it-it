---
description: 'Altre informazioni su: errore del compilatore C3554'
title: Errore del compilatore C3554
ms.date: 11/04/2016
f1_keywords:
- C3554
helpviewer_keywords:
- C3554
ms.assetid: aede18d5-fefc-4da9-9b69-adfe90bfa742
ms.openlocfilehash: 39bc1a673af37d6b73941bb300d86df5f41a4704
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97223178"
---
# <a name="compiler-error-c3554"></a>Errore del compilatore C3554

impossibile combinare 'decltype' con qualsiasi altro identificatore di tipo

Non è possibile qualificare la parola chiave `decltype()` con un identificatore di tipo. Ad esempio, il frammento di codice seguente genera l'errore C3554.

```
int x;
unsigned decltype(x); // C3554
```
