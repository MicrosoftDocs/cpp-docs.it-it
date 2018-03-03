---
title: Errore del compilatore C2384 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2384
dev_langs:
- C++
helpviewer_keywords:
- C2384
ms.assetid: 8145f7ad-31b1-406d-ac43-0d557feab635
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: a7494c38c787a0e0877496a8f65556d568d77f7d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2384"></a>Errore del compilatore C2384
'member': impossibile applicare __declspec(thread) ai membri delle classi gestite o WinRT  
  
 Il [thread](../../cpp/thread.md) `__declspec` modificatore non può essere utilizzato in un membro di un oggetto gestito o di una classe di Windows Runtime.  
  
 L'archiviazione thread-local statica nel codice gestito può essere usata solo per le DLL caricate in modo statico. La DLL deve essere caricata in modo statico all'avvio del processo. Windows Runtime non supporta l'archiviazione thread-local.  
  
 La riga seguente genera l'errore C2384 e mostra come risolverlo nel codice C++/CLI:  
  
```  
// C2384.cpp  
// compile with: /clr /c  
public ref class B {  
public:  
   __declspec( thread ) static int tls_i = 1;   // C2384  
  
   // OK - declare with attribute instead  
   [System::ThreadStaticAttribute]  
   static int tls_j;  
};  
```