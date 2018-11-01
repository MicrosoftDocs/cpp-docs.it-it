---
title: Avviso della riga di comando D9026
ms.date: 11/04/2016
f1_keywords:
- D9026
helpviewer_keywords:
- D9026
ms.assetid: 149fe5e3-5329-4be8-b871-49dfd423aaba
ms.openlocfilehash: 3fd8d442dfabaf2f03d8b564c9fdfb1537f6ff28
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50599433"
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