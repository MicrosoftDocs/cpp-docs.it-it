---
title: Errore del compilatore C2439 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2439
dev_langs:
- C++
helpviewer_keywords:
- C2439
ms.assetid: 3c5dbe5c-b7d3-4bb0-8619-92f6e280461e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 33bfe8ebf00850a54020b2a3f21159daf28b7224
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33225689"
---
# <a name="compiler-error-c2439"></a>Errore del compilatore C2439
'identifier': Impossibile inizializzare il membro  
  
 Impossibile inizializzare una classe, struttura o unione membro.  
  
### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili  
  
1.  Tentativo di inizializzare una classe base indiretta o struttura.  
  
2.  Tentativo di inizializzare un membro ereditato di una classe o struttura. Un membro ereditato deve essere inizializzato dal costruttore della classe o struttura.