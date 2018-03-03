---
title: Errore del compilatore C2847 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2847
dev_langs:
- C++
helpviewer_keywords:
- C2847
ms.assetid: 9ad9a0e0-8b16-49d9-a5be-f8eda2372aa9
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 6e1ee4fd957f72c60e30641b1127796bebadb009
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2847"></a>Errore del compilatore C2847
impossibile applicare sizeof a un tipo gestito o WinRT 'class'  
  
 Il [sizeof](../../cpp/sizeof-operator.md) operatore ottiene il valore di un oggetto in fase di compilazione. Le dimensioni di un tipo di classe, interfaccia o valore gestito o WinRT sono dinamiche e quindi non sono note in fase di compilazione.  
  
 L'esempio seguente genera l'errore C2847:  
  
```  
// C2847.cpp  
// compile with: /clr  
ref class A {};  
  
int main() {  
   A ^ xA = gcnew A;  
   sizeof(*xA);   // C2847 cannot use sizeof on managed object  
}  
```  
