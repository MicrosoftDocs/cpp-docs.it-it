---
title: Configurare Visual C++ per processori ARM | Microsoft Docs
ms.custom: ''
ms.date: 07/11/2018
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 3d95f221-656a-480d-9651-9ad263895747
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: fbdf882367deb34570dd5b5ebb1b4001be739297
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46373857"
---
# <a name="configure-visual-c-for-arm-processors"></a>Configurare Visual C++ per processori ARM

Questa sezione della documentazione descrive come usare gli strumenti di compilazione di Visual C++ per l'hardware ARM.

## <a name="in-this-section"></a>In questa sezione

[Panoramica delle convenzioni ABI ARM](../build/overview-of-arm-abi-conventions.md)<br/>
Illustra l'interfaccia binaria dell'applicazione usata da Windows on ARM per l'uso dei registri, le convenzioni di chiamata e la gestione delle eccezioni.

[Panoramica delle convenzioni ABI ARM64](../build/arm64-windows-abi-conventions.md)<br/>
Descrive l'interfaccia applicativa binaria utilizzata da Windows in ARM64 per l'utilizzo di registro, convenzioni di chiamata e la gestione delle eccezioni.

[Problemi comuni relativi alla migrazione di Visual C++ ARM](../build/common-visual-cpp-arm-migration-issues.md)<br/>
Descrive gli elementi del codice C++ generalmente ritenuti portabili tra le architetture ma che in ARM determinano risultati diversi rispetto a quanto avviene per le piattaforme x86 e x64.

[Gestione delle eccezioni ARM](../build/arm-exception-handling.md)<br/>
Descrive lo schema di codifica per la rimozione dello stack durante la gestione strutturata delle eccezioni in Windows on ARM.

[Gestione delle eccezioni ARM64](../build/arm64-exception-handling.md)<br/>
Descrive lo schema di codifica per la rimozione dello stack durante la gestione delle eccezioni strutturata in Windows in ARM64.

## <a name="related-sections"></a>Sezioni correlate

[Intrinseci ARM](../intrinsics/arm-intrinsics.md)<br/>
Illustra il compilatore intrinseco per i processori che usano l'architettura ARM.
