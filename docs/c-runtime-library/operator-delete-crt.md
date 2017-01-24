---
title: "operator delete (CRT) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apilocation: 
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr120.dll"
  - "msvcr100.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
apitype: "DLLExport"
f1_keywords: 
  - "delete"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "operator delete"
  - "operatore scalare delete"
ms.assetid: bcd0066a-0022-45f5-af4c-9007c64a6b89
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# operator delete (CRT)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Libera blocchi allocati.  
  
## Sintassi  
  
```  
  
      void __cdecl operator delete(  
   void * object  
);  
void __cdecl operator delete(  
   void * object,   
   void * memory  
) throw();  
void __cdecl operator delete(  
   void * object,   
   const std::nothrow_t&  
) throw();  
```  
  
#### Parametri  
 *memoria*  
 La locazione di memoria non viene liberata.  
  
 *object*  
 Un puntatore all'oggetto da eliminare.  
  
## Note  
 Questa forma di **operator delete** è noto come eliminazione scalare, contrariamente al form vettoriale delete \([operatore delete&#91;&#93;](../c-runtime-library/delete-operator-crt.md)\).  
  
 **operator delete** libera memoria allocata da [operator new](../c-runtime-library/operator-new-crt.md).  
  
 Il primo modulo di questo operatore è noto come modulo di nonplacement.  Il secondo e il terzo form di questo operatore non verranno chiamati frequentemente dal codice ma ci sono per fornire al compilatore una corrispondenza di eliminazione da chiamare quando un piazzamento fallisce.  
  
 Il primo modulo dell'operatore è definito dal compilatore e non richiede che new.h venga incluso nel programma.  
  
 Con il comportamento di generare o non generare un'eccezione, l'**operator** CRT **delete** si comporta come [operator delete](../Topic/operator%20delete%20\(%3Cnew%3E\).md) della libreria C\+\+ standard.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|**elimina**|\<new.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Librerie  
 Tutte le versioni delle [Librerie di runtime C](../c-runtime-library/crt-library-features.md).  
  
## Esempio  
 Per esempi sull'uso dell'operatore **delete**, consultare [delete](../c-runtime-library/operator-new-crt.md).  
  
## Vedere anche  
 [Allocazione di memoria](../c-runtime-library/memory-allocation.md)