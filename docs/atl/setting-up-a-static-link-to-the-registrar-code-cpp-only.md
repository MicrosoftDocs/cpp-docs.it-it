---
title: "Setting Up a Static Link to the Registrar Code (C++ Only) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "collegamento [C++], to ATL Registrar code"
  - "statically linking to ATL Registrar code"
ms.assetid: 835f5885-87a6-48fa-91e6-60988ee65538
caps.latest.revision: 11
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Setting Up a Static Link to the Registrar Code (C++ Only)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I client C\+\+ possono creare un collegamento statico al codice di registrazione.  Collegamento statico del parser di registrazione aggiunge approssimativamente 5K a una build di rilascio.  
  
 Il modo più semplice per impostare il collegamento statico si presuppone che ha specificato [DECLARE\_REGISTRY\_RESOURCEID](../Topic/DECLARE_REGISTRY_RESOURCEID.md) nella dichiarazione dell'oggetto.  \(Questa è la specifica predefinita utilizzata da ATL\).  
  
### Per creare un collegamento statico utilizzando DECLARE\_REGISTRY\_RESOURCEID  
  
1.  Specificare [\/D](../build/reference/d-preprocessor-definitions.md)`_ATL_STATIC_REGISTRY` anziché \/D**\_ATL\_DLL**.  
  
2.  Ripetere la compilazione.  
  
## Vedere anche  
 [Registro di sistema ATL \(Registrar\)](../atl/atl-registry-component-registrar.md)