---
title: Naked (C)
ms.date: 11/04/2016
helpviewer_keywords:
- naked keyword [C], storage-class attribute
- naked keyword [C]
- prolog code
- epilog code
ms.assetid: 23b1209b-93ba-46ad-a60f-2327c1933eaf
ms.openlocfilehash: 519d7bceb700e9862f0d0025b755cf28fb0fbc0c
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62325780"
---
# <a name="naked-c"></a>Naked (C)

**Specifico di Microsoft**

L'attributo della classe di archiviazione naked è un'estensione specifica di Microsoft per il linguaggio C. Per le funzioni dichiarate con l'attributo della classe di archiviazione naked, il compilatore genera codice senza codice di epilogo e di prologo. Le funzioni naked sono utili quando è necessario scrivere le proprie sequenze di codice di epilogo o di prologo utilizzando codice assembler inline. Le funzioni con attributo naked sono utili per la scrittura di driver di dispositivi virtuali.

Per informazioni specifiche sull'uso dell'attributo naked, vedere [Funzioni naked](../c-language/naked-functions.md).

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Attributi di classi di archiviazione estesi C](../c-language/c-extended-storage-class-attributes.md)
