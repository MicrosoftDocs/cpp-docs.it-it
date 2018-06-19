---
title: Errore del compilatore C2523 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2523
dev_langs:
- C++
helpviewer_keywords:
- C2523
ms.assetid: 7951b700-8f37-45a0-beb4-a79ae0ced72e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4546e576ced8d57a35c4c4861f29824a8d91d910
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33228342"
---
# <a name="compiler-error-c2523"></a>Errore del compilatore C2523
' classe:: ~ identifier': mancata corrispondenza del tag distruttore/finalizzatore  
  
 Il nome del distruttore deve essere il nome della classe preceduto da una tilde (`~`). Il costruttore e distruttore sono i soli membri che hanno lo stesso nome della classe.  
  
 L'esempio seguente genera l'errore C2523:  
  
```  
// C2523.cpp  
// compile with: /c  
class A {  
   ~B();    // C2523  
   ~A();   // OK  
};  
```