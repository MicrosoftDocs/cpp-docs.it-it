---
title: Memorizzazione e caricamento di CObjects tramite un archivio
ms.date: 11/04/2016
f1_keywords:
- CObject
helpviewer_keywords:
- CObjects [MFC], loading through archives
- CArchive class [MFC], storing and loading objects
- Serialize method, vs. CArchive operators
- CObject class [MFC], CArchive objects
- CObjects [MFC]
ms.assetid: a829b6dd-bc31-47e0-8108-fbb946722db9
ms.openlocfilehash: 591ce7032aa3d70b1e5a020cd9173ed4c9d0fa9b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62306769"
---
# <a name="storing-and-loading-cobjects-via-an-archive"></a>Memorizzazione e caricamento di CObjects tramite un archivio

Memorizzazione e caricamento `CObject`s tramite un archivio richiede considerazioni aggiuntive. In alcuni casi, è necessario chiamare il `Serialize` funzione dell'oggetto, in cui la `CArchive` oggetto è un parametro del `Serialize` chiamata, invece di usare i **< \<** o **>>** operatore del `CArchive`. Gli aspetti più importanti da tenere presente sono che il `CArchive` **>>** operatore costrutti il `CObject` in memoria in base `CRuntimeClass` informazioni scritte in precedenza il file dall'archivio di memorizzazione.

Pertanto, se Usa la `CArchive` **< \<** e **>>** operatori, rispetto a chiamare il metodo `Serialize`, dipende dal fatto che si *necessaria* nell'archivio di caricamento per dinamicamente ricostruire l'oggetto di base archiviato in precedenza `CRuntimeClass` informazioni. Usare il `Serialize` funzione nei casi seguenti:

- Durante la deserializzazione dell'oggetto, si conosce in anticipo la classe esatta dell'oggetto.

- Durante la deserializzazione dell'oggetto, si dispone già di memoria ad essa allocata.

> [!CAUTION]
>  Se si carica l'oggetto usando il `Serialize` funzione, è anche necessario archiviare l'oggetto usando il `Serialize` (funzione). Non viene archiviata utilizzando il `CArchive` **<<** operatore e quindi di carico utilizzando il `Serialize` funzionare o archiviare tramite la `Serialize` funzione e quindi caricare usando `CArchive >>` operatore.

L'esempio seguente illustra i casi:

[!code-cpp[NVC_MFCSerialization#36](../mfc/codesnippet/cpp/storing-and-loading-cobjects-via-an-archive_1.h)]

[!code-cpp[NVC_MFCSerialization#37](../mfc/codesnippet/cpp/storing-and-loading-cobjects-via-an-archive_2.cpp)]

In breve, se la classe serializzabile definisce incorporata `CObject` come membro, è consigliabile *non* usare il `CArchive` **< \<** e **>>** operatori per l'oggetto, ma devono chiamare il `Serialize` funzione. Inoltre, se la classe serializzabile definisce un puntatore a un `CObject` (o un oggetto derivato da `CObject`) come un membro, ma costrutti questo altro oggetto nel proprio costruttore, è anche necessario chiamare `Serialize`.

## <a name="see-also"></a>Vedere anche

[Serializzazione: serializzazione di un oggetto](../mfc/serialization-serializing-an-object.md)
