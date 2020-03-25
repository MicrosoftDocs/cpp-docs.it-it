---
title: ID di simbolo già definiti
ms.date: 02/14/2019
helpviewer_keywords:
- symbols [C++], predefined IDs
- predefined symbol IDs
ms.assetid: 91a5d610-1a04-47e8-b8a4-63ad650a90df
ms.openlocfilehash: 8f7fcba864f4e1a47d217d684b87c257503aeb13
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80215163"
---
# <a name="predefined-symbol-ids"></a>ID di simbolo già definiti

Quando si inizia un nuovo progetto, a seconda del tipo di progetto, alcuni ID simbolo sono predefiniti per l'utilizzo. Questi ID simbolo supportano diverse librerie e tipi di progetto come MFC. Rappresentano le attività comuni che sono in genere incluse in tutte le applicazioni o azioni di dispositivi hardware, ad esempio un mouse o una stampante.

Questi ID simbolo diventano importanti quando si usano le risorse. Sono disponibili quando si modificano le tabelle dei tasti di scelta rapida e alcune di esse sono già associate alle chiavi virtuali. Sono disponibili anche tramite il [finestra Proprietà](/visualstudio/ide/reference/properties-window). È possibile assegnare gli ID simbolo predefiniti a nuove risorse oppure è possibile assegnare tasti di scelta rapida a tali ID e la funzionalità associata all'ID simbolo viene associata automaticamente a tale combinazione di tasti.

Le librerie hanno simboli predefiniti che verranno visualizzati come parte del progetto:

- [Simboli predefiniti di ATL](../windows/atl-predefined-symbols.md)

- [Simboli predefiniti di MFC](../windows/mfc-predefined-symbols.md)

- [Simboli predefiniti di Win32](../windows/win32-predefined-symbols.md)

> [!NOTE]
> Simboli predefiniti sono sempre di sola lettura.

## <a name="requirements"></a>Requisiti

Win32, MFC o ATL

## <a name="see-also"></a>Vedere anche

[Identificatori di risorsa (simboli)](../windows/symbols-resource-identifiers.md)<br/>
[Procedura: creare simboli](../windows/creating-new-symbols.md)<br/>
[Procedura: gestire i simboli](../windows/changing-a-symbol-or-symbol-name-id.md)<br/>
