---
title: Errore irreversibile C1081
ms.date: 11/04/2016
f1_keywords:
- C1081
helpviewer_keywords:
- C1081
ms.assetid: e58adf17-cbe1-4955-a5c7-80622bbba249
ms.openlocfilehash: b8630a26d14c68a5f1abe45bb0b8d0141d0dedbb
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80204191"
---
# <a name="fatal-error-c1081"></a>Errore irreversibile C1081

' symbol ': nome di file troppo lungo

La lunghezza di un percorso di file supera `_MAX_PATH` (definito da STDLIB. h come 260 caratteri). Abbreviare il nome del file.

Se si chiama CL. exe con un nome di file breve, il compilatore potrebbe dover generare un percorso completo. Ad esempio, `cl -c myfile.cpp` può causare la generazione del compilatore:

```
D:\<very-long-directory-path>\myfile.cpp
```
