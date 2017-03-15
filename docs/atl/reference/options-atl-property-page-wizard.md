---
title: "Opzioni, Creazione guidata pagina delle propriet&#224; ATL | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "vc.codewiz.class.atl.ppg.options"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Creazione guidata pagina delle proprietà ATL, opzioni"
ms.assetid: a7107779-b2ea-4f99-b84b-7f3e0c504bc8
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 13
---
# Opzioni, Creazione guidata pagina delle propriet&#224; ATL
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare questa schermata della procedura guidata per definire il modello di threading e il livello di aggregazione della pagina delle proprietà che si sta creando.  
  
 **Modello di threading**  
 Consente di specificare il modello di threading utilizzato dalla pagina delle proprietà.  
  
 Per ulteriori informazioni, vedere [Specifica del modello di threading del progetto](../../atl/specifying-the-threading-model-for-a-project-atl.md).  
  
|Opzione|Descrizione|  
|-------------|-----------------|  
|`Single`|La pagina delle proprietà viene eseguita solo nel thread COM primario.|  
|**Apartment**|È possibile creare la pagina delle proprietà in qualsiasi Single Thread Apartment.  Valore predefinito.|  
  
 **Aggregazione**  
 Consente di aggiungere il supporto dell'aggregazione per la pagina delle proprietà creata.  Per ulteriori informazioni, vedere [Aggregazione](../../atl/aggregation.md).  
  
|Opzione|Descrizione|  
|-------------|-----------------|  
|**Sì**|Utilizzare questa opzione per creare una pagina delle proprietà che è possibile aggregare.|  
|**No**|Utilizzare questa opzione per creare una pagina delle proprietà che non è possibile aggregare.|  
|**Solo**|Utilizzare questa opzione per creare una pagina delle proprietà di cui è possibile creare un'istanza solo tramite l'aggregazione.|  
  
## Vedere anche  
 [Creazione guidata pagina delle proprietà ATL](../../atl/reference/atl-property-page-wizard.md)   
 [Stringhe, Creazione guidata pagina delle proprietà ATL](../../atl/reference/strings-atl-property-page-wizard.md)