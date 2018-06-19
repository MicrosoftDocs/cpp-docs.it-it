---
title: Errore del compilatore C3385 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3385
dev_langs:
- C++
helpviewer_keywords:
- C3385
ms.assetid: 5f1838c1-986e-47db-8dbc-e06976b83cf3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1949e2836c6677f6aec2597743142b6f7e87cf5f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33248773"
---
# <a name="compiler-error-c3385"></a>Errore del compilatore C3385
'class::function': una funzione che ha un attributo personalizzato DllImport non può restituire un'istanza di una classe  
  
 Una funzione definita come appartenente a un file DLL specificato con l'attributo `DllImport` non può restituire un'istanza di una classe.  
  
 L'esempio seguente genera l'errore C3385:  
  
```  
// C3385.cpp  
// compile with: /clr /c  
using namespace System;  
using namespace System::Runtime::InteropServices;  
  
struct SomeStruct1 {};  
  
public ref struct Wrap {  
   [ DllImport("somedll.dll", CharSet=CharSet::Unicode) ]  
   static SomeStruct1 f1([In, Out] SomeStruct1 *pS);   // C3385  
};  
```  
