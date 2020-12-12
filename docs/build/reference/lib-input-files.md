---
description: 'Altre informazioni su: file di input LIB'
title: File di input LIB
ms.date: 11/04/2016
helpviewer_keywords:
- input files, LIB
ms.assetid: e1236f0d-cd90-446b-b900-f311f456085c
ms.openlocfilehash: f40cba91f0772e0073daca20a8f2093f3eec8aec
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97199545"
---
# <a name="lib-input-files"></a>File di input LIB

I file di input previsti da LIB dipendono dalla modalità in cui viene utilizzata, come illustrato nella tabella seguente.

|Mode|Input|
|----------|-----------|
|Impostazione predefinita (compilazione o modifica di una libreria)|File oggetto COFF (. obj), librerie COFF (lib), oggetti OMF (Object Model Format) a 32 bit (file con estensione obj)|
|Estrazione di un membro con/EXTRACT|Libreria COFF (lib)|
|Compilazione di un file di esportazione e della libreria di importazione con/DEF|File di definizione moduli (con estensione def), file oggetto COFF (. obj), librerie COFF (lib), file oggetto OMF a 32 bit (obj)|

> [!NOTE]
> Le librerie OMF create dalla versione a 16 bit di LIB non possono essere usate come input per la versione a 32 bit di LIB.

## <a name="see-also"></a>Vedi anche

[Cenni preliminari su LIB](overview-of-lib.md)
