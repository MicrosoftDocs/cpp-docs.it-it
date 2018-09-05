---
title: Uso dei parametri sostituibili (ATL (Registrar)) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
f1_keywords:
- AddReplacement
- ClearReplacements
dev_langs:
- C++
helpviewer_keywords:
- '%MODULE%'
ms.assetid: 0b376994-84a6-4967-8d97-8c01dfc94efe
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 828c3881771aa37181822859cc54894e8771c2cb
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43767594"
---
# <a name="using-replaceable-parameters-the-registrar39s-preprocessor"></a>Uso dei parametri sostituibili (programma di registrazione&#39;s preprocessore)

Parametri sostituibili consentono un client di registrazione specificare i dati in fase di esecuzione. A tale scopo, il programma di registrazione gestisce una mappa di sostituzione in cui vengono immessi i valori associati ai parametri sostituibili nello script. Queste voci vengono poi create in fase di esecuzione.

##  <a name="_atl_using_.25.module.25"></a> Usando il modulo % %

Il [Creazione guidata controllo ATL](../atl/reference/atl-control-wizard.md) genera automaticamente uno script che usa `%MODULE%`. ATL Usa il parametro sostituibile per il percorso effettivo dei file EXE o DLL del server.

## <a name="concatenating-run-time-data-with-script-data"></a>Concatenazione dei dati in fase di esecuzione con i dati degli Script

Viene utilizzato un altro del preprocessore per concatenare i dati in fase di esecuzione con i dati degli script. Ad esempio, si supponga che è necessaria una voce che contiene un percorso completo di un modulo con la stringa "`, 1`" aggiunto alla fine. In primo luogo, definire l'espansione seguente:

```  
'MySampleKey' = s '%MODULE%, 1'  
```

Quindi, prima di chiamare uno dei metodi elencati nell'elaborazione degli script [richiamare script](../atl/invoking-scripts.md), aggiungere una sostituzione alla mappa:

[!code-cpp[NVC_ATL_Utilities#113](../atl/codesnippet/cpp/using-replaceable-parameters-the-registrar-s-preprocessor_1.cpp)]

Durante l'analisi dello script, si espande le Registrar `'%MODULE%, 1'` a `c:\mycode\mydll.dll, 1`.

> [!NOTE]
>  In uno script di registrazione, 4 KB è la dimensione massima dei token. (Un token è qualsiasi elemento riconoscibile nella sintassi). Sono inclusi i token che sono stati creati o espanse dal preprocessore.

> [!NOTE]
>  Per sostituire i valori di sostituzione in fase di esecuzione, rimuovere la chiamata nello script per il [macro DECLARE_REGISTRY_RESOURCE](../atl/reference/registry-macros.md#declare_registry_resource) oppure [DECLARE_REGISTRY_RESOURCEID](../atl/reference/registry-macros.md#declare_registry_resourceid) macro. Al contrario, sostituirlo con i propri `UpdateRegistry` metodo che chiama [CAtlModule:: UpdateRegistryFromResourceD](../atl/reference/catlmodule-class.md#updateregistryfromresourced) oppure [CAtlModule::UpdateRegistryFromResourceS](../atl/reference/catlmodule-class.md#updateregistryfromresources)e passare la matrice di _ATL_REGMAP_ Strutture di voce. L'array ATL_REGMAP_ENTRY deve avere almeno una voce che è impostata su {NULL, NULL} e questa voce deve essere sempre l'ultima voce. In caso contrario, sarà un errore di violazione di accesso generati quando `UpdateRegistryFromResource` viene chiamato.

> [!NOTE]
>  Quando si compila un progetto che produce un file eseguibile, ATL aggiunge automaticamente creato in fase di esecuzione con il nome del percorso tra virgolette i **% modulo %** parametro dello script di registrazione. Se il nome del percorso per includere le virgolette non desiderate, usare il nuovo **MODULE_RAW %** parametro invece.  
>   
>  Quando si compila un progetto che produce una DLL ATL non le virgolette verranno aggiunte al nome del percorso se **% modulo %** oppure **MODULE_RAW %** viene usato.

## <a name="see-also"></a>Vedere anche

[Creazione degli script del Registro di sistema](../atl/creating-registrar-scripts.md)

