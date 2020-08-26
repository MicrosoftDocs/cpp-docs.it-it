---
title: /DYNAMICBASE
ms.date: 06/12/2018
f1_keywords:
- /dynamicbase
helpviewer_keywords:
- -DYNAMICBASE editbin option
- DYNAMICBASE editbin option
- /DYNAMICBASE editbin option
ms.assetid: edb3df90-7b07-42fb-a94a-f5a4c1d325d6
ms.openlocfilehash: 5451e3d16883eef225aebc3c420e6c0700947ad6
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88842584"
---
# <a name="dynamicbase"></a>/DYNAMICBASE

Specifica se generare un'immagine eseguibile che può essere ribasata in modo casuale in fase di caricamento utilizzando la funzionalità ASLR (Address Space Layout randomation) di Windows disponibile per la prima volta in Windows Vista.

## <a name="syntax"></a>Sintassi

> **/DynamicBase**[**: No**]

## <a name="remarks"></a>Osservazioni

L'opzione **/DynamicBase** modifica l'intestazione di un' *immagine eseguibile*, un file con estensione dll o exe, per indicare se l'applicazione deve essere ribasata in modo casuale in fase di caricamento e consente la sequenza casuale di allocazione degli indirizzi virtuali, che influiscono sulla posizione di memoria virtuale di heap, stack e altre allocazioni del sistema operativo. L'opzione **/DynamicBase** si applica alle immagini a 32 bit e a 64 bit. ASLR è supportato in Windows Vista e nei sistemi operativi successivi. L'opzione viene ignorata dai sistemi operativi precedenti.

Per impostazione predefinita, **/DynamicBase** è abilitato. Per disabilitare questa opzione, usare **/DynamicBase: No**. L'opzione **/DynamicBase** è obbligatoria affinché l'opzione [/HIGHENTROPYVA](highentropyva-support-64-bit-aslr.md) abbia effetto.

## <a name="see-also"></a>Vedere anche

- [Opzioni di EDITBIN)](editbin-options.md)
- [Difese di sicurezza software ISV di Windows](/previous-versions/bb430720(v=msdn.10))
