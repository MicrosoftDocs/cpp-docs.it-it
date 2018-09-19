---
title: Strumenti del linker LNK4219 avviso | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK4219
dev_langs:
- C++
helpviewer_keywords:
- LNK4219
ms.assetid: 363fedf4-b10c-4985-811a-55a9fba688d6
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: daf097cd8715a7c523e6e8a2ea46714481ca7d2a
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46105209"
---
# <a name="linker-tools-warning-lnk4219"></a>Avviso degli strumenti del linker LNK4219

overflow della correzione nome correzione. 'Il nome di simbolo di destinazione' di destinazione è compreso nell'intervallo, verrà inserito il thunk

Il linker inserito un thunk in una situazione in cui l'indirizzo o offset non è riuscito per adattarsi all'interno dell'istruzione specificata perché il simbolo di destinazione è troppo distante dalla posizione dell'istruzione.

È possibile riordinare l'immagine (usando il [/ORDER](../../build/reference/order-put-functions-in-order.md) opzione, ad esempio) per evitare un livello aggiuntivo di riferimento indiretto.