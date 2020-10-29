---
title: Opzioni, Creazione guidata pagina delle proprietà ATL
ms.date: 05/09/2019
f1_keywords:
- vc.codewiz.class.atl.ppg.options
helpviewer_keywords:
- ATL Property Page Wizard, options
ms.assetid: a7107779-b2ea-4f99-b84b-7f3e0c504bc8
ms.openlocfilehash: 74cf72feedd8dc8e1186d54a8abe840195964620
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92923658"
---
# <a name="options-atl-property-page-wizard"></a>Opzioni, Creazione guidata pagina delle proprietà ATL

::: moniker range="msvc-160"

La Creazione guidata pagina delle proprietà ATL non è disponibile in Visual Studio 2019 e versioni successive.

::: moniker-end

::: moniker range="<=msvc-150"

Usare questa pagina della procedura guidata per definire il modello di threading e il livello di aggregazione della pagina delle proprietà che si sta creando.

- **Modello di threading**

   Specifica il modello di threading usato dalla pagina delle proprietà.

   Per informazioni, vedere [Specifying the Project's Threading Model](../../atl/specifying-the-threading-model-for-a-project-atl.md) (Specifica di un modello di threading per un progetto).

   |Opzione|Descrizione|
   |------------|-----------------|
   |**Singolo**|La pagina delle proprietà viene eseguita solo nel thread COM primario.|
   |**Apartment**|La pagina delle proprietà può essere creata in qualsiasi apartment a thread singolo. Valore predefinito.|

- **Aggregazione**

   Aggiunge il supporto dell'aggregazione per la pagina delle proprietà che si sta creando. Per altre informazioni, vedere [Aggregazione](../../atl/aggregation.md).

   |Opzione|Descrizione|
   |------------|-----------------|
   |**Sì**|Viene creata una pagina delle proprietà che può essere aggregata.|
   |**No**|Viene creata una pagina delle proprietà che non può essere aggregata.|
   |**Solo**|Viene creata una pagina delle proprietà di cui è possibile creare un'istanza solo tramite aggregazione.|

::: moniker-end

## <a name="see-also"></a>Vedere anche

[Creazione guidata pagina delle proprietà ATL](../../atl/reference/atl-property-page-wizard.md)<br/>
[Stringhe, Creazione guidata pagina delle proprietà ATL](../../atl/reference/strings-atl-property-page-wizard.md)
