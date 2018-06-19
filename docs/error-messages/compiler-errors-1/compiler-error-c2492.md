---
title: Errore del compilatore C2492 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2492
dev_langs:
- C++
helpviewer_keywords:
- C2492
ms.assetid: 8c44c9bb-c366-4fe5-a0ab-882e38608aaa
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 68b3d769c5b86be172a0a27828fb1dc3905959d5
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33197364"
---
# <a name="compiler-error-c2492"></a>Errore del compilatore C2492
'*variabile*': i dati con durata di archiviazione di thread non possono avere un'interfaccia dll    
  
 La variabile è dichiarata con la [thread](../../cpp/thread.md) degli attributi e con la DLL dell'interfaccia. L'indirizzo del `thread` variabile non è noto in fase di esecuzione, pertanto non può essere collegato a un'importazione di file DLL o l'esportazione.  
  
 L'esempio seguente genera l'errore C2492:  
  
```  
// C2492.cpp  
// compile with: /c  
class C {  
public:  
   char   ch;  
};  
  
__declspec(dllexport) __declspec(thread) C c_1;   // C2492  
__declspec(thread) C c_1;   // OK  
```