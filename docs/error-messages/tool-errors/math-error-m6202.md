---
title: Errore matematico M6202
ms.date: 11/04/2016
f1_keywords:
- M6202
helpviewer_keywords:
- M6202
ms.assetid: 4d17045f-c6dc-4705-9512-e9af12c35fb4
ms.openlocfilehash: b8a3a4ab87a410c4cee8f7e4a1a0517c169d0364
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80173660"
---
# <a name="math-error-m6202"></a>Errore matematico M6202

' Function ': errore _SING

Un argomento della funzione specificata è un valore di singolarità per questa funzione. La funzione non è definita per tale argomento.

Questo errore chiama la funzione `_matherr` con il nome della funzione, i relativi argomenti e il tipo di errore. È possibile riscrivere la funzione `_matherr` per personalizzare la gestione di determinati errori matematici a virgola mobile in fase di esecuzione.
