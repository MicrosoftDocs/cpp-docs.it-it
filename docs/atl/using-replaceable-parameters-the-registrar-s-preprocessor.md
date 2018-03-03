---
title: Utilizzo dei parametri sostituibili (ATL (Registrar)) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- AddReplacement
- ClearReplacements
dev_langs:
- C++
helpviewer_keywords:
- '%MODULE%'
ms.assetid: 0b376994-84a6-4967-8d97-8c01dfc94efe
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: b06333ba51b74501f3b7cd68248e5fb7e51ca94f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="using-replaceable-parameters-the-registrar39s-preprocessor"></a>Utilizzo dei parametri sostituibili (il Registrar &#39; s preprocessore)
Parametri sostituibili consentono un client di registrazione specificare i dati in fase di esecuzione. A tale scopo, il programma di registrazione gestisce una mappa di sostituzione in cui vengono immessi i valori associati ai parametri sostituibili nello script. Queste voci vengono poi create in fase di esecuzione.  
  
##  <a name="_atl_using_.25.module.25"></a>Utilizzo di % % di modulo  
 Il [Creazione guidata controllo ATL](../atl/reference/atl-control-wizard.md) genera automaticamente uno script che utilizza `%MODULE%`. ATL Usa questo parametro sostituibile per il percorso effettivo del file DLL o EXE del server.  
  
## <a name="concatenating-run-time-data-with-script-data"></a>Concatenazione di dati in fase di esecuzione con i dati di Script  
 Viene utilizzato un altro del preprocessore per concatenare i dati in fase di esecuzione con i dati di script. Si supponga ad esempio è necessaria una voce che contiene un percorso completo di un modulo con la stringa "`, 1`" aggiunto alla fine. Prima di definire l'espansione seguente:  
  
```  
'MySampleKey' = s '%MODULE%, 1'  
```  
  
 Quindi, prima di chiamare uno dei metodi elencati di elaborazione degli script [richiamare gli script](../atl/invoking-scripts.md), aggiungere una sostituzione alla mappa:  
  
 [!code-cpp[NVC_ATL_Utilities#113](../atl/codesnippet/cpp/using-replaceable-parameters-the-registrar-s-preprocessor_1.cpp)]  
  
 Durante l'analisi dello script, si espande il Registrar `'%MODULE%, 1'` a `c:\mycode\mydll.dll, 1`.  
  
> [!NOTE]
>  In uno script di registrazione, 4K è la dimensione massima dei token. (Un token è un qualsiasi elemento riconoscibile nella sintassi). Sono inclusi i token creati o espanso dal preprocessore.  
  
> [!NOTE]
>  Per sostituire i valori di sostituzione in fase di esecuzione, rimuovere la chiamata in script per il [macro DECLARE_REGISTRY_RESOURCE](../atl/reference/registry-macros.md#declare_registry_resource) o [DECLARE_REGISTRY_RESOURCEID](../atl/reference/registry-macros.md#declare_registry_resourceid) (macro). Invece di sostituirlo con il proprio `UpdateRegistry` metodo che chiama [CAtlModule:: UpdateRegistryFromResourceD](../atl/reference/catlmodule-class.md#updateregistryfromresourced) o [CAtlModule::UpdateRegistryFromResourceS](../atl/reference/catlmodule-class.md#updateregistryfromresources)e passare la matrice di **ATL_REGMAP_ENTRY** strutture. La matrice di **ATL_REGMAP_ENTRY** deve avere almeno una voce che è impostata su {**NULL**,**NULL**}, e questa voce deve essere sempre l'ultima voce. In caso contrario, si sarà un errore di violazione di accesso generati quando **UpdateRegistryFromResource** viene chiamato.  
  
> [!NOTE]
>  Quando si compila un progetto che produce un file eseguibile, ATL aggiunge automaticamente tra virgolette il nome del percorso creato in fase di esecuzione con il **% MODULE %** parametro di script di registrazione. Se non si desidera il nome del percorso per includere le virgolette, utilizzare il nuovo **% MODULE_RAW %** parametro invece.  
>   
>  Quando si compila un progetto che produce una DLL ATL non le virgolette verranno aggiunte al nome del percorso se **% MODULE %** o **% MODULE_RAW %** viene utilizzato.  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione degli script del Registro di sistema](../atl/creating-registrar-scripts.md)

