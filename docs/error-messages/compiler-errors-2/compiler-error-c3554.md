---
title: Errore del compilatore C3554
ms.date: 11/04/2016
f1_keywords:
- C3554
helpviewer_keywords:
- C3554
ms.assetid: aede18d5-fefc-4da9-9b69-adfe90bfa742
ms.openlocfilehash: ecdb90e845714e046ed21cf5a200ef4548487df6
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80200603"
---
# <a name="compiler-error-c3554"></a>Errore del compilatore C3554

impossibile combinare 'decltype' con qualsiasi altro identificatore di tipo

Non è possibile qualificare la parola chiave `decltype()` con un identificatore di tipo. Ad esempio, il frammento di codice seguente genera l'errore C3554.

```
int x;
unsigned decltype(x); // C3554
```
