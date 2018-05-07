---
title: Errore del compilatore C2722 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2722
dev_langs:
- C++
helpviewer_keywords:
- C2722
ms.assetid: 4cc2c7fa-cb12-4bcf-9df1-6d627ef62973
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8c8838ed6b2d202d58c9553a773da9653839b6c8
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c2722"></a>Errore del compilatore C2722
':: operator': non valido dopo il comando operator. Utilizzare 'operatore'  
  
 Un `operator` istruzione consente di ridefinire `::new` o `::delete`. Il `new` e `delete` operatori sono globali, l'operatore di risoluzione dell'ambito (`::`) non è significativo. Rimuovere il `::` operatore.