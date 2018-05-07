---
title: Errore del compilatore C2827 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2827
dev_langs:
- C++
helpviewer_keywords:
- C2827
ms.assetid: cb3e5814-0c92-40e4-b620-98578ae3003a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0c96f9c3d43a289deb73fdb4414c344b7748da97
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c2827"></a>Errore del compilatore C2827
non è possibile eseguire l'override globale di 'operatore' con forma unaria  
  
 L'operatore non può avere un formato unario all'esterno di un oggetto.  
  
### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili  
  
1.  Rendere l'operatore di overload locale a un oggetto.  
  
2.  Scegliere un operatore unario appropriato per eseguire l'overload.