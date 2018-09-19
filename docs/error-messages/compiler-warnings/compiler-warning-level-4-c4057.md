---
title: Compilatore avviso (livello 4) C4057 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4057
dev_langs:
- C++
helpviewer_keywords:
- C4057
ms.assetid: e75d0645-84c9-4bef-a812-942ed9879aa3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b10ce6b67fd24b4b8db01177af0225deab9dba4b
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46088007"
---
# <a name="compiler-warning-level-4-c4057"></a>Avviso del compilatore (livello 4) C4057

'operator': 'identifier1' differisce da 'identifier2' nel riferimento indiretto a tipi di base leggermente diversi

Due espressioni puntatore fanno riferimento a tipi di base diversi. Le espressioni vengono usate senza conversione.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. Combinazione di tipi con segno e senza segno.

1. Combinazione di tipi **short** e **long** .