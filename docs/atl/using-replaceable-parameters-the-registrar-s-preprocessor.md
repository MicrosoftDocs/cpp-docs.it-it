---
title: "Using Replaceable Parameters (The Registrar&#39;s Preprocessor) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "AddReplacement"
  - "ClearReplacements"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "%MODULE%"
ms.assetid: 0b376994-84a6-4967-8d97-8c01dfc94efe
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Using Replaceable Parameters (The Registrar&#39;s Preprocessor)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I parametri sostituibili consentono del client di un registrar di registrar specificare i dati di runtime.  A tale scopo, il registrar gestisce una mappa di sostituzione di che fornisce i valori associati ai parametri sostituibili nello script.  Il registrar tali voci in fase di esecuzione.  
  
##  <a name="_atl_using_.25.module.25"></a> Utilizzando %MODULE%  
 [La creazione guidata controllo ATL](../atl/reference/atl-control-wizard.md) genera automaticamente uno script che utilizza `%MODULE%`.  ATL utilizza questo parametro sostituibile per il percorso effettivo della DLL o del file EXE del server.  
  
## Concatenare i dati di runtime con i dati dello script  
 Un altro utilizzo del preprocessore è di concatenare i dati di runtime con i dati dello script.  Ad esempio, si supponga di una voce si richiedono che contiene il percorso completo di un modulo con la stringa "`, 1`" aggiunto alla fine.  Innanzitutto, definire espansione la seguente:  
  
```  
'MySampleKey' = s '%MODULE%, 1'  
```  
  
 Quindi, prima di chiamare uno dei metodi di elaborazione di script elencati in [script di chiamata](../atl/invoking-scripts.md), aggiungere una sostituzione al mapping:  
  
 [!code-cpp[NVC_ATL_Utilities#113](../atl/codesnippet/CPP/using-replaceable-parameters-the-registrar-s-preprocessor_1.cpp)]  
  
 Durante l'analisi dello script, il registrar espande `'%MODULE%, 1'` a `c:\mycode\mydll.dll, 1`.  
  
> [!NOTE]
>  In uno script di registrazione, 4K è la dimensione massima del token.  \(Il token di un oggetto è qualsiasi elemento riconoscibile nella sintassi.\) Sono inclusi i token creati o espanso stati dal preprocessore.  
  
> [!NOTE]
>  Per sostituire i valori di sostituzione in fase di esecuzione, rimuovere la chiamata dello script alla macro [DECLARE\_REGISTRY\_RESOURCEID](../Topic/DECLARE_REGISTRY_RESOURCEID.md) o [DECLARE\_REGISTRY\_RESOURCE](../Topic/DECLARE_REGISTRY_RESOURCE.md).  Invece, sostituirlo con il metodo `UpdateRegistry` che chiama [CAtlModule::UpdateRegistryFromResourceD](../Topic/CAtlModule::UpdateRegistryFromResourceD.md) o [CAtlModule::UpdateRegistryFromResourceS](../Topic/CAtlModule::UpdateRegistryFromResourceS.md)e passare la matrice di strutture **\_ATL\_REGMAP\_ENTRY**.  La matrice **\_ATL\_REGMAP\_ENTRY** deve avere almeno una voce che viene impostata**NULL**{,}**NULL**e questa voce deve essere sempre l'ultima voce.  In caso contrario, verrà generato un errore di violazione di accesso viene generato quando **UpdateRegistryFromResource** viene chiamato.  
  
> [!NOTE]
>  Quando si compila un progetto che restituisce un eseguibile, ATL aggiunge automaticamente le virgolette intorno al nome del percorso creato in fase di esecuzione con il parametro di script di registrazione **%MODULE%**.  Se non si desidera che il percorso di includere le virgolette, utilizzare il nuovo parametro **%MODULE\_RAW%** anziché.  
>   
>  Quando si compila un progetto che restituisce una DLL, ATL non verranno aggiunte le virgolette al nome del percorso se **%MODULE%** o **%MODULE\_RAW%** viene utilizzato.  
  
## Vedere anche  
 [Creating Registrar Scripts](../atl/creating-registrar-scripts.md)