---
description: 'Altre informazioni su: Servizi ATL'
title: Servizi ATL
ms.date: 11/04/2016
helpviewer_keywords:
- CServiceModule class
- COM objects, ATL
- services, ATL
- ATL services
ms.assetid: 8c09d1a8-7548-4d2c-947c-9d795a81659b
ms.openlocfilehash: 1cb1f526434cefe57dc4675d592f836e04a6cdb6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97148603"
---
# <a name="atl-services"></a>Servizi ATL

Per creare l'oggetto COM ATL in modo che venga eseguito in un servizio, è sufficiente selezionare il servizio (EXE) nell'elenco delle opzioni del server nella creazione guidata progetto ATL. La procedura guidata creerà quindi una classe derivata da `CAtlServiceModuleT` per implementare il servizio.

Quando l'oggetto COM ATL è compilato come servizio, verrà registrato solo come server locale e non verrà visualizzato nell'elenco dei servizi nel pannello di controllo. Questo perché è più semplice eseguire il debug del servizio come server locale anziché come servizio. Per installarlo come servizio, eseguire il comando seguente al prompt dei comandi:

`YourEXE` `.exe /Service`

Per disinstallarlo, eseguire il comando seguente:

`YourEXE` `.exe /UnregServer`

I primi quattro argomenti di questa sezione illustrano le azioni che si verificano durante l'esecuzione di `CAtlServiceModuleT` funzioni membro. Questi argomenti vengono visualizzati nella stessa sequenza delle funzioni chiamate in genere. Per migliorare la comprensione di questi argomenti, è consigliabile utilizzare il codice sorgente generato dalla creazione guidata progetto ATL come riferimento. Questi primi quattro argomenti sono:

- [Funzione funzione CAtlServiceModuleT:: Start](../atl/reference/catlservicemodulet-class.md#start)

- [Funzione funzione CAtlServiceModuleT:: ServiceMain](../atl/reference/catlservicemodulet-class.md#servicemain)

- [Funzione funzione CAtlServiceModuleT:: Run](../atl/reference/catlservicemodulet-class.md#run)

- [Funzione funzione CAtlServiceModuleT:: handler](../atl/reference/catlservicemodulet-class.md#handler)

Negli ultimi tre argomenti vengono illustrati i concetti relativi allo sviluppo di un servizio:

- [Voci del registro di sistema](../atl/registry-entries.md) per i servizi ATL

- [DCOMCNFG](../atl/dcomcnfg.md)

- [Suggerimenti](../atl/debugging-tips.md) per il debug di servizi ATL

## <a name="see-also"></a>Vedi anche

[Concetti](../atl/active-template-library-atl-concepts.md)
