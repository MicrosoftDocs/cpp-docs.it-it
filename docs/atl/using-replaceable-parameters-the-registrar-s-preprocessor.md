---
title: Utilizzo di parametri sostituibili (funzione di registrazione ATL)Using Replaceable Parameters (ATL Registrar)
ms.date: 11/04/2016
helpviewer_keywords:
- '%MODULE%'
ms.assetid: 0b376994-84a6-4967-8d97-8c01dfc94efe
ms.openlocfilehash: 2474db2de384baa9113ed39aef4d3d9c9048903d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81329225"
---
# <a name="using-replaceable-parameters-the-registrar39s-preprocessor"></a>Utilizzo di parametri sostituibili (la funzione di registrazione&#39;s preprocessore)Using Replaceable Parameters (The Registrar&#39;s Preprocessor)

I parametri sostituibili consentono al client di una funzione di registrazione di specificare i dati di runtime. A tale scopo, la funzione di registrazione mantiene una mappa di sostituzione in cui immette i valori associati ai parametri sostituibili nello script. La funzione di registrazione crea queste voci in fase di esecuzione.

## <a name="using-module"></a><a name="_atl_using_.25.module.25"></a>Utilizzo di %MODULE%

La [Creazione guidata controllo ATL](../atl/reference/atl-control-wizard.md) `%MODULE%`genera automaticamente uno script che utilizza . ATL utilizza questo parametro sostituibile per la posizione effettiva della DLL o EXE del server.

## <a name="concatenating-run-time-data-with-script-data"></a>Concatenazione di dati di runtime con dati di scriptConcatenating Run-Time Data with Script Data

Un altro utilizzo del preprocessore consiste nel concatenare i dati di runtime con i dati di script. Si supponga, ad esempio, che sia necessaria una voce`, 1`che contenga un percorso completo di un modulo con la stringa " " aggiunta alla fine. In primo luogo, definire la seguente espansione:

```
'MySampleKey' = s '%MODULE%, 1'
```

Quindi, prima di chiamare uno dei metodi di elaborazione degli script elencati in [Richiamare gli script](../atl/invoking-scripts.md), aggiungere una sostituzione alla mappa:

[!code-cpp[NVC_ATL_Utilities#113](../atl/codesnippet/cpp/using-replaceable-parameters-the-registrar-s-preprocessor_1.cpp)]

Durante l'analisi dello script, la `'%MODULE%, 1'` funzione `c:\mycode\mydll.dll, 1`di registrazione si espande in .

> [!NOTE]
> In uno script di registrazione, 4K è la dimensione massima del token. Un token è qualsiasi elemento riconoscibile nella sintassi. Sono inclusi i token creati o espansi dal preprocessore.

> [!NOTE]
> Per sostituire i valori di sostituzione in fase di esecuzione, rimuovere la chiamata nello script alla DECLARE_REGISTRY_RESOURCE [o](../atl/reference/registry-macros.md#declare_registry_resource) [DECLARE_REGISTRY_RESOURCEID](../atl/reference/registry-macros.md#declare_registry_resourceid) macro. Al contrario, sostituirlo con il proprio `UpdateRegistry` metodo che chiama [CAtlModule::UpdateRegistryFromResourceD](../atl/reference/catlmodule-class.md#updateregistryfromresourced) o [CAtlModule::UpdateRegistryFromResourceS](../atl/reference/catlmodule-class.md#updateregistryfromresources)e passare la matrice di strutture _ATL_REGMAP_ENTRY. La matrice di _ATL_REGMAP_ENTRY deve avere almeno una voce impostata su NULL, NULL e questa voce deve essere sempre l'ultima voce. In caso contrario, verrà `UpdateRegistryFromResource` generato un errore di violazione di accesso quando viene chiamato.

> [!NOTE]
> Quando si compila un progetto che restituisce un eseguibile, ATL aggiunge automaticamente le virgolette intorno al nome del percorso creato in fase di esecuzione con il parametro di script del registrar **%MODULE%.** Se non si desidera che il nome del percorso includa le virgolette, utilizzare invece il nuovo parametro **%MODULE_RAW%.**
>
> Quando si compila un progetto che genera una DLL, ATL non aggiungerà virgolette al nome del percorso se viene utilizzato **%MODULE%** o **%MODULE_RAW%.**

## <a name="see-also"></a>Vedere anche

[Creazione di script di registrazioneCreating Registrar Scripts](../atl/creating-registrar-scripts.md)
