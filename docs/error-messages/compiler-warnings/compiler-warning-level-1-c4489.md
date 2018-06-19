---
title: Compilatore avviso (livello 1) C4489 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4489
dev_langs:
- C++
helpviewer_keywords:
- C4489
ms.assetid: 43b51c8c-27b5-44c9-b974-fe4b48f4896f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e1c6cff47d8788edd7fdba6844e07d59654456a2
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33278418"
---
# <a name="compiler-warning-level-1-c4489"></a>Avviso del compilatore (livello 1) C4489
'identificatore': non consentito per il metodo di interfaccia 'method'; eseguire l'override gli identificatori sono consentiti solo nei metodi di classe classe e il valore di riferimento  
  
 Una parola chiave identificatore stata erroneamente utilizzata in un metodo di interfaccia.  
  
 Per ulteriori informazioni, vedere [gli identificatori di Override](../../windows/override-specifiers-cpp-component-extensions.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4489.  
  
```  
// C4489.cpp  
// compile with: /clr /c /W1  
public interface class I {   
   void f() new;   // C4489  
   virtual void b() override;   // C4489  
  
   void g();   // OK  
};  
```