---
title: Avviso del compilatore C4687 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4687
dev_langs:
- C++
helpviewer_keywords:
- C4687
ms.assetid: 2f28e0b1-7358-4c88-bd70-aad8f0aa004c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3ad45c4bb2456b3bc23114233c084bbad1551e27
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33272721"
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