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
ms.openlocfilehash: 90d3c868eaab85e3b1a2a416c9aa14b0e27ec8f9
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62270224"
---
# <a name="highentropyva"></a>/HIGHENTROPYVA

Specifica se l'immagine eseguibile supporta un'entropia elevata a 64 bit per ASLR (Address Space Layout Randomization).

## <a name="syntax"></a>Sintassi

> **/HIGHENTROPYVA**[**:NO**]

## <a name="remarks"></a>Note

Questa opzione Modifica l'intestazione di un *immagine eseguibile*, un file con estensione dll o .exe, per indicare se ASLR con indirizzamento a 64 bit è supportato. Quando questa opzione è impostata su un eseguibile e su tutti i moduli che da esso dipendono, un sistema operativo che supporta ASLR a 64 bit può impostare i segmenti dell'immagine eseguibile in fase di caricamento tramite l'uso di indirizzi causali in uno spazio di indirizzamento virtuale a 64 bit. Questo ampio spazio di indirizzi rende più difficile a un utente non autorizzato indovinare una particolare posizione di un'area della memoria.

Per impostazione predefinita, il linker consente **/HIGHENTROPYVA** per le immagini eseguibili a 64 bit. Questa opzione richiede [/LARGEADDRESSAWARE](largeaddressaware.md), cui è abilitata per impostazione predefinita per le immagini a 64 bit. **/ HIGHENTROPYVA** non è applicabile a immagini eseguibili a 32 bit, in cui l'opzione viene ignorata. Per disabilitare in modo esplicito questa opzione, usare **/highentropyva: No**. Per questa opzione abbia effetto, la [/DYNAMICBASE](dynamicbase.md) opzione deve anche essere impostata.

## <a name="see-also"></a>Vedere anche

- [Opzioni di EDITBIN](editbin-options.md)
- [/DYNAMICBASE](dynamicbase.md)
- [Difese di sicurezza Software ISV di Windows](https://msdn.microsoft.com/library/bb430720.aspx)
