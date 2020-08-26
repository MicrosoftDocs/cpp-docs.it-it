---
title: /HIGHENTROPYVA
ms.date: 06/12/2018
f1_keywords:
- /HIGHENTROPYVA
helpviewer_keywords:
- HIGHENTROPYVA editbin option
- -HIGHENTROPYVA editbin option
- /HIGHENTROPYVA editbin option
ms.assetid: ef4b7c63-440d-40ca-b39d-edefb3217505
ms.openlocfilehash: 80e34a3f57974e1af6afb65196697cce9aa344b1
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88834999"
---
# <a name="highentropyva"></a>/HIGHENTROPYVA

Specifica se l'immagine eseguibile supporta un'entropia elevata a 64 bit per ASLR (Address Space Layout Randomization).

## <a name="syntax"></a>Sintassi

> **`/HIGHENTROPYVA`**[**`:NO`**]

## <a name="remarks"></a>Osservazioni

Questa opzione modifica l'intestazione di un file di *immagine eseguibile* (ad esempio, un *`.dll`* *`.exe`* file o) per indicare il supporto per l'indirizzo ASLR a 64 bit. Per avere un effetto, impostare l'opzione sul file eseguibile e su tutti i moduli da cui dipende. I sistemi operativi che supportano ASLR a 64 bit possono riassegnare i segmenti dell'immagine eseguibile in fase di caricamento usando indirizzi virtuali a 64 bit casuali. Questo ampio spazio di indirizzi rende più difficile a un utente non autorizzato indovinare una particolare posizione di un'area della memoria.

Per impostazione predefinita, il linker Abilita le **`/HIGHENTROPYVA`** immagini eseguibili a 64 bit. Questa opzione richiede sia [`/DYNAMICBASE`](dynamicbase.md) [`/LARGEADDRESSAWARE`](largeaddressaware.md) che, che sono abilitate per impostazione predefinita anche per le immagini a 64 bit. **`/HIGHENTROPYVA`** non è applicabile a immagini eseguibili a 32 bit, in cui l'opzione viene ignorata. Per disabilitare in modo esplicito questa opzione, usare **`/HIGHENTROPYVA:NO`** .

## <a name="see-also"></a>Vedere anche

[Opzioni di EDITBIN)](editbin-options.md)\
[`/DYNAMICBASE`](dynamicbase.md)\
[`/LARGEADDRESSAWARE`](largeaddressaware.md)\
[Difese di sicurezza software ISV di Windows](/previous-versions/bb430720(v=msdn.10))
