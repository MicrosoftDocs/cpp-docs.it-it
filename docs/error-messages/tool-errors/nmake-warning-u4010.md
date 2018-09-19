---
title: Avviso U4010 di NMAKE | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- U4010
dev_langs:
- C++
helpviewer_keywords:
- U4010
ms.assetid: 99d8eb9a-ae31-40d1-b8c5-8c66732127d3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a640245db460f4cd8cd658c097955a69a59d1fb7
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46117500"
---
# <a name="nmake-warning-u4010"></a>Avviso U4010 di NMAKE 

'target': compilazione non è riuscita. /K specificato, continuare...

Il comando nel blocco di comandi per la destinazione ha restituito un codice di uscita diverso da zero. L'opzione /k. detto NMAKE per continuare l'elaborazione su parti della compilazione e per eseguire un codice di uscita 1 al termine della sessione NMAKE.

Se la destinazione specificata è, a sua volta, un dipendente di un'altra destinazione, NMAKE di avvertenza [U4011](../../error-messages/tool-errors/nmake-warning-u4011.md) dopo questo avviso.