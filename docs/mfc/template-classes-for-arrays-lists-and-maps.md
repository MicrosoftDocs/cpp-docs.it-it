---
title: Modello classi per le matrici, elenchi e mappe | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.classes.template
dev_langs:
- C++
helpviewer_keywords:
- arrays [MFC], classes
- template classes [MFC], for arrays/lists and maps
- list classes [MFC]
- map classes [MFC]
- template classes [MFC]
ms.assetid: a8331c4b-068a-48f8-a629-b8449601e121
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 218c5344ad8cdc1e63f3337cd031ac707fa7b5ef
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46375536"
---
# <a name="template-classes-for-arrays-lists-and-maps"></a>Classi modello per matrici, elenchi e mappe

Queste classi di raccolta sono modelli i cui parametri determinano i tipi di oggetti archiviati nelle funzioni di aggregazione. Il `CArray`, `CMap`, e `CList` classi usano funzioni di supporto globale che in genere devono essere personalizzate. Per altre informazioni su queste funzioni helper, vedere [supporti delle classi Collection](../mfc/reference/collection-class-helpers.md). Le classi di puntatore tipizzato sono wrapper per le altre classi di libreria di classi. Usando questi wrapper, eseguire l'integrazione del compilatore-controllo dei tipi che consentono di evitare errori. Per altre informazioni sull'uso di queste classi, vedere [raccolte](../mfc/collections.md).

Queste classi forniscono modelli che è possibile usare per creare matrici, elenchi e mappe usando qualsiasi tipo desiderato.

[CArray](../mfc/reference/carray-class.md)<br/>
Classe di modello per rendere le matrici di tipi arbitrari.

[CList](../mfc/reference/clist-class.md)<br/>
Classe di modello per la creazione di elenchi di tipi arbitrari.

[CMap](../mfc/reference/cmap-class.md)<br/>
Classe di modello per rendere le mappe con tipi di chiave e valore arbitrari.

[CTypedPtrArray](../mfc/reference/ctypedptrarray-class.md)<br/>
Classe di modello per matrici indipendenti dai tipi di puntatori.

[CTypedPtrList](../mfc/reference/ctypedptrlist-class.md)<br/>
Classe di modello per gli elenchi indipendente dai tipi di puntatori.

[CTypedPtrMap](../mfc/reference/ctypedptrmap-class.md)<br/>
Classe di modello per le mappe indipendente dai tipi con i puntatori.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../mfc/class-library-overview.md)

