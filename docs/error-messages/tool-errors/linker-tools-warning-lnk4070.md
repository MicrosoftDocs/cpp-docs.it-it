---
description: 'Altre informazioni su: avvisi degli strumenti del linker LNK4070'
title: Avviso degli strumenti del linker LNK4070
ms.date: 11/04/2016
f1_keywords:
- LNK4070
helpviewer_keywords:
- LNK4070
ms.assetid: f95f179a-fff9-427e-bd51-466b3934517f
ms.openlocfilehash: 188c8d88fa4fec332dad80fd5afee346f6099fca
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97210179"
---
# <a name="linker-tools-warning-lnk4070"></a>Avviso degli strumenti del linker LNK4070

/OUT: FileName (direttiva) in. EXP differisce dal nome del file di output ' filename '; direttiva ignorata

L' `filename` oggetto specificato nell'istruzione [Name](../../build/reference/name-c-cpp.md) o [Library](../../build/reference/library.md) quando è stato creato il file exp è diverso dall'output `filename` che è stato utilizzato per impostazione predefinita o specificato con l'opzione [/out](../../build/reference/out-output-file-name.md) .

Questo avviso viene visualizzato se si modifica il nome di un file di output nell'ambiente di sviluppo e il file con estensione def del progetto non è stato aggiornato. Aggiornare manualmente il file def per risolvere questo avviso.

È possibile che un programma client che utilizza la DLL risultante riscontri problemi.
