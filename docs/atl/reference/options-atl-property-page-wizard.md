---
title: Opzioni, Creazione guidata pagina delle proprietà ATL
ms.date: 11/04/2016
f1_keywords:
- vc.codewiz.class.atl.ppg.options
helpviewer_keywords:
- ATL Property Page Wizard, options
ms.assetid: a7107779-b2ea-4f99-b84b-7f3e0c504bc8
ms.openlocfilehash: c92c7a3f03c3ddedbea02647e2317d77a7655609
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57298984"
---
# <a name="options-atl-property-page-wizard"></a>Opzioni, Creazione guidata pagina delle proprietà ATL

Utilizzare questa pagina della procedura guidata per definire il livello di aggregazione e modello di threading della pagina delle proprietà che si sta creando.

- **Modello di threading**

   Specifica il modello di threading utilizzato dalla pagina delle proprietà.

   Visualizzare [specifica di un modello di Threading del progetto](../../atl/specifying-the-threading-model-for-a-project-atl.md) per altre informazioni.

   |Opzione|Descrizione|
   |------------|-----------------|
   |**Single**|La pagina delle proprietà viene eseguita solo nel thread COM primario.|
   |**Apartment**|La pagina delle proprietà può essere creata in qualsiasi apartment a thread singolo. Valore predefinito.|

- **Aggregazione**

   Aggiunge il supporto di aggregazione per la pagina delle proprietà che si sta creando. Visualizzare [aggregazione](../../atl/aggregation.md) per altre informazioni.

   |Opzione|Descrizione|
   |------------|-----------------|
   |**Sì**|Creare una pagina delle proprietà che può essere aggregata.|
   |**No**|Creare una pagina delle proprietà che non può essere aggregata.|
   |**Only**|Creare una pagina delle proprietà che è possibile creare solo istanze tramite aggregazione.|

## <a name="see-also"></a>Vedere anche

[Creazione guidata pagina delle proprietà ATL](../../atl/reference/atl-property-page-wizard.md)<br/>
[Stringhe, creazione guidata pagina delle proprietà ATL](../../atl/reference/strings-atl-property-page-wizard.md)
