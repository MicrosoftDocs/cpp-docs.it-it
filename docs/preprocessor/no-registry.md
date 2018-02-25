---
title: no_registry | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- no_registry
dev_langs:
- C++
helpviewer_keywords:
- no_registry attribute
ms.assetid: d30de4e2-551c-428c-98fd-951330d578d3
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: ccf747db26f6d34a34b9118c9de9a74203787adb
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="noregistry"></a>no_registry
`no_registry` indica al compilatore di non cercare nel registro librerie dei tipi importate con `#import`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
#import filename no_registry  
```  
  
#### <a name="parameters"></a>Parametri  
 *filename*  
 Una libreria dei tipi.  
  
## <a name="remarks"></a>Note  
 Se una libreria dei tipi di riferimento non viene trovata nella directory di inclusione, la compilazione avrà esito negativo anche se la libreria dei tipi nel Registro di sistema.  `no_registry` propaga alle altre librerie dei tipi importate in modo implicito con `auto_search`.  
  
 Il compilatore non cercherà mai nel Registro di sistema librerie dei tipi specificate dal nome file e passate direttamente a `#import`.  
  
 Quando viene specificato `auto_search`, `#import` aggiuntivi verranno generati con l'impostazione `no_registry` di `#import` iniziale (se la direttiva `#import` iniziale era `no_registry`, `auto_search` generato da `#import` è anche `no_registry`).  
  
 `no_registry` è utile se si desidera importare le librerie dei tipi di riferimento incrociato senza il rischio che il compilatore di ricerca di una versione precedente del file del Registro di sistema.  `no_registry` è utile anche se la libreria dei tipi non è registrata.  
  
## <a name="see-also"></a>Vedere anche  
 [attributi #import](../preprocessor/hash-import-attributes-cpp.md)   
 [#import Directive](../preprocessor/hash-import-directive-cpp.md)