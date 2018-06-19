---
title: Errore del compilatore C2862 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2862
dev_langs:
- C++
helpviewer_keywords:
- C2862
ms.assetid: c04d8499-b799-48a1-9fb4-7902a0b0ac8e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: bb9aac4a7c4bd43dcd4f0e688c955619133d375f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33247515"
---
# <a name="compiler-error-c2862"></a>Errore del compilatore C2862
'interface': un'interfaccia può avere solo membri pubblici  
  
 Protetti e i membri privati sono accessibili solo da altre funzioni membro. Tali membri non sono utili in un'interfaccia, poiché potrebbero non fornire le implementazioni per i relativi membri.  
  
 L'esempio seguente genera C2862:  
  
```  
// C2862.cpp  
// compile with: /c  
#include <unknwn.h>  
  
[object, uuid="60719E20-EF37-11D1-978D-0000F805D73B"]  
__interface IMyInterface {  
   HRESULT mf1(void);   // OK  
protected:  
   HRESULT mf2(int *b);   // C2862  
private:  
   HRESULT mf3(int *c);   // C2862  
};  
```