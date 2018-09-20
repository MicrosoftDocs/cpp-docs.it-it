---
title: 'Serializzazione: Serializzazione di un oggetto | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- serializing objects [MFC]
- serialization [MFC], objects
- objects [MFC], serializing
ms.assetid: 1db772b1-ad55-4fcf-b133-126cca082510
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e05cce1132b180ac8f1350b68d951d776a62315f
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46381088"
---
# <a name="serialization-serializing-an-object"></a>Serializzazione: serializzazione di un oggetto

L'articolo [serializzazione: creazione di una classe serializzabile](../mfc/serialization-making-a-serializable-class.md) viene illustrato come rendere serializzabile una classe. Dopo aver creato una classe serializzabile, è possibile serializzare gli oggetti della classe da e verso un file mediante un [CArchive](../mfc/reference/carchive-class.md) oggetto. In questo articolo viene descritto quanto segue:

- [Definizione di oggetto CArchive è](../mfc/what-is-a-carchive-object.md).

- [Due modi per creare un oggetto CArchive](../mfc/two-ways-to-create-a-carchive-object.md).

- [Come utilizzare CArchive <\< e >> operatori](../mfc/using-the-carchive-output-and-input-operators.md).

- [Memorizzazione e caricamento di CObjects tramite un archivio](../mfc/storing-and-loading-cobjects-via-an-archive.md).

È possibile impostare il framework in modo da creare automaticamente l'archivio per il documento serializzabile oppure è possibile creare esplicitamente l'oggetto `CArchive` in modo manuale. È possibile trasferire dati tra un file e l'oggetto serializzabile tramite la <\< e >> operatori per `CArchive` o, in alcuni casi, chiamando la `Serialize` funzione di un `CObject`-classe derivata.

## <a name="see-also"></a>Vedere anche

[Serializzazione](../mfc/serialization-in-mfc.md)

