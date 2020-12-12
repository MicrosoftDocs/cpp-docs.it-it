---
description: 'Altre informazioni su: sintassi Filename-Parts'
title: Sintassi relativa ai nomi file
ms.date: 11/04/2016
helpviewer_keywords:
- syntax, filename-parts
- filename-parts syntax in NMAKE
- NMAKE program, syntax
ms.assetid: 48fe38e0-3f3b-40e6-894c-330ee775a656
ms.openlocfilehash: 436481d52324b4c638b5fa0a9840ce0d9ef654f4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97192135"
---
# <a name="filename-parts-syntax"></a>Sintassi relativa ai nomi file

La sintassi dei nomi file-parti nei comandi rappresenta i componenti del primo nome file dipendente (che può essere un dipendente implicito). I componenti filename sono l'unità, il percorso, il nome di base e l'estensione del file specificati, non così come sono presenti sul disco. Utilizzare **% s** per rappresentare il nome file completo. Utilizzare **% &#124;**[*parts*]**F** (un carattere barra verticale segue il simbolo di percentuale) per rappresentare parti del nome file, dove le *parti* possono essere pari a zero o più delle lettere seguenti, in qualsiasi ordine.

|Letter|Description|
|------------|-----------------|
|Nessuna lettera|Nome completo (uguale a **% s**)|
|**d**|Unità|
|**p**|Percorso|
|**f**|Nome file di base|
|**e**|Estensione file|

Ad esempio, se il nome del file è c:\prog.exe:

- % s verrà c:\prog.exe

- % &#124;F verrà c:\prog.exe

- % &#124;dF sarà c

- % &#124;pF sarà c:\

- % &#124;fF sarà prog

- % &#124;eF sarà exe

## <a name="see-also"></a>Vedi anche

[Comandi in un makefile](commands-in-a-makefile.md)
