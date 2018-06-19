---
title: Errore del compilatore C3893 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3893
dev_langs:
- C++
helpviewer_keywords:
- C3893
ms.assetid: 90d52eae-6ef2-4db1-b7ad-92f9e8b140fb
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0c95d44a90b9325a492a0f179c941d46ff24030c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33273423"
---
# <a name="compiler-error-c3893"></a>Errore del compilatore C3893
'var': utilizzo l-value del membro dati initonly è consentito solo in un costruttore di istanza della classe 'nome_tipo'  
  
 Statico [initonly](../../dotnet/initonly-cpp-cli.md) membri dati possono avere solo gli indirizzi in un costruttore statico.  
  
 Membri dati initonly (non statici) di istanza possono avere solo gli indirizzi in costruttori di istanza (non statici).  
  
 L'esempio seguente genera l'errore C3893:  
  
```  
// C3893.cpp  
// compile with: /clr  
ref struct Y1 {  
   Y1() : data_var(0) {  
      int% i = data_var;   // OK  
   }  
   initonly int data_var;  
};  
  
int main(){  
   Y1^ y= gcnew Y1;  
   int% i = y->data_var;   // C3893  
}  
```