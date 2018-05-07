---
title: Errore irreversibile C1383 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1383
dev_langs:
- C++
helpviewer_keywords:
- C1383
ms.assetid: ca224d14-d687-4fd6-80c2-8b82f28924ea
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ae5e16959597e16f25320778be4d4b45ca5950e0
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="fatal-error-c1383"></a>Errore irreversibile C1383
l'opzione del compilatore /GL è incompatibile con la versione installata di Common Language Runtime  
  
 L'errore C1383 si verifica quando si usa una versione precedente di Common Language Runtime con un compilatore più recente e durante la compilazione con **/clr** e **/GL.**  
  
 Per risolvere l'errore, non usare **/GL** con **/clr** o installare la versione di Common Language Runtime fornita con il compilatore.  
  
 Per altre informazioni, vedere [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md) e [/GL (Whole Program Optimization)](../../build/reference/gl-whole-program-optimization.md).