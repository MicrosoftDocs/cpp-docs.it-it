---
description: 'Altre informazioni su: classi modello per matrici, elenchi e mappe'
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
ms.openlocfilehash: 6a63614988953cfe736ec98df1756fb76ffb9d32
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97216275"
---
# <a name="template-classes-for-arrays-lists-and-maps"></a>Classi modello per matrici, elenchi e mappe

Queste classi di raccolta sono modelli i cui parametri determinano i tipi degli oggetti archiviati nelle aggregazioni. Le `CArray` `CMap` classi, e `CList` usano funzioni helper globali che in genere devono essere personalizzate. Per ulteriori informazioni su queste funzioni helper, vedere [helper della classe Collection](../mfc/reference/collection-class-helpers.md). Le classi del puntatore tipizzato sono wrapper per le altre classi nella libreria di classi. Usando questi wrapper, si integra il controllo dei tipi del compilatore per evitare errori. Per ulteriori informazioni sull'utilizzo di queste classi, vedere [Collections](../mfc/collections.md).

Queste classi forniscono modelli che è possibile usare per creare matrici, elenchi e mappe usando qualsiasi tipo.

[CArray](../mfc/reference/carray-class.md)<br/>
Classe modello per la creazione di matrici di tipi arbitrari.

[CList](../mfc/reference/clist-class.md)<br/>
Classe modello per la creazione di elenchi di tipi arbitrari.

[CMap](../mfc/reference/cmap-class.md)<br/>
Classe modello per la creazione di mappe con tipi di chiave e valore arbitrari.

[CTypedPtrArray](../mfc/reference/ctypedptrarray-class.md)<br/>
Classe modello per matrici indipendenti dai tipi di puntatori.

[CTypedPtrList](../mfc/reference/ctypedptrlist-class.md)<br/>
Classe modello per elenchi di puntatori indipendenti dai tipi.

[CTypedPtrMap](../mfc/reference/ctypedptrmap-class.md)<br/>
Classe modello per mapping indipendenti dai tipi con puntatori.

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](../mfc/class-library-overview.md)
