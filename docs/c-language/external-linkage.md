---
title: Collegamento esterno | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- linkage [C++], external
- external linkage, about external linkage
- external linkage
ms.assetid: a6f8ea69-b405-4cdd-bf12-ad5462b73183
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: be268dbc153ad0bb140a2adfcfd8ec6385716c48
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46027563"
---
# <a name="external-linkage"></a>Collegamento esterno

Se la prima dichiarazione, a livello di ambito file, di un identificatore non usa l'identificatore classe di archiviazione **static**, l'oggetto ha un collegamento esterno.

Se la dichiarazione di un identificatore per una funzione non ha alcun *storage-class-specifier*, il relativo collegamento è determinato esattamente come se fosse dichiarato con *storage-class-specifier* `extern`. Se la dichiarazione di un identificatore per un oggetto ha un ambito file e nessun *storage-class-specifier*, il relativo collegamento è esterno.

Il nome di un identificatore con collegamento esterno definisce la stessa funzione o oggetto dati di una qualunque altra dichiarazione per lo stesso nome con collegamento esterno. Le due dichiarazioni possono trovarsi nella stessa unità di conversione o in unità di conversione diverse. Se l'oggetto o la funzione dispongono anche di durata globale, l'oggetto o la funzione sono condivisi dall'intero programma.

## <a name="see-also"></a>Vedere anche

[Uso di extern per specificare un collegamento](../cpp/using-extern-to-specify-linkage.md)