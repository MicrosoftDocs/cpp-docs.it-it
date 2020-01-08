---
title: Errore ML non irreversibile A2066
ms.date: 12/17/2019
ms.custom: error-reference
f1_keywords:
- A2066
helpviewer_keywords:
- A2066
ms.assetid: 58220fdf-fb8f-47fc-a36d-737867361185
ms.openlocfilehash: 4c7c32264fe5daa6cd4e14f47cff111899e8f8d6
ms.sourcegitcommit: 0781c69b22797c41630601a176b9ea541be4f2a3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75316889"
---
# <a name="ml-nonfatal-error-a2066"></a>Errore ML non irreversibile A2066

**modalità CPU incompatibile e dimensioni segmento**

È stato effettuato un tentativo di aprire un segmento con un attributo **USE16**, **USE32**o **Flat** che non era compatibile con la CPU specificata o per passare a una CPU a 16 bit mentre si trovava in un segmento a 32 bit.

Gli attributi **USE32** e **Flat** devono essere preceduti dalla direttiva. 386 o da un processore superiore.

## <a name="see-also"></a>Vedere anche

[Messaggi di errore ML](ml-error-messages.md)
