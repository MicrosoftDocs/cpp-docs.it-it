---
title: Costruttore Module::MethodReleaseNotifier::MethodReleaseNotifier | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Module::MethodReleaseNotifier::MethodReleaseNotifier
dev_langs:
- C++
helpviewer_keywords:
- MethodReleaseNotifier, constructor
ms.assetid: 762e2ca4-0a92-49de-9ff5-d3efa0f067c0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 91540ca3fff03f1f0a449413c2d1ca72781c70f1
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33875227"
---
# <a name="modulemethodreleasenotifiermethodreleasenotifier-constructor"></a>Costruttore Module::MethodReleaseNotifier::MethodReleaseNotifier
Inizializza una nuova istanza della classe methodreleasenotifier.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
MethodReleaseNotifier(  
   _In_ T* object,   
   _In_ void (T::* method)(),   
   bool release) throw() :  
            ReleaseNotifier(release), object_(object),   
            method_(method);  
```  
  
#### <a name="parameters"></a>Parametri  
 `object`  
 Oggetto la cui funzione membro è un gestore eventi.  
  
 `method`  
 La funzione membro del parametro `object` che rappresenta il gestore dell'evento.  
  
 `release`  
 Specificare `true` per consentire la chiamata sottostante [Module:: ReleaseNotifier::Release()](../windows/module-releasenotifier-release.md) metodo; in caso contrario, specificare `false`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Implements  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe Module::MethodReleaseNotifier](../windows/module-methodreleasenotifier-class.md)