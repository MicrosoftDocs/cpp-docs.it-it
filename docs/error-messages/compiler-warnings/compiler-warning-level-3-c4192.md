---
title: "Avviso del compilatore (livello 3) C4192 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4192"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4192"
ms.assetid: ea5f91fa-8c96-4f3f-ac42-0c8a86d4e5df
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Avviso del compilatore (livello 3) C4192
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

esclusione automatica di 'nome' durante l'importazione della libreria dei tipi 'libreria'  
  
 Un'istruzione `#import` di una libreria contiene un elemento, *nome*, che è anche definito nelle intestazione di sistema Win32.  A causa delle limitazioni delle librerie di tipi, nomi quali **IUnknown** o GUID vengono spesso definiti in una libreria di tipi, dando origine alla duplicazione della definizione presente nelle intestazioni di sistema.  Tali elementi vengono rilevati dall'istruzione `#import` che non li incorpora nei file di intestazione con estensione tlh e tli.  
  
 Per eseguire l'override di questo comportamento, utilizzare gli attributi [no\_auto\_exclude](../../preprocessor/no-auto-exclude.md) e [include\(\)](../../preprocessor/include-parens.md) di `#import`.