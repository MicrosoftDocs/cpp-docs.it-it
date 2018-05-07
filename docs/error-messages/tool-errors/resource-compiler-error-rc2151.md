---
title: Errore del compilatore di risorse RC2151 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- RC2151
dev_langs:
- C++
helpviewer_keywords:
- RC2151
ms.assetid: 3c47e535-c78d-4338-aab9-9b47e2c34728
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8349aa14de6aec96fa1b526cbcffbe79036f804d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="resource-compiler-error-rc2151"></a>Errore del compilatore di risorse RC2151
non è possibile riutilizzare le costanti di stringa  
  
 Si utilizza lo stesso valore due volte in un **STRINGTABLE** istruzione. Assicurarsi che non si stia sovrapposti valori decimali ed esadecimali.  
  
 Ogni ID in un **STRINGTABLE** deve essere univoco. Per ottenere la massima efficienza utilizzare costanti contigue che avviano un multiplo di 16.