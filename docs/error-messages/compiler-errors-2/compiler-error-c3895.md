---
title: Errore del compilatore C3895 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C3895
dev_langs: C++
helpviewer_keywords: C3895
ms.assetid: 771b9fe5-d6d4-4297-bf57-e2f857722155
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 75bd27d44ed74817cc23e6b58f036742d2d1979b
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c3895"></a>Errore del compilatore C3895
'var': i membri dati di tipo non possono essere 'volatili'  
  
 Alcuni tipi di membri di dati, ad esempio [letterale](../../windows/literal-cpp-component-extensions.md) o [initonly](../../dotnet/initonly-cpp-cli.md), non può essere [volatile](../../cpp/volatile-cpp.md).  
  
 L'esempio seguente genera l'errore C3895:  
  
```  
// C3895.cpp  
// compile with: /clr  
ref struct Y1 {  
   initonly  
   volatile int data_var2;   // C3895  
};  
```