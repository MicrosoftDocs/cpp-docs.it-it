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
ms.openlocfilehash: b2ff9929de74d99fbc45e4f4ff38fd6b939697bc
ms.sourcegitcommit: 31a443c9998cf5cfbaff00fcf815b133f55b2426
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/14/2020
ms.locfileid: "86373827"
---
# <a name="highentropyva"></a>/HIGHENTROPYVA

Specifica se l'immagine eseguibile supporta un'entropia elevata a 64 bit per ASLR (Address Space Layout Randomization).

## <a name="syntax"></a>Sintassi

> **/HIGHENTROPYVA**[**: No**]

## <a name="remarks"></a>Commenti

Questa opzione modifica l'intestazione di un' *immagine eseguibile*, un file con estensione dll o exe, per indicare se è supportato ASLR con indirizzi a 64 bit. Quando questa opzione è impostata su un eseguibile e su tutti i moduli che da esso dipendono, un sistema operativo che supporta ASLR a 64 bit può impostare i segmenti dell'immagine eseguibile in fase di caricamento tramite l'uso di indirizzi causali in uno spazio di indirizzamento virtuale a 64 bit. Questo ampio spazio di indirizzi rende più difficile a un utente non autorizzato indovinare una particolare posizione di un'area della memoria.

Per impostazione predefinita, il linker Abilita **/HIGHENTROPYVA** per le immagini eseguibili a 64 bit. Questa opzione richiede [/LARGEADDRESSAWARE](largeaddressaware.md), che è anche abilitata per impostazione predefinita per le immagini a 64 bit. **/HIGHENTROPYVA** non è applicabile a immagini eseguibili a 32 bit, in cui l'opzione viene ignorata. Per disabilitare in modo esplicito questa opzione, usare **/HIGHENTROPYVA: No**. Affinché questa opzione abbia effetto, è necessario impostare anche l'opzione [/DynamicBase](dynamicbase.md) .

## <a name="see-also"></a>Vedere anche

- [Opzioni di EDITBIN)](editbin-options.md)
- [/DYNAMICBASE](dynamicbase.md)
- [Difese di sicurezza software ISV di Windows](https://docs.microsoft.com/previous-versions/bb430720(v=msdn.10))
