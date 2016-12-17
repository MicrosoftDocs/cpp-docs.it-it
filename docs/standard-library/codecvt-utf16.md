---
title: "codecvt_utf16 | Microsoft Docs"
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
  - "codecvt/std::codecvt_utf16"
  - "std::codecvt_utf16"
  - "std.codecvt_utf16"
  - "codecvt_utf16"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "codecvt_utf16 (classe)"
ms.assetid: a9897f98-f84d-4db6-90ad-858b2727570c
caps.latest.revision: 21
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# codecvt_utf16
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rappresenta un [locali](../standard-library/locale-class.md) facet che esegue la conversione tra caratteri "wide" con codificata UCS\-2 o UCS\-4 e un flusso di byte codificati come UTF\-16LE o UTF\-16BE.  
  
## Sintassi  
  
```  
template<  
    class Elem,  
    unsigned long Maxcode = 0x10ffff,  
    codecvt_mode Mode = (codecvt_mode)0  
>  
class codecvt_utf16 : public std::codecvt<Elem, char, StateType>  
```  
  
#### Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`Elem`|Tipo di elemento a caratteri "wide".|  
|`Maxcode`|Numero massimo di caratteri per il facet delle impostazioni locali.|  
|`Mode`|Informazioni di configurazione per il facet delle impostazioni locali.|  
  
## Note  
 Questa classe di modello esegue la conversione tra caratteri "wide" con codificata UCS\-2 o UCS\-4 e un flusso di byte codificati come UTF\-16LE, se `Mode & little_endian`, o UTF\-16BE in caso contrario.  
  
 Il flusso di byte deve essere scritti in un file binario. possono venire danneggiato se scrivere un file di testo.  
  
## Requisiti  
 **Intestazione:** \< codecvt \>  
  
 **Spazio dei nomi:** std