---
title: Errore irreversibile del compilatore di risorse RC1015
ms.date: 11/04/2016
f1_keywords:
- RC1015
helpviewer_keywords:
- RC1015
ms.assetid: 23f187e1-5538-40b5-9042-edd2888f55c2
ms.openlocfilehash: f20101c2edc4da132c89dcda451c71af2304a13d
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62297658"
---
# <a name="resource-compiler-fatal-error-rc1015"></a>Errore irreversibile del compilatore di risorse RC1015

Impossibile aprire il file 'nomefile' inclusione

Il file di inclusione specificato non esiste, non è stato possibile aprire o non è stato trovato.

Verificare che le impostazioni dell'ambiente siano valide e che il percorso del file specificato sia corretto. Assicurarsi che siano disponibili per il compilatore di risorse sufficienti gli handle di file. Se il file si trova in un'unità di rete, assicurarsi di disporre di autorizzazioni per aprire il file.

RC1015 può verificarsi anche se è presente il file di inclusione in una directory specificata come Directory di inclusione aggiuntiva nelle proprietà di configurazione -> risorse -> pagina delle proprietà Generale; specificare il percorso completo del file di inclusione.
