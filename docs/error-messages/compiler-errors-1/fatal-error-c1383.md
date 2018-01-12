---
title: Errore irreversibile C1383 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C1383
dev_langs: C++
helpviewer_keywords: C1383
ms.assetid: ca224d14-d687-4fd6-80c2-8b82f28924ea
caps.latest.revision: "5"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 24e9d7652c96c84f94bafbf2c808f2e5430037b2
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="fatal-error-c1383"></a>Errore irreversibile C1383
l'opzione del compilatore /GL è incompatibile con la versione installata di Common Language Runtime  
  
 L'errore C1383 si verifica quando si usa una versione precedente di Common Language Runtime con un compilatore più recente e durante la compilazione con **/clr** e **/GL.**  
  
 Per risolvere l'errore, non usare **/GL** con **/clr** o installare la versione di Common Language Runtime fornita con il compilatore.  
  
 Per altre informazioni, vedere [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md) e [/GL (Whole Program Optimization)](../../build/reference/gl-whole-program-optimization.md).