---
description: 'Altre informazioni su: errore irreversibile C1081'
title: Errore irreversibile C1081
ms.date: 11/04/2016
f1_keywords:
- C1081
helpviewer_keywords:
- C1081
ms.assetid: e58adf17-cbe1-4955-a5c7-80622bbba249
ms.openlocfilehash: 97e1070cb24a70750e9c7d9f78a3860b26a7831a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97330699"
---
# <a name="fatal-error-c1081"></a>Errore irreversibile C1081

' symbol ': nome di file troppo lungo

La lunghezza di un percorso di file supera `_MAX_PATH` (definita da STDLIB. h come 260 caratteri). Abbreviare il nome del file.

Se si chiama CL.exe con un nome di file breve, il compilatore potrebbe dover generare un percorso completo. Ad esempio, `cl -c myfile.cpp` può causare la generazione del compilatore:

```
D:\<very-long-directory-path>\myfile.cpp
```
