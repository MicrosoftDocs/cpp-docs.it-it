---
title: Compilatore avviso (livello 3) C4265 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4265
dev_langs:
- C++
helpviewer_keywords:
- C4265
ms.assetid: 20547159-6f30-4cc4-83aa-927884c8bb4c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a0c859e69095b1a7e6b756b0bcc7ca8e74ba8826
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33302789"
---
# <a name="compiler-warning-level-3-c4265"></a>Avviso del compilatore (livello 3) C4265
'class': classe ha funzioni virtuali, ma il distruttore non virtuale  
  
 Quando una classe ha funzioni virtuali ma il distruttore, è possono oggetti del tipo non vengano eliminati correttamente quando la classe viene eliminata tramite un puntatore a classe di base.  
  
 Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .  
  
 L'esempio seguente genera l'errore C4265:  
  
```  
// C4265.cpp  
// compile with: /W3 /c  
#pragma warning(default : 4265)  
class B  
{  
public:  
   virtual void vmf();  
  
   ~B();  
   // try the following line instead  
   // virtual ~B();  
};   // C4265  
  
int main()  
{  
   B b;  
}  
```