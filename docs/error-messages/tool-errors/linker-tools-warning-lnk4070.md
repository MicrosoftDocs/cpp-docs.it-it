---
title: Avviso degli strumenti del linker LNK4070
ms.date: 11/04/2016
f1_keywords:
- LNK4070
helpviewer_keywords:
- LNK4070
ms.assetid: f95f179a-fff9-427e-bd51-466b3934517f
ms.openlocfilehash: 391a477625b51fd37eacc5d455801ce90d2abbc2
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80194005"
---
# <a name="linker-tools-warning-lnk4070"></a>Avviso degli strumenti del linker LNK4070

/OUT: FileName (direttiva) in. EXP differisce dal nome del file di output ' filename '; direttiva ignorata

Il `filename` specificato nell'istruzione [Name](../../build/reference/name-c-cpp.md) o [Library](../../build/reference/library.md) quando è stato creato il file con estensione EXP è diverso da quello `filename` di output che è stato utilizzato per impostazione predefinita o specificato con l'opzione [/out](../../build/reference/out-output-file-name.md) .

Questo avviso viene visualizzato se si modifica il nome di un file di output nell'ambiente di sviluppo e il file con estensione def del progetto non è stato aggiornato. Aggiornare manualmente il file def per risolvere questo avviso.

È possibile che un programma client che utilizza la DLL risultante riscontri problemi.
