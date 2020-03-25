---
title: Errore matematico M6203
ms.date: 11/04/2016
f1_keywords:
- M6203
helpviewer_keywords:
- M6203
ms.assetid: bd7fdd1c-83e4-4d6a-901e-10a0308bf5be
ms.openlocfilehash: 371a6c673826c6ce71d7a0eb3b9e08d9488f53f5
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80193693"
---
# <a name="math-error-m6203"></a>Errore matematico M6203

' Function ': errore _OVERFLOW

Il risultato della funzione specificata è troppo grande per essere rappresentato.

Questo errore chiama la funzione `_matherr` con il nome della funzione, i relativi argomenti e il tipo di errore. È possibile riscrivere la funzione `_matherr` per personalizzare la gestione di determinati errori matematici a virgola mobile in fase di esecuzione.
