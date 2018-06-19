---
title: Errore del compilatore C2821 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2821
dev_langs:
- C++
helpviewer_keywords:
- C2821
ms.assetid: e8d71988-a968-4484-94db-e8c3bad74a4a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f8c134d84ef27110cde83d54cbb8e46aa6a39efa
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33236559"
---
# <a name="compiler-error-c2821"></a>Errore del compilatore C2821
il primo parametro formale di 'operator new' deve essere 'unsigned int'  
  
Il primo parametro formale del [operatore new](../../standard-library/new-operators.md#op_new) deve essere un unsigned `int`.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2821:  
  
```cpp  
// C2821.cpp  
// compile with: /c  
void * operator new( /* unsigned int,*/ void * );   // C2821  
void * operator new( unsigned int, void * );  
```