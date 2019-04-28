---
title: Errore irreversibile C1081
ms.date: 11/04/2016
f1_keywords:
- C1081
helpviewer_keywords:
- C1081
ms.assetid: e58adf17-cbe1-4955-a5c7-80622bbba249
ms.openlocfilehash: f3c9f9bde5da7fb120accbb9a8d72e5715ab9d2b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62229419"
---
# <a name="fatal-error-c1081"></a>Errore irreversibile C1081

'symbol': il nome file troppo lungo

La lunghezza di un nome di percorso di file supera `_MAX_PATH` (definita da STDLIB. h come 260 caratteri). Abbreviare il nome del file.

Se si chiama CL.exe con un nome di file brevi, il compilatore potrebbe essere necessario generare un nome del percorso completo. Ad esempio, `cl -c myfile.cpp` può causare il compilatore a generare:

```
D:\<very-long-directory-path>\myfile.cpp
```