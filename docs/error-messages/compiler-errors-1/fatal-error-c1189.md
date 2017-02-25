---
title: "Errore irreversibile C1189 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C1189"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1189"
ms.assetid: 2e5c8a78-edd4-411c-b619-558a96be148a
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 13
---
# Errore irreversibile C1189
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

\#error: messaggio di errore fornito dall'utente  
  
 L'errore C1189 è generato dalla direttiva `#error`.  Lo sviluppatore che codifica la direttiva specifica il testo del messaggio di errore.  Per ulteriori informazioni, vedere [Direttiva \#error](../../preprocessor/hash-error-directive-c-cpp.md).  
  
 Nell'esempio seguente viene generato l'errore C1189.  Nell'esempio, lo sviluppatore emette un messaggio di errore personalizzato perché non è definito l'identificatore `_WIN32`:  
  
```  
// C1189.cpp  
#undef _WIN32  
#if !defined(_WIN32)  
#error _WIN32 must be defined   // C1189  
#endif  
```  
  
 È inoltre possibile che si verifichi questo errore se si compila un progetto ATL utilizzando l'opzione del compilatore MIDL **\/robust**.  Utilizzare l'opzione **\/robust** per compilare solo [!INCLUDE[win2kfamily](../../c-runtime-library/includes/win2kfamily_md.md)] e versioni successive di Windows.  Per correggere l'errore, utilizzare una delle procedure riportate di seguito:  
  
-   Modificare questa riga nel file dlldatax.c:  
  
```  
#define _WIN32_WINNT 0x0400   // for WinNT 4.0 or Windows 95 with DCOM  
```  
  
 in:  
  
```  
#define _WIN32_WINNT 0x0500   // for WinNT 4.0 or Windows 95 with DCOM  
```  
  
-   Utilizzare la pagina delle proprietà **Avanzate** nella cartella di pagina delle proprietà **MIDL** per rimuovere l'opzione **\/robust** e specificare quindi l'opzione **\/no\_robust**.  Per ulteriori informazioni, vedere [Pagine delle proprietà MIDL: Avanzate](../../ide/midl-property-pages-advanced.md).  
  
## Vedere anche  
 [Direttiva \#define](../../preprocessor/hash-define-directive-c-cpp.md)