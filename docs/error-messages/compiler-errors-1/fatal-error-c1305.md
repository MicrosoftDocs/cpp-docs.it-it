---
title: Errore irreversibile C1305
ms.date: 11/04/2016
f1_keywords:
- C1305
helpviewer_keywords:
- C1305
ms.assetid: 1629c850-e2db-4678-83d8-9bfc85323bc5
ms.openlocfilehash: 6ad00eb3d95e9f09d4f84daefb7e2a87fd1a3abf
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80203359"
---
# <a name="fatal-error-c1305"></a>Errore irreversibile C1305

il database di profilo ' pgd_file ' è per un'architettura diversa

Un file. PGD generato dall'operazione/LTCG: PGINSTRUMENT per un'altra piattaforma è stato passato a [/LTCG: PGOPTIMIZE](../../build/reference/ltcg-link-time-code-generation.md) . Le [ottimizzazioni](../../build/profile-guided-optimizations.md) PGO sono disponibili per le piattaforme x86 e x64. Tuttavia, un file. PGD generato con un'operazione/LTCG: PGINSTRUMENT per una piattaforma non è valido come input per/LTCG: PGOPTIMIZE per una piattaforma diversa.

Per correggere l'errore, passare solo un file. PGD creato con/LTCG: PGINSTRUMENT a/LTCG: PGOPTIMIZE sulla stessa piattaforma.
