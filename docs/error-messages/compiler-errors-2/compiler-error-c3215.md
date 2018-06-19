---
title: Errore del compilatore C3215 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3215
dev_langs:
- C++
helpviewer_keywords:
- C3215
ms.assetid: d0d16007-8885-42e0-b086-2d3a61f348c5
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a2612441a5a7da7757bce4c2c8005720bf10eafd
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33251573"
---
# <a name="compiler-error-c3215"></a>Errore del compilatore C3215
'type1': parametro di tipo generico già vincolato da 'type2'  
  
 Un vincolo è stato specificato più volte.  
  
 Per altre informazioni sui generics, vedere [Generics](../../windows/generics-cpp-component-extensions.md).  
  
 L'esempio seguente genera l'errore C3215:  
  
```  
// C3215.cpp  
// compile with: /clr  
interface struct A {};  
  
generic <class T>  
where T : A,A  
ref class C {};   // C3215  
```  
  
 Possibile soluzione:  
  
```  
// C3215b.cpp  
// compile with: /clr /c  
interface struct A {};  
  
generic <class T>  
where T : A  
ref class C {};  
```