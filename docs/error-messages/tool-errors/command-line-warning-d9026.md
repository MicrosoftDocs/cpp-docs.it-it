---
title: Avviso della riga di comando D9026
ms.date: 11/04/2016
f1_keywords:
- D9026
helpviewer_keywords:
- D9026
ms.assetid: 149fe5e3-5329-4be8-b871-49dfd423aaba
ms.openlocfilehash: 59dfcdc97fb9caf60a018cb20583ee6fca3dcb27
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80196703"
---
# <a name="command-line-warning-d9026"></a>Avviso della riga di comando D9026

opzioni valide per l'intera riga di comando

È stata specificata un'opzione in un comando dopo che è stato specificato un nome file. L'opzione è stata applicata al file che la precede.

Ad esempio, nel comando

```
CL verdi.c /G5 puccini.c
```

il file VERDI. c verrà compilato usando l'opzione/G5, non il valore predefinito di/G4.

Questo comportamento è diverso da quello di alcune versioni precedenti, che applicavano solo le opzioni specificate prima del nome del file, con conseguente compilazione di VERDI. c con/G4 e PUCCINI. c compilati con/G5.
