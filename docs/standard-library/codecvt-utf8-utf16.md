---
title: "codecvt_utf8_utf16 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "codecvt_utf8_utf16"
  - "codecvt/std::cvt_utf8_utf16"
  - "std::codecvt_utf8_utf16"
  - "std.codecvt_utf8_utf16"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "codecvt_utf8_utf16 (classe)"
ms.assetid: 4c12c881-5dba-4e39-b338-0b9caff5af29
caps.latest.revision: 21
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# codecvt_utf8_utf16
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rappresenta un facet di [impostazioni locali](../standard-library/locale-class.md) la conversione fra i caratteri di tipo codificati in UTF\-16 e un flusso di byte codificati come UTF\-8.  
  
## Sintassi  
  
```  
template<  
    class Elem,  
    unsigned long Maxcode = 0x10ffff,  
    codecvt_mode Mode = (codecvt_mode)0  
>  
class codecvt_utf8_utf16 : public _STD codecvt<Elem, char, StateType>  
```  
  
#### Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`Elem`|Il tipo di elemento a caratteri estesi.|  
|`Maxcode`|Numero massimo di caratteri per i facet delle impostazioni locali.|  
|`Mode`|Informazioni di configurazione per il facet delle impostazioni locali.|  
  
## Note  
 Il flusso di byte può essere scritti in un file binario o in un file di testo.  
  
## Requisiti  
 codecvt \<di**Intestazione:** \>  
  
 **Spazio dei nomi:** std