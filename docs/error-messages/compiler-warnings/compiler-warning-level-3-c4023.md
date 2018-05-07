---
title: Compilatore avviso (livello 3) C4023 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4023
dev_langs:
- C++
helpviewer_keywords:
- C4023
ms.assetid: 615d5374-d7c1-42eb-acfd-917c053270c8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 213d72e39575b447787c3e0ead7910baedc8e815
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-3-c4023"></a>Avviso del compilatore (livello 3) C4023
'symbol': puntatore based passato a funzione senza prototipo. Parametro number  
  
 Passando un puntatore based a una funzione senza prototipo il puntatore viene normalizzazione viene normalizzato, con risultati imprevisti.  
  
 Questo problema può essere risolto se si usano funzioni di prototipo che sono puntatori based passati.