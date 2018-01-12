---
title: Errore del compilatore C2124 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C2124
dev_langs: C++
helpviewer_keywords: C2124
ms.assetid: 93392aaa-5582-4d68-8cc5-bd9c62a0ae7e
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: c93ce90bb501cbf9930099e1b05dc4265fffc097
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2124"></a>Errore del compilatore C2124
divisione o mod per 0  
  
 Un'espressione costante ha un denominatore pari a zero. Per risolvere l'errore, non dividere per zero.  
  
 L'esempio seguente genera l'errore C2124:  
  
```  
// C2124.cpp  
int main() {  
  int i = 1 / 0;   // C2124  do not divide by zero  
  int i2 = 12 / 2;   // OK  
}  
```