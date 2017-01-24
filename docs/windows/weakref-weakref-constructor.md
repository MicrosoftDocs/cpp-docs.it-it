---
title: "Costruttore WeakRef::WeakRef | Microsoft Docs"
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
  - "client/Microsoft::WRL::WeakRef::WeakRef"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "WeakRef, costruttore"
ms.assetid: 589f87e0-8dcc-4e82-aab2-f2f66f1ec47c
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Costruttore WeakRef::WeakRef
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Inizializza una nuova istanza della classe WeakRef.  
  
## Sintassi  
  
```  
WeakRef();  
WeakRef(  
   decltype(__nullptr)  
);  
  
WeakRef(  
   _In_opt_ IWeakReference* ptr  
);  
  
WeakRef(  
   const ComPtr<IWeakReference>& ptr  
);  
  
WeakRef(  
   const WeakRef& ptr  
);  
  
WeakRef(  
   _Inout_ WeakRef&& ptr  
);  
```  
  
#### Parametri  
 `ptr`  
 Un puntatore, un riferimento, o un riferimento\-rvalue a un oggetto esistente che inizializza l'oggetto corrente di WeakRef.  
  
## Osservazioni  
 Il primo costruttore inizializza un oggetto vuoto di WeakRef.  Il secondo costruttore inizializza un oggetto di WeakRef da un puntatore a un'interfaccia di IWeakReference.  Il terzo costruttore inizializza un oggetto di WeakRef da un riferimento a un oggetto di ComPtr\< IWeakReference\>.  I il quarto e quinto costruttore inizializza un oggetto di WeakRef da un altro oggetto di WeakRef.  
  
## Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## Vedere anche  
 [Classe WeakRef](../windows/weakref-class.md)