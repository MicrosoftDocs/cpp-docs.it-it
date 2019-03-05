---
title: Classi modello per matrici, elenchi e mappe
ms.date: 11/04/2016
f1_keywords:
- vc.classes.template
helpviewer_keywords:
- arrays [MFC], classes
- template classes [MFC], for arrays/lists and maps
- list classes [MFC]
- map classes [MFC]
- template classes [MFC]
ms.assetid: a8331c4b-068a-48f8-a629-b8449601e121
ms.openlocfilehash: be5639802f6f4a11a29326efd71d9634797c9f5c
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57267004"
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
