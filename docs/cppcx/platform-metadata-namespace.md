---
title: 'Platform:: Metadata Namespace | Documenti Microsoft'
ms.custom: 
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: VCCORLIB/Platform::Metadata
dev_langs: C++
helpviewer_keywords: Platform::Metadata Namespace
ms.assetid: e3e114d8-a4b0-47f0-865a-9ce9d7212e86
caps.latest.revision: "6"
author: ghogen
ms.author: ghogen
manager: ghogen
ms.openlocfilehash: 7c108dd9435d433076ea2f2c9b573f2ebf3685e3
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="platformmetadata-namespace"></a>Platform::Metadata (spazio dei nomi)
Questo spazio dei nomi contiene attributi che modificano le dichiarazioni dei tipi.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
  
namespace Platform {  
   namespace Metadata {  
}}  
```  
  
### <a name="members"></a>Membri  
 Sebbene questo spazio dei nomi sia solo per uso interno, tramite i browser è possibile visualizzarne i seguenti membri.  
  
|Nome|Nota|  
|----------|------------|  
|Attributo|Classe di base per attributi.|  
|[Platform::Metadata::DefaultMemberAttribute (attributo)](../cppcx/platform-metadata-defaultmemberattribute-attribute.md)|Indica la funzione preferita da chiamare tra numerose funzioni in overload possibili.|  
|[Attributo Platform::Metadata::FlagsAttribute](../cppcx/platform-metadata-flagsattribute-attribute.md)Flags|Dichiara un'enumerazione come enumerazione di campi di bit.<br /><br /> Nel esempio riportato di seguito viene illustrato come applicare l'attributo `Flags` a un'enumerazione.<br /><br /> `[Flags] enum class MyEnumeration { enumA = 1, enumB = 2, enumC = 3}`|  
|[Platform::Metadata::RuntimeClassNameAttribute](../cppcx/platform-metadata-runtimeclassname.md)|Assicura che una classe di riferimento privata abbia un nome di classe di runtime valido.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `Platform`  
  
### <a name="requirements"></a>Requisiti  
 **Metadati:** platform.winmd  
  
 **Spazio dei nomi:** Platform::Metadata  
  
## <a name="see-also"></a>Vedere anche  
 [Piattaforma Namespace](platform-namespace-c-cx.md)