---
title: Errore irreversibile C1308 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C1308
dev_langs: C++
helpviewer_keywords: C1308
ms.assetid: 46177997-069e-433a-8e20-93c846d78ffd
caps.latest.revision: "11"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 4be04f3891e39c37924743ae86e2c7f62f92b6d8
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="fatal-error-c1308"></a>Errore irreversibile C1308
collegamento di assembly non è supportato.  
  
 Come input del linker, è possibile utilizzare un file con estensione netmodule, ma non un assembly. Questo errore può essere generato quando viene effettuato un tentativo di collegare un assembly compilato con `/clr:safe`.  
  
 Per altre informazioni, vedere [File con estensione netmodule come input del linker](../../build/reference/netmodule-files-as-linker-input.md).  
  
 L'esempio seguente genera l'errore C1308:  
  
```  
// C1308.cpp  
// compile with: /clr:safe /LD  
public ref class MyClass {  
public:  
   int i;  
};  
```  
  
 E poi  
  
```  
// C1308b.cpp  
// compile with: /clr /link C1308b.obj C1308.dll  
// C1308 expected  
#using "C1308.dll"  
int main() {  
   MyClass ^ my = gcnew MyClass();  
}  
```