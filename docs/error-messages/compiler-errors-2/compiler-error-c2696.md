---
title: Errore del compilatore C2696 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2696
dev_langs:
- C++
helpviewer_keywords:
- C2696
ms.assetid: 6c6eb7df-1230-4346-9a73-abf14c20785d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 65ccdd6d2c8c34c360811b80d5a93abe76f5ef8e
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c2696"></a>Errore del compilatore C2696
Non è possibile creare un oggetto temporaneo di un tipo gestito 'type'  
  
I riferimenti a `const` in un programma non gestito indica al compilatore di chiamare il costruttore e creare un oggetto temporaneo nello stack. Tuttavia, una classe gestita non può mai essere creata nello stack.  
  
C2696 solo è raggiungibile anche tramite l'opzione del compilatore obsoleta **oldSyntax**.  
