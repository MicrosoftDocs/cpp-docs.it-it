---
title: Errore del compilatore C2870 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2870
dev_langs:
- C++
helpviewer_keywords:
- C2870
ms.assetid: 80523ee9-1fd3-4dc4-8a77-5083deb99066
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5fe9f47a96422493d6d731a18add8c23ff683f14
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33243489"
---
# <a name="compiler-error-c2870"></a>Errore del compilatore C2870
'name': la definizione dello spazio dei nomi deve comparire in ambito file o immediatamente all'interno di un'altra definizione di spazio dei nomi  
  
 Spazio dei nomi definito `name` in modo non corretto. Spazi dei nomi deve essere definito nell'ambito del file (all'esterno di tutti i blocchi e le classi) oppure direttamente all'interno di un altro spazio dei nomi.  
  
 L'esempio seguente genera l'errore C2870:  
  
```  
// C2870.cpp  
// compile with: /c  
int main() {  
   namespace A { int i; };   // C2870  
}  
```