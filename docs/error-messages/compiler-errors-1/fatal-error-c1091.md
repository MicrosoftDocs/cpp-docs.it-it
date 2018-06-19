---
title: Errore irreversibile C1091 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1091
dev_langs:
- C++
helpviewer_keywords:
- C1091
ms.assetid: 812d4201-9154-48b0-b9af-5959c082ca33
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c48c9dca72bddc844e94fb7978cb6414aa8fecf5
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33226216"
---
# <a name="fatal-error-c1091"></a>Errore irreversibile C1091
limite del compilatore: la lunghezza della stringa supera i 'length' byte  
  
 Una costante della stringa ha superato il limite corrente per la lunghezza delle stringhe.  
  
 È consigliabile suddividere la stringa statica in due (o più) variabili e usare [strcpy_s](../../c-runtime-library/reference/strcpy-s-wcscpy-s-mbscpy-s.md) per unire il risultato come parte della dichiarazione o in fase di esecuzione.