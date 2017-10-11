---
title: Errore irreversibile C1189 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C1189
dev_langs:
- C++
helpviewer_keywords:
- C1189
ms.assetid: 2e5c8a78-edd4-411c-b619-558a96be148a
caps.latest.revision: 13
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 6e8d3c9ff44a436688accfe267141390d23c0eb5
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="fatal-error-c1189"></a>Errore irreversibile C1189
\#Errore: messaggio di errore fornito dall'utente  
  
 Viene generato l'errore C1189 dal `#error` direttiva. Lo sviluppatore che codifica la direttiva specifica il testo del messaggio di errore. Per ulteriori informazioni, vedere [#error (direttiva) (C/C++)](../../preprocessor/hash-error-directive-c-cpp.md).  
  
 L'esempio seguente genera l'errore C1189. Nell'esempio, lo sviluppatore emette un messaggio di errore personalizzato perché il `_WIN32` identificatore non definito:  
  
```  
// C1189.cpp  
#undef _WIN32  
#if !defined(_WIN32)  
#error _WIN32 must be defined   // C1189  
#endif  
```  
  
 È possibile visualizzare questo errore se si compila un progetto ATL utilizzando il **/robust** opzione del compilatore MIDL. Utilizzare il **/robust** commutatore per compilare solo [!INCLUDE[win2kfamily](../../c-runtime-library/includes/win2kfamily_md.md)] e versioni successive di Windows. Per correggere l'errore, utilizzare una delle procedure riportate di seguito:  
  
-   Modificare questa riga nel file dlldatax. c:  
  
```  
#define _WIN32_WINNT 0x0400   // for WinNT 4.0 or Windows 95 with DCOM  
```  
  
 in:  
  
```  
#define _WIN32_WINNT 0x0500   // for WinNT 4.0 or Windows 95 with DCOM  
```  
  
-   Utilizzare il **avanzate** pagina delle proprietà di **MIDL** cartella pagina delle proprietà per rimuovere il **/robust** passare e quindi specificare il **/no_robust** commutatore. Per ulteriori informazioni, vedere [pagine delle proprietà MIDL: avanzate](../../ide/midl-property-pages-advanced.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Direttiva #define (C/C++)](../../preprocessor/hash-define-directive-c-cpp.md)
