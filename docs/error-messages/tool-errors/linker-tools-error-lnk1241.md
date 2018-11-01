---
title: Errore degli strumenti del linker LNK1241
ms.date: 11/04/2016
f1_keywords:
- LNK1241
helpviewer_keywords:
- LNK1241
ms.assetid: 7b8b52eb-0231-4521-b52a-2bce8d3e8956
ms.openlocfilehash: 87f73680d7ed40b9b2db9f40f9140976d552ab6b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50584548"
---
# <a name="linker-tools-error-lnk1241"></a>Errore degli strumenti del linker LNK1241

file di risorse 'file di risorse' già specificato

Questo errore viene generato se si esegue **cvtres** manualmente dalla riga di comando e se si passa quindi il file risultante obj file al linker anche in altri file con estensione res.

Per specificare più file con estensione res, passarle tutte al linker come file con estensione res, non dall'interno di file con estensione obj creati da **cvtres**.