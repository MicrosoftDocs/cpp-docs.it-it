---
title: Opzioni di LINK controllate dal compilatore
ms.date: 11/04/2016
helpviewer_keywords:
- LINK tool [C++], compiler-controlled options
- linker [C++], CL compiler control
- linking [C++], affected by CL features
- cl.exe compiler [C++], features that affect linking
- cl.exe compiler [C++], controlling linker
ms.assetid: e4c03896-c99c-4599-8502-e0f4bebe69d0
ms.openlocfilehash: f631d0ebbbd9e60fe5d54aac6fb158461d3f4d38
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79440101"
---
# <a name="compiler-controlled-link-options"></a>Opzioni di LINK controllate dal compilatore

Il compilatore CL chiama automaticamente il collegamento a meno che non si specifichi l'opzione/c. CL fornisce un certo controllo sul linker tramite opzioni e argomenti della riga di comando. Nella tabella seguente sono riepilogate le funzionalità di CL che interessano il collegamento.

|Specifica CL|Azione CL che interessa il collegamento|
|----------------------|---------------------------------|
|Qualsiasi estensione di file diversa da. c,. cxx,. cpp o. def|Passa un nome di file come input al collegamento|
|*nomefile*. def|Passa/DEF:*filename*. def|
|*Numero* /f|Passa/STACK:*numero*|
|*Nome file* /FD|Passa/PDB:*filename*|
|*Nome file* /Fe|Passa/OUT:*filename*|
|*Nome file* /FM|Passa/MAP:*filename*|
|/Gy|Crea funzioni in pacchetto (COMDAT); Abilita il collegamento a livello di funzione|
|/LD|Passa/DLL|
|/LDd|Passa/DLL|
|/link|Passa il resto della riga di comando a LINK|
|/MD o/MT|Inserisce un nome di libreria predefinito nel file con estensione obj|
|/MDd o/MTd|Inserisce un nome di libreria predefinito nel file con estensione obj. Definisce il simbolo **_DEBUG**|
|/nologo|Passa/NOLOGO|
|/Zd|Passa/DEBUG|
|/Zi o/Z7|Passa/DEBUG|
|/Zl|Omette il nome della libreria predefinita dal file obj|

Per altre informazioni, vedere [Opzioni del compilatore MSVC](compiler-options.md).

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
