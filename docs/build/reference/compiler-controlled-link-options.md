---
title: Opzioni di LINK controllate dal compilatore | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- link
dev_langs:
- C++
helpviewer_keywords:
- LINK tool [C++], compiler-controlled options
- linker [C++], CL compiler control
- linking [C++], affected by CL features
- cl.exe compiler [C++], features that affect linking
- cl.exe compiler [C++], controlling linker
ms.assetid: e4c03896-c99c-4599-8502-e0f4bebe69d0
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ee952fe5152d98aa33c4ef7e98f8a2eb3ef077be
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45726427"
---
# <a name="compiler-controlled-link-options"></a>Compiler-Controlled LINK Options

Il compilatore CL chiama automaticamente collegamento a meno che non si specifica l'opzione/c. CL consente di controllare il linker attraverso le opzioni della riga di comando e argomenti. La tabella seguente riepiloga le funzionalità di CL che hanno effetto sul collegamento.

|Specifica di CL|Azione di CL che influisce sul collegamento|
|----------------------|---------------------------------|
|Qualsiasi estensione del nome file diverso da c,. cxx,. cpp o. def|Passa un nome di file come input per collegamento|
|*nome del file*. def|/DEF passa:*filename*. def|
|/F*numero*|Passa /STACK:*numero*|
|/FD*nomefile*|Passa /PDB:*nomefile*|
|/FE*nomefile*|Passa /out:*nomefile*|
|/FM*nomefile*|Passa /MAP:*nomefile*|
|/Gy|Crea funzioni incluse nel pacchetto (COMDAT). consente il collegamento a livello di funzione|
|/LD|Passa /DLL|
|/LDd|Passa /DLL|
|/link|Passa resto della riga di comando di collegamento|
|/MD o /MT|Inserisce un nome della libreria predefinita nel file con estensione obj|
|/ /MTd o /MDd.|Inserisce un nome della libreria predefinita nel file con estensione obj. Definisce il simbolo **debug**|
|/nologo|Passa /NOLOGO|
|/Zd.|Passa /debug.|
|/Zi o/Z7|Passa /debug.|
|/Zl|Omette il nome di libreria predefinita dal file con estensione obj|

Per altre informazioni, vedere [Opzioni del compilatore](../../build/reference/compiler-options.md).

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)