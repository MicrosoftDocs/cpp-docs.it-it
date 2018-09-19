---
title: Errore irreversibile C1305 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1305
dev_langs:
- C++
helpviewer_keywords:
- C1305
ms.assetid: 1629c850-e2db-4678-83d8-9bfc85323bc5
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4beb1140d161b8cbe54cab40dcc72899c976edc3
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46048747"
---
# <a name="fatal-error-c1305"></a>Errore irreversibile C1305

'pgd_file ' del database di profilo è per un'architettura differente

Un file PDG generato dall'operazione di /LTCG: PGINSTRUMENT per un'altra piattaforma è stata passata al [/LTCG: PGOPTIMIZE](../../build/reference/ltcg-link-time-code-generation.md) . [Le ottimizzazioni PGO](../../build/reference/profile-guided-optimizations.md) sono disponibili per piattaforme x86 e x64. Tuttavia, un file PDG generato con un'operazione di /LTCG: PGINSTRUMENT per una piattaforma non è valido come input per un /LTCG: PGOPTIMIZE per una piattaforma diversa.

Per risolvere questo errore, passare solo un file PDG creata con /LTCG: PGINSTRUMENT in /LTCG: PGOPTIMIZE sulla stessa piattaforma.