---
title: Costruttore Module::GenericReleaseNotifier::GenericReleaseNotifier | Microsoft Docs
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
ms.openlocfilehash: b0683220710a62c8583fa95fbfe3221ae93307eb
ms.sourcegitcommit: 4586bfc32d8bc37ab08b24816d7fad5df709bfa3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/07/2018
ms.locfileid: "39603937"
---
# <a name="modulegenericreleasenotifiergenericreleasenotifier-constructor"></a>Costruttore Module::GenericReleaseNotifier::GenericReleaseNotifier
Inizializza una nuova istanza di **Module:: genericreleasenotifier** classe.  
  
## <a name="syntax"></a>Sintassi  
  
```  
GenericReleaseNotifier(  
   T callback,   
   bool release  
) throw() : ReleaseNotifier(release), callback_(callback);  
```  
  
### <a name="parameters"></a>Parametri  
 *callback*  
 Un'espressione lambda, funtore o gestore eventi puntatore a funzione che può essere richiamato con l'operatore della funzione delle parentesi (`()`).  
  
 *release*  
 Specificare **true** per abilitare la chiamata sottostante [Module:: ReleaseNotifier::Release()](../windows/module-releasenotifier-release.md) metodo; in caso contrario, specificare **false**.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** module.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe Module::GenericReleaseNotifier](../windows/module-genericreleasenotifier-class.md)