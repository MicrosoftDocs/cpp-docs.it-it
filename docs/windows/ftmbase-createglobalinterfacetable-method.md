---
title: "Metodo FtmBase::CreateGlobalInterfaceTable | Microsoft Docs"
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
  - "ftm/Microsoft::WRL::FtmBase::CreateGlobalInterfaceTable"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CreateGlobalInterfaceTable (metodo)"
ms.assetid: bb82a0c5-22b9-4844-9204-7922033d8b07
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo FtmBase::CreateGlobalInterfaceTable
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Crea una tabella globale dell'interfaccia \(GIT\).  
  
## Sintassi  
  
```  
static HRESULT CreateGlobalInterfaceTable(  
   __out IGlobalInterfaceTable **git  
);  
```  
  
#### Parametri  
 `git`  
 Quando questa operazione viene completata, un puntatore a una tabella globale dell'interfaccia.  
  
## Valore restituito  
 S\_OK se ha esito positivo; in caso contrario, un HRESULT, che indica l'errore.  
  
## Note  
 Per ulteriori informazioni, vedere l'argomento "IGlobalInterfaceTable" nel sotto\-argomento "Interfacce COM" di "Riferimento COM" nella Libreria MSDN.  
  
## Requisiti  
 **Header:** ftm.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe FtmBase](../windows/ftmbase-class.md)