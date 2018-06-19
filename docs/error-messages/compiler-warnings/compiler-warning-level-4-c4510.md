---
title: Compilatore avviso (livello 4) C4510 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4510
dev_langs:
- C++
helpviewer_keywords:
- C4510
ms.assetid: fd28d1d4-ad27-4dad-94c0-9dba46c93180
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5b280a15381f53b6836b321e25717cbed19c7271
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33297281"
---
# <a name="compiler-warning-level-4-c4510"></a>Avviso del compilatore (livello 4) C4510
'class': Impossibile generare un costruttore predefinito  
  
 Il compilatore non è possibile generare un costruttore predefinito per la classe specificata e stato creato alcun costruttore definito dall'utente. Non sarà in grado di creare oggetti di questo tipo.  
  
 Esistono diverse situazioni che impediscono al compilatore di generare un costruttore predefinito, tra cui:  
  
-   Membri dati const.  
  
-   Un membro dati che è un riferimento.  
  
 È necessario creare un costruttore predefinito definito dall'utente per la classe che consente di inizializzare i membri.  
  
 L'esempio seguente genera l'errore C4510:  
  
```  
// C4510.cpp  
// compile with: /W4  
struct A {  
   const int i;  
   int &j;  
   A& operator=( const A& ); // C4510 expected  
   // uncomment the following line to resolve this C4510  
   // A(int ii, int &jj) : i(ii), j(jj) {}  
};   // C4510  
  
int main() {  
}  
```