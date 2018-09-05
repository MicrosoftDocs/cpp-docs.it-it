---
title: Servizi ATL | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
f1_keywords:
- CServiceModule
dev_langs:
- C++
helpviewer_keywords:
- CServiceModule class
- COM objects, ATL
- services, ATL
- ATL services
ms.assetid: 8c09d1a8-7548-4d2c-947c-9d795a81659b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4875c4844b97e3715c3804f83f4fa3e863eb53bc
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43761030"
---
# <a name="atl-services"></a>Servizi ATL

Per creare un oggetto COM ATL in modo che venga eseguito in un servizio, è sufficiente selezionare servizio (con estensione EXE) dall'elenco di opzioni del server nella creazione guidata progetto ATL. La procedura guidata creerà quindi una classe derivata da `CAtlServiceModuleT` per implementare il servizio.

Quando l'oggetto COM ATL viene compilato come servizio, sarà possibile registrare solo come server locale e non verrà visualizzata nell'elenco dei servizi nel Pannello di controllo. Questo è quanto rende più semplice eseguire il debug del servizio come un server locale rispetto a come servizio. Per installarlo come servizio, eseguire il comando seguente al prompt dei comandi:

`YourEXE` `.exe /Service`

Per disinstallare l'estensione, eseguire le operazioni seguenti:

`YourEXE` `.exe /UnregServer`

Nei primi quattro argomenti in questa sezione illustrano le azioni che si verificano durante l'esecuzione di `CAtlServiceModuleT` funzioni membro. Questi argomenti vengono visualizzati nella stessa sequenza come le funzioni vengono in genere chiamate. Per migliorare la comprensione di questi argomenti, è consigliabile usare il codice sorgente generato dalla creazione guidata progetto ATL come riferimento. I primi quattro argomenti sono:

- [Funzione CAtlServiceModuleT:: Start](../atl/reference/catlservicemodulet-class.md#start)

- [Funzione CAtlServiceModuleT::](../atl/reference/catlservicemodulet-class.md#servicemain)

- [Funzione CAtlServiceModuleT:: Run](../atl/reference/catlservicemodulet-class.md#run)

- [Funzione CAtlServiceModuleT:: Handler](../atl/reference/catlservicemodulet-class.md#handler)

Gli ultimi tre argomenti descrivono i concetti relativi allo sviluppo di un servizio:

- [Le voci del Registro di sistema](../atl/registry-entries.md) per i servizi ATL

- [DCOMCNFG](../atl/dcomcnfg.md)

- [Suggerimenti sul debug](../atl/debugging-tips.md) per i servizi ATL

## <a name="see-also"></a>Vedere anche

[Concetti](../atl/active-template-library-atl-concepts.md)

