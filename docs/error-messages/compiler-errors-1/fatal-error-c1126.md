---
title: Errore irreversibile C1126
ms.date: 11/04/2016
f1_keywords:
- C1126
helpviewer_keywords:
- C1126
ms.assetid: f22b26a6-8ad7-47cf-a237-196c8ea60aca
ms.openlocfilehash: a6c9d06cd087eb4462ae475cc1f6d64ba451887f
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80203639"
---
# <a name="fatal-error-c1126"></a>Errore irreversibile C1126

' Identifier ': l'allocazione automatica supera le dimensioni

Lo spazio allocato per le variabili locali di una funzione (più una quantità limitata di spazio usato dal compilatore, ad esempio 20 byte aggiuntivi per le funzioni swapping) supera il limite.

Per correggere l'errore, utilizzare `malloc` o `new` per allocare grandi quantità di dati.
