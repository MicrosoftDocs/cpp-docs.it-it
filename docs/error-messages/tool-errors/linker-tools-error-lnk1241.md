---
title: Errore degli strumenti del linker LNK1241
ms.date: 11/04/2016
f1_keywords:
- LNK1241
helpviewer_keywords:
- LNK1241
ms.assetid: 7b8b52eb-0231-4521-b52a-2bce8d3e8956
ms.openlocfilehash: 6e2b955787166c94be4ca35e1c58df5becd243f2
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80183813"
---
# <a name="linker-tools-error-lnk1241"></a>Errore degli strumenti del linker LNK1241

il file di risorse ' file di risorse ' è già specificato

Questo errore viene generato se si esegue **cvtres** manualmente dalla riga di comando e si passa il file con estensione obj risultante al linker oltre ad altri file con estensione res.

Per specificare più file con estensione res, passarli tutti al linker come file con estensione res, non all'interno dei file obj creati da **cvtres**.
