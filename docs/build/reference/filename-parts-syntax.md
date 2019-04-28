---
title: Sintassi relativa ai nomi file
ms.date: 11/04/2016
helpviewer_keywords:
- syntax, filename-parts
- filename-parts syntax in NMAKE
- NMAKE program, syntax
ms.assetid: 48fe38e0-3f3b-40e6-894c-330ee775a656
ms.openlocfilehash: d5e815dcb8a424d309362e004d1de4c039dc968b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62292653"
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

- %&#124;pF will be c:\

- %&#124;fF saranno prog

- %&#124;Entity Framework sarà exe

## <a name="see-also"></a>Vedere anche

[Comandi di un makefile](commands-in-a-makefile.md)
