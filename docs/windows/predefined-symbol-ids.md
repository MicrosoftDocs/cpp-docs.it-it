---
title: ID simbolo predefiniti | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- symbols, predefined IDs
- predefined symbol IDs
ms.assetid: 91a5d610-1a04-47e8-b8a4-63ad650a90df
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: ee34744a110b31eba125e4b6cbef48207081f5d7
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42578640"
---
# <a name="predefined-symbol-ids"></a>ID di simbolo già definiti

Quando si inizia un nuovo progetto, a seconda del tipo di progetto, alcuni ID simbolo sono predefiniti per l'utilizzo. Questi ID simbolo supportano diverse librerie e tipi di progetto come MFC. Rappresentano le attività comuni che sono in genere incluse in tutte le applicazioni o azioni di dispositivi hardware, ad esempio un mouse o una stampante.

Questi ID simbolo diventano importanti quando si usano le risorse. Questi sono disponibili quando si modificano le tabelle di tasti di scelta rapida; alcuni di questi sono già associati a tasti virtuali. Sono inoltre disponibili all'utente tramite il [finestra proprietà](/visualstudio/ide/reference/properties-window). È possibile assegnare uno qualsiasi degli ID simbolo predefiniti a nuove risorse oppure è possibile assegnare tasti di scelta rapida agli ID e la funzionalità associata all'ID simbolo viene associata automaticamente alla combinazione di tasti.

Queste librerie dispongono di simboli già definiti che verranno visualizzati come parte del progetto:

- [Simboli predefiniti di MFC](../windows/mfc-predefined-symbols.md)

- [Simboli predefiniti di ATL](../windows/atl-predefined-symbols.md)

- [Simboli predefiniti di Win32](../windows/win32-predefined-symbols.md)

   > [!NOTE]
   > Simboli predefiniti sono sempre di sola lettura.

## <a name="requirements"></a>Requisiti

Win32, MFC o ATL

## <a name="see-also"></a>Vedere anche

[Simboli: identificatori di risorsa](../windows/symbols-resource-identifiers.md)