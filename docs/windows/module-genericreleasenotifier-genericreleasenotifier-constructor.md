---
title: "Costruttore Module::GenericReleaseNotifier::GenericReleaseNotifier | Microsoft Docs"
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
  - "module/Microsoft::WRL::Module::GenericReleaseNotifier::GenericReleaseNotifier"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GenericReleaseNotifier, costruttore"
ms.assetid: feb5b687-a4b0-4809-9022-8f292181b7a1
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Costruttore Module::GenericReleaseNotifier::GenericReleaseNotifier
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Inizializza una nuova istanza della classe Module::GenericReleaseNotifier.  
  
## Sintassi  
  
```  
GenericReleaseNotifier(  
   T callback,   
   bool release  
) throw() : ReleaseNotifier(release), callback_(callback);  
```  
  
#### Parametri  
 `callback`  
 Un'espressione lambda, un functor, o un gestore eventi puntatore a funzione che può essere chiamato con l'operatore di funzione di parentesi \(`()`\).  
  
 `release`  
 Specifica `true` per abilitare la chiamata del metodo sottostante [Module::ReleaseNotifier::Release \(\)](../windows/module-releasenotifier-release.md) ; in caso contrario, specifica `false`.  
  
## Requisiti  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe Module::GenericReleaseNotifier](../windows/module-genericreleasenotifier-class.md)