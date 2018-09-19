---
title: Strumenti del linker LNK1241 errore | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK1241
dev_langs:
- C++
helpviewer_keywords:
- LNK1241
ms.assetid: 7b8b52eb-0231-4521-b52a-2bce8d3e8956
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e4c11a97dd99515ff7623b77ff31de5fb8577b5d
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46040622"
---
# <a name="linker-tools-error-lnk1241"></a>Errore degli strumenti del linker LNK1241

file di risorse 'file di risorse' già specificato

Questo errore viene generato se si esegue **cvtres** manualmente dalla riga di comando e se si passa quindi il file risultante obj file al linker anche in altri file con estensione res.

Per specificare più file con estensione res, passarle tutte al linker come file con estensione res, non dall'interno di file con estensione obj creati da **cvtres**.