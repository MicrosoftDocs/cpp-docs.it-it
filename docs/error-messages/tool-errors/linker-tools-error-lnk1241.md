---
title: Errore degli strumenti del linker LNK1241
ms.date: 11/04/2016
f1_keywords:
- LNK1241
helpviewer_keywords:
- LNK1241
ms.assetid: 7b8b52eb-0231-4521-b52a-2bce8d3e8956
ms.openlocfilehash: 87f73680d7ed40b9b2db9f40f9140976d552ab6b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62160653"
---
# <a name="linker-tools-error-lnk1241"></a>Errore degli strumenti del linker LNK1241

file di risorse 'file di risorse' già specificato

Questo errore viene generato se si esegue **cvtres** manualmente dalla riga di comando e se si passa quindi il file risultante obj file al linker anche in altri file con estensione res.

Per specificare più file con estensione res, passarle tutte al linker come file con estensione res, non dall'interno di file con estensione obj creati da **cvtres**.