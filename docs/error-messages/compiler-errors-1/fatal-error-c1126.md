---
title: Errore irreversibile C1126
ms.date: 11/04/2016
f1_keywords:
- C1126
helpviewer_keywords:
- C1126
ms.assetid: f22b26a6-8ad7-47cf-a237-196c8ea60aca
ms.openlocfilehash: 110fbfe984ee7714e0c8ee2e2cb4deec4f43905a
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87207927"
---
# <a name="fatal-error-c1126"></a>Errore irreversibile C1126

' Identifier ': l'allocazione automatica supera le dimensioni

Lo spazio allocato per le variabili locali di una funzione (più una quantità limitata di spazio usato dal compilatore, ad esempio 20 byte aggiuntivi per le funzioni swapping) supera il limite.

Per correggere l'errore, utilizzare `malloc` o **`new`** per allocare grandi quantità di dati.
