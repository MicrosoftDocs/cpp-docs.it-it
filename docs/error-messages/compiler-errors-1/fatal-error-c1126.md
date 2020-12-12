---
description: 'Altre informazioni su: errore irreversibile C1126'
title: Errore irreversibile C1126
ms.date: 11/04/2016
f1_keywords:
- C1126
helpviewer_keywords:
- C1126
ms.assetid: f22b26a6-8ad7-47cf-a237-196c8ea60aca
ms.openlocfilehash: d6898b65bafa6862c77b10aa362ffc0a0df6e597
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97181007"
---
# <a name="fatal-error-c1126"></a>Errore irreversibile C1126

' Identifier ': l'allocazione automatica supera le dimensioni

Lo spazio allocato per le variabili locali di una funzione (più una quantità limitata di spazio usato dal compilatore, ad esempio 20 byte aggiuntivi per le funzioni swapping) supera il limite.

Per correggere l'errore, utilizzare `malloc` o **`new`** per allocare grandi quantità di dati.
