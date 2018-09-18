---
title: Errore irreversibile C1081 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1081
dev_langs:
- C++
helpviewer_keywords:
- C1081
ms.assetid: e58adf17-cbe1-4955-a5c7-80622bbba249
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b34f2f19a0bb8770ea9292fef120c415c0fb255a
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46060531"
---
# <a name="fatal-error-c1081"></a>Errore irreversibile C1081

'symbol': il nome file troppo lungo

La lunghezza di un nome di percorso di file supera `_MAX_PATH` (definita da STDLIB. h come 260 caratteri). Abbreviare il nome del file.

Se si chiama CL.exe con un nome di file brevi, il compilatore potrebbe essere necessario generare un nome del percorso completo. Ad esempio, `cl -c myfile.cpp` può causare il compilatore a generare:

```
D:\<very-long-directory-path>\myfile.cpp
```