---
title: Errore del compilatore C2726 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2726
dev_langs: C++
helpviewer_keywords: C2726
ms.assetid: f0191bb7-c175-450b-bf09-a3213db96d09
caps.latest.revision: "12"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 158b915db20b94658cab09dd1bb638dcba617206
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2726"></a>Errore del compilatore C2726
'gcnew' può essere utilizzato solo per creare un oggetto con tipo gestito o WinRT  
  
 Non è possibile creare un'istanza di un tipo nativo nell'heap del Garbage Collector.  
  
 L'esempio seguente genera l'errore C2726 e mostra come risolverlo:  
  
```  
// C2726.cpp  
// compile with: /clr  
using namespace System;  
class U {};  
ref class V {};  
value class W {};  
  
int main() {  
   U* pU = gcnew U;    // C2726  
   U* pU2 = new U;   // OK  
   V^ p2 = gcnew V;   // OK  
   W p3;   // OK  
  
}  
```  
