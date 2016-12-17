---
title: "Costruttore Module::ReleaseNotifier::ReleaseNotifier | Microsoft Docs"
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
  - "module/Microsoft::WRL::Module::ReleaseNotifier::ReleaseNotifier"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ReleaseNotifier, costruttore"
ms.assetid: 889a3c9a-2366-44a1-ba7d-a59c1885e7f3
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Costruttore Module::ReleaseNotifier::ReleaseNotifier
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Inizializza una nuova istanza della classe Module::ReleaseNotifier.  
  
## Sintassi  
  
```cpp  
ReleaseNotifier(bool release) throw();  
```  
  
#### Parametri  
 `release`  
 `true` per eliminare questa istanza quando il metodo della versione viene chiamato; `false` per non eliminare questa istanza.  
  
## Eccezioni  
  
## Requisiti  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe Module::ReleaseNotifier](../windows/module-releasenotifier-class.md)