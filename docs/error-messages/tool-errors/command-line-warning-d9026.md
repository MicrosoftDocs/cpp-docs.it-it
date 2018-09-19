---
title: Avviso della riga di comando D9026 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- D9026
dev_langs:
- C++
helpviewer_keywords:
- D9026
ms.assetid: 149fe5e3-5329-4be8-b871-49dfd423aaba
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 07be633e56dad6c8f0b304a3c88c1b9919221d4a
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46079154"
---
# <a name="command-line-warning-d9026"></a>Avviso della riga di comando D9026

opzioni si applicano all'intera riga di comando

È stata specificata un'opzione su un comando dopo che è stato specificato un nome di file. L'opzione è stata applicata al file che lo precedesse.

Ad esempio, nel comando

```
CL verdi.c /G5 puccini.c
```

con l'opzione /G5, non il valore predefinito/G4 verrà compilato il file verdi. c.

Questo comportamento è diverso da quello di alcune versioni precedenti, applicate solo le opzioni specificate prima il nome del file risultante in verdi. c in fase di compilazione con/G4, venivano che si sta compilando /G5.