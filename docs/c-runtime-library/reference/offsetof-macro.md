---
title: "Macro offsetof | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
apitype: "DLLExport"
f1_keywords: 
  - "offsetof"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "offsetof (macro)"
  - "membri di struttura, offset"
ms.assetid: f3b4eb16-a882-4d38-afc9-eebd976a7352
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Macro offsetof
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Recupera l'offset di un membro dall'inizio della relativa struttura padre.  
  
## Sintassi  
  
```  
  
        size_t offsetof(  
   structName,  
   memberName   
);  
```  
  
#### Parametri  
 *structName*  
 Nome della struttura di dati padre.  
  
 `memberName`  
 Nome del membro nella struttura di dati padre per il quale determinare l'offset.  
  
## Valore restituito  
 `offsetof` restituisce l'offset in byte del membro specificato dall'inizio della struttura di dati padre.  Viene definito per i campi di bit.  
  
## Note  
 La macro `offsetof` restituisce l'offset in byte di `memberName` dall'inizio della struttura specificata da *structName* come valore di tipo `size_t`.  È possibile specificare tipi con la parola chiave `struct`.  
  
> [!NOTE]
>  `offsetof` non è una funzione e non può essere descritta usando un prototipo C.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`offsetof`|\<stddef.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Librerie  
 Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Vedere anche  
 [Allocazione di memoria](../../c-runtime-library/memory-allocation.md)