---
title: Macro di ricorsione
description: Descrive le macro utilizzate per chiamare NMAKE nelle sessioni ricorsive.
ms.date: 11/20/2019
helpviewer_keywords:
- NMAKE program, recursion macros
- recursion macros
- macros, recursion
ms.assetid: c53e5ae7-619e-46b1-bdc2-86d8c7798b1d
no-loc:
- MAKE
- MAKEDIR
- MAKEFLAGS
ms.openlocfilehash: f2bda23cb079e4fd7d12cea3598d33b3625c088d
ms.sourcegitcommit: 069e3833bd821e7d64f5c98d0ea41fc0c5d22e53
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/21/2019
ms.locfileid: "74303151"
---
# <a name="recursion-macros"></a>Macro di ricorsione

Usare le macro di ricorsione per chiamare NMAKE in modo ricorsivo. Le sessioni ricorsive ereditano le macro della riga di comando e delle variabili di ambiente e le informazioni su Tools. ini. Non ereditano regole di inferenza definite da makefile o `.SUFFIXES` e `.PRECIOUS` specifiche. Esistono tre modi per passare le macro a una sessione NMAKE ricorsiva: impostare una variabile di ambiente con un comando :::no-loc text="SET"::: prima della chiamata ricorsiva. Definire una macro nel comando per la chiamata ricorsiva. In alternativa, definire una macro in Tools. ini.

|Macro|Definizione|
|-----------|----------------|
|**MAKE**|Comando utilizzato originariamente per richiamare NMAKE.<br /><br /> La macro `$(MAKE)` fornisce il percorso completo di NMAKE. exe.|
|**MAKEDIR**|Directory corrente in cui è stato richiamato NMAKE.|
|**MAKEFLAGS**|Opzioni attualmente attive. Utilizzare come `/$(MAKEFLAGS)`. L'opzione **/f** non è inclusa.|

## <a name="see-also"></a>Vedere anche

[Macro speciali di NMAKE](special-nmake-macros.md)
