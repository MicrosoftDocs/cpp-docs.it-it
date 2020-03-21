---
title: Opzioni, Creazione guidata pagina delle proprietà ATL
ms.date: 05/09/2019
f1_keywords:
- vc.codewiz.class.atl.ppg.options
helpviewer_keywords:
- ATL Property Page Wizard, options
ms.assetid: a7107779-b2ea-4f99-b84b-7f3e0c504bc8
ms.openlocfilehash: a46a55cca221293e83a72bf0c2670e2343c744b0
ms.sourcegitcommit: 8e285a766523e653aeeb34d412dc6f615ef7b17b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2020
ms.locfileid: "80076204"
---
# <a name="options-atl-property-page-wizard"></a>Opzioni, Creazione guidata pagina delle proprietà ATL

::: moniker range="vs-2019"

La Creazione guidata pagina delle proprietà ATL non è disponibile in Visual Studio 2019 e versioni successive.

::: moniker-end

::: moniker range="<=vs-2017"

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
