---
title: Errore ML non irreversibile A2066
ms.date: 08/30/2018
ms.topic: error-reference
f1_keywords:
- A2066
helpviewer_keywords:
- A2066
ms.assetid: 58220fdf-fb8f-47fc-a36d-737867361185
ms.openlocfilehash: 10285c65437bdaaed24fb818e6c1eb3996d0deec
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62177344"
---
# <a name="ml-nonfatal-error-a2066"></a>Errore ML non irreversibile A2066

**dimensioni di modalità e nello stesso segmento della CPU non compatibile**

Si è verificato un tentativo di aprire un segmento con un **USE16**, **USE32**, o **FLAT** attributo che non era compatibile con l'utilizzo della CPU specificato o per modificare a una CPU a 16 bit in 32 bit segmento.

Il **USE32** e **FLAT** attributi devono essere preceduti dal 386 o maggiore della direttiva di processore.

## <a name="see-also"></a>Vedere anche

[Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)<br/>