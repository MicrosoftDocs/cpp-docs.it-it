---
description: 'Altre informazioni su: avvisi degli strumenti del linker LNK4022'
title: Avviso degli strumenti del linker LNK4022
ms.date: 11/04/2016
f1_keywords:
- LNK4022
helpviewer_keywords:
- LNK4022
ms.assetid: 890f487e-db98-45dd-a226-c7ccead82b1e
ms.openlocfilehash: f0f968bf8e562d87e2227fb67f7a37b450c813b1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97331941"
---
# <a name="linker-tools-warning-lnk4022"></a>Avviso degli strumenti del linker LNK4022

Impossibile trovare una corrispondenza univoca per il simbolo ' symbol '

Il collegamento o LIB ha trovato più corrispondenze per il simbolo non decorato specificato e non è stato in grado di risolvere l'ambiguità. Non viene prodotto alcun file di output (con estensione exe, dll, exp o lib). Questo avviso è seguito da un [LNK4002](../../error-messages/tool-errors/linker-tools-warning-lnk4002.md) di avviso per ogni simbolo duplicato ed è infine seguito da un errore irreversibile [LNK1152](../../error-messages/tool-errors/linker-tools-error-lnk1152.md).

Per evitare questo avviso, specificare il simbolo nel formato decorato. Eseguire [dumpbin](../../build/reference/dumpbin-options.md) sull'oggetto per visualizzare i nomi decorati.
