---
title: Errore del compilatore C3366 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3366
dev_langs:
- C++
helpviewer_keywords:
- C3366
ms.assetid: efc55bcf-c16d-43c1-a36f-87a6165fa2a8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c26bfbb5d66ad22484184bd361f14004ed8aa30c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33254274"
---
# <a name="compiler-error-c3366"></a>Errore del compilatore C3366
'variabile': i membri dati statici di gestiti o WinRTtypes deve essere definito all'interno della definizione di classe  
  
 Si è tentato di fare riferimento a un membro statico di una classe o un'interfaccia WinRT o .NET al di fuori della definizione di tale classe o interfaccia.  
  
 Il compilatore deve conoscere la definizione completa della classe (per creare i metadati dopo un solo passaggio) ed è necessario che i membri dati statici vengano inizializzati all'interno della classe.  
  
 L'esempio seguente genera l'errore C3366 e mostra come risolverlo:  
  
```  
// C3366.cpp  
// compile with: /clr /c  
ref class X {  
   public:  
   static int i;   // initialize i here to avoid C3366  
};  
  
int X::i = 5;      // C3366  
```  
