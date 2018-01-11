---
title: Costruttore Module::GenericReleaseNotifier::GenericReleaseNotifier | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: module/Microsoft::WRL::Module::GenericReleaseNotifier::GenericReleaseNotifier
dev_langs: C++
helpviewer_keywords: GenericReleaseNotifier, constructor
ms.assetid: feb5b687-a4b0-4809-9022-8f292181b7a1
caps.latest.revision: "3"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: f5f6f656ff1908dc215efb1fc322b348618a236d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="modulegenericreleasenotifiergenericreleasenotifier-constructor"></a>Costruttore Module::GenericReleaseNotifier::GenericReleaseNotifier
Inizializza una nuova istanza della classe genericreleasenotifier.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      GenericReleaseNotifier(  
   T callback,   
   bool release  
) throw() : ReleaseNotifier(release), callback_(callback);  
```  
  
#### <a name="parameters"></a>Parametri  
 `callback`  
 Espressione lambda, funtore un gestore dell'evento di puntatore a funzione che può essere richiamato con l'operatore della funzione tra parentesi (`()`).  
  
 `release`  
 Specificare `true` per consentire la chiamata sottostante [Module:: ReleaseNotifier::Release()](../windows/module-releasenotifier-release.md) metodo; in caso contrario, specificare `false`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** module.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe Module::GenericReleaseNotifier](../windows/module-genericreleasenotifier-class.md)