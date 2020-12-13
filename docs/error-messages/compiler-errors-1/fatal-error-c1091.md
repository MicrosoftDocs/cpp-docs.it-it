---
description: 'Altre informazioni su: errore irreversibile C1091'
title: Errore irreversibile C1091
ms.date: 11/04/2016
f1_keywords:
- C1091
helpviewer_keywords:
- C1091
ms.assetid: 812d4201-9154-48b0-b9af-5959c082ca33
ms.openlocfilehash: 3863600e10dcfbef274424559e2cda0ca791406b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97145171"
---
# <a name="fatal-error-c1091"></a>Errore irreversibile C1091

limite del compilatore: la lunghezza della stringa supera i 'length' byte

Una costante della stringa ha superato il limite corrente per la lunghezza delle stringhe.

È consigliabile suddividere la stringa statica in due (o più) variabili e usare [strcpy_s](../../c-runtime-library/reference/strcpy-s-wcscpy-s-mbscpy-s.md) per unire il risultato come parte della dichiarazione o in fase di esecuzione.
