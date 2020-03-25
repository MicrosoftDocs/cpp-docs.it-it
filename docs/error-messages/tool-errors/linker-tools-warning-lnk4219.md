---
title: Avviso degli strumenti del linker LNK4219
ms.date: 11/04/2016
f1_keywords:
- LNK4219
helpviewer_keywords:
- LNK4219
ms.assetid: 363fedf4-b10c-4985-811a-55a9fba688d6
ms.openlocfilehash: 4488539a4f7282180048f1e3530e62e35c3b339e
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80183098"
---
# <a name="linker-tools-warning-lnk4219"></a>Avviso degli strumenti del linker LNK4219

overflow correzione nome correzione. La destinazione ' nome simbolo di destinazione ' non è compresa nell'intervallo, inserimento del thunk

Il linker ha inserito un thunk in una situazione in cui l'indirizzo o l'offset non è stato in grado di rientrare nell'istruzione specificata perché il simbolo di destinazione è troppo lontano dalla posizione dell'istruzione.

Potrebbe essere necessario riordinare l'immagine (ad esempio, usando l'opzione [/Order](../../build/reference/order-put-functions-in-order.md) ) per evitare il livello aggiuntivo di riferimento indiretto.
