---
description: 'Altre informazioni su: uso dei parametri sostituibili (il registrar&#39;s Preprocessor)'
title: Utilizzo di parametri sostituibili (registrar ATL)
ms.date: 11/04/2016
helpviewer_keywords:
- '%MODULE%'
ms.assetid: 0b376994-84a6-4967-8d97-8c01dfc94efe
ms.openlocfilehash: 5b8b8071115186a462bbf9ca0b12d869458dd925
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97157202"
---
# <a name="using-replaceable-parameters-the-registrar39s-preprocessor"></a>Uso di parametri sostituibili (il registrar&#39;s preprocessore)

I parametri sostituibili consentono a un client del registrar di specificare i dati in fase di esecuzione. A tale scopo, il registrar mantiene una mappa sostitutiva in cui immette i valori associati ai parametri sostituibili nello script. Il registrar esegue queste voci in fase di esecuzione.

## <a name="using-module"></a><a name="_atl_using_.25.module.25"></a> Utilizzo di% MODULE%

La [creazione guidata controllo ATL](../atl/reference/atl-control-wizard.md) genera automaticamente uno script che utilizza `%MODULE%` . ATL utilizza questo parametro sostituibile per il percorso effettivo della DLL o del file EXE del server.

## <a name="concatenating-run-time-data-with-script-data"></a>Concatenazione di dati di Run-Time con dati di script

Un altro utilizzo del preprocessore consiste nel concatenare i dati di run-time con i dati di script. Si supponga, ad esempio, che sia necessaria una voce contenente un percorso completo di un modulo con la stringa " `, 1` " aggiunta alla fine. Definire prima di tutto la seguente espansione:

```rgs
'MySampleKey' = s '%MODULE%, 1'
```

Quindi, prima di chiamare uno dei metodi di elaborazione degli script elencati in [richiamo di script](../atl/invoking-scripts.md), aggiungere una sostituzione alla mappa:

[!code-cpp[NVC_ATL_Utilities#113](../atl/codesnippet/cpp/using-replaceable-parameters-the-registrar-s-preprocessor_1.cpp)]

Durante l'analisi dello script, il registrar `'%MODULE%, 1'` si espande a `c:\mycode\mydll.dll, 1` .

> [!NOTE]
> In uno script di registrazione, 4K è la dimensione massima del token. Un token è qualsiasi elemento riconoscibile nella sintassi. Sono inclusi i token creati o espansi dal preprocessore.

> [!NOTE]
> Per sostituire i valori di sostituzione in fase di esecuzione, rimuovere la chiamata nello script nella [DECLARE_REGISTRY_RESOURCE](../atl/reference/registry-macros.md#declare_registry_resource) o [DECLARE_REGISTRY_RESOURCEID](../atl/reference/registry-macros.md#declare_registry_resourceid) macro. Sostituire invece con il proprio `UpdateRegistry` metodo che chiama [CAtlModule:: UpdateRegistryFromResourceD](../atl/reference/catlmodule-class.md#updateregistryfromresourced) o [CAtlModule:: UpdateRegistryFromResourceS](../atl/reference/catlmodule-class.md#updateregistryfromresources)e passare la matrice di strutture di _ATL_REGMAP_ENTRY. La matrice di _ATL_REGMAP_ENTRY deve contenere almeno una voce impostata su {NULL, NULL} e questa voce deve essere sempre l'ultima voce. In caso contrario, verrà generato un errore di violazione di accesso quando `UpdateRegistryFromResource` viene chiamato il metodo.

> [!NOTE]
> Quando si compila un progetto che restituisce un eseguibile, ATL aggiunge automaticamente le virgolette intorno al nome del percorso creato in fase di esecuzione con il parametro **% Module%** registrar script. Se non si desidera che il nome del percorso includa le virgolette, utilizzare invece il nuovo parametro **% MODULE_RAW%** .
>
> Quando si compila un progetto che genera un'output di una DLL, le virgolette non vengono aggiunte al nome del percorso se si utilizza **% Module%** o **% MODULE_RAW%** .

## <a name="see-also"></a>Vedi anche

[Creazione di script del registrar](../atl/creating-registrar-scripts.md)
