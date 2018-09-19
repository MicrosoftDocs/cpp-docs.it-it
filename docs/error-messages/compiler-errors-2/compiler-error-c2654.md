---
title: Errore del compilatore C2654 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2654
dev_langs:
- C++
helpviewer_keywords:
- C2654
ms.assetid: ca7de1bd-576b-40bf-96fc-a91984827d20
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1181cbab40739617343f8d2a2e5e26540f01e82f
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46080844"
---
# <a name="compiler-error-c2654"></a>Errore del compilatore C2654

'identifier': tentativo di accedere a un membro all'esterno di una funzione membro

Un membro viene eseguito in una dichiarazione. I dati dei membri sono accessibili solo nelle funzioni membro.

Questo errore può essere causato quando si tenta di inizializzare le variabili in una dichiarazione. A tale scopo, usare un costruttore.