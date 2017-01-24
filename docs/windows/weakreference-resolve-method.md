---
title: "Metodo WeakReference::Resolve | Microsoft Docs"
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
  - "implements/Microsoft::WRL::Details::WeakReference::Resolve"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Resolve (metodo)"
ms.assetid: fc65a4b7-48a0-4d64-a793-37f566fdd8e7
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo WeakReference::Resolve
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal proprio codice.  
  
## Sintassi  
  
```  
  
STDMETHOD(Resolve)  
   (REFIID riid,   
   _Deref_out_opt_ IInspectable **ppvObject  
);  
```  
  
#### Parametri  
 `riid`  
 Un ID di interfaccia.  
  
 `ppvObject`  
 Quando questa operazione viene completata, una copia del riferimento forte corrente se il conteggio dei riferimenti forti è diverso da zero.  
  
## Valore restituito  
  
-   S\_OK se l'operazione riesce e il conteggio dei riferimenti forti è zero.  Il parametro `ppvObject` viene impostato su `nullptr`.  
  
-   S\_OK se l'operazione riesce e il conteggio dei riferimenti forti è diverso da zero.  Il parametro `ppvObject` è settato a riferimento forte.  
  
-   In caso contrario, un HRESULT che indica il motivo per cui questa operazione non è riuscita.  
  
## Note  
 Imposta il puntatore specificato con il valore corrente dei riferimenti forti se il conteggio è diverso da zero.  
  
## Requisiti  
 **Intestazione:** implements.h  
  
 **Spazio dei nomi:** Microsoft::WRL::Details  
  
## Vedere anche  
 [Classe WeakReference](../windows/weakreference-class1.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)