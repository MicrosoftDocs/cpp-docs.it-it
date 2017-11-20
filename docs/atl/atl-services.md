---
title: ATL (servizi) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: CServiceModule
dev_langs: C++
helpviewer_keywords:
- CServiceModule class
- COM objects, ATL
- services, ATL
- ATL services
ms.assetid: 8c09d1a8-7548-4d2c-947c-9d795a81659b
caps.latest.revision: "12"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 5b0572f4d83cfc6b098f290cda53592dbe4aa54b
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="atl-services"></a>Servizi ATL
Per creare un oggetto COM ATL in modo che venga eseguito in un servizio, è sufficiente selezionare servizio (EXE) dall'elenco di opzioni del server nella creazione guidata progetto ATL. La procedura guidata creerà quindi una classe derivata da `CAtlServiceModuleT` per implementare il servizio.  
  
 Quando l'oggetto COM ATL viene compilato come un servizio, verrà registrato solo come server locale e non verrà visualizzata nell'elenco dei servizi nel Pannello di controllo. In questo modo è più semplice eseguire il debug del servizio come server locale rispetto a come servizio. Per installarlo come servizio, eseguire il comando seguente al prompt dei comandi:  
  
 `YourEXE` `.exe /Service`  
  
 A tale scopo, eseguire le operazioni seguenti:  
  
 `YourEXE` `.exe /UnregServer`  
  
 Nei primi quattro argomenti in questa sezione vengono descritte le operazioni che si verificano durante l'esecuzione di `CAtlServiceModuleT` funzioni membro. Questi argomenti vengono visualizzati nella stessa sequenza come le funzioni vengono in genere chiamate. Per migliorare la comprensione di questi argomenti, è consigliabile utilizzare il codice sorgente generato dalla creazione guidata progetto ATL come riferimento. I primi quattro argomenti sono:  
  

-   [La funzione CAtlServiceModuleT:: Start](../atl/reference/catlservicemodulet-class.md#start)  
  
-   [La funzione CAtlServiceModuleT::](../atl/reference/catlservicemodulet-class.md#servicemain)  
  
-   [La funzione CAtlServiceModuleT](../atl/reference/catlservicemodulet-class.md#run)  
  
-   [La funzione CAtlServiceModuleT:: Handler](../atl/reference/catlservicemodulet-class.md#handler)  
  
 Gli ultimi tre argomenti trattano i concetti correlati allo sviluppo di un servizio:  
  
-   [Le voci del Registro di sistema](../atl/registry-entries.md) per i servizi ATL  
  
-   [DCOMCNFG](../atl/dcomcnfg.md)  
  
-   [Suggerimenti relativi al debug](../atl/debugging-tips.md) per i servizi ATL  
  
## <a name="see-also"></a>Vedere anche  
 [Concetti](../atl/active-template-library-atl-concepts.md)

