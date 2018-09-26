---
title: Naked (C) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- naked keyword [C], storage-class attribute
- naked keyword [C]
- prolog code
- epilog code
ms.assetid: 23b1209b-93ba-46ad-a60f-2327c1933eaf
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: dd6665bafb0041989e99a3a766204555f969d16c
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46062150"
---
# <a name="naked-c"></a>Naked (C)

**Sezione specifica Microsoft**

L'attributo della classe di archiviazione naked è un'estensione specifica di Microsoft per il linguaggio C. Per le funzioni dichiarate con l'attributo della classe di archiviazione naked, il compilatore genera codice senza codice di epilogo e di prologo. Le funzioni naked sono utili quando è necessario scrivere le proprie sequenze di codice di epilogo o di prologo utilizzando codice assembler inline. Le funzioni con attributo naked sono utili per la scrittura di driver di dispositivi virtuali.

Per informazioni specifiche sull'uso dell'attributo naked, vedere [Funzioni naked](../c-language/naked-functions.md).

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Attributi di classi di archiviazione estesi C](../c-language/c-extended-storage-class-attributes.md)