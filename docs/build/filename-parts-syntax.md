---
title: Sintassi relativa ai nomi file | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- syntax, filename-parts
- filename-parts syntax in NMAKE
- NMAKE program, syntax
ms.assetid: 48fe38e0-3f3b-40e6-894c-330ee775a656
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5bf7a9685face739059c4b947a5796cc0a28950a
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45703170"
---
# <a name="filename-parts-syntax"></a>Sintassi relativa ai nomi file

Sintassi relativa ai nomi file nei comandi rappresenta i componenti del nome del primo dipendente file (che può essere un dipendente implicito). Nome file componenti sono unità del file, percorso, nome di base ed estensione come specificato, non quelli presenti sul disco. Uso **%s** per rappresentare il nome completo del file. Uso **%&#124;**[*parti*]**F** (una barra verticale carattere segue il simbolo di percentuale) per rappresentare parti del nome del file, dove *parti*può essere zero o più lettere seguenti, in qualsiasi ordine.

|Lettera|Descrizione|
|------------|-----------------|
|Senza lettera|Nome completo (equivale **%s**)|
|**d**|Unità|
|**p**|Path|
|**f**|Nome file di base|
|**e**|Estensione di file|

Ad esempio, se il nome del file è c:\prog.exe:

- %s saranno c:\prog.exe

- %&#124;F saranno c:\prog.exe

- %&#124;dF saranno c

- %&#124;pF saranno c:\

- %&#124;fF saranno prog

- %&#124;Entity Framework sarà exe

## <a name="see-also"></a>Vedere anche

[Comandi di un makefile](../build/commands-in-a-makefile.md)