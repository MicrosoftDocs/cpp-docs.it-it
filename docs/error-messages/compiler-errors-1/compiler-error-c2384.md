---
title: "Compiler Error C2384 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2384"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2384"
ms.assetid: 8145f7ad-31b1-406d-ac43-0d557feab635
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 15
---
# Compiler Error C2384
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'member': impossibile applicare \_\_declspec\(thread\) ai membri delle classi gestite o WinRT  
  
 Il modificatore [thread](../../cpp/thread.md) `__declspec` non può essere usato su un membro di una classe gestita o Windows Runtime.  
  
 L'archiviazione thread\-locale statica nel codice gestito può essere usata solo per le DLL caricate in modo statico. La DLL deve essere caricata in modo statico all'avvio del processo.  Windows Runtime non supporta l'archiviazione thread\-local.  
  
 La riga seguente genera l'errore C2384 e mostra come risolverlo nel codice C\+\+\/CLI:  
  
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