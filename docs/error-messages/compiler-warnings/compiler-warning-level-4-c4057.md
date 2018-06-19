---
title: Compilatore avviso (livello 4) C4057 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4057
dev_langs:
- C++
helpviewer_keywords:
- C4057
ms.assetid: e75d0645-84c9-4bef-a812-942ed9879aa3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3217ccb0a96fbe02e152ff82dedeb7e8e54b89ea
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33292279"
---
# <a name="compiler-warning-level-4-c4057"></a>Avviso del compilatore (livello 4) C4057
'operator': 'identifier1' differisce da 'identifier2' nel riferimento indiretto a tipi di base leggermente diversi  
  
 Due espressioni puntatore fanno riferimento a tipi di base diversi. Le espressioni vengono usate senza conversione.  
  
### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili  
  
1.  Combinazione di tipi con segno e senza segno.  
  
2.  Combinazione di tipi **short** e **long** .