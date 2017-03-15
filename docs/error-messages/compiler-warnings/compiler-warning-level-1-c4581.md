---
title: "Avviso del compilatore (livello 1) C4581 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4581"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4581"
ms.assetid: 598bcd87-257d-4eb3-94e4-15bb31aadc99
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# Avviso del compilatore (livello 1) C4581
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

comportamento deprecato: stringa1' sostituito con 'stringa2' per elaborare l'attributo  
  
 Questo errore può essere generato in seguito alle operazioni di conformità eseguite per Visual C\+\+ 2005: controllo dei parametri per gli attributi di Visual C\+\+.  
  
 Nelle versioni precedenti i valori di attributo vengono accettati indipendentemente dal fatto che siano racchiusi tra virgolette o meno.  Se il valore è un'enumerazione, non deve essere racchiuso tra virgolette.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4581:  
  
```  
// C4581.cpp  
// compile with: /c /W1  
#include "unknwn.h"  
[object, uuid("00000000-0000-0000-0000-000000000001")]  
__interface IMyI : IUnknown {};  
  
[coclass, uuid(12345678-1111-2222-3333-123456789012), threading("free")]   // C4581  
// try the following line instead  
// [coclass, uuid(12345678-1111-2222-3333-123456789012), threading(free)]  
class CSample : public IMyI {};  
```