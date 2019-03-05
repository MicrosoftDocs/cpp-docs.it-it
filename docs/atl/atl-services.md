---
title: Servizi ATL
ms.date: 11/04/2016
f1_keywords:
- CServiceModule
helpviewer_keywords:
- CServiceModule class
- COM objects, ATL
- services, ATL
- ATL services
ms.assetid: 8c09d1a8-7548-4d2c-947c-9d795a81659b
ms.openlocfilehash: 3308e7fb38dfaab13c2570f216772e2af459a7f2
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57273660"
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
