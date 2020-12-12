---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4079'
title: Avviso del compilatore (livello 1) C4079
ms.date: 11/04/2016
f1_keywords:
- C4079
helpviewer_keywords:
- C4079
ms.assetid: 549759f0-e168-47e9-8c9a-de93ac843689
ms.openlocfilehash: d666d6d1272c1a131af5aa6b4e9248398e270758
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97228664"
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
