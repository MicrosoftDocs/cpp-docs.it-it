---
title: Creazione di script per il registrar ATL
ms.date: 05/14/2014
helpviewer_keywords:
- scripting, registry scripting
- ATL, registry
- registrar scripts [ATL]
- scripts, Registrar scripts
- scripts, creating
ms.assetid: cbd5024b-8061-4a71-be65-7fee90374a35
ms.openlocfilehash: f32606701ea08736985f0b0dd2ed82712040a049
ms.sourcegitcommit: fc1de63a39f7fcbfe2234e3f372b5e1c6a286087
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/15/2019
ms.locfileid: "65707064"
---
# <a name="creating-registrar-scripts"></a>Creazione di script di registrazione

Uno script di registrazione fornisce un accesso basato sui dati, invece che basato su API, al Registro di sistema. L'accesso basato sui dati in genere è più efficiente poiché sono necessarie solo una o due righe in uno script per aggiungere una chiave al Registro di sistema.

La [Creazione guidata controllo ATL](../atl/reference/atl-control-wizard.md) genera automaticamente uno script di registrazione per il server COM. È possibile trovare questo script nel file con estensione rgs associato all'oggetto.

Lo script di registrazione viene elaborato dal motore di script del registrar ATL in fase di esecuzione. ATL richiama automaticamente il motore di script durante l'installazione del server.

In questo articolo vengono trattati gli argomenti seguenti relativi agli script di registrazione:

- [Informazioni sulla sintassi Backus-Naur form (BNF)](../atl/understanding-backus-naur-form-bnf-syntax.md)

- [Informazioni sulle strutture ad albero di analisi](../atl/understanding-parse-trees.md)

- [Esempio di script del Registro di sistema](../atl/registry-scripting-examples.md)

- [Uso dei parametri sostituibili (preprocessore del registrar)](../atl/using-replaceable-parameters-the-registrar-s-preprocessor.md)

- [Richiamo degli script](../atl/invoking-scripts.md)

## <a name="see-also"></a>Vedere anche

[Registro di sistema ATL (Registrar)](../atl/atl-registry-component-registrar.md)
