---
description: 'Altre informazioni su: errore matematico matematico M6202'
title: Errore matematico M6202
ms.date: 11/04/2016
f1_keywords:
- M6202
helpviewer_keywords:
- M6202
ms.assetid: 4d17045f-c6dc-4705-9512-e9af12c35fb4
ms.openlocfilehash: f6d4c9c8abab59708854eaac6763181018f47473
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97244303"
---
# <a name="math-error-m6202"></a>Errore matematico M6202

' Function ': errore _SING

Un argomento della funzione specificata è un valore di singolarità per questa funzione. La funzione non è definita per tale argomento.

Questo errore chiama la `_matherr` funzione con il nome della funzione, i relativi argomenti e il tipo di errore. È possibile riscrivere la `_matherr` funzione per personalizzare la gestione di determinati errori matematici a virgola mobile in fase di esecuzione.
