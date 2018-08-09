---
title: Costruttore Module::MethodReleaseNotifier::MethodReleaseNotifier | Microsoft Docs
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
ms.openlocfilehash: 01c000ee928e9394827a69acb48ef0f41478a699
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40018507"
---
# <a name="modulemethodreleasenotifiermethodreleasenotifier-constructor"></a>Costruttore Module::MethodReleaseNotifier::MethodReleaseNotifier
Inizializza una nuova istanza di **Module:: methodreleasenotifier** classe.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
MethodReleaseNotifier(  
   _In_ T* object,   
   _In_ void (T::* method)(),   
   bool release) throw() :  
            ReleaseNotifier(release), object_(object),   
            method_(method);  
```  
  
### <a name="parameters"></a>Parametri  
 *object*  
 Un oggetto la cui funzione membro è un gestore eventi.  
  
 *(Metodo)*  
 La funzione membro del parametro *oggetto* vale a dire il gestore dell'evento.  
  
 *release*  
 Specificare **true** per abilitare la chiamata sottostante [Module:: ReleaseNotifier::Release()](../windows/module-releasenotifier-release.md) metodo; in caso contrario, specificare **false**.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** module.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe Module::MethodReleaseNotifier](../windows/module-methodreleasenotifier-class.md)