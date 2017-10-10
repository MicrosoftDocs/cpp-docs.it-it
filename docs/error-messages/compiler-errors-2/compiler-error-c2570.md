---
title: Errore del compilatore C2570 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2570
dev_langs:
- C++
helpviewer_keywords:
- C2570
ms.assetid: d65d0b32-2fac-464a-bcdf-0ebcedf3bf32
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 6b5d53463e889504f202b7d50b8c5ac877f27cf8
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c2570"></a>Errore del compilatore C2570
'identifier': un'unione non può avere classi base  
  
 Un'unione deriva da una classe, struttura o unione. ma questa operazione non è consentita. Dichiarare il tipo derivato come una classe o struttura.  
  
 L'esempio seguente genera l'errore C2570:  
  
```  
// C2570.cpp  
// compile with: /c  
class base {};  
union hasPubBase : public base {};   // C2570  
union hasNoBase {};   // OK  
```
