---
title: Creazione di script per ATL (Registrar) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- scripting, registry scripting
- ATL, registry
- registrar scripts [ATL]
- scripts, Registrar scripts
- scripts, creating
ms.assetid: cbd5024b-8061-4a71-be65-7fee90374a35
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: b3bda4043693d14451a2de14cbc71fbecdcdddba
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="creating-registrar-scripts"></a>Creating Registrar Scripts
Uno script di registrazione fornisce l'accesso basato sui dati, anziché sull'API nel Registro di sistema. Accesso basato sui dati è in genere più efficiente poiché solo una o due righe in uno script per aggiungere una chiave al Registro di sistema.  
  
 Il [Creazione guidata controllo ATL](../atl/reference/atl-control-wizard.md) genera automaticamente uno script di registrazione per il server COM. È possibile trovare lo script nel file RGS associato all'oggetto.  
  
 Script di registrazione elaborato dal motore di Script di ATL Registrar in fase di esecuzione. Il motore di Script viene richiamato automaticamente durante l'installazione di server.  
  
 In questo articolo vengono illustrati i seguenti argomenti relativi agli script di registrazione:  
  
-   [Informazioni sulla sintassi Backus Nauer Form (BNF)](../atl/understanding-backus-nauer-form-bnf-syntax.md)  
  
-   [Informazioni sulle strutture ad albero di analisi](../atl/understanding-parse-trees.md)  
  
-   [Esempio di script del Registro di sistema](../atl/registry-scripting-examples.md)  
  
-   [Uso dei parametri sostituibili (preprocessore del registrar)](../atl/using-replaceable-parameters-the-registrar-s-preprocessor.md)  
  
-   [Richiamo degli script](../atl/invoking-scripts.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Registro di sistema ATL (Registrar)](../atl/atl-registry-component-registrar.md)

