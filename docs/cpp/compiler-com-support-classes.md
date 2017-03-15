---
title: "Classi di supporto COM del compilatore | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "_com_raise_error"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "compilatore cl.exe, supporto COM"
  - "COM, supporto del compilatore"
ms.assetid: 6d800d9b-b902-4033-9639-740a30b06f88
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Classi di supporto COM del compilatore
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Le classi standard vengono utilizzate per supportare alcuni tipi COM.  Le classi vengono definite in comdef.h e i file di intestazione vengono generati dalla libreria di tipi.  
  
|Classe|Scopo|  
|------------|-----------|  
|[\_bstr\_t](../cpp/bstr-t-class.md)|Esegue il wrapping del tipo `BSTR` per fornire operatori e metodi utili.|  
|[\_com\_error](../cpp/com-error-class.md)|Definisce l'oggetto dell'errore generato da [\_com\_raise\_error](../cpp/com-raise-error.md) nella maggior parte degli errori.|  
|[\_com\_ptr\_t](../cpp/com-ptr-t-class.md)|Incapsula i puntatori all'interfaccia COM e automatizza le chiamate richieste a `AddRef`, **Release** e a `QueryInterface`.|  
|[\_variant\_t](../cpp/variant-t-class.md)|Esegue il wrapping del tipo **VARIANT** per fornire operatori e metodi utili.|  
  
## Fine sezione specifica Microsoft  
  
## Vedere anche  
 [Supporto COM del compilatore](../cpp/compiler-com-support.md)   
 [Funzioni globali COM del compilatore](../cpp/compiler-com-global-functions.md)   
 [Riferimenti del linguaggio C\+\+](../cpp/cpp-language-reference.md)