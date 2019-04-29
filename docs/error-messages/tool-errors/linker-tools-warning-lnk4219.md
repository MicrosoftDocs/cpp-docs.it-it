---
title: Avviso degli strumenti del linker LNK4219
ms.date: 11/04/2016
f1_keywords:
- LNK4219
helpviewer_keywords:
- LNK4219
ms.assetid: 363fedf4-b10c-4985-811a-55a9fba688d6
ms.openlocfilehash: 7407537b55525bf622fc11cdbdb8e00244e51c18
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62410252"
---
# <a name="linker-tools-warning-lnk4219"></a>Avviso degli strumenti del linker LNK4219

overflow della correzione nome correzione. 'Il nome di simbolo di destinazione' di destinazione è compreso nell'intervallo, verrà inserito il thunk

Il linker inserito un thunk in una situazione in cui l'indirizzo o offset non è riuscito per adattarsi all'interno dell'istruzione specificata perché il simbolo di destinazione è troppo distante dalla posizione dell'istruzione.

È possibile riordinare l'immagine (usando il [/ORDER](../../build/reference/order-put-functions-in-order.md) opzione, ad esempio) per evitare un livello aggiuntivo di riferimento indiretto.