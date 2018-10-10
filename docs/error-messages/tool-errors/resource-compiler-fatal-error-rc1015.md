---
title: Errore irreversibile del compilatore di risorse RC1015 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- RC1015
dev_langs:
- C++
helpviewer_keywords:
- RC1015
ms.assetid: 23f187e1-5538-40b5-9042-edd2888f55c2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0456845152fb2879d2f58c9c40af2562c7207535
ms.sourcegitcommit: d3c41b16bf05af2149090e996d8e71cd6cd55c7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/09/2018
ms.locfileid: "48890244"
---
# <a name="resource-compiler-fatal-error-rc1015"></a>Errore irreversibile del compilatore di risorse RC1015

Impossibile aprire il file 'nomefile' inclusione

Il file di inclusione specificato non esiste, non è stato possibile aprire o non è stato trovato.

Verificare che le impostazioni dell'ambiente siano valide e che il percorso del file specificato sia corretto. Assicurarsi che siano disponibili per il compilatore di risorse sufficienti gli handle di file. Se il file si trova in un'unità di rete, assicurarsi di disporre di autorizzazioni per aprire il file.

L'errore RC1015 può verificarsi anche se il file di inclusione è presente in una directory specificata come directory di inclusione aggiuntiva nella pagina delle proprietà visualizzata selezionando Proprietà di configurazione -> Risorse -> Generale. Specificare il percorso completo del fila di inclusione.
