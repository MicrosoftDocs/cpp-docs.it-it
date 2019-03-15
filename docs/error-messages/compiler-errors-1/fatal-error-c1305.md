---
title: Errore irreversibile C1305
ms.date: 11/04/2016
f1_keywords:
- C1305
helpviewer_keywords:
- C1305
ms.assetid: 1629c850-e2db-4678-83d8-9bfc85323bc5
ms.openlocfilehash: 988842a0d5e8002ffd1478a2e10a8c88ee971911
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57822236"
---
# <a name="fatal-error-c1305"></a>Errore irreversibile C1305

'pgd_file ' del database di profilo è per un'architettura differente

Un file PDG generato dall'operazione di /LTCG: PGINSTRUMENT per un'altra piattaforma è stata passata al [/LTCG: PGOPTIMIZE](../../build/reference/ltcg-link-time-code-generation.md) . [Le ottimizzazioni PGO](../../build/profile-guided-optimizations.md) sono disponibili per piattaforme x86 e x64. Tuttavia, un file PDG generato con un'operazione di /LTCG: PGINSTRUMENT per una piattaforma non è valido come input per un /LTCG: PGOPTIMIZE per una piattaforma diversa.

Per risolvere questo errore, passare solo un file PDG creata con /LTCG: PGINSTRUMENT in /LTCG: PGOPTIMIZE sulla stessa piattaforma.