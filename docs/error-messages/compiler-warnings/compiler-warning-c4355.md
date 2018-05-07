---
title: Avviso del compilatore C4355 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4355
dev_langs:
- C++
helpviewer_keywords:
- C4355
ms.assetid: b819ecab-8a07-42d7-8fa4-1180d51626c0
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 13f57b8a7c279b820f4f9fc4a68715804a12e625
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-c4355"></a>Avviso del compilatore C4355
"this": utilizzato nell'elenco degli inizializzatori dei membri di base  
  
 Il **questo** puntatore è valido solo all'interno di funzioni membro non statiche. E non può essere utilizzato nell'elenco di inizializzatori per una classe base.  
  
 I costruttori delle classi base e dei membri di classe vengono chiamati prima **questo** costruttore. In effetti, è stato passato un puntatore a un oggetto senza costrutto per un altro costruttore. Se gli altri costruttori accedere a qualsiasi membro o chiamano le funzioni membro su questo, il risultato sarà indefinito. Non è consigliabile utilizzare il **questo** puntatore fino al completamento di tutte le costruzioni.  
  
 Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .  
  
 L'esempio seguente genera l'errore C4355:  
  
```  
// C4355.cpp  
// compile with: /w14355 /c  
#include <tchar.h>  
  
class CDerived;  
class CBase {  
public:  
   CBase(CDerived *derived): m_pDerived(derived) {};  
   ~CBase();  
   virtual void function() = 0;  
  
   CDerived * m_pDerived;  
};  
  
class CDerived : public CBase {  
public:  
   CDerived() : CBase(this) {};   // C4355 "this" used in derived c'tor  
   virtual void function() {};  
};  
  
CBase::~CBase() {  
   m_pDerived -> function();  
}  
  
int main() {  
   CDerived myDerived;  
}  
```