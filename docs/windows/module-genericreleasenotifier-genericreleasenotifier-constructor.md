---
title: Costruttore Module::GenericReleaseNotifier::GenericReleaseNotifier | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Module::GenericReleaseNotifier::GenericReleaseNotifier
dev_langs:
- C++
helpviewer_keywords:
- GenericReleaseNotifier, constructor
ms.assetid: feb5b687-a4b0-4809-9022-8f292181b7a1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: bb07c7f53e27e380ba5775369611299cad0f60d4
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
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
 **Intestazione:** Implements  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe Module::GenericReleaseNotifier](../windows/module-genericreleasenotifier-class.md)