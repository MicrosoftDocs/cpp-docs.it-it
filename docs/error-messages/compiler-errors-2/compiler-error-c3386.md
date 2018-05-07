---
title: Errore del compilatore C3386 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3386
dev_langs:
- C++
helpviewer_keywords:
- C3386
ms.assetid: 93fa8c33-0f10-402b-8eec-b0a217a1f8dc
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d378c92fbeff4e8738450e2e49c42c00bd46a6c6
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c3386"></a>Errore del compilatore C3386
'type': dllexport /\__declspec(dllimport) non può essere applicato a un oggetto gestito o WinRTtype  
  
 Il `dllimport` e [dllexport](../../cpp/dllexport-dllimport.md) `__declspec` modificatori non sono validi su un tipo gestito o Windows Runtime tipo.  
  
 L'esempio seguente genera l'errore C3386 e mostra come risolverlo:  
  
```  
// C3386.cpp  
// compile with: /clr /c  
ref class __declspec(dllimport) X1 {   // C3386  
// try the following line instead  
// ref class X1 {  
};  
```