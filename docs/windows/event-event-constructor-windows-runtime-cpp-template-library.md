---
title: "Costruttore Event::Event (Libreria modelli C++ per Windows Runtime) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::Event::Event"
dev_langs: 
  - "C++"
ms.assetid: 21495297-9612-4095-9256-16e168cc0021
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Costruttore Event::Event (Libreria modelli C++ per Windows Runtime)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Inizializza una nuova istanza della classe evento.  
  
## Sintassi  
  
```  
explicit Event(  
   HANDLE h = HandleT::Traits::GetInvalidValue()  
);  
WRL_NOTHROW Event(  
   _Inout_ Event&& h  
);  
```  
  
#### Parametri  
 `h`  
 Handle per un evento.  Per impostazione predefinita, la proprietà `h` viene inizializzata con `nullptr`.  
  
## Requisiti  
 **Intestazione:** corewrappers.h  
  
 **Spazio dei nomi:** Microsoft::WRL::Wrappers  
  
## Vedere anche  
 [Classe di eventi \(Libreria modelli C\+\+ per Windows Runtime\)](../windows/event-class-windows-runtime-cpp-template-library.md)