---
title: "Opzioni, creazione guidata pagina delle proprietà ATL | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: vc.codewiz.class.atl.ppg.options
dev_langs: C++
helpviewer_keywords: ATL Property Page Wizard, options
ms.assetid: a7107779-b2ea-4f99-b84b-7f3e0c504bc8
caps.latest.revision: "13"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 07e8ad589e2b06605e2891ad4233479a0f89ae01
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="options-atl-property-page-wizard"></a>Opzioni, Creazione guidata pagina delle proprietà ATL
Utilizzare questa pagina della procedura guidata per definire il livello di aggregazione e modello di threading della pagina delle proprietà che si sta creando.  
  
 **Modello di threading**  
 Specifica il modello di threading utilizzato dalla pagina delle proprietà.  
  
 Vedere [specifica modello del progetto di Threading](../../atl/specifying-the-threading-model-for-a-project-atl.md) per ulteriori informazioni.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|`Single`|La pagina delle proprietà viene eseguito solo nel thread COM primario.|  
|**Apartment**|La pagina delle proprietà può essere creata in un apartment a thread singolo. Valore predefinito.|  
  
 **Aggregazione**  
 Aggiunge il supporto di aggregazione per la pagina delle proprietà che si sta creando. Vedere [aggregazione](../../atl/aggregation.md) per ulteriori informazioni.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**Sì**|Creare una pagina delle proprietà che può essere aggregata.|  
|**No**|Creare una pagina delle proprietà che non può essere aggregata.|  
|**Solo**|Creare una pagina delle proprietà che è possibile creare istanze solo tramite l'aggregazione.|  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione guidata pagina delle proprietà ATL](../../atl/reference/atl-property-page-wizard.md)   
 [Stringhe, creazione guidata pagina delle proprietà ATL](../../atl/reference/strings-atl-property-page-wizard.md)

