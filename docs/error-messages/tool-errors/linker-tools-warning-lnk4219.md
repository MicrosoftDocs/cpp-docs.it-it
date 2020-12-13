---
description: 'Altre informazioni su: avvisi degli strumenti del linker LNK4219'
title: Avviso degli strumenti del linker LNK4219
ms.date: 11/04/2016
f1_keywords:
- LNK4219
helpviewer_keywords:
- LNK4219
ms.assetid: 363fedf4-b10c-4985-811a-55a9fba688d6
ms.openlocfilehash: 2d9e720ba358b109aca1ade634009985e83974be
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97150579"
---
# <a name="linker-tools-warning-lnk4219"></a>Avviso degli strumenti del linker LNK4219

overflow correzione nome correzione. La destinazione ' nome simbolo di destinazione ' non è compresa nell'intervallo, inserimento del thunk

Il linker ha inserito un thunk in una situazione in cui l'indirizzo o l'offset non è stato in grado di rientrare nell'istruzione specificata perché il simbolo di destinazione è troppo lontano dalla posizione dell'istruzione.

Potrebbe essere necessario riordinare l'immagine (ad esempio, usando l'opzione [/Order](../../build/reference/order-put-functions-in-order.md) ) per evitare il livello aggiuntivo di riferimento indiretto.
