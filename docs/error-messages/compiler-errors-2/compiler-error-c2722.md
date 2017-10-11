---
title: Errore del compilatore C2722 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2722
dev_langs:
- C++
helpviewer_keywords:
- C2722
ms.assetid: 4cc2c7fa-cb12-4bcf-9df1-6d627ef62973
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: c2db3d8ac30d51e04d425bd27e9d9d5c12e62931
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c2722"></a>Errore del compilatore C2722
':: operator': non valido dopo il comando operator. Utilizzare 'operatore'  
  
 Un `operator` istruzione consente di ridefinire `::new` o `::delete`. Il `new` e `delete` operatori sono globali, l'operatore di risoluzione dell'ambito (`::`) non è significativo. Rimuovere il `::` operatore.
