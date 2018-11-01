---
title: Macro di ricorsione
ms.date: 11/04/2016
helpviewer_keywords:
- NMAKE program, recursion macros
- recursion macros
- macros, recursion
ms.assetid: c53e5ae7-619e-46b1-bdc2-86d8c7798b1d
ms.openlocfilehash: 0005a4be0422ed83816eabc7b55932a81441ae25
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50451259"
---
# <a name="recursion-macros"></a>Macro di ricorsione

Usare le macro di ricorsione per chiamare in modo ricorsivo NMAKE. Le sessioni ricorsiva ereditano macro della riga di comando e variabili di ambiente e informazioni Tools. ini. Mentre non ereditano regole di inferenza definite nel makefile o **. I SUFFISSI** e **. PREZIOSE** specifiche. Per passare una sessione NMAKE ricorsiva delle macro, impostare una variabile di ambiente con SET prima della chiamata ricorsiva, definire una macro nel comando per la chiamata ricorsiva o definire una macro in Tools. ini.

|Macro|Definizione|
|-----------|----------------|
|**RENDERE**|Comando usato originariamente per richiamare NMAKE.<br /><br /> La macro $ (Make) fornisce il percorso completo di nmake.exe.|
|**MAKEDIR**|Directory corrente quando è stata richiamata NMAKE.|
|**MAKEFLAGS**|Opzioni attualmente in vigore. Usare come `/$(MAKEFLAGS)`.  Si noti che, /F non sono incluso.|

## <a name="see-also"></a>Vedere anche

[Macro speciali di NMAKE](../build/special-nmake-macros.md)