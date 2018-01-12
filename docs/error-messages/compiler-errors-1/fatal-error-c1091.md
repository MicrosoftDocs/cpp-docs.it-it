---
title: Errore irreversibile C1091 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C1091
dev_langs: C++
helpviewer_keywords: C1091
ms.assetid: 812d4201-9154-48b0-b9af-5959c082ca33
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 9e9d5e9ba75457d89223ab187c1249cc73419fab
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="fatal-error-c1091"></a>Errore irreversibile C1091
limite del compilatore: la lunghezza della stringa supera i 'length' byte  
  
 Una costante della stringa ha superato il limite corrente per la lunghezza delle stringhe.  
  
 È consigliabile suddividere la stringa statica in due (o più) variabili e usare [strcpy_s](../../c-runtime-library/reference/strcpy-s-wcscpy-s-mbscpy-s.md) per unire il risultato come parte della dichiarazione o in fase di esecuzione.