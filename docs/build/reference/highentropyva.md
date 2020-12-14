---
description: Altre informazioni su:/HIGHENTROPYVA
title: /HIGHENTROPYVA
ms.date: 06/12/2018
f1_keywords:
- /HIGHENTROPYVA
helpviewer_keywords:
- HIGHENTROPYVA editbin option
- -HIGHENTROPYVA editbin option
- /HIGHENTROPYVA editbin option
ms.assetid: ef4b7c63-440d-40ca-b39d-edefb3217505
ms.openlocfilehash: ae7851bb9160601ef8732120dca12132dbfdee2d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97200039"
---
# <a name="highentropyva"></a>/HIGHENTROPYVA

Specifica se l'immagine eseguibile supporta un'entropia elevata a 64 bit per ASLR (Address Space Layout Randomization).

## <a name="syntax"></a>Sintassi

> **`/HIGHENTROPYVA`**[**`:NO`**]

## <a name="remarks"></a>Commenti

Questa opzione modifica l'intestazione di un file di *immagine eseguibile* (ad esempio, un *`.dll`* *`.exe`* file o) per indicare il supporto per l'indirizzo ASLR a 64 bit. Per avere un effetto, impostare l'opzione sul file eseguibile e su tutti i moduli da cui dipende. I sistemi operativi che supportano ASLR a 64 bit possono riassegnare i segmenti dell'immagine eseguibile in fase di caricamento usando indirizzi virtuali a 64 bit casuali. Questo ampio spazio di indirizzi rende più difficile a un utente non autorizzato indovinare una particolare posizione di un'area della memoria.

Per impostazione predefinita, il linker Abilita le **`/HIGHENTROPYVA`** immagini eseguibili a 64 bit. Questa opzione richiede sia [`/DYNAMICBASE`](dynamicbase.md) [`/LARGEADDRESSAWARE`](largeaddressaware.md) che, che sono abilitate per impostazione predefinita anche per le immagini a 64 bit. **`/HIGHENTROPYVA`** non è applicabile a immagini eseguibili a 32 bit, in cui l'opzione viene ignorata. Per disabilitare in modo esplicito questa opzione, usare **`/HIGHENTROPYVA:NO`** .

## <a name="see-also"></a>Vedi anche

[Opzioni di EDITBIN)](editbin-options.md)\
[`/DYNAMICBASE`](dynamicbase.md)\
[`/LARGEADDRESSAWARE`](largeaddressaware.md)\
[Difese di sicurezza software ISV di Windows](/previous-versions/bb430720(v=msdn.10))
