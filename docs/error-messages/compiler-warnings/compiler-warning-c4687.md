---
title: Avviso del compilatore C4687 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4687
dev_langs:
- C++
helpviewer_keywords:
- C4687
ms.assetid: 2f28e0b1-7358-4c88-bd70-aad8f0aa004c
caps.latest.revision: 5
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 266213deba94bdc925747d57dee184aca5f5f605
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-warning-c4687"></a>Avviso del compilatore C4687
'class': una classe astratta sealed non può implementare un'interfaccia 'interface'  
  
 Un tipo sealed e astratto è in genere utile solo per contenere le funzioni membro statiche.  
  
 Per ulteriori informazioni, vedere [astratta](../../windows/abstract-cpp-component-extensions.md)e [sealed](../../windows/sealed-cpp-component-extensions.md).  
  
 Per impostazione predefinita, C4687 viene generato come errore. È possibile eliminare C4687 con il [avviso](../../preprocessor/warning.md) pragma. Se si è certi che si desidera implementare un'interfaccia in un tipo sealed e astratto, è possibile eliminare C4687.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4687.  
  
```  
// C4687.cpp  
// compile with: /clr /c  
interface class A {};  
  
ref struct B sealed abstract : A {};   // C4687  
ref struct C sealed : A {};   // OK  
ref struct D abstract : A {};   // OK  
```
