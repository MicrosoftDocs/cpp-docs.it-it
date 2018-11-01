---
title: 'Serializzazione: serializzazione di un oggetto'
ms.date: 11/04/2016
helpviewer_keywords:
- serializing objects [MFC]
- serialization [MFC], objects
- objects [MFC], serializing
ms.assetid: 1db772b1-ad55-4fcf-b133-126cca082510
ms.openlocfilehash: 10a7c52e6187f4db8345e1eadb88faeefa50b419
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50588525"
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

