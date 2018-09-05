---
title: Creazione guidata pagina delle proprietà ATL, opzioni | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- vc.codewiz.class.atl.ppg.options
dev_langs:
- C++
helpviewer_keywords:
- ATL Property Page Wizard, options
ms.assetid: a7107779-b2ea-4f99-b84b-7f3e0c504bc8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 77849366ecfbdaee819eff6b8938b2dadb7b8db3
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43761004"
---
# <a name="options-atl-property-page-wizard"></a>Opzioni, Creazione guidata pagina delle proprietà ATL

Utilizzare questa pagina della procedura guidata per definire il livello di aggregazione e modello di threading della pagina delle proprietà che si sta creando.

**Modello di threading**  
Specifica il modello di threading utilizzato dalla pagina delle proprietà.

Visualizzare [specifica di un modello di Threading del progetto](../../atl/specifying-the-threading-model-for-a-project-atl.md) per altre informazioni.

|Opzione|Descrizione|
|------------|-----------------|
|**Single**|La pagina delle proprietà viene eseguita solo nel thread COM primario.|
|**Apartment**|La pagina delle proprietà può essere creata in qualsiasi apartment a thread singolo. Valore predefinito.|

**Aggregazione**  
Aggiunge il supporto di aggregazione per la pagina delle proprietà che si sta creando. Visualizzare [aggregazione](../../atl/aggregation.md) per altre informazioni.

|Opzione|Descrizione|
|------------|-----------------|
|**Sì**|Creare una pagina delle proprietà che può essere aggregata.|
|**No**|Creare una pagina delle proprietà che non può essere aggregata.|
|**Solo**|Creare una pagina delle proprietà che è possibile creare solo istanze tramite aggregazione.|

## <a name="see-also"></a>Vedere anche

[Creazione guidata pagina delle proprietà ATL](../../atl/reference/atl-property-page-wizard.md)   
[Stringhe, creazione guidata pagina delle proprietà ATL](../../atl/reference/strings-atl-property-page-wizard.md)

