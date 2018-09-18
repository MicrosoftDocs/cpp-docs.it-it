---
title: Errore irreversibile C1126 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1126
dev_langs:
- C++
helpviewer_keywords:
- C1126
ms.assetid: f22b26a6-8ad7-47cf-a237-196c8ea60aca
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f014aafc60a36bfbb4edad50e7e3ceede6e3c8b2
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46062475"
---
# <a name="fatal-error-c1126"></a>Errore irreversibile C1126

'identifier': l'allocazione automatica supera le dimensioni

Spazio allocato per le variabili locali di una funzione (più di una quantità limitata di spazio usato dal compilatore, ad esempio un byte 20 aggiuntivi per le funzioni sostituibili) supera il limite.

Per correggere questo errore, utilizzare `malloc` o `new` allocare grandi quantità di dati.