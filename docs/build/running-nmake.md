---
title: Esecuzione di NMAKE | Microsoft Docs
ms.custom: ''
ms.date: 09/05/2018
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- targets, building
- response files, NMAKE
- targets
- command files
- NMAKE program, targets
- NMAKE program, running
- command files, NMAKE
ms.assetid: 0421104d-8b7b-4bf3-86c1-928d9b7c1a8c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9eb3ba676da2de9790fc992b9f788963f8dcdbc1
ms.sourcegitcommit: d10a2382832373b900b1780e1190ab104175397f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/06/2018
ms.locfileid: "43894642"
---
# <a name="running-nmake"></a>Esecuzione di NMAKE

## <a name="syntax"></a>Sintassi

> **NMAKE** [*opzione* ...] [*macro* ...] [*destinazioni* ...] [**\@**<em>commandfile</em> ...]

## <a name="remarks"></a>Note

Specificata solo le compilazioni NMAKE *destinazioni* o, se non viene specificato, la prima destinazione nel makefile. La prima destinazione makefile può essere un' [pseudo](../build/pseudotargets.md) che compila le altre destinazioni. NMAKE Usa makefile specificati con l'opzione /F; Se non viene specificata l'opzione /F, Usa i file Makefile nella directory corrente. Se non viene specificato alcun makefile, Usa le regole di inferenza per compilazione da riga di comando *destinazioni*.

Il *commandfile* file di testo (o file di risposta) contiene un input della riga di comando. Altri input può precedere o seguire \@ *commandfile*. È consentito un percorso. Nelle *commandfile*, interruzioni di riga sono considerate come spazi. Racchiudere le definizioni di macro tra virgolette singole se contengono spazi.

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

[Opzioni di NMAKE](../build/nmake-options.md)  

[Tools.ini e NMAKE](../build/tools-ini-and-nmake.md)  

[Codici di uscita di NMAKE](../build/exit-codes-from-nmake.md)  

## <a name="see-also"></a>Vedere anche

[Riferimenti a NMAKE](../build/nmake-reference.md)