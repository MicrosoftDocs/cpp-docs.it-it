---
title: "Funzione IID_PPV_ARGS_Helper | Microsoft Docs"
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
  - "client/IID_PPV_ARGS_Helper"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IID_PPV_ARGS_Helper (funzione)"
ms.assetid: afee9b23-8df1-4575-903f-e9ba748418f0
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Funzione IID_PPV_ARGS_Helper
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Verifica che il tipo di argomento specificato derivi dall'interfaccia `IUnknown`.  
  
> [!IMPORTANT]
>  Questa specializzazione di modello supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal codice.  Utilizzare invece [IID\_PPV\_ARGS](http://msdn.microsoft.com/library/windows/desktop/ee330727.aspx).  
  
## Sintassi  
  
```  
template<  
   typename T  
>  
void** IID_PPV_ARGS_Helper(  
   _Inout_ Microsoft::WRL::Details::ComPtrRef<T> pp  
);  
```  
  
#### Parametri  
 `T`  
 Tipo dell'argomento `pp`.  
  
 `pp`  
 Un puntatore doppio\-indiretto.  
  
## Valore restituito  
 L'argomento `pp` esegue il cast puntatore a puntatore a `void`.  
  
## Note  
 Viene generato un errore in fase di compilazione se il parametro di modello `T` non deriva da `IUnknown`.  
  
## Requisiti  
 **Header:** client.h  
  
## Vedere anche  
 [Reference \(Windows Runtime Library\)](http://msdn.microsoft.com/it-it/00000000-0000-0000-0000-000000000000)