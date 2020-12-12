---
description: 'Altre informazioni su: serializzazione: serializzazione di un oggetto'
title: 'Serializzazione: serializzazione di un oggetto'
ms.date: 11/04/2016
helpviewer_keywords:
- serializing objects [MFC]
- serialization [MFC], objects
- objects [MFC], serializing
ms.assetid: 1db772b1-ad55-4fcf-b133-126cca082510
ms.openlocfilehash: ec0782f7faa0d6400f40013925f4a53495a76c7e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97217473"
---
# <a name="serialization-serializing-an-object"></a>Serializzazione: serializzazione di un oggetto

L'articolo [serializzazione: creazione di una classe serializzabile](../mfc/serialization-making-a-serializable-class.md) Mostra come rendere serializzabile una classe. Quando si dispone di una classe serializzabile, è possibile serializzare gli oggetti di tale classe da e verso un file tramite un oggetto [CArchive](../mfc/reference/carchive-class.md) . In questo articolo viene descritto quanto segue:

- [Cosa è un oggetto CArchive](../mfc/what-is-a-carchive-object.md).

- [Due modi per creare un CArchive](../mfc/two-ways-to-create-a-carchive-object.md).

- [Come utilizzare gli \< and > operatori di> CArchive <](../mfc/using-the-carchive-output-and-input-operators.md).

- [Archiviazione e caricamento di CObject tramite un archivio](../mfc/storing-and-loading-cobjects-via-an-archive.md).

È possibile impostare il framework in modo da creare automaticamente l'archivio per il documento serializzabile oppure è possibile creare esplicitamente l'oggetto `CArchive` in modo manuale. È possibile trasferire i dati tra un file e l'oggetto serializzabile usando gli \< and > operatori di> <per `CArchive` o, in alcuni casi, chiamando la `Serialize` funzione di una `CObject` classe derivata da.

## <a name="see-also"></a>Vedi anche

[Serializzazione](../mfc/serialization-in-mfc.md)
