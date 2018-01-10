---
title: Impostazione di un collegamento statico per il codice di registrazione (solo C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- statically linking to ATL Registrar code
- linking [C++], to ATL Registrar code
ms.assetid: 835f5885-87a6-48fa-91e6-60988ee65538
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: d49ed2a56738ec784c8a1a2cc3c13239f7317270
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="setting-up-a-static-link-to-the-registrar-code-c-only"></a>Impostazione di un collegamento statico per il codice di registrazione (solo C++)
I client di C++ è possono creare un collegamento statico al codice di registrazione. Il collegamento statico del parser Registrar aggiunge circa 5 KB per una build di rilascio.  
  
 Il modo più semplice per impostare il collegamento statico si presuppone di aver specificato [DECLARE_REGISTRY_RESOURCEID](reference/registry-macros.md#declare_registry_resourceid) nella dichiarazione dell'oggetto. (Questa è la specifica predefinita utilizzata da ATL.)  
  
### <a name="to-create-a-static-link-using-declareregistryresourceid"></a>Per creare un collegamento statico mediante DECLARE_REGISTRY_RESOURCEID  
  
1.  Specificare [/D](../build/reference/d-preprocessor-definitions.md) `_ATL_STATIC_REGISTRY` anziché /D**ATL_DLL**.  
  
2.  Ricompilare.  
  
## <a name="see-also"></a>Vedere anche  
 [Registro di sistema ATL (Registrar)](../atl/atl-registry-component-registrar.md)

