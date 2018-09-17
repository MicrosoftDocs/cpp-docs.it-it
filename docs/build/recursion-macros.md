---
title: Macro di ricorsione | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- NMAKE program, recursion macros
- recursion macros
- macros, recursion
ms.assetid: c53e5ae7-619e-46b1-bdc2-86d8c7798b1d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f91a5f327686a522608b6eec9fd7106cbab00028
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45702040"
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