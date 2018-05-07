---
title: Errore del compilatore C2844 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2844
dev_langs:
- C++
helpviewer_keywords:
- C2844
ms.assetid: dcaf4cd2-21b0-4280-ae42-0a706c524d83
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4a45e4a94e3d474be670f822d56a7c080f25693c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c2844"></a>Errore del compilatore C2844
'member': non può essere un membro di interfaccia 'interface'  
  
 Un [classe interfaccia](../../windows/interface-class-cpp-component-extensions.md) non può contenere un membro dati, a meno che non sia anche una proprietà.  
  
 Diverso da una proprietà o una funzione membro non è consentita in un'interfaccia. Inoltre, non sono consentiti costruttori, distruttori e operatori.  
  
 L'esempio seguente genera l'errore C2844:  
  
```  
// C2844a.cpp  
// compile with: /clr /c  
public interface class IFace {  
   int i;   // C2844  
   // try the following line instead  
   // property int Size;  
};  
```  
