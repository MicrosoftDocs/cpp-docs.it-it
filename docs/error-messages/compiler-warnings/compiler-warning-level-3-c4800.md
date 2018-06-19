---
title: Avviso (livello 3) del compilatore C4800 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4800
dev_langs:
- C++
helpviewer_keywords:
- C4800
ms.assetid: 4f409799-a250-45ed-bb5f-657691b0d9f7
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ed4b14ae2f3af3218909d6cd4609f1f45d3d7cc2
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33293634"
---
# <a name="compiler-warning-level-3-c4800"></a>Avviso del compilatore (livello 3) C4800  
  
> '*tipo*': imposto valore booleano 'true' o 'false' (avviso di prestazioni)  
  
Questo avviso viene generato quando un valore che non è `bool` viene assegnato al tipo `bool`. In genere, questo messaggio è causato dall'assegnazione `int` variabili `bool` variabili in cui il `int` variabile contiene solo valori **true** e **false**e può essere ridichiarato come tipo `bool`. Se è possibile riscrivere l'espressione per l'utilizzo di tipo `bool`, quindi è possibile aggiungere "`!=0`" all'espressione, che fornisce il tipo di espressione `bool`. Esegue il cast dell'espressione nel tipo `bool` non disabilitare l'avviso, ovvero in base alla progettazione.  
  
Questo avviso non viene generato in Visual Studio 2017.  
  
## <a name="example"></a>Esempio
  
 L'esempio seguente genera l'errore C4800 e Mostra come risolverlo:  
  
```cpp  
// C4800.cpp  
// compile with: /W3  
int main() {  
   int i = 0;  
  
   // To fix, instead try:  
   // bool i = 0;  
  
   bool j = i;   // C4800  
   j++;  
}  
```