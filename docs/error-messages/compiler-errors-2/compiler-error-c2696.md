---
title: Errore del compilatore C2696 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2696
dev_langs:
- C++
helpviewer_keywords:
- C2696
ms.assetid: 6c6eb7df-1230-4346-9a73-abf14c20785d
caps.latest.revision: 12
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 70ccaf34a0191f0bd69c95d2cb110f6e6542a6d1
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c2696"></a>Errore del compilatore C2696
Non è possibile creare un oggetto temporaneo di un tipo gestito 'type'  
  
I riferimenti a `const` in un programma non gestito indica al compilatore di chiamare il costruttore e creare un oggetto temporaneo nello stack. Tuttavia, una classe gestita non può mai essere creata nello stack.  
  
C2696 solo è raggiungibile anche tramite l'opzione del compilatore obsoleta **oldSyntax**.  

