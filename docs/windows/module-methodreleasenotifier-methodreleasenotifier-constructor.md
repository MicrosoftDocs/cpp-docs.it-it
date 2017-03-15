---
title: "Costruttore Module::MethodReleaseNotifier::MethodReleaseNotifier | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::Module::MethodReleaseNotifier::MethodReleaseNotifier"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MethodReleaseNotifier, costruttore"
ms.assetid: 762e2ca4-0a92-49de-9ff5-d3efa0f067c0
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 3
---
# Costruttore Module::MethodReleaseNotifier::MethodReleaseNotifier
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Inizializza una nuova istanza della classe Modulo::MethodReleaseNotifier.  
  
## Sintassi  
  
```  
  
MethodReleaseNotifier(  
   _In_ T* object,   
   _In_ void (T::* method)(),   
   bool release) throw() :  
            ReleaseNotifier(release), object_(object),   
            method_(method);  
```  
  
#### Parametri  
 `object`  
 Un oggetto la cui funzione membro è un gestore di eventi.  
  
 `method`  
 La funzione membro del parametro `object` che rappresenta il gestore eventi.  
  
 `release`  
 Specifica `true` per abilitare la chiamata del metodo sottostante [Module::ReleaseNotifier::Release \(\)](../windows/module-releasenotifier-release.md) ; in caso contrario, specifica `false`.  
  
## Requisiti  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe Module::MethodReleaseNotifier](../windows/module-methodreleasenotifier-class.md)