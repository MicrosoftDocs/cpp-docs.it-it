---
description: 'Altre informazioni su: Command-Line avviso D9026'
title: Avviso della riga di comando D9026
ms.date: 11/04/2016
f1_keywords:
- D9026
helpviewer_keywords:
- D9026
ms.assetid: 149fe5e3-5329-4be8-b871-49dfd423aaba
ms.openlocfilehash: 910471215d350f266319f5e14b7bb1a62f641028
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97115482"
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
