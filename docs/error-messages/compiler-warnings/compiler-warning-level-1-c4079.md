---
title: Avviso del compilatore (livello 1) C4079
ms.date: 11/04/2016
f1_keywords:
- C4079
helpviewer_keywords:
- C4079
ms.assetid: 549759f0-e168-47e9-8c9a-de93ac843689
ms.openlocfilehash: 29363ba0467d28d7cdfb4d0cb0be504213b1c86d
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80200290"
---
# <a name="compiler-warning-level-1-c4079"></a>Avviso del compilatore (livello 1) C4079

token 'token' imprevisto

Un token di separatore imprevisto si verifica in un elenco di argomenti pragma. Il resto del pragma è stato ignorato.

L'esempio seguente genera l'C4079:

```cpp
// C4079.cpp
// compile with: /W1
#pragma warning(disable : 4081)
#pragma pack(c,16)   // C4079

int main() {
}
```
