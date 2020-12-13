---
description: 'Altre informazioni su: errore matematico matematico M6203'
title: Errore matematico M6203
ms.date: 11/04/2016
f1_keywords:
- M6203
helpviewer_keywords:
- M6203
ms.assetid: bd7fdd1c-83e4-4d6a-901e-10a0308bf5be
ms.openlocfilehash: fcb123af8c79b5ce839e13247f59cbbed42736f4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97143871"
---
# <a name="math-error-m6203"></a>Errore matematico M6203

' Function ': errore _OVERFLOW

Il risultato della funzione specificata è troppo grande per essere rappresentato.

Questo errore chiama la `_matherr` funzione con il nome della funzione, i relativi argomenti e il tipo di errore. È possibile riscrivere la `_matherr` funzione per personalizzare la gestione di determinati errori matematici a virgola mobile in fase di esecuzione.
