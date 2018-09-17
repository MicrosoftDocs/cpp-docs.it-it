---
title: Dedotto dipendenti e le regole | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- rules, inferred
- inferred dependents in NMAKE
- inferred rules in NMAKE
- dependents, inferred
ms.assetid: 9381e74a-53d9-445c-836d-0ff7ef6112d9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c13ae7784ff40b39642ce26fd062a1aab80f2d4c
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45707551"
---
# <a name="inferred-dependents-and-rules"></a>Dipendenti dedotti e regole

Se esiste una regola di inferenza applicabile, si presuppone un dipendente dedotto per una destinazione. Se viene applicata una regola:

- *toext* corrisponde all'estensione della destinazione.

- *fromext* corrispondenze l'estensione di un file con nome di base di destinazione e che esiste nella directory correnti o specificate.

- *fromext* è in [. I SUFFISSI](../build/dot-directives.md); nessun altro *fromext* in una regola di corrispondenza ha un livello più elevato **. I SUFFISSI** priorità.

- Nessun dipendente esplicito ha un livello più elevato **. I SUFFISSI** priorità.

Dipendenti dedotti possono causare effetti collaterali imprevisti. Se i blocchi di descrizione della destinazione contiene i comandi, vengono eseguiti tali comandi invece i comandi NMAKE nella regola.

## <a name="see-also"></a>Vedere anche

[Regole di inferenza](../build/inference-rules.md)