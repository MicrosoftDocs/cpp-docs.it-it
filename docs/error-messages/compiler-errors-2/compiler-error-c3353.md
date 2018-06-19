---
title: Errore del compilatore C3353 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3353
dev_langs:
- C++
helpviewer_keywords:
- C3353
ms.assetid: 5699c04b-d504-46ce-bf71-c200318fed71
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 47c9d1dd8c21e56613b9da00fc2bf4f7fbeafcca
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33253905"
---
# <a name="compiler-error-c3353"></a>Errore del compilatore C3353
'delegate': un delegato può essere creato solo da una funzione globale o da una funzione membro di un tipo gestito o WinRT  
  
 I delegati, dichiarati con la [delegato](../../windows/delegate-cpp-component-extensions.md) (parola chiave), possono essere dichiarati solo in ambito globale.  
  
 L'esempio seguente genera l'errore C3353:  
  
```  
// C3353.cpp  
// compile with: /clr  
delegate int f;   // C3353  
```