---
title: Errore irreversibile C1305
ms.date: 11/04/2016
f1_keywords:
- C1305
helpviewer_keywords:
- C1305
ms.assetid: 1629c850-e2db-4678-83d8-9bfc85323bc5
ms.openlocfilehash: d67f0eabfd0718d8a3e3dd75e96c3e6c0d2266b6
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50623210"
---
# <a name="fatal-error-c1305"></a>Errore irreversibile C1305

'pgd_file ' del database di profilo è per un'architettura differente

Un file PDG generato dall'operazione di /LTCG: PGINSTRUMENT per un'altra piattaforma è stata passata al [/LTCG: PGOPTIMIZE](../../build/reference/ltcg-link-time-code-generation.md) . [Le ottimizzazioni PGO](../../build/reference/profile-guided-optimizations.md) sono disponibili per piattaforme x86 e x64. Tuttavia, un file PDG generato con un'operazione di /LTCG: PGINSTRUMENT per una piattaforma non è valido come input per un /LTCG: PGOPTIMIZE per una piattaforma diversa.

Per risolvere questo errore, passare solo un file PDG creata con /LTCG: PGINSTRUMENT in /LTCG: PGOPTIMIZE sulla stessa piattaforma.