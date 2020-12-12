---
description: 'Altre informazioni su: errore degli strumenti del linker LNK1241'
title: Errore degli strumenti del linker LNK1241
ms.date: 11/04/2016
f1_keywords:
- LNK1241
helpviewer_keywords:
- LNK1241
ms.assetid: 7b8b52eb-0231-4521-b52a-2bce8d3e8956
ms.openlocfilehash: abc72b70af9ab694744a91a8789207055bd1a5bb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97193929"
---
# <a name="linker-tools-error-lnk1241"></a>Errore degli strumenti del linker LNK1241

il file di risorse ' file di risorse ' è già specificato

Questo errore viene generato se si esegue **cvtres** manualmente dalla riga di comando e si passa il file con estensione obj risultante al linker oltre ad altri file con estensione res.

Per specificare più file con estensione res, passarli tutti al linker come file con estensione res, non all'interno dei file obj creati da **cvtres**.
