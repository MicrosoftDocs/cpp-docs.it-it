---
title: Errore del compilatore C2779 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2779
dev_langs: C++
helpviewer_keywords: C2779
ms.assetid: 4a00e492-855a-41f3-8a18-5f60ee20c2f2
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: afae21cdd5f22d30da9702438e910cd1a8f0db2f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2779"></a>Errore del compilatore C2779
'declaration': i metodi di proprietà possono essere solo associati ai membri dati non statici  
  
 Il `property` degli attributi estesa viene applicato in modo non corretto a un membro dati statici.  
  
 L'esempio seguente genera l'errore C2779:  
  
```  
// C2779.cpp  
struct A {  
   static __declspec(property(put=PutProp))  
   // try the following line instead  
   __declspec(property(put=PutProp))  
      int prop;   // C2779  
   int PutProp(void);  
};  
```