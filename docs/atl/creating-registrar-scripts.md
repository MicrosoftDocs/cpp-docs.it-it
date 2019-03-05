---
title: Creazione di script per ATL (Registrar)
ms.date: 11/04/2016
helpviewer_keywords:
- scripting, registry scripting
- ATL, registry
- registrar scripts [ATL]
- scripts, Registrar scripts
- scripts, creating
ms.assetid: cbd5024b-8061-4a71-be65-7fee90374a35
ms.openlocfilehash: e1a0b66e673fcefd0b75683ef75247a388217361
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57295513"
---
# <a name="creating-registrar-scripts"></a>Creating Registrar Scripts

Uno script di registrazione fornisce l'accesso basato sui dati, anziché basate su API e nel Registro di sistema. Accesso basato sui dati è in genere più efficiente poiché sono necessari solo uno o due righe in uno script per aggiungere una chiave del Registro di sistema.

Il [Creazione guidata controllo ATL](../atl/reference/atl-control-wizard.md) genera automaticamente uno script di registrazione per il server COM. È possibile trovare questo script nel file con estensione RGS associato all'oggetto.

Script di registrazione elaborato dal motore di Script del Registrar ATL in fase di esecuzione. Il motore di Script viene richiamato automaticamente durante l'installazione di server.

Questo articolo illustra gli argomenti seguenti relativi agli script di registrazione:

- [Informazioni sulla sintassi Backus Nauer Form (BNF)](../atl/understanding-backus-nauer-form-bnf-syntax.md)

- [Informazioni sulle strutture ad albero di analisi](../atl/understanding-parse-trees.md)

- [Esempio di script del Registro di sistema](../atl/registry-scripting-examples.md)

- [Uso dei parametri sostituibili (preprocessore del registrar)](../atl/using-replaceable-parameters-the-registrar-s-preprocessor.md)

- [Richiamo degli script](../atl/invoking-scripts.md)

## <a name="see-also"></a>Vedere anche

[Registro di sistema ATL (Registrar)](../atl/atl-registry-component-registrar.md)
