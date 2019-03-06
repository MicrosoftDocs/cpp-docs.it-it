---
title: Compiler-Controlled LINK Options
ms.date: 11/04/2016
f1_keywords:
- link
helpviewer_keywords:
- LINK tool [C++], compiler-controlled options
- linker [C++], CL compiler control
- linking [C++], affected by CL features
- cl.exe compiler [C++], features that affect linking
- cl.exe compiler [C++], controlling linker
ms.assetid: e4c03896-c99c-4599-8502-e0f4bebe69d0
ms.openlocfilehash: 3fed75b18ead80b8367eb1254793d632629efeff
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57426706"
---
# <a name="compiler-controlled-link-options"></a>Compiler-Controlled LINK Options

Il compilatore CL chiama automaticamente collegamento a meno che non si specifica l'opzione/c. CL consente di controllare il linker attraverso le opzioni della riga di comando e argomenti. La tabella seguente riepiloga le funzionalità di CL che hanno effetto sul collegamento.

|Specifica di CL|Azione di CL che influisce sul collegamento|
|----------------------|---------------------------------|
|Qualsiasi estensione del nome file diverso da c,. cxx,. cpp o. def|Passa un nome di file come input per collegamento|
|*filename*.def|/DEF passa:*filename*. def|
|/F*number*|Passa /STACK:*numero*|
|/Fd*filename*|Passa /PDB:*nomefile*|
|/Fe*filename*|Passa /out:*nomefile*|
|/Fm*filename*|Passa /MAP:*nomefile*|
|/Gy|Crea funzioni incluse nel pacchetto (COMDAT). consente il collegamento a livello di funzione|
|/LD|Passa /DLL|
|/LDd|Passa /DLL|
|/link|Passa resto della riga di comando di collegamento|
|/MD o /MT|Inserisce un nome della libreria predefinita nel file con estensione obj|
|/ /MTd o /MDd.|Inserisce un nome della libreria predefinita nel file con estensione obj. Definisce il simbolo **debug**|
|/nologo|Passa /NOLOGO|
|/Zd|Passa /debug.|
|/Zi o/Z7|Passa /debug.|
|/Zl|Omette il nome di libreria predefinita dal file con estensione obj|

Per altre informazioni, vedere [Opzioni del compilatore](../../build/reference/compiler-options.md).

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)
