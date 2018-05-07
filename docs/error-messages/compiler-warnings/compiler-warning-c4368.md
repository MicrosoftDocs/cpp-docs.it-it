---
title: Avviso del compilatore C4368 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4368
dev_langs:
- C++
helpviewer_keywords:
- C4368
ms.assetid: cb85bcee-fd3d-4aa5-b626-2324f07a4f1b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a3a7e53c979a3b13bde205a4546c486061a17110
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-c4368"></a>Avviso del compilatore C4368
Impossibile definire 'membro' come membro di 'type' gestito: tipi misti non supportati  
  
 È possibile incorporare un membro di dati nativi in un tipo CLR.  
  
 È tuttavia possibile dichiarare un puntatore a un tipo nativo e controllarne la durata nel costruttore, nel distruttore e nel finalizzatore della classe gestita. Per ulteriori informazioni vedere [distruttori e finalizzatori](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers).  
  
 Questo avviso viene sempre generato come errore. Utilizzare il [avviso](../../preprocessor/warning.md) pragma per disabilitare C4368.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4368.  
  
```  
// C4368.cpp  
// compile with: /clr /c  
struct N {};  
ref struct O {};  
ref struct R {  
    R() : m_p( new N ) {}  
    ~R() { delete m_p; }  
  
   property N prop;   // C4368  
   int i[10];   // C4368  
  
   property O ^ prop2;   // OK  
   N * m_p;   // OK  
};  
```