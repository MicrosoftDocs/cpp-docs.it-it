---
title: Chiamata di funzioni C++ in Assembly Inline | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- functions [C++], calling in inline assembly
- function calls, C++ functions
- function calls, in inline assembly
- Visual C++, functions
- inline assembly, calling functions
- __asm keyword [C++], calling functions
ms.assetid: 1f0d1eb3-54cf-45d5-838d-958188616b38
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 1a805d3bd22b55dd41d7221e970f0557855e4544
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="calling-c-functions-in-inline-assembly"></a>Chiamare le funzioni C++ nell'assembly inline
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 Un blocco `__asm` può chiamare solo le funzioni globali C++ non in overload. Se si chiama una funzione globale C++ in overload o una funzione membro C++, il compilatore genera un errore.  
  
 È inoltre possibile chiamare qualsiasi funzione dichiarata con **extern "C"** collegamento. In questo modo un `__asm` blocco all'interno di un programma C++ di chiamare le funzioni della libreria C, poiché tutti i file di intestazione standard dichiarano le funzioni della libreria abbiano **extern "C"** collegamento.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Assembler inline](../../assembler/inline/inline-assembler.md)