---
title: "Metodo RuntimeClass::Release | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::RuntimeClass::Release"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Release (metodo)"
ms.assetid: 0bd6f9e2-ad90-4de6-adef-a6286f458cb6
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 4
---
# Metodo RuntimeClass::Release
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Esegue un'operazione della versione COM sull'oggetto corrente di RuntimeClass.  
  
## Sintassi  
  
```  
STDMETHOD_(  
   ULONG,  
   Release  
)();  
```  
  
## Valore restituito  
 S\_OK se ha esito positivo; in caso contrario, un HRESULT, che indica l'errore.  
  
## Note  
 Se il conteggio dei riferimenti diventa zero, l'oggetto di RuntimeClass viene eliminato.  
  
## Requisiti  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe RuntimeClass](../windows/runtimeclass-class.md)