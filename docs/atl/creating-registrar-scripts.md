---
title: Creazione di script per ATL (Registrar) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- scripting, registry scripting
- ATL, registry
- registrar scripts [ATL]
- scripts, Registrar scripts
- scripts, creating
ms.assetid: cbd5024b-8061-4a71-be65-7fee90374a35
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: abffe3c8d0a107c48c3a14a9bf584122229ad3b7
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43767260"
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

