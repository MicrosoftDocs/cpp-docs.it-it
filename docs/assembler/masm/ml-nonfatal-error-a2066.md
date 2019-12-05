---
title: Errore ML non irreversibile A2066
ms.date: 08/30/2018
ms.custom: error-reference
f1_keywords:
- A2066
helpviewer_keywords:
- A2066
ms.assetid: 58220fdf-fb8f-47fc-a36d-737867361185
ms.openlocfilehash: 8dc3000b2edc2b1ecda7cc3952b554296de19aa3
ms.sourcegitcommit: a6d63c07ab9ec251c48bc003ab2933cf01263f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/05/2019
ms.locfileid: "74855879"
---
# <a name="ml-nonfatal-error-a2066"></a>Errore ML non irreversibile A2066

**modalità CPU incompatibile e dimensioni segmento**

È stato effettuato un tentativo di aprire un segmento con un attributo **USE16**, **USE32**o **Flat** che non era compatibile con la CPU specificata o per passare a una CPU a 16 bit mentre si trovava in un segmento a 32 bit.

Gli attributi **USE32** e **Flat** devono essere preceduti dalla direttiva. 386 o da un processore superiore.

## <a name="see-also"></a>Vedere anche

[Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)<br/>