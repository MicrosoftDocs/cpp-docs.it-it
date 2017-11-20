---
title: Errore del compilatore C2208 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2208
dev_langs: C++
helpviewer_keywords: C2208
ms.assetid: 9ae704bc-bf70-45f1-8e47-0470f21edd4e
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 1fd07ee02251a3ea1ef7b0da1bc8e27685eb42ff
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c2208"></a>Errore del compilatore C2208
'type': nessun membro definito usando questo tipo  
  
 È un identificatore di risoluzione di un nome di tipo in una dichiarazione di aggregazione, ma il compilatore non è possibile dichiarare un membro.  
  
 L'esempio seguente genera l'errore C2208:  
  
```  
// C2208.cpp  
class C {  
   C;   // C2208  
   C(){}   // OK  
};  
```