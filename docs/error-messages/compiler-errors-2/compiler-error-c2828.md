---
title: Errore del compilatore C2828 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2828
dev_langs:
- C++
helpviewer_keywords:
- C2828
ms.assetid: d8df6ed4-5954-46c2-b59b-52881d4e923d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f4735452f32ee1946119b1b055ed3d9eb08024d0
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c2828"></a>Errore del compilatore C2828
non è possibile eseguire l'override globale di 'operatore' con forma binaria  
  
 L'operatore non può avere un formato binario all'esterno di un oggetto.  
  
### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili  
  
1.  Rendere l'operatore di overload locale a un oggetto.  
  
2.  Scegliere un operatore unario appropriato per eseguire l'overload.