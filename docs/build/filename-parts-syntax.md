---
title: Sintassi relativa ai nomi file
ms.date: 11/04/2016
helpviewer_keywords:
- syntax, filename-parts
- filename-parts syntax in NMAKE
- NMAKE program, syntax
ms.assetid: 48fe38e0-3f3b-40e6-894c-330ee775a656
ms.openlocfilehash: 89869ccaea2a9a5c3d16762fe49b72efc462e0ee
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50552048"
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