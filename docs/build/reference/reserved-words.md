---
description: 'Altre informazioni su: parole riservate'
title: Parole riservate
ms.date: 11/04/2016
f1_keywords:
- code
- CONFORMING
- DISCARDABLE
- Description
- base
- APPLOADER
- Data
- DYNAMIC
- DEV386
helpviewer_keywords:
- .def files [C++], reserved words
- def files [C++], reserved words
- linker [C++], reserved words
- reserved words [C++]
ms.assetid: 9b9f49e5-0739-45ab-a37e-81e3915ceb25
ms.openlocfilehash: 6d5c5971d8d01dffa1dcd1e7f6a5228fb239d4dc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97225193"
---
# <a name="reserved-words"></a>Parole riservate

Le parole seguenti sono riservate al linker. Questi nomi possono essere utilizzati come argomenti nelle [istruzioni di definizione dei moduli](module-definition-dot-def-files.md) solo se il nome è racchiuso tra virgolette doppie ("").

:::row:::
   :::column span="":::
      **`APPLOADER`**<sup>1</sup>\
      **`BASE`**\
      **`CODE`**\
      **`CONFORMING`**\
      **`DATA`**\
      **`DESCRIPTION`**\
      **`DEV386`**\
      **`DISCARDABLE`**\
      **`DYNAMIC`**\
      **`EXECUTE-ONLY`**\
      **`EXECUTEONLY`**\
      **`EXECUTEREAD`**\
      **`EXETYPE`**\
      **`EXPORTS`**\
      **`FIXED`**<sup>1</sup>
   :::column-end:::
   :::column span="":::
      **`FUNCTIONS`**<sup>2</sup>\
      **`HEAPSIZE`**\
      **`IMPORTS`**\
      **`IMPURE`**<sup>1</sup>\
      **`INCLUDE`**<sup>2</sup>\
      **`INITINSTANCE`**<sup>2</sup>\
      **`IOPL`**\
      **`LIBRARY`**<sup>1</sup>\
      **`LOADONCALL`**<sup>1</sup>\
      **`LONGNAMES`**<sup>2</sup>\
      **`MOVABLE`**<sup>1</sup>\
      **`MOVEABLE`**<sup>1</sup>\
      **`MULTIPLE`**\
      **`NAME`**\
      **`NEWFILES`**<sup>2</sup>
   :::column-end:::
   :::column span="":::
      **`NODATA`**<sup>1</sup>\
      **`NOIOPL`**<sup>1</sup>\
      **`NONAME`**\
      **`NONCONFORMING`**<sup>1</sup>\
      **`NONDISCARDABLE`**\
      **`NONE`**\
      **`NONSHARED`**\
      **`NOTWINDOWCOMPAT`**<sup>1</sup>\
      **`OBJECTS`**\
      **`OLD`**<sup>1</sup>\
      **`PRELOAD`**\
      **`PRIVATE`**\
      **`PROTMODE`**<sup>2</sup>\
      **`PURE`**<sup>1</sup>\
      **`READONLY`**
   :::column-end:::
   :::column span="":::
      **`READWRITE`**\
      **`REALMODE`**<sup>1</sup>\
      **`RESIDENT`**\
      **`RESIDENTNAME`**<sup>1</sup>\
      **`SECTIONS`**\
      **`SEGMENTS`**\
      **`SHARED`**\
      **`SINGLE`**\
      **`STACKSIZE`**\
      **`STUB`**\
      **`VERSION`**\
      **`WINDOWAPI`**\
      **`WINDOWCOMPAT`**\
      **`WINDOWS`**
   :::column-end:::
:::row-end:::

<sup>1</sup> il linker genera un avviso ("ignorato") quando rileva questo termine. Tuttavia, la parola è ancora riservata.

<sup>2</sup> il linker ignora questa parola ma non emette alcun avviso.

## <a name="see-also"></a>Vedi anche

- [Informazioni di riferimento sul linker MSVC](linking.md)
- [Opzioni del linker MSVC](linker-options.md)
