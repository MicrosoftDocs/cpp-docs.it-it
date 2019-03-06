---
title: Pseudo-destinazioni
ms.date: 11/04/2016
helpviewer_keywords:
- makefiles, pseudotargets
- pseudotargets and NMAKE
- NMAKE program, pseudotargets
- timestamps, makefile pseudotargets
- NMAKE program, targets
ms.assetid: c8c479dc-0129-4186-8366-bc6251f2b494
ms.openlocfilehash: 34b2b2f0d54a6e11bdfd6e818eb08d01721d80e2
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57414840"
---
# <a name="pseudotargets"></a>Pseudo-destinazioni

Pseudo è un'etichetta usata al posto di un nome di file in una riga di dipendenza. Viene interpretato come un file che non esiste e pertanto non è aggiornata. NMAKE presuppone che il timestamp del pseudo è la più recente di tutti i relativi dipendenti. Se non sono presenti dipendenti, verrà utilizzata l'ora corrente. Se viene usato pseudo come destinazione, vengono sempre eseguiti i relativi comandi. Pseudo utilizzata come dipendente deve comparire anche come destinazione in un'altra dipendenza. Tuttavia, tale dipendenza non dovrà avere un blocco di comandi.

I nomi di pseudo seguono le regole di sintassi nome file per le destinazioni. Tuttavia, se il nome non ha un'estensione (vale a dire, non contiene un punto), è possibile superare il limite di 8 caratteri per i nomi di file e può essere fino a 256 caratteri.

## <a name="see-also"></a>Vedere anche

[Destinazioni](../build/targets.md)
