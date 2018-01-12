---
title: Errore del compilatore C3701 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C3701
dev_langs: C++
helpviewer_keywords: C3701
ms.assetid: a7faaa87-d2f5-4d6a-9a2f-5cab2d24a648
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 085bcc71284894e0fd75a7a95958e8959d9cb6cb
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c3701"></a>Errore del compilatore C3701
'function': event_source è associato alcun evento  
  
 Si è tentato di utilizzare [event_source](../../windows/event-source.md) in una classe che dispone di alcun metodo di evento. Per correggere l'errore, aggiungere uno o più eventi alla classe.  
  
 L'esempio seguente genera l'errore C3701:  
  
```  
// C3701.cpp  
[ event_source(native) ]  
class CEventSrc {  
public:  
   // uncomment the following line to resolve this C3701  
   // __event void fireEvent(int i);  
};   // C3701  
  
int main() {  
}  
```